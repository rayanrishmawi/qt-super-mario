#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <QObject>
#include <QGraphicsRectItem>
#include <QKeyEvent>

class Player : public QObject, public QGraphicsRectItem {
  Q_OBJECT

 public:
  Player(QGraphicsItem* parent = nullptr);

 public slots:
  void updateState();

 protected:
  void keyPressEvent(QKeyEvent* event) override;

 private:
  int velocityY;
  bool onGround;
};

#endif
