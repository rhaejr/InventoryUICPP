/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLUH;
    QAction *actionApache;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *main_label;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *search_edit;
    QPushButton *search_button;
    QPushButton *ipc_button;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *nsn_edit;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *pn_edit;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *desc_edit;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *loc_edit;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QLineEdit *niin_edit;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLineEdit *remarks_edit;
    QVBoxLayout *verticalLayout_14;
    QPushButton *update_button;
    QPushButton *add_button;
    QWidget *tab_3;
    QPushButton *add_label_btn;
    QPushButton *print_label_btn;
    QPushButton *reset_labels_btn;
    QPushButton *reset_table_button;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMain;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionLUH = new QAction(MainWindow);
        actionLUH->setObjectName(QStringLiteral("actionLUH"));
        actionApache = new QAction(MainWindow);
        actionApache->setObjectName(QStringLiteral("actionApache"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        main_label = new QLabel(centralwidget);
        main_label->setObjectName(QStringLiteral("main_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_label->sizePolicy().hasHeightForWidth());
        main_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        main_label->setFont(font);

        horizontalLayout_3->addWidget(main_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        search_edit = new QLineEdit(tab_2);
        search_edit->setObjectName(QStringLiteral("search_edit"));

        verticalLayout_7->addWidget(search_edit);


        horizontalLayout->addLayout(verticalLayout_7);

        search_button = new QPushButton(tab_2);
        search_button->setObjectName(QStringLiteral("search_button"));

        horizontalLayout->addWidget(search_button);

        ipc_button = new QPushButton(tab_2);
        ipc_button->setObjectName(QStringLiteral("ipc_button"));

        horizontalLayout->addWidget(ipc_button);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        nsn_edit = new QLineEdit(tab);
        nsn_edit->setObjectName(QStringLiteral("nsn_edit"));

        verticalLayout_8->addWidget(nsn_edit);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        pn_edit = new QLineEdit(tab);
        pn_edit->setObjectName(QStringLiteral("pn_edit"));

        verticalLayout_9->addWidget(pn_edit);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        desc_edit = new QLineEdit(tab);
        desc_edit->setObjectName(QStringLiteral("desc_edit"));

        verticalLayout_10->addWidget(desc_edit);


        horizontalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        loc_edit = new QLineEdit(tab);
        loc_edit->setObjectName(QStringLiteral("loc_edit"));

        verticalLayout_11->addWidget(loc_edit);


        horizontalLayout_2->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_12->addWidget(label_12);

        niin_edit = new QLineEdit(tab);
        niin_edit->setObjectName(QStringLiteral("niin_edit"));

        verticalLayout_12->addWidget(niin_edit);


        horizontalLayout_2->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_13->addWidget(label_13);

        remarks_edit = new QLineEdit(tab);
        remarks_edit->setObjectName(QStringLiteral("remarks_edit"));

        verticalLayout_13->addWidget(remarks_edit);


        horizontalLayout_2->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        update_button = new QPushButton(tab);
        update_button->setObjectName(QStringLiteral("update_button"));

        verticalLayout_14->addWidget(update_button);

        add_button = new QPushButton(tab);
        add_button->setObjectName(QStringLiteral("add_button"));

        verticalLayout_14->addWidget(add_button);


        horizontalLayout_2->addLayout(verticalLayout_14);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        add_label_btn = new QPushButton(tab_3);
        add_label_btn->setObjectName(QStringLiteral("add_label_btn"));
        add_label_btn->setGeometry(QRect(10, 10, 93, 28));
        print_label_btn = new QPushButton(tab_3);
        print_label_btn->setObjectName(QStringLiteral("print_label_btn"));
        print_label_btn->setGeometry(QRect(120, 10, 93, 28));
        reset_labels_btn = new QPushButton(tab_3);
        reset_labels_btn->setObjectName(QStringLiteral("reset_labels_btn"));
        reset_labels_btn->setGeometry(QRect(230, 10, 93, 28));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        reset_table_button = new QPushButton(centralwidget);
        reset_table_button->setObjectName(QStringLiteral("reset_table_button"));

        verticalLayout->addWidget(reset_table_button);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(tableWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMain = new QMenu(menubar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMain->menuAction());
        menuMain->addAction(actionLUH);
        menuMain->addAction(actionApache);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Benchstock", nullptr));
        actionLUH->setText(QApplication::translate("MainWindow", "LUH", nullptr));
        actionApache->setText(QApplication::translate("MainWindow", "Apache", nullptr));
        main_label->setText(QApplication::translate("MainWindow", "Apache", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Search", nullptr));
        search_button->setText(QApplication::translate("MainWindow", "Search", nullptr));
        ipc_button->setText(QApplication::translate("MainWindow", "IPC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Search", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "NSN", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "PN", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Description", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Location", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "NIIN", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Remarks", nullptr));
        update_button->setText(QApplication::translate("MainWindow", "Update", nullptr));
        add_button->setText(QApplication::translate("MainWindow", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Edit", nullptr));
        add_label_btn->setText(QApplication::translate("MainWindow", "Add Label", nullptr));
        print_label_btn->setText(QApplication::translate("MainWindow", "Print Labels", nullptr));
        reset_labels_btn->setText(QApplication::translate("MainWindow", "Reset Labels", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Labels", nullptr));
        reset_table_button->setText(QApplication::translate("MainWindow", "Reset Table", nullptr));
        menuMain->setTitle(QApplication::translate("MainWindow", "Aircraft", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
