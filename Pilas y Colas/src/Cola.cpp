#include "Cola.h"
#include"nodo.h"
#include<iostream>
using namespace std;
int tamanio;
void Cola::queue(int e)
{
    nodo *nuevo_nodo=new nodo(e);
    nuevo_nodo->sig=nullptr;
    if(h == NULL) {
        h=nuevo_nodo;
        t=nuevo_nodo;
        }
    else {
        t->sig=nuevo_nodo;
        t=nuevo_nodo;
        }
    tamanio++;
}

void Cola::dequeue()
{
    if(vacia()) {
        cout<<"La cola esta vacia"<<endl;
        }
    else if(h==t) {
        delete(h);
        h=NULL;
        t=NULL;
        tamanio--;
        }
    else {
        nodo * ptr=h;
        h=h->sig;
        delete(ptr);
        tamanio--;
        }

        system("pause");

    }



void Cola::first()
{
    if(h==nullptr)
        cout<<"La  Cola esta vacia"<<endl;
    else
        cout<<"El primer elemento es: "<<h->dato<<endl;

    system("pause");
}

void Cola::last()
{
    if(h==nullptr)
        cout<<"La  Cola esta vacia"<<endl;
    else
        cout<<"El ultimo elemento es: "<<t->dato<<endl;

    system("pause");
}

bool Cola::vacia()
{
    return h == nullptr and t == nullptr;
}

void Cola::inicializa()
{
    h=nullptr;
    t=nullptr;
    cout<<"Cola Inicializada"<<endl;
     system("pause");
}

void Cola::tam()
{
    cout<<"La Cola tiene "<<tamanio<<" elementos"<<endl;
    system("pause");
}

void Cola::vaciar(int e)
{
    if(h==nullptr)
        cout<<"La pila esta vacia"<<endl;
    else{

    while(h!=nullptr){
    nodo *aux=h;
    e=aux->dato;
    h=aux->sig;
    delete aux;}
    h=nullptr;
    t=nullptr;

    cout<<"Cola eliminada"<<endl;}
    system("pause");
}

void Cola::mostrar()
{
    nodo *aux=h;
    while(aux){
        cout<<aux->dato<<"->";
        aux=aux->sig;
    }cout<<endl;;
    if(h==nullptr)
    cout<<"\nLa cola esta vacia"<<endl;
    system("pause");
}
