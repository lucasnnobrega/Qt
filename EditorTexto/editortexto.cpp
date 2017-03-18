#include "editortexto.h"
#include "ui_editortexto.h"
#include <QMessageBox>
#include <QDebug>
#include <QStatusBar>
#include <iostream>
#include <fstream>
#include <QtGui>
#include <QtCore>Q

using namespace std;

//Método Construtor
EditorTexto::EditorTexto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditorTexto)
{
    ui->setupUi(this);
    statusBar()->showMessage("Inicializado com sucesso",2000);

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

    //Transforma a variável QString para string
    string name_file = file_name.toStdString();
    string big_text = text_big.toStdString();
    string name_path = path_name.toStdString();
    //string name_path = "/root/";


    //Imprime informações depois da compilação
    cout << name_path;

    name_file = name_path + name_file + ".txt";

    cout << name_file;

    //Cria o Arquivo de Texto e salva
    ofstream myfile;
    myfile.open (name_file.c_str());
    myfile << big_text;
    myfile.close();

}

void EditorTexto::on_OpenButton_clicked()
{
/*
 *Problemas com esse método, pois a existe um switch case que
 * torna esse método o numero 4 mas deve ser o numero 2.
 *Existe uns métodos que estão poluindo o código.
 *
 * Problema consertado, era só remover a chamada do método na classe
 *
 * Posso Criar uma classe chamada arquivo que manipula-ra o arquivo em si
 *
 *
 *
 *
*/
    qDebug("Escreva Esse Texto please");
}

