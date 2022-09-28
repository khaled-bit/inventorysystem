#pragma once

#include <QtWidgets/QWidget>
#include "ui_inventorysystem.h"

class inventorysystem : public QWidget
{
    Q_OBJECT

public:
    inventorysystem(QWidget *parent = nullptr);
    ~inventorysystem();

private slots:
    void on_show_show_20_clicked();
     
private slots:
    void on_show_show_25_clicked();

private slots:
    void on_show_show_23_clicked();

private slots:
    void on_show_show_24_clicked();



private slots:
    void on_pushButton_interaction_15_clicked();

private slots:
    void on_pushButton_interaction_16_clicked();

private slots:
    void on_pushButton_interaction_18_clicked();

private slots:
    void on_pushButton_interaction_17_clicked();


private:
    Ui::inventorysystemClass ui;
};
