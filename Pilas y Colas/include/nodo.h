#ifndef NODO_H
#define NODO_H


class nodo
{
    public:
        nodo(){
            dato = 0;
            sig = nullptr;
        }
        nodo(int e){
            dato=e;
            sig=nullptr;
        };
        int dato;
        nodo *sig;
};

#endif // NODO_H
