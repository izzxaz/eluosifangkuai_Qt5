#ifndef GAME_H
#define GAME_H

#include <QtWidgets/QMainWindow>
#include "ui_game.h"
#include <string>
#include <QMouseEvent>
using namespace std;

class game : public QMainWindow
{
	Q_OBJECT

public:
	game(QWidget *parent = 0);
	QString zh(string &);
	void timerEvent(QTimerEvent *timer);
	int m_getactive_timer;
	~game();
public slots:
	int ReadyToStart();
private:
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	QPoint windowPos;
	QPoint mousePos;
	QPoint dPos;


	Ui::gameClass ui;
};

#endif // GAME_H
