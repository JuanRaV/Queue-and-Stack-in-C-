#include "Pila.h"
#include"nodo.h"
#include<iostream>
using namespace std;
int j=25;
void Pila::push(int e)
{
	nodo *nuevo = new nodo();
	nuevo->dato=e;
	nuevo->sig=h;
	h=nuevo;
	cout<<"Nodo "<<e<<" insertado correctamente\n"<<endl;
	tamanio++;
	system("pause");
}

void Pila::pop()
{
	nodo *aux=h;
	if(aux==NULL){
        cout<<"Pila Vacia"<<endl;
	}else{
	    h=aux->sig;
        cout<<"Elemento "<<aux->dato<<" eliminado correctamente\n"<<endl;
        delete aux;
        tamanio--;
	}
	system("pause");
    }

void Pila::tope()
{
    if(h==nullptr)
        cout<<"La  Pila esta vacia"<<endl;
    else
        cout<<"El tope es: "<<h->dato<<endl;

    system("pause");
}
void Pila::vacia(){
    if(!h)
    cout<<"La  Pila esta vacia"<<endl;

    else
        cout<<"La Pila tiene elementos"<<endl;
    system("pause");

}
void Pila::inicializa()
{
    h=nullptr;
    cout<<"Pila Inicializada"<<endl;
     system("pause");
}

void Pila::vaciar(int e)
{
    if(h==nullptr)
        cout<<"La pila esta vacia"<<endl;
    else{

    while(h!=nullptr){
    nodo *aux=h;
    e=aux->dato;
    h=aux->sig;
    delete aux;}
    cout<<"Pila eliminada"<<endl;}
    system("pause");
}

void Pila::mostrar()
{
    nodo *aux=h;
    while(aux){
        cout<<"\t"<<aux->dato<<endl;
        cout<<"\t"<<char(j)<<endl;
        aux=aux->sig;
    }if(h==nullptr){
    cout<<"\nLa lista esta vacia"<<endl;
    }system("pause");
}

void Pila::t(){
cout<<"El tamanio es: "<<tamanio<<endl;
system("pause");}
