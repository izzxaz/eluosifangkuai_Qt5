#include "stdafx.h"
#include "game.h"
#include <QGraphicsView>

game::game(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.graphicsView->hide();
	ui.btnreturn->hide();
	ui.graphicsView->move(25, 25);
	int m_getactive_timer=startTimer(500);
}
void game::mousePressEvent(QMouseEvent *event) {
	this->windowPos = this->pos();
	this->mousePos = event->globalPos();
	this->dPos = mousePos - windowPos;
}
void game::mouseMoveEvent(QMouseEvent *event) {
	this->move(event->globalPos() - this->dPos);
}
void game::timerEvent(QTimerEvent *timer) {
	
}
int game::ReadyToStart() {
	QMessageBox::information(this,"准备好了吗？","游戏要开始啦！！");
	return 0;
}
game::~game()
{

}
