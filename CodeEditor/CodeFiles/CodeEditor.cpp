//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditor.cpp
// @Author: LeLe570929726
// @Create time: 2015/12/12 9:25
// @Last change time: 2015/12/25 21:22
//****************************************************************************************************

#include "CodeEditor.h"

//****************************************************************************************************
// @Type: Member Function
// @Name: GCodeEditor
// @Parameter: parent - The parent
//                                 flag - The window's flag
// @Return: None
// @Intro: The GCodeEditor's constructor
//****************************************************************************************************
GCodeEditor::GCodeEditor(QWidget *parent, Qt::WindowFlags flag)
	: QMainWindow(parent, flag) {
	// Initialize something
	initializeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: ~GCodeEditor
// @Parameter: None
// @Return: None
// @Intro: The GCodeEditor's destructor
//****************************************************************************************************
GCodeEditor::~GCodeEditor() {

}

//****************************************************************************************************
// @Type: Member Function
// @Name: setFont
// @Parameter: font - The font
// @Return: None
// @Intro: Set font
//****************************************************************************************************
void GCodeEditor::setFont(const QFont &font) {
	widgetData.textFont = font;
	changeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getFont
// @Parameter: None
// @Return: QFont - The font
// @Intro: Get font
//****************************************************************************************************
QFont GCodeEditor::getFont() {
	return widgetData.textFont;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setFontSize
// @Parameter: size - The font size
// @Return: None
// @Intro: Set font size
//****************************************************************************************************
void GCodeEditor::setFontSize(const int &size) {
	widgetData.textFont.setPointSize(size);
	changeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getFontSize
// @Parameter: None
// @Return: int - The font size
// @Intro: Get font size
//****************************************************************************************************
int GCodeEditor::getFontSize() {
	return widgetData.textFont.pointSize();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setBackgroundColor
// @Parameter: color - The background color
// @Return: None
// @Intro: Set background color
//****************************************************************************************************
void GCodeEditor::setBackgroundColor(const QColor &color) {
	widgetData.backgroundColor = color;
	changeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getBackgroundColor
// @Parameter: None
// @Return: QColor - The background color
// @Intro: Get background color
//****************************************************************************************************
QColor GCodeEditor::getBackgroundColor() {
	return widgetData.backgroundColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setLineNumberTextColor
// @Parameter: color - The line number widget's text color
// @Return: None
// @Intro: line number widget's text color
//****************************************************************************************************
void GCodeEditor::setLineNumberTextColor(const QColor &color) {
	widgetData.lineNumberTextColor = color;
	changeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getLineNumberTextColor
// @Parameter: None
// @Return: QColor - The line number widget's text color
// @Intro: Get line number widget's text color
//****************************************************************************************************
QColor GCodeEditor::getLineNumberTextColor() {
	return widgetData.lineNumberTextColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setIndentLineColor
// @Parameter: color - The indent widget's line color
// @Return: None
// @Intro: Indent widget's line color
//****************************************************************************************************
void GCodeEditor::setIndentLineColor(const QColor &color) {
	widgetData.indentLineColor = color;
	changeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getIndentLineColor
// @Parameter: None
// @Return: QColor - The indent widget's line color
// @Intro: Get indent widget's line color
//****************************************************************************************************
QColor GCodeEditor::getIndentLineColor() {
	return widgetData.indentLineColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: ~GCodeEditor
// @Parameter: eventMessage - The message
// @Return: None
// @Intro: The show event form Qt
//****************************************************************************************************
void GCodeEditor::showEvent(QShowEvent *eventMessage) {
	// Show something
	showAll();
	// Resize something
	resizeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: paintEvent
// @Parameter: eventMessage - The message
// @Return: None
// @Intro: The paint event form Qt
//****************************************************************************************************
void GCodeEditor::paintEvent(QPaintEvent *eventMessage) {
	// Resize something
	resizeAll();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: initialize
// @Parameter: None
// @Return: None
// @Intro: Initialize something
//****************************************************************************************************
void GCodeEditor::initializeAll() {
	// Initialize line number area
	widgetData.lineNumberWidget = new GCodeEditorLineNumber(this);
	widgetData.lineNumberWidget->setGeometry(0, 0, 0, 0);
	// Initialize indent widget
	widgetData.indentWidget = new GCodeEditorIndent(this);
	widgetData.indentWidget->setGeometry(0, 0, 0, 0);
}

//****************************************************************************************************
// @Type: Member Function
// @Name: showAll
// @Parameter: None
// @Return: None
// @Intro: Show something
//****************************************************************************************************
void GCodeEditor::showAll() {
	// Show line number widget
	widgetData.lineNumberWidget->show();
	widgetData.lineNumberWidget->setFirstLineHeight(0);
	widgetData.lineNumberWidget->setLineHeight(20);
	widgetData.lineNumberWidget->setStartLine(1);
	widgetData.lineNumberWidget->setMaximumLine(10);
	// widgetData.lineNumberWidget->setHideLine(10, 90);
	// Show indent widget
	widgetData.indentWidget->show();
	widgetData.lineNumberWidget->setFirstLineHeight(0);
	widgetData.lineNumberWidget->setLineHeight(20);
	widgetData.lineNumberWidget->setStartLine(1);
	widgetData.lineNumberWidget->setMaximumLine(10);
}

//****************************************************************************************************
// @Type: Member Function
// @Name: resizeAll
// @Parameter: None
// @Return: None
// @Intro: Resize something
//****************************************************************************************************
void GCodeEditor::resizeAll() {
	// Resize line number widget
	int size = 0, number = widgetData.lineNumberWidget->getMaximumLine();
	while (number) {
		number /= 10;
		++size;
	}
	if (size > 4) {
		QFontMetrics tempFontMetrics(widgetData.textFont);
		widgetData.lineNumberWidget->resize(tempFontMetrics.width(QString::number(widgetData.lineNumberWidget->getMaximumLine())) + 8, height());
	} else {
		QFontMetrics tempFontMetrics(widgetData.textFont);
		widgetData.lineNumberWidget->resize(tempFontMetrics.width("9999") + 8, height());
	}
	// Resize indent widget
	widgetData.indentWidget->setGeometry(widgetData.lineNumberWidget->size().width(), 0, 8, height());
}

//****************************************************************************************************
// @Type: Member Function
// @Name: changeAll
// @Parameter: None
// @Return: None
// @Intro: Change something
//****************************************************************************************************
void GCodeEditor::changeAll() {
	// Change line number widget
	widgetData.lineNumberWidget->setFont(widgetData.textFont);
	widgetData.lineNumberWidget->setBackgroundColor(widgetData.backgroundColor);
	widgetData.lineNumberWidget->setTextColor(widgetData.lineNumberTextColor);
	// Change indent widget
	widgetData.indentWidget->setBackgroundColor(widgetData.backgroundColor);
	widgetData.indentWidget->setLineColor(widgetData.indentLineColor);
}