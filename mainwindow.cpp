#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QShortcut>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // set the background color of centralWidget so there is contrast
    ui->centralwidget->setStyleSheet("background-color:grey;");

    // re-render shortcut
    QShortcut *s_render = new QShortcut(QKeySequence(tr("Ctrl+R")), this);
    s_render->setContext(Qt::ApplicationShortcut);
    connect(s_render, SIGNAL(activated()), ui->myCanvas, SLOT(render()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
