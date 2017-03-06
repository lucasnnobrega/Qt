/********************************************************************************
** Form generated from reading UI file 'editortexto.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORTEXTO_H
#define UI_EDITORTEXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorTexto
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *CampoTexto;
    QPushButton *SaveButton;
    QPushButton *InfoButton;
    QLineEdit *file_name;
    QLabel *Label_File_Name;
    QLineEdit *path_name;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *EditorTexto)
    {
        if (EditorTexto->objectName().isEmpty())
            EditorTexto->setObjectName(QStringLiteral("EditorTexto"));
        EditorTexto->resize(559, 484);
        centralWidget = new QWidget(EditorTexto);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CampoTexto = new QPlainTextEdit(centralWidget);
        CampoTexto->setObjectName(QStringLiteral("CampoTexto"));
        CampoTexto->setGeometry(QRect(10, 140, 521, 241));
        SaveButton = new QPushButton(centralWidget);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(20, 30, 99, 27));
        InfoButton = new QPushButton(centralWidget);
        InfoButton->setObjectName(QStringLiteral("InfoButton"));
        InfoButton->setGeometry(QRect(450, 390, 99, 27));
        file_name = new QLineEdit(centralWidget);
        file_name->setObjectName(QStringLiteral("file_name"));
        file_name->setGeometry(QRect(150, 30, 371, 27));
        Label_File_Name = new QLabel(centralWidget);
        Label_File_Name->setObjectName(QStringLiteral("Label_File_Name"));
        Label_File_Name->setGeometry(QRect(150, 0, 81, 17));
        path_name = new QLineEdit(centralWidget);
        path_name->setObjectName(QStringLiteral("path_name"));
        path_name->setGeometry(QRect(150, 80, 371, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 101, 41));
        EditorTexto->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EditorTexto);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 25));
        EditorTexto->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EditorTexto);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        EditorTexto->addToolBar(Qt::TopToolBarArea, mainToolBar);


        retranslateUi(EditorTexto);

        QMetaObject::connectSlotsByName(EditorTexto);
    } // setupUi

    void retranslateUi(QMainWindow *EditorTexto)
    {
        EditorTexto->setWindowTitle(QApplication::translate("EditorTexto", "EditorTexto", 0));
        SaveButton->setText(QApplication::translate("EditorTexto", "Save File", 0));
        InfoButton->setText(QApplication::translate("EditorTexto", "Info", 0));
        Label_File_Name->setText(QApplication::translate("EditorTexto", "File Name:", 0));
        label_2->setText(QApplication::translate("EditorTexto", "Path Not Work", 0));
    } // retranslateUi

};

namespace Ui {
    class EditorTexto: public Ui_EditorTexto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORTEXTO_H
