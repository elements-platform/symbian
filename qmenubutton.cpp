#include "qmenubutton.h"

QMenuButton::QMenuButton(QWidget *parent): QToolButton(parent) {
    ResID++;            // Увеличение счетчика на единицу
    buttonID = ResID;   // Присвоение кнопке номера, по которому будет производиться дальнейшая работа с кнопками
}

QMenuButton::~QMenuButton() {}

// Метод для возврата значения номера кнопки
int QMenuButton::getID() {
    return buttonID;
}

// Инициализация статической переменной класса. Статическая переменная класса должна инициализироваться в обязательном порядке
int QMenuButton::ResID = 0;
