#include <QApplication>
#include "View/MyWidget.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  MyWidget w;
  w.show();
  return app.exec();
}
