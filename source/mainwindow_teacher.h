#ifndef MAINWINDOW_TEACHER_H
#define MAINWINDOW_TEACHER_H

#include <QMainWindow>

#include "include.h"
#include "environment.h"
#include "envir_widget.h"

namespace Ui {
class MainWindow_teacher;
}

class MainWindow_teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_teacher(QWidget *parent = 0);
    ~MainWindow_teacher();

    void showInfo();           //显示用户信息
    void initActivex();       //控件信息初始化
    void updateTable();      //表格信息更新

    void setEnvirWidget(Envir_widget* envir_widget);
    void setUser(Teacher* user);   //设置当前登录用户

private slots:
    void action_about_triggered();

private:
    Ui::MainWindow_teacher *ui;
    Envir_widget* m_envir_widget;
    QStandardItemModel* ui_info_course;

    Teacher* m_user = NULL;
};

#endif // MAINWINDOW_TEACHER_H
