#include "client.h"
#include "mainwindow.h"
#include "settingsdialog.h"
#include "audioworker.h"
#include <QApplication>
#include <QThread>

int main(int argc, char **argv){
    QCoreApplication::setOrganizationName("Zennix Studios");
    QCoreApplication::setApplicationName("YapTlyToti");

    Client *client = new Client;

    QApplication app(argc, argv);
    Q_INIT_RESOURCE(mainwindow);

    MainWindow *mainWindow = new MainWindow(client);
    client->settingsDialog = new SettingsDialog(client, mainWindow);
    mainWindow->init();

    AudioWorker *worker = new AudioWorker(client);
    QThread *thread = new QThread;
    QObject::connect(thread, SIGNAL(started()), worker, SLOT(run()));

    thread->start();
    mainWindow->resize(900, 600);
    mainWindow->show();
    int ret = app.exec();
    mainWindow->hide();
    thread->quit();

    delete thread;
    delete worker;

    delete mainWindow;
    delete client;
    return ret;
}
