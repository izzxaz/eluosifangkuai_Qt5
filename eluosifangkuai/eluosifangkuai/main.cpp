#include "stdafx.h"
#include "game.h"
#include <QtWidgets/QApplication>
#include <QString>
#include <QTextCodec>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("gbk");
	QTextCodec::setCodecForLocale(codec);
	game w;
	w.setWindowFlags(Qt::FramelessWindowHint);
	w.setAttribute(Qt::WA_TranslucentBackground);
	w.show();
	return a.exec();
}
