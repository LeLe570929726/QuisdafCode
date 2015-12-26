//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditorLineNumber.h
// @Author: LeLe570929726
// @Create time: 2015/12/12 10:09
// @Last change time: 2015/12/25 22:01
//****************************************************************************************************

#ifndef CORE_GUI_CODEEDITOR_CODEEDITORLINENUMBER_CODEEDITORLINENUMBER_H
#define CORE_GUI_CODEEDITOR_CODEEDITORLINENUMBER_CODEEDITORLINENUMBER_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QFont>
#include <QColor>
#include <QString>
#include <QHash>
#include <QShowEvent>

//****************************************************************************************************
// @Type: Struct
// @Name: GCodeEditorLineNumberData
// @Parameter: None
// @Return: None
// @Intro: The code editor widget's line number's data
//****************************************************************************************************
struct GCodeEditorLineNumberData {
public:
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: textFont
	// @Parameter: None
	// @Return: None
	// @Intro: The text's font
	//****************************************************************************************************
	QFont textFont;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: backgroundColor
	// @Parameter: None
	// @Return: None
	// @Intro: The background color
	//****************************************************************************************************
	QColor backgroundColor;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: textColor
	// @Parameter: None
	// @Return: None
	// @Intro: The text color
	//****************************************************************************************************
	QColor textColor;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: firstLineHeight
	// @Parameter: None
	// @Return: None
	// @Intro: The first line height
	//****************************************************************************************************
	int firstLineHeight = 0;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: lineHeight
	// @Parameter: None
	// @Return: None
	// @Intro: The line height
	//****************************************************************************************************
	int lineHeight = 0;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: startLine
	// @Parameter: None
	// @Return: None
	// @Intro: The start line
	//****************************************************************************************************
	int startLine = 0;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: maximumLine
	// @Parameter: None
	// @Return: None
	// @Intro: The maximum line
	//****************************************************************************************************
	int maximumLine = 0;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: hideLineList
	// @Parameter: None
	// @Return: None
	// @Intro: The hide line list
	//****************************************************************************************************
	QHash<int, int> hideLineList;
};

//****************************************************************************************************
// @Type: Class
// @Name: GCodeEditorLineNumber
// @Parameter: None
// @Return: None
// @Intro: The code editor widget's line number area
//****************************************************************************************************
class GCodeEditorLineNumber : public QWidget {
	Q_OBJECT

public:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: GCodeEditorLineNumber
	// @Parameter: parent - The parent
	//                                 flag - The window's flag
	// @Return: None
	// @Intro: The GCodeEditorLineNumber's constructor
	//****************************************************************************************************
	explicit GCodeEditorLineNumber(QWidget *parent = nullptr, Qt::WindowFlags flag = 0);
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: GCodeEditorLineNumber
	// @Parameter: object - The other object
	// @Return: None
	// @Intro: The GCodeEditorLineNumber's constructor
	//****************************************************************************************************
	GCodeEditorLineNumber(const GCodeEditorLineNumber &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: operator=
	// @Parameter: object - The other object
	// @Return: GCodeEditorLineNumber &
	// @Intro: The GCodeEditorLineNumber's assignment function
	//****************************************************************************************************
	GCodeEditorLineNumber &operator=(const GCodeEditorLineNumber &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: ~GCodeEditorLineNumber
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditorLineNumber's destructor
	//****************************************************************************************************
	~GCodeEditorLineNumber();

public:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setFont
	// @Parameter: font - The font
	// @Return: None
	// @Intro: Set font
	//****************************************************************************************************
	void setFont(const QFont &font);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getFont
	// @Parameter: None
	// @Return: QFont - The font
	// @Intro: Get font
	//****************************************************************************************************
	QFont getFont();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setBackgroundColor
	// @Parameter: color - The color
	// @Return: None
	// @Intro: Set background color
	//****************************************************************************************************
	void setBackgroundColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getBackgroundColor
	// @Parameter: None
	// @Return: QColor - The color
	// @Intro: Get background color
	//****************************************************************************************************
	QColor getBackgroundColor();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setTextColor
	// @Parameter: color - The color
	// @Return: None
	// @Intro: Set text color
	//****************************************************************************************************
	void setTextColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getTextColor
	// @Parameter: None
	// @Return: QColor - The color
	// @Intro: Get text color
	//****************************************************************************************************
	QColor getTextColor();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setFirstLineHeight
	// @Parameter: height - The height
	// @Return: None
	// @Intro: Set first line height
	//****************************************************************************************************
	void setFirstLineHeight(const int &height);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getFirstLineHeight
	// @Parameter: None
	// @Return: int - The first line height
	// @Intro: Get first line height
	//****************************************************************************************************
	int getFirstLineHeight();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setLineHeight
	// @Parameter: height - The height
	// @Return: None
	// @Intro: Set line height
	//****************************************************************************************************
	void setLineHeight(const int &height);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getLineHeight
	// @Parameter: None
	// @Return: int - The line height
	// @Intro: Get line height
	//****************************************************************************************************
	int getLineHeight();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setStartLine
	// @Parameter: line - The start line
	// @Return: None
	// @Intro: Set start line
	//****************************************************************************************************
	void setStartLine(const int &line);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getStartLine
	// @Parameter: None
	// @Return: int - The start line
	// @Intro: Get start line
	//****************************************************************************************************
	int getStartLine();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setMaximumLine
	// @Parameter: line - The maximum line
	// @Return: None
	// @Intro: Set maximum line
	//****************************************************************************************************
	void setMaximumLine(const int &line);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getMaximumLine
	// @Parameter: None
	// @Return: int - The maximum line
	// @Intro: Get maximum line
	//****************************************************************************************************
	int getMaximumLine();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setHideLine
	// @Parameter: start - The start line
	//                                 end - The end line
	// @Return: None
	// @Intro: Set hide line
	//****************************************************************************************************
	void setHideLine(const int &start, const int &end);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: deleteHideLine
	// @Parameter: int - The start line
	// @Return: None
	// @Intro: Delete a hide line
	//****************************************************************************************************
	void deleteHideLine(const int &start);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: deleteHideLine
	// @Parameter: None
	// @Return: None
	// @Intro: Delete all hide line
	//****************************************************************************************************
	void deleteAllHideLine();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getHideLine
	// @Parameter: start - The start line
	// @Return: int - The end line
	// @Intro: Get a hide line
	//****************************************************************************************************
	int getHideLine(const int &start);
	
protected:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: showEvent
	// @Parameter: eventMessage - The message
	// @Return: None
	// @Intro: The show event form Qt
	//****************************************************************************************************
	virtual void showEvent(QShowEvent *eventMessage) override;
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: paintEvent
	// @Parameter: eventMessage - The message
	// @Return: None
	// @Intro: The paint event form Qt
	//****************************************************************************************************
	virtual void paintEvent(QPaintEvent *eventMessage) override;

private:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: drawLineNumber
	// @Parameter: None
	// @Return: None
	// @Intro: Draw line number
	//****************************************************************************************************
	void drawLineNumber();

private:
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: widgetData
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditorLineNumber's data
	//****************************************************************************************************
	GCodeEditorLineNumberData widgetData;
};

#endif