#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "client.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QListWidget;
class QMenu;
class QTextEdit;
class QLineEdit;
class QBoxLayout;
class QLabel;
QT_END_NAMESPACE

//! [0]
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(Client *client, QWidget *parent = 0);
    ~MainWindow();

    void init();

private slots:
    void newLetter();
    void save();
    void undo();
    void about();
    void insertCustomer(const QString &customer);
    void addParagraph(const QString &paragraph);

private:
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void createDockWindows();

    void resizeEvent(QResizeEvent * event);

private:
    Client *client;

    QTextEdit *chatbox;
    QLineEdit *chatline;
    QWidget *chatframe;
    QBoxLayout *chatboxlayout;
    QLineEdit *chattitle;

    QWidget *clientinfo2;
    QWidget *clientbasicinfo;
    QWidget *clientadvancedinfo;
    QWidget *clientbuttons;
    QLabel *settingsbutton;
    QLabel *micmutebutton;
    QLabel *soundmutebutton;
    QTextEdit *clientadvinfo;
    QBoxLayout *clientboxlayout;
    QBoxLayout *clientboxlayout2;
    QBoxLayout *clientboxlayout3;
    QBoxLayout *clientboxlayout4;
    QLabel *userimagelabel;
    QLineEdit *username;
    QPixmap *userimage;
    QPixmap *settingsimage;
    QPixmap *micmuteimage;
    QPixmap *soundmuteimage;



    QDockWidget *serverinfo;
    QDockWidget *clientinfo;
    QDockWidget *chatbar;


    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *settingsMenu;
    QMenu *helpMenu;

    QToolBar *fileToolBar;
    QToolBar *editToolBar;

    QAction *newLetterAct;
    QAction *saveAct;
    QAction *printAct;
    QAction *undoAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *quitAct;
    QAction *settingsAct;
};
//! [0]

#endif
