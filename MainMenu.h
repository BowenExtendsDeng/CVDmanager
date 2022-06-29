#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainMenu.h"

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private:
    Ui::MainMenuClass ui;
};
