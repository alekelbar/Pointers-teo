#include <iostream>

using namespace std;
#define EP1

#ifdef EP1

int main(int argc, char const *argv[])
{
  // Un puntero es una variable que guarda un valor distinto...
  string name = "Juan";
  string *ptrName = &name;

  cout << "Valores crudos..." << endl;
  cout << name + " " << ptrName << endl;

  // como ver la dirección de memoría de una variable...

  cout << "\nDirecciones de memoria..." << endl;
  cout << &name << " " << ptrName << endl;

  // los punteros tienen un tamaño fijo siempre... sin importar el tipo
  // Se necesita declarar el tipo para saber los desplazamientos...

  cout << "\nTamanio en bytes de las variables...";
  cout << sizeof(name) << " " << sizeof(ptrName) << endl;

  // operación de des referenciación...

  cout << "\nDes referenciando el puntero... para ver su valor." << endl;
  cout << *ptrName << endl;

  // El operador de des referenciación tambien puede usarse para cambiar el valor de un elemento...
  *ptrName = "Alexander";
  cout << "\nCambiando el valor del puntero..." << endl;
  cout << *ptrName << endl;
  cout << name << endl;

  return 0;
}

#endif

#ifdef EP2

// Pasando un puntero como una referencia de memoria...
void function(int *ptr);

int main(int argc, char const *argv[])
{
  int a = 2;
  function(&a); // Pasando una dirección de memoria...

  cout << a << endl; // ¿Cambio?
  return 0;
}

// Declaraciones de funcion...

void function(int *ptr)
{
  *(ptr) = 10;
  return;
}

#endif

#ifdef EP3
int main(int argc, char const *argv[])
{
  // Como funciona el stack y la pila...
  // NOTA: las variables en la head, no tiene un nombre, por eso se usan apuntadores...

  // Tanto num, como ptrNum, estan en la memoría stack...
  int num = 10;
  int *prtNum = &num;

  // Pero en este caso, haciando uso de "new", reservamos memoría en al heap
  int *num = new int(10); // *num esta en el stack, y "new int(10)" en el heap...

  // compilar el siguiente código en c++ tutor..
  int *n = new int(5);
  char *c = new char('c');

  int n_size = sizeof(n);
  int c_size = sizeof(c);

  return 0;
}

#endif

#ifdef EP4
int main(int argc, char const *argv[])
{
  // Los datos guardados en memoria heap, no se liberan hasta terminar el programa...
  // lo cual produce un memory leak

  // por ejemplo, el siguiente código causa un memory leak...
  int *y = new int(5);
  *y = 50;
  y = new int(6);

  return 0;
}

#endif

#ifdef EP5
int main(int argc, char const *argv[])
{
  // Puede existir más de un puntero apuntando al mismo dato, por ejemplo...
  int a = 10;
  int *b = &a;
  int *c = &a;

  // Hacer ejemplo de listas programado en vivo...
  return 0;
}

#endif