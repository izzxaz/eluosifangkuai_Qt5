#include "stdafx.h"
#include "game.h"

game::game(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.graphicsView->hide();
	ui.pushButton_3->hide();
	ui.graphicsView->move(25, 25);
	connect(ui.graphicsView,SIGNAL(),this,SLOT(ReadyToStart()));
}
void game::mousePressEvent(QMouseEvent *event) {
	this->windowPos = this->pos();
	this->mousePos = event->globalPos();
	this->dPos = mousePos - windowPos;
}
void game::mouseMoveEvent(QMouseEvent *event) {
	this->move(event->globalPos() - this->dPos);
}
int game::ReadyToStart() {
	qDebug()<<"123132145645656456465";
	QMessageBox::information(this,"head","text");
	return 0;
}
game::~game()
{

}
