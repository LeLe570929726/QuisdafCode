//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: CodeEditor.h
// @Author: LeLe570929726
// @Create time: 2015/12/12 9:25
// @Last change time: 2015/12/25 21:22
//****************************************************************************************************

#ifndef CORE_GUI_CODEEDITOR_CODEEDITOR_H
#define CORE_GUI_CODEEDITOR_CODEEDITOR_H

#if defined(CODEEDITOR_LIBRARY)
#  define CODEEDITOR_CLASS Q_DECL_EXPORT
#else
#  define CODEEDITOR_CLASS Q_DECL_IMPORT
#endif

#include <QWidget>
#include <QMainWindow>
#include <QShowEvent>
#include <QPaintEvent>
#include <QFontMetrics>
#include <QFont>
#include <QColor>
#include "CodeEditorLineNumber\CodeEditorLineNumber.h"
#include "CodeEditorIndent\CodeEditorIndent.h"

//****************************************************************************************************
// @Type: Struct
// @Name: GCodeEditorData
// @Parameter: None
// @Return: None
// @Intro: The code editor widget's data
//****************************************************************************************************
struct GCodeEditorData {
public:
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: lineNumberWidget
	// @Parameter: None
	// @Return: None
	// @Intro: The pointer of the line number widget
	//****************************************************************************************************
	GCodeEditorLineNumber *lineNumberWidget = nullptr;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: indentWidget
	// @Parameter: None
	// @Return: None
	// @Intro: The pointer of the indent widget
	//****************************************************************************************************
	GCodeEditorIndent *indentWidget = nullptr;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: textFont
	// @Parameter: None
	// @Return: None
	// @Intro: The text font
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
	// @Name: lineNumberTextColor
	// @Parameter: None
	// @Return: None
	// @Intro: The line number widget's text color
	//****************************************************************************************************
	QColor lineNumberTextColor;
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: indentLineColor
	// @Parameter: None
	// @Return: None
	// @Intro: The indent widget's line color
	//****************************************************************************************************
	QColor indentLineColor;
};

//****************************************************************************************************
// @Type: Class
// @Name: GCodeEditor
// @Parameter: None
// @Return: None
// @Intro: The code editor widget
//****************************************************************************************************
class CODEEDITOR_CLASS GCodeEditor : public QMainWindow {
	Q_OBJECT

public:
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: GCodeEditor
	// @Parameter: parent - The parent
	//                                 flag - The window's flag
	// @Return: None
	// @Intro: The GCodeEditor's constructor
	//****************************************************************************************************
	explicit GCodeEditor(QWidget *parent = nullptr, Qt::WindowFlags flag = 0);
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: GCodeEditor
	// @Parameter: object - The other object
	// @Return: None
	// @Intro: The GCodeEditor's constructor
	//****************************************************************************************************
	GCodeEditor(const GCodeEditor &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function(Delete)
	// @Name: operator=
	// @Parameter: object - The other object
	// @Return: GCodeEditor &
	// @Intro: The GCodeEditor's assignment function
	//****************************************************************************************************
	GCodeEditor &operator=(const GCodeEditor &object) = delete;
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: ~GCodeEditor
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditor's destructor
	//****************************************************************************************************
	~GCodeEditor();

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
	// @Name: setFontSize
	// @Parameter: size - The font size
	// @Return: None
	// @Intro: Set font size
	//****************************************************************************************************
	void setFontSize(const int &size);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getFontSize
	// @Parameter: None
	// @Return: int - The font size
	// @Intro: Get font size
	//****************************************************************************************************
	int getFontSize();
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
	// @Name: setLineNumberTextColor
	// @Parameter: color - The line number widget's text color
	// @Return: None
	// @Intro: line number widget's text color
	//****************************************************************************************************
	void setLineNumberTextColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getLineNumberTextColor
	// @Parameter: None
	// @Return: QColor - The line number widget's text color
	// @Intro: Get line number widget's text color
	//****************************************************************************************************
	QColor getLineNumberTextColor();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: setIndentLineColor
	// @Parameter: color - The indent widget's line color
	// @Return: None
	// @Intro: Indent widget's line color
	//****************************************************************************************************
	void setIndentLineColor(const QColor &color);
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: getIndentLineColor
	// @Parameter: None
	// @Return: QColor - The indent widget's line color
	// @Intro: Get indent widget's line color
	//****************************************************************************************************
	QColor getIndentLineColor();

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
	// @Name: initializeAll
	// @Parameter: None
	// @Return: None
	// @Intro: Initialize something
	//****************************************************************************************************
	void initializeAll();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: showAll
	// @Parameter: None
	// @Return: None
	// @Intro: Show something
	//****************************************************************************************************
	void showAll();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: resizeAll
	// @Parameter: None
	// @Return: None
	// @Intro: Resize something
	//****************************************************************************************************
	void resizeAll();
	//****************************************************************************************************
	// @Type: Member Function
	// @Name: changeAll
	// @Parameter: None
	// @Return: None
	// @Intro: Change something
	//****************************************************************************************************
	void changeAll();

private:
	//****************************************************************************************************
	// @Type: Member Object
	// @Name: widgetData
	// @Parameter: None
	// @Return: None
	// @Intro: The GCodeEditor's data
	//****************************************************************************************************
	GCodeEditorData widgetData;
};

#endif