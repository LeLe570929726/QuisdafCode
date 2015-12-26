//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditorLineNumber.cpp
// @Author: LeLe570929726
// @Create time: 2015/12/12 10:09
// @Last change time: 2015/12/25 22:01
//****************************************************************************************************

#include "CodeEditorLineNumber.h"

//****************************************************************************************************
// @Type: Member Function
// @Name: GCodeEditorLineNumber
// @Parameter: parent - The parent
//                                 flag - The window's flag
// @Return: None
// @Intro: The GCodeEditorLineNumber's constructor
//****************************************************************************************************
GCodeEditorLineNumber::GCodeEditorLineNumber(QWidget *parent, Qt::WindowFlags flag)
	: QWidget(parent, flag) {
}

//****************************************************************************************************
// @Type: Member Function
// @Name: ~GCodeEditorLineNumber
// @Parameter: None
// @Return: None
// @Intro: The GCodeEditorLineNumber's destructor
//****************************************************************************************************
GCodeEditorLineNumber::~GCodeEditorLineNumber() {

}

//****************************************************************************************************
// @Type: Member Function
// @Name: setFont
// @Parameter: font - The font
// @Return: None
// @Intro: Set font
//****************************************************************************************************
void GCodeEditorLineNumber::setFont(const QFont &font) {
	widgetData.textFont = font;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getFont
// @Parameter: None
// @Return: QFont - The font
// @Intro: Get font
//****************************************************************************************************
QFont GCodeEditorLineNumber::getFont() {
	return widgetData.textFont;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setBackgroundColor
// @Parameter: color - The color
// @Return: None
// @Intro: Set background color
//****************************************************************************************************
void GCodeEditorLineNumber::setBackgroundColor(const QColor &color) {
	widgetData.backgroundColor = color;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getBackgroundColor
// @Parameter: None
// @Return: QColor - The color
// @Intro: Get background color
//****************************************************************************************************
QColor GCodeEditorLineNumber::getBackgroundColor() {
	return widgetData.backgroundColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setTextColor
// @Parameter: color - The color
// @Return: None
// @Intro: Set text color
//****************************************************************************************************
void GCodeEditorLineNumber::setTextColor(const QColor &color) {
	widgetData.textColor = color;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getTextColor
// @Parameter: None
// @Return: QColor - The color
// @Intro: Get text color
//****************************************************************************************************
QColor GCodeEditorLineNumber::getTextColor() {
	return widgetData.textColor;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setFirstLineHeight
// @Parameter: height - The height
// @Return: None
// @Intro: Set first line height
//****************************************************************************************************
void GCodeEditorLineNumber::setFirstLineHeight(const int &height) {
	widgetData.firstLineHeight = height;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getFirstLineHeight
// @Parameter: None
// @Return: int - The first line height
// @Intro: Get first line height
//****************************************************************************************************
int GCodeEditorLineNumber::getFirstLineHeight() {
	return widgetData.firstLineHeight;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setLineHeight
// @Parameter: height - The height
// @Return: None
// @Intro: Set line height
//****************************************************************************************************
void GCodeEditorLineNumber::setLineHeight(const int &height) {
	widgetData.lineHeight = height;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getLineHeight
// @Parameter: None
// @Return: int - The line height
// @Intro: Get line height
//****************************************************************************************************
int GCodeEditorLineNumber::getLineHeight() {
	return widgetData.lineHeight;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setStartLine
// @Parameter: line - The start line
// @Return: None
// @Intro: Set start line
//****************************************************************************************************
void GCodeEditorLineNumber::setStartLine(const int &line) {
	widgetData.startLine = line;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getStartLine
// @Parameter: None
// @Return: int - The start line
// @Intro: Get start line
//****************************************************************************************************
int GCodeEditorLineNumber::getStartLine() {
	return widgetData.startLine;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setMaximumLine
// @Parameter: line - The maximum line
// @Return: None
// @Intro: Set maximum line
//****************************************************************************************************
void GCodeEditorLineNumber::setMaximumLine(const int &line) {
	widgetData.maximumLine = line;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getMaximumLine
// @Parameter: None
// @Return: int - The maximum line
// @Intro: Get maximum line
//****************************************************************************************************
int GCodeEditorLineNumber::getMaximumLine() {
	return widgetData.maximumLine;
}

//****************************************************************************************************
// @Type: Member Function
// @Name: setHideLine
// @Parameter: start - The start line
//                                 end - The end line
// @Return: None
// @Intro: Set hide line
//****************************************************************************************************
void GCodeEditorLineNumber::setHideLine(const int &start, const int &end) {
	widgetData.hideLineList.insert(start, end);
}

//****************************************************************************************************
// @Type: Member Function
// @Name: deleteHideLine
// @Parameter: int - The start line
// @Return: None
// @Intro: Delete a hide line
//****************************************************************************************************
void GCodeEditorLineNumber::deleteHideLine(const int &start) {
	auto iterator = widgetData.hideLineList.find(start);
	if (iterator != widgetData.hideLineList.end()) {
		widgetData.hideLineList.erase(iterator);
	}
}

//****************************************************************************************************
// @Type: Member Function
// @Name: deleteHideLine
// @Parameter: None
// @Return: None
// @Intro: Delete all hide line
//****************************************************************************************************
void GCodeEditorLineNumber::deleteAllHideLine() {
	widgetData.hideLineList.clear();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: getHideLine
// @Parameter: start - The start line
// @Return: int - The end line
// @Intro: Get a hide line
//****************************************************************************************************
int GCodeEditorLineNumber::getHideLine(const int &start) {
	auto iterator = widgetData.hideLineList.find(start);
	if (iterator != widgetData.hideLineList.end()) {
		return iterator.value();
	} else {
		return 0;
	}
}

//****************************************************************************************************
// @Type: Member Function
// @Name: showEvent
// @Parameter: eventMessage - The message
// @Return: None
// @Intro: The show event form Qt
//****************************************************************************************************
void GCodeEditorLineNumber::showEvent(QShowEvent *eventMessage) {
	// Draw line number
	drawLineNumber();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: paintEvent
// @Parameter: eventMessage - The message
// @Return: None
// @Intro: The paint event form Qt
//****************************************************************************************************
void GCodeEditorLineNumber::paintEvent(QPaintEvent *eventMessage) {
	// Draw line number
	drawLineNumber();
}

//****************************************************************************************************
// @Type: Member Function
// @Name: drawLineNumber
// @Parameter: None
// @Return: None
// @Intro: Draw line number
//****************************************************************************************************
void GCodeEditorLineNumber::drawLineNumber() {
	// Create painter
	QPainter painter(this);
	// Fill background
	painter.fillRect(0, 0, width(), height(), widgetData.backgroundColor);
	// Set font
	painter.setFont(widgetData.textFont);
	// Set pen color
	painter.setPen(widgetData.textColor);
	// Draw
	int nowLine = widgetData.startLine;
	int drawPoint = 0;
	int lineLocal = 0;
	for (int tempNumber = 0; tempNumber <= widgetData.maximumLine - widgetData.startLine && drawPoint <= height(); ++tempNumber) {
		// If this line is hide or show
		bool isContinue = false;
		for (auto iterator = widgetData.hideLineList.begin(); iterator != widgetData.hideLineList.end(); ++iterator) {
			if (nowLine >= iterator.key() && nowLine <= iterator.value()) {
				isContinue = true;
				break;
			}
		}
		// Draw text
		if (isContinue != true) {
			drawPoint = widgetData.firstLineHeight + lineLocal * widgetData.lineHeight;
			painter.drawText(4, drawPoint, width() - 8, height(), Qt::AlignRight, QString::number(nowLine));
			++nowLine;
			++lineLocal;
		} else {
			++nowLine;
			continue;
		}
	}
}