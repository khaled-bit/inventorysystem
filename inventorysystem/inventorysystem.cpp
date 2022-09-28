#include "inventorysystem.h"

inventorysystem::inventorysystem(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

inventorysystem::~inventorysystem()
{}


void inventorysystem::on_show_show_20_clicked()
{
   
    ui.stackedWidget_13->setCurrentIndex(1);
}


void inventorysystem::on_show_show_25_clicked()
{

    ui.stackedWidget_13->setCurrentIndex(0);
}

void inventorysystem::on_show_show_23_clicked()
{

    ui.stackedWidget_14->setCurrentIndex(1);
}

void inventorysystem::on_show_show_24_clicked()
{

    ui.stackedWidget_14->setCurrentIndex(0);
}



void inventorysystem::on_pushButton_interaction_15_clicked()
{
    ui.stackedWidget_15->setCurrentIndex(ui.stackedWidget_15->currentIndex() + 1);
    
}

void inventorysystem::on_pushButton_interaction_16_clicked()
{

    ui.stackedWidget_15->setCurrentIndex(ui.stackedWidget_15->currentIndex() - 1);
}


void inventorysystem::on_pushButton_interaction_18_clicked()
{
  
    ui.stackedWidget_16->setCurrentIndex(ui.stackedWidget_16->currentIndex() + 1);
}

void inventorysystem::on_pushButton_interaction_17_clicked()
{
    
    ui.stackedWidget_16->setCurrentIndex(ui.stackedWidget_16->currentIndex() - 1);
}


