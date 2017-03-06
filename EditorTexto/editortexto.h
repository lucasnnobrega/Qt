#ifndef EDITORTEXTO_H
#define EDITORTEXTO_H

#include <QMainWindow>

namespace Ui {
class EditorTexto;
}

class EditorTexto : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditorTexto(QWidget *parent = 0);
    ~EditorTexto();

private slots:
    void on_InfoButton_clicked();

    void on_SaveButton_clicked();

    void on_EditorTexto_iconSizeChanged(const QSize &iconSize);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::EditorTexto *ui;
};

#endif // EDITORTEXTO_H
