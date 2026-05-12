#include "Multiconjunto.h"

// Constructor
template <typename T>
Multiconjunto<T>::Multiconjunto ()
{
    num=0;
}

// Comprueba si el multiconjunto es o no vacío
template <typename T>
bool Multiconjunto<T>::esVacio() const
{
    if(num==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Devuelve el número de elementos
template <typename T>
int Multiconjunto<T>::cardinalidad() const
{
    return num;
}

// Añade un objeto de tipo T al multiconjunto
// Se permiten elementos repetidos
template <typename T>
void Multiconjunto<T>::anade(const T& objeto)
{
    c[num]=objeto;
    num++;
}

// Elimina todas las ocurrencias del objeto
// pasado como parámetro
template <typename T>
void Multiconjunto<T>::elimina(const T& objeto)
{
    for(int i=0; i<num; i++)
    {
        if (c[i]==objeto)
        {
            for (int j=i; j<num-1; j++)
            {
                c[j]=c[j+1];

            }
            num--;
            i--; //revisar misma posicion por repetidos
        }
    }
}

// Comprueba si el objeto pasado como parámetro
// existe en el multiconjunto
template <typename T>
bool Multiconjunto<T>::pertenece(const T& objeto) const
{
    for(int i=0; i<num; i++)
    {
        if (c[i]==objeto)
        {
            return true;
        }
    }
    return false;
}

// ===== INSTANCIAS =====
template class Multiconjunto<int>;
template class Multiconjunto<char>;
#include "Persona.h"
template class Multiconjunto<Persona>;
