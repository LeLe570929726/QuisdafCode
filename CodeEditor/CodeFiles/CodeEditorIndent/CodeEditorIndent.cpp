//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditorIndent.cpp
// @Author: LeLe570929726
// @Create time: 2015/12/13 19:54
// @Last change time: 2015/12/25 22:01
//****************************************************************************************************

#include "CodeEditorIndent.h"

//****************************************************************************************************
// @Type: Member Function
// @Name: GCodeEditorIndent
// @Parameter: parent - The parent
//                                 flag - The window's flag
// @Return: None
// @Intro: The GCodeEditorIndent's constructor
//****************************************************************************************************
GCodeEditorIndent::GCodeEditorIndent(QWidget *parent, Qt::WindowFlags flag)
	: QWidget(parent, flag) {

}

//****************************************************************************************************
// @Type: Member Function
// @Name: ~GCodeEditorIndent
// @Parameter: None
// @Return: None
// @Intro: The GCodeEditorIndent's destructor
//****************************************************************************************************
GCodeEditorIndent::~GCodeEditorIndent() {

}

//****************************************************************************************************
// @Type: Member Function
// @Name: setBackgroundColor
// @Parameter: color - The background color
// @Return: None
// @Intro: Set background color
//****************************************************************************************************
void GCodeEditorIndent::setBackgroundColor(const QColor &color) {
	widgetData.backgroundColor = color;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getBackgroundColor
// @Parameter: None
// @Return: QColor - The background color
// @Intro: Get background color
//****************************************************************************************************
QColor GCodeEditorIndent::getBackgroundColor() {
	return widgetData.backgroundColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setFirstLineHeight
// @Parameter: height - The height
// @Return: None
// @Intro: Set first line height
//****************************************************************************************************
void GCodeEditorIndent::setFirstLineHeight(const int &height) {
	widgetData.firstLineHeight = height;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getFirstLineHeight
// @Parameter: None
// @Return: int - The first line height
// @Intro: Get first line height
//****************************************************************************************************
int GCodeEditorIndent::getFirstLineHeight() {
	return widgetData.firstLineHeight;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setLineHeight
// @Parameter: height - The height
// @Return: None
// @Intro: Set line height
//****************************************************************************************************
void GCodeEditorIndent::setLineHeight(const int &height) {
	widgetData.lineHeight = height;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getLineHeight
// @Parameter: None
// @Return: int - The line height
// @Intro: Get line height
//****************************************************************************************************
int GCodeEditorIndent::getLineHeight() {
	return widgetData.lineHeight;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setStartLine
// @Parameter: line - The start line
// @Return: None
// @Intro: Set start line
//****************************************************************************************************
void GCodeEditorIndent::setStartLine(const int &line) {
	widgetData.startLine = line;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getStartLine
// @Parameter: None
// @Return: int - The start line
// @Intro: Get start line
//****************************************************************************************************
int GCodeEditorIndent::getStartLine() {
	return widgetData.startLine;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setMaximumLine
// @Parameter: line - The maximum line
// @Return: None
// @Intro: Set maximum line
//****************************************************************************************************
void GCodeEditorIndent::setMaximumLine(const int &line) {
	widgetData.maximumLine = line;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getMaximumLine
// @Parameter: None
// @Return: int - The maximum line
// @Intro: Get maximum line
//****************************************************************************************************
int GCodeEditorIndent::getMaximumLine() {
	return widgetData.maximumLine;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setLineColor
// @Parameter: color - The line color
// @Return: None
// @Intro: Set line color
//****************************************************************************************************
void GCodeEditorIndent::setLineColor(const QColor &color) {
	widgetData.lineColor = color;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getLineColor
// @Parameter: None
// @Return: QColor - The line color
// @Intro: Get line color
//****************************************************************************************************
QColor GCodeEditorIndent::getLineColor() {
	return widgetData.lineColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: paintEvent
// @Parameter: eventMessage - The message
// @Return: None
// @Intro: The paint event form Qt
//****************************************************************************************************
void GCodeEditorIndent::paintEvent(QPaintEvent *eventMessage) {
	// Draw indent
	drawIndent();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: drawIndent
// @Parameter: None
// @Return: None
// @Intro: Draw indent
//****************************************************************************************************
void GCodeEditorIndent::drawIndent() {
	// Create painter
	QPainter painter(this);
	// Fill background
	// painter.fillRect(0, 0, width(), height(), widgetData.backgroundColor);
	painter.fillRect(0, 0, width(), height(), QColor(255, 155, 55));
	// Set pen color
	painter.setPen(widgetData.lineColor);
}