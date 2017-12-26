/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameClass
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *btnclose;
    QPushButton *btnstart;
    QPushButton *btnreturn;

    void setupUi(QMainWindow *gameClass)
    {
        if (gameClass->objectName().isEmpty())
            gameClass->setObjectName(QStringLiteral("gameClass"));
        gameClass->resize(513, 513);
        gameClass->setMinimumSize(QSize(513, 513));
        gameClass->setMaximumSize(QSize(513, 513));
        QIcon icon;
        icon.addFile(QStringLiteral(":/game/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        gameClass->setWindowIcon(icon);
        gameClass->setWindowOpacity(1);
        gameClass->setStyleSheet(QStringLiteral(""));
        action = new QAction(gameClass);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(gameClass);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_4 = new QAction(gameClass);
        action_4->setObjectName(QStringLiteral("action_4"));
        centralWidget = new QWidget(gameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-image: url(:/game/logo.png);"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(430, 440, 461, 461));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(513, 513));
        graphicsView->setMouseTracking(true);
        graphicsView->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-style: solid;\n"
"background-image: url(:/game/nonborder.png);"));
        btnclose = new QPushButton(centralWidget);
        btnclose->setObjectName(QStringLiteral("btnclose"));
        btnclose->setGeometry(QRect(478, 10, 25, 25));
        btnclose->setStyleSheet(QString::fromUtf8("border-image: url(:/game/close32.png);\n"
"background-image: url(:/game/\351\200\217\346\230\216.png);"));
        btnstart = new QPushButton(centralWidget);
        btnstart->setObjectName(QStringLiteral("btnstart"));
        btnstart->setGeometry(QRect(230, 240, 64, 64));
        btnstart->setStyleSheet(QString::fromUtf8("border-image: url(:/game/start64.png);\n"
"background-image: url(:/game/\351\200\217\346\230\216.png);"));
        btnreturn = new QPushButton(centralWidget);
        btnreturn->setObjectName(QStringLiteral("btnreturn"));
        btnreturn->setGeometry(QRect(7, 8, 25, 25));
        btnreturn->setStyleSheet(QString::fromUtf8("border-image: url(:/game/return64.png);\n"
"background-image: url(:/game/\351\200\217\346\230\216.png);"));
        gameClass->setCentralWidget(centralWidget);
        btnstart->raise();
        graphicsView->raise();
        btnclose->raise();
        btnreturn->raise();

        retranslateUi(gameClass);
        QObject::connect(btnclose, SIGNAL(clicked()), gameClass, SLOT(close()));
        QObject::connect(btnstart, SIGNAL(clicked()), graphicsView, SLOT(show()));
        QObject::connect(btnreturn, SIGNAL(clicked()), graphicsView, SLOT(hide()));
        QObject::connect(btnstart, SIGNAL(clicked()), btnreturn, SLOT(show()));
        QObject::connect(btnreturn, SIGNAL(clicked()), btnreturn, SLOT(hide()));

        QMetaObject::connectSlotsByName(gameClass);
    } // setupUi

    void retranslateUi(QMainWindow *gameClass)
    {
        gameClass->setWindowTitle(QApplication::translate("gameClass", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", 0));
        action->setText(QApplication::translate("gameClass", "\345\274\200\345\247\213", 0));
        action_2->setText(QApplication::translate("gameClass", "\351\200\200\345\207\272", 0));
        action_4->setText(QApplication::translate("gameClass", "\345\233\236\345\210\260\344\270\273\347\225\214\351\235\242", 0));
        btnclose->setText(QString());
        btnstart->setText(QString());
        btnreturn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameClass: public Ui_gameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
