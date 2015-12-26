#****************************************************************************************************
# @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
# 
# @Project: Quisdaf Code
# @Intro: A free cross-platform IDE.
# @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
#                          and distribute freely as long as you follow the license.
#****************************************************************************************************

#****************************************************************************************************
# @File: QuisdafCode.pro
# @Author: LeLe570929726
# @Create time: 2015/12/26 19:19
# @Last change time: 2015/12/26 19:19
#****************************************************************************************************

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuisdafCode
TEMPLATE = app

SOURCES += \
    CodeFiles/Main.cpp \

HEADERS += 

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Compile/Release/release/ -lCodeEditor
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Compile/Debug/debug/ -lCodeEditor
else:unix: LIBS += -L$$PWD/../Compile/Debug/ -lCodeEditor

INCLUDEPATH += $$PWD/../CodeEditor/CodeFiles
DEPENDPATH += $$PWD/../CodeEditor/CodeFiles
