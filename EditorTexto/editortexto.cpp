#include "editortexto.h"
#include "ui_editortexto.h"
#include <QMessageBox>
#include <QDebug>
#include <iostream>
#include <fstream>

using namespace std;

//Método Construtor
EditorTexto::EditorTexto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditorTexto)
{
    ui->setupUi(this);
}
//END Método Construtor

//Método Destrutor
EditorTexto::~EditorTexto()
{

    delete ui;
    //Necessário para evitar vazamento de memória
}
//END Método Destrutor

//Método Botão de Info
void EditorTexto::on_InfoButton_clicked()
{
    QMessageBox::information(this, "Sobre Editor", "Editor de Texto Criado em QT\n por Fresnell");
}
//END Método Botão de Info

void EditorTexto::on_SaveButton_clicked()
{
    //Tipo de Varirável que recebe o dado do campo
    QString file_name = ui-> file_name  -> text();
    QString text_big  = ui-> CampoTexto -> toPlainText();
    QString path_name = ui-> path_name  ->  text();

    //Imprime informações no momento que roda
    qDebug("Criado Arquivo: ");
    qDebug () << file_name;
    qDebug () << path_name;

    string name_file = file_name.toStdString();
    string big_text = text_big.toStdString();
    //string name_path = "/root/";
    string name_path = path_name.toStdString();

    //Imprime informações depois da compilação
    cout << name_path;

    name_file = name_path + name_file + ".txt";

    cout << name_file;

    ofstream myfile;
    myfile.open (name_file.c_str());
    myfile << big_text;
    myfile.close();

}
