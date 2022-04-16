/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *Dictionary;
    QLabel *image;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *InsertButton;
    QWidget *page_2;
    QLabel *input_label;
    QTextEdit *input_word;
    QPushButton *start_search;
    QLabel *meaning_output;
    QPushButton *return_1;
    QLabel *display_time;
    QComboBox *data_struc;
    QWidget *page_3;
    QLabel *insert_word_label;
    QPushButton *insert_button;
    QPushButton *return_2;
    QTextEdit *wordToInsert;
    QTextEdit *meaning;
    QComboBox *partOfSpeech;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(800, 600));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setMaximumSize(QSize(800, 600));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setFrameShape(QFrame::HLine);
        stackedWidget->setLineWidth(1);
        stackedWidget->setMidLineWidth(1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setMaximumSize(QSize(800, 600));
        Dictionary = new QLabel(page);
        Dictionary->setObjectName(QString::fromUtf8("Dictionary"));
        Dictionary->setGeometry(QRect(200, 30, 400, 50));
        Dictionary->setMinimumSize(QSize(400, 50));
        Dictionary->setMaximumSize(QSize(400, 50));
        QFont font;
        font.setUnderline(true);
        Dictionary->setFont(font);
        Dictionary->setAlignment(Qt::AlignCenter);
        image = new QLabel(page);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(200, 100, 400, 300));
        image->setMinimumSize(QSize(400, 300));
        image->setMaximumSize(QSize(200, 250));
        image->setFrameShape(QFrame::Box);
        image->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(page);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(210, 410, 381, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchButton = new QPushButton(horizontalLayoutWidget_2);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(140, 40));
        searchButton->setMaximumSize(QSize(140, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(12);
        searchButton->setFont(font1);

        horizontalLayout_2->addWidget(searchButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        InsertButton = new QPushButton(horizontalLayoutWidget_2);
        InsertButton->setObjectName(QString::fromUtf8("InsertButton"));
        InsertButton->setMinimumSize(QSize(140, 40));
        InsertButton->setMaximumSize(QSize(140, 40));
        InsertButton->setFont(font1);

        horizontalLayout_2->addWidget(InsertButton);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setMaximumSize(QSize(800, 600));
        input_label = new QLabel(page_2);
        input_label->setObjectName(QString::fromUtf8("input_label"));
        input_label->setGeometry(QRect(320, 130, 200, 40));
        input_label->setMaximumSize(QSize(200, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cambria"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        input_label->setFont(font2);
        input_label->setAlignment(Qt::AlignCenter);
        input_word = new QTextEdit(page_2);
        input_word->setObjectName(QString::fromUtf8("input_word"));
        input_word->setGeometry(QRect(320, 190, 200, 40));
        input_word->setMinimumSize(QSize(200, 40));
        input_word->setMaximumSize(QSize(200, 40));
        input_word->setFont(font1);
        input_word->setFrameShadow(QFrame::Raised);
        start_search = new QPushButton(page_2);
        start_search->setObjectName(QString::fromUtf8("start_search"));
        start_search->setGeometry(QRect(320, 310, 200, 40));
        start_search->setMinimumSize(QSize(200, 40));
        start_search->setMaximumSize(QSize(200, 40));
        start_search->setFont(font1);
        meaning_output = new QLabel(page_2);
        meaning_output->setObjectName(QString::fromUtf8("meaning_output"));
        meaning_output->setGeometry(QRect(270, 370, 400, 100));
        meaning_output->setMinimumSize(QSize(400, 100));
        meaning_output->setMaximumSize(QSize(400, 100));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(7);
        meaning_output->setFont(font3);
        meaning_output->setLayoutDirection(Qt::LeftToRight);
        meaning_output->setAlignment(Qt::AlignCenter);
        meaning_output->setWordWrap(true);
        return_1 = new QPushButton(page_2);
        return_1->setObjectName(QString::fromUtf8("return_1"));
        return_1->setGeometry(QRect(70, 60, 80, 30));
        return_1->setMinimumSize(QSize(80, 30));
        return_1->setMaximumSize(QSize(80, 30));
        return_1->setFont(font1);
        display_time = new QLabel(page_2);
        display_time->setObjectName(QString::fromUtf8("display_time"));
        display_time->setGeometry(QRect(60, 390, 141, 60));
        display_time->setMinimumSize(QSize(100, 60));
        display_time->setMaximumSize(QSize(150, 80));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Cambria"));
        font4.setPointSize(10);
        display_time->setFont(font4);
        display_time->setAlignment(Qt::AlignCenter);
        data_struc = new QComboBox(page_2);
        data_struc->addItem(QString());
        data_struc->addItem(QString());
        data_struc->addItem(QString());
        data_struc->addItem(QString());
        data_struc->addItem(QString());
        data_struc->setObjectName(QString::fromUtf8("data_struc"));
        data_struc->setGeometry(QRect(320, 250, 201, 41));
        data_struc->setFont(font1);
        data_struc->setAutoFillBackground(false);
        data_struc->setEditable(true);
        data_struc->setDuplicatesEnabled(false);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setMinimumSize(QSize(800, 600));
        page_3->setMaximumSize(QSize(800, 600));
        insert_word_label = new QLabel(page_3);
        insert_word_label->setObjectName(QString::fromUtf8("insert_word_label"));
        insert_word_label->setGeometry(QRect(320, 150, 200, 40));
        insert_word_label->setMinimumSize(QSize(200, 40));
        insert_word_label->setMaximumSize(QSize(200, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Cambria"));
        font5.setPointSize(14);
        font5.setUnderline(true);
        insert_word_label->setFont(font5);
        insert_word_label->setFrameShadow(QFrame::Raised);
        insert_word_label->setAlignment(Qt::AlignCenter);
        insert_button = new QPushButton(page_3);
        insert_button->setObjectName(QString::fromUtf8("insert_button"));
        insert_button->setGeometry(QRect(320, 390, 200, 40));
        insert_button->setMinimumSize(QSize(200, 40));
        insert_button->setMaximumSize(QSize(20, 40));
        insert_button->setFont(font1);
        return_2 = new QPushButton(page_3);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(80, 70, 80, 30));
        return_2->setMinimumSize(QSize(80, 30));
        return_2->setMaximumSize(QSize(80, 30));
        return_2->setFont(font1);
        wordToInsert = new QTextEdit(page_3);
        wordToInsert->setObjectName(QString::fromUtf8("wordToInsert"));
        wordToInsert->setGeometry(QRect(320, 210, 200, 40));
        wordToInsert->setMinimumSize(QSize(200, 40));
        wordToInsert->setMaximumSize(QSize(200, 40));
        wordToInsert->setFont(font1);
        wordToInsert->setFrameShape(QFrame::StyledPanel);
        wordToInsert->setFrameShadow(QFrame::Raised);
        meaning = new QTextEdit(page_3);
        meaning->setObjectName(QString::fromUtf8("meaning"));
        meaning->setGeometry(QRect(320, 330, 200, 40));
        meaning->setMinimumSize(QSize(200, 40));
        meaning->setMaximumSize(QSize(200, 40));
        meaning->setFont(font1);
        meaning->setFrameShape(QFrame::StyledPanel);
        meaning->setFrameShadow(QFrame::Raised);
        partOfSpeech = new QComboBox(page_3);
        partOfSpeech->addItem(QString());
        partOfSpeech->addItem(QString());
        partOfSpeech->addItem(QString());
        partOfSpeech->addItem(QString());
        partOfSpeech->setObjectName(QString::fromUtf8("partOfSpeech"));
        partOfSpeech->setGeometry(QRect(320, 270, 201, 41));
        partOfSpeech->setFont(font1);
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 220, 101, 20));
        label->setFont(font4);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 280, 161, 20));
        label_2->setFont(font4);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 340, 111, 31));
        label_3->setFont(font4);
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menubar->setMaximumSize(QSize(800, 600));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMaximumSize(QSize(800, 600));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        data_struc->setCurrentIndex(2);
        partOfSpeech->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Dictionary->setText(QCoreApplication::translate("MainWindow", "E-Dictionary", nullptr));
        image->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        InsertButton->setText(QCoreApplication::translate("MainWindow", "Add New", nullptr));
        input_label->setText(QCoreApplication::translate("MainWindow", "Search Word", nullptr));
        start_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        meaning_output->setText(QCoreApplication::translate("MainWindow", "Type a word and press Search", nullptr));
        return_1->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        display_time->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        data_struc->setItemText(0, QCoreApplication::translate("MainWindow", "Linked List", nullptr));
        data_struc->setItemText(1, QCoreApplication::translate("MainWindow", "Trie", nullptr));
        data_struc->setItemText(2, QCoreApplication::translate("MainWindow", "Ternary Search Tree", nullptr));
        data_struc->setItemText(3, QCoreApplication::translate("MainWindow", "Hash Table", nullptr));
        data_struc->setItemText(4, QCoreApplication::translate("MainWindow", "Vectors", nullptr));

        data_struc->setCurrentText(QCoreApplication::translate("MainWindow", "Ternary Search Tree", nullptr));
        data_struc->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select Data Structure", nullptr));
        insert_word_label->setText(QCoreApplication::translate("MainWindow", "Add New word", nullptr));
        insert_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        return_2->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        partOfSpeech->setItemText(0, QCoreApplication::translate("MainWindow", "Noun", nullptr));
        partOfSpeech->setItemText(1, QCoreApplication::translate("MainWindow", "Verb", nullptr));
        partOfSpeech->setItemText(2, QCoreApplication::translate("MainWindow", "Adjective", nullptr));
        partOfSpeech->setItemText(3, QCoreApplication::translate("MainWindow", "Adverb", nullptr));

        partOfSpeech->setCurrentText(QCoreApplication::translate("MainWindow", "Noun", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Word:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Part Of Speech:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Meaning:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
