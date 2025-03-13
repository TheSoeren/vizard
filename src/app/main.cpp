#include "mainwidget.h"
#include <QApplication>

auto main(int argc, char *argv[]) -> int {
  QApplication app(argc, argv);

  MainWidget mainwidget;
  mainwidget.show();

  return app.exec();
}
