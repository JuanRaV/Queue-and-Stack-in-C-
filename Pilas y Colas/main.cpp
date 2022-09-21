#include <iostream>
#include"Pila.h"
#include"Cola.h"
using namespace std;

int main()
{
    int opc,tema,dato;
    Pila *p=new Pila;
    Cola *c=new Cola;
    cout<<"Elija una Estructura:\n[1]Pilas\n[2]Colas\n";cin>>tema;
    do{

    if(tema==1){
        do{
            system("cls");
            cout<<"==MENU PILAS==\n1.-Push\n2.-Pop\n3.-Top\n4.-Vacia"<<endl;
            cout<<"5.-Inicializa\n6.-Tamanio\n7.-Vaciar\n8.-Mostrar\n9.-Salir"<<endl;cin>>opc;
            system("cls");
            switch(opc){
            case 1:
                cout<<"--INSERTAR--"<<endl;
                cout<<"Escriba un entero: "<<endl;cin>>dato;
                p->push(dato);
                break;
            case 2:
                cout<<"--ELIMINAR--"<<endl;
                p->pop();
                break;
            case 3:
                cout<<"--TOPE--"<<endl;
                p->tope();
                break;
            case 4:
                cout<<"--VACIA--"<<endl;
                p->vacia();
                break;
            case 5:
                cout<<"--INICIALIZA--"<<endl;
                p->inicializa();
                break;
            case 6:
                cout<<"--TAMANIO--"<<endl;
                p->t();
                break;
            case 7:
                cout<<"--VACIAR--"<<endl;
                p->vaciar(dato);
                break;
            case 8:
                cout<<"--MOSTRAR--"<<endl;
                p->mostrar();
                break;
            case 9:
                break;
            default:
                cout<<"Escriba opcion valida"<<endl;
            }
            fflush(stdin);

        }while(opc!=9);
    }else if(tema==2){
        do{
            system("cls");
            cout<<"==MENU COLAS==\n1.-Queue\n2.-Dequeue\n3.-First\n4.-Last"<<endl;
            cout<<"5.-Vacia\n6.-Inicializa\n7.-Tamanio\n8.-Vaciar\n9.-Mostrar Cola\n10.-Salir"<<endl;cin>>opc;
            system("cls");
            switch(opc){
            case 1:
                cout<<"--INSERTAR--"<<endl;
                cout<<"Escriba un entero: "<<endl;cin>>dato;
                c->queue(dato);
                break;
            case 2:
                cout<<"--ELIMINAR--"<<endl;
                c->dequeue();
                break;

            case 3:
                cout<<"-FIRST--"<<endl;
                c->first();
                break;
            case 4:
                cout<<"--LAST--"<<endl;
                c->last();
                break;
            case 5:
                cout<<"--VACIA--"<<endl;
                if(c->vacia())
                    cout<<"La Cola esta vacia"<<endl;
                else
                    cout<<"La Cola NO esta vacia"<<endl;
                system("pause");
                break;
            case 6:
                cout<<"--INICIALIZA--"<<endl;
                c->inicializa();
                break;
            case 7:
                cout<<"--TAMANIO--"<<endl;
                c->tam();
                break;
            case 8:
                cout<<"--VACIAR--"<<endl;
                c->vaciar(dato);
                break;
            case 9:
                cout<<"--MOSTRAR--"<<endl;
                c->mostrar();
                break;
            case 10:
                break;
            default:
                cout<<"Escriba opcion valida"<<endl;
            }
            fflush(stdin);

        }while(opc!=10);
    }else
    cout<<"Escriba opcion valida";
    system("pause");
    }while(tema!=2&&tema!=1);


    return 0;
}
