//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditorIndent.h
// @Author: LeLe570929726
// @Create time: 2015/12/13 19:54
// @Last change time: 2015/12/25 22:01
//****************************************************************************************************

#ifndef CORE_GUI_CODEEDITOR_CODEEDITORINDENT_CODEEDITORINDENT_H
#define CORE_GUI_CODEEDITOR_CODEEDITORINDENT_CODEEDITORINDENT_H

#include <QWidget>
#include <QColor>
#include <QPainter>

struct GCodeEditorIndentData {
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
	// @Name: lineColor
	// @Parameter: None
	// @Return: None
	// @Intro: The line color
	//****************************************************************************************************
	QColor lineColor;
};

//****************************************************************************************************
// @Type: Class
// @Name: GCodeEditorIndent
// @Parameter: None
// @Return: None
// @Intro: The code editor‘s indent
//****************************************************************************************************
class GCodeEditorIndent : public QWidget {
	Q_OBJECT

public:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: GCodeEditorIndent
	// @Parameter: parent - The parent
	//                                 flag - The window's flag
	// @Return: None
	// @Intro: The GCodeEditorIndent's constructor
	//****************************************************************************************************
	explicit GCodeEditorIndent(QWidget *parent = nullptr, Qt::WindowFlags flag = 0);
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: GCodeEditorIndent
	// @Parameter: object - The other object
	// @Return: None
	// @Intro: The GCodeEditorIndent's constructor
	//****************************************************************************************************
	GCodeEditorIndent(const GCodeEditorIndent &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: operator=
	// @Parameter: object - The other object
	// @Return: GCodeEditorIndent &
	// @Intro: The GCodeEditorIndent's assignment function
	//****************************************************************************************************
	GCodeEditorIndent &operator=(const GCodeEditorIndent &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: ~GCodeEditorIndent
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditorIndent's destructor
	//****************************************************************************************************
	~GCodeEditorIndent();

public:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setBackgroundColor
	// @Parameter: color - The background color
	// @Return: None
	// @Intro: Set background color
	//****************************************************************************************************
	void setBackgroundColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getBackgroundColor
	// @Parameter: None
	// @Return: QColor - The background color
	// @Intro: Get background color
	//****************************************************************************************************
	QColor getBackgroundColor();
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
	// @Name: setLineColor
	// @Parameter: color - The line color
	// @Return: None
	// @Intro: Set line color
	//****************************************************************************************************
	void setLineColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getLineColor
	// @Parameter: None
	// @Return: QColor - The line color
	// @Intro: Get line color
	//****************************************************************************************************
	QColor getLineColor();

protected:
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
	// @Name: drawIndent
	// @Parameter: None
	// @Return: None
	// @Intro: Draw indent
	//****************************************************************************************************
	void drawIndent();

private:
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: widgetData
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditorIndent's data
	//****************************************************************************************************
	GCodeEditorIndentData widgetData;
};

#endif