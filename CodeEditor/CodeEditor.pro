#****************************************************************************************************
# @Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.
# 
# @Project: Quisdaf Code - CodeEditor
# @Intro: A free cross-platform IDE.
# @Licence: This project is open-source. And it follow GNU General Public License v3. You can modify 
#                          and distribute freely as long as you follow the license.
#****************************************************************************************************

#****************************************************************************************************
# @File: CodeEditor.pro
# @Author: LeLe570929726
# @Create time: 2015/12/26 19:19
# @Last change time: 2015/12/26 19:19
#****************************************************************************************************

QT       += widgets

TARGET = CodeEditor
TEMPLATE = lib

DEFINES += CODEEDITOR_LIBRARY

SOURCES += \
    CodeFiles/CodeEditor.cpp \
    CodeFiles/CodeEditorIndent/CodeEditorIndent.cpp \
    CodeFiles/CodeEditorLineNumber/CodeEditorLineNumber.cpp

HEADERS += \
    CodeFiles/CodeEditor.h \
    CodeFiles/CodeEditorIndent/CodeEditorIndent.h \
    CodeFiles/CodeEditorLineNumber/CodeEditorLineNumber.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}