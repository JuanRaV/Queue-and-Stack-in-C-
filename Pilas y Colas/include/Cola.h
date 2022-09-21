#ifndef COLA_H
#define COLA_H
#include"nodo.h"

class Cola
{
    public:
        nodo *h;
        nodo *t;
        int tamanio;
        Cola(){
            tamanio=0;
            h=nullptr;
            t=nullptr;
        }
        void queue(int);
        void dequeue();
        void first();
        void last();
        bool vacia();
        void inicializa();
        void tam();
        void vaciar(int);
        void mostrar();

};

#endif // COLA_H
