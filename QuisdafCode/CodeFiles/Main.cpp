//****************************************************************************************************
// @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
// 
// @Project: Quisdaf Code
// @Intro: A free cross-platform IDE.
// @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
//                          and distribute freely as long as you follow the license.
//****************************************************************************************************

//****************************************************************************************************
// @File: Main.cpp
// @Author: LeLe570929726
// @Create time: 2015/12/26 19:19
// @Last change time: 2015/12/26 19:19
//****************************************************************************************************

#include <QApplication>
#include <QFont>
#include "CodeEditor.h"

//****************************************************************************************************
// @Type: Function
// @Name: Main
// @Parameter: argc - The number of the parameter
//                                 argv - The string of the parameter
// @Return: int - The state of the program
// @Intro: The program's entry point
//****************************************************************************************************
int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    
    GCodeEditor testCodeEditor;
	testCodeEditor.resize(1080, 720);
	testCodeEditor.setWindowTitle(QStringLiteral("GCodeEditor test - Quisdaf Code"));
	testCodeEditor.show();

	testCodeEditor.setFont(QFont(QStringLiteral("Ubuntu")));
	testCodeEditor.setFontSize(11);
	testCodeEditor.setBackgroundColor(QColor(30, 30, 30));
	testCodeEditor.setLineNumberTextColor(QColor(43, 145, 175));
    
    return application.exec();
}