#ifndef PILA_H
#define PILA_H
#include"nodo.h"

class Pila
{
    public:
        nodo *h;
        int tamanio=0;
        Pila(){
            h=nullptr;
        }
        void push(int);
        void pop();

        void tope();
        void inicializa();
        void t();
        void vacia();
        void vaciar(int);
        void mostrar();
};

#endif // PILA_H
