#include <iostream>
using namespace std;

template<typename T, size_t Size>
class Contenedor 
{
private:
    T arreglo[Size]; //Arreglo interno de tipo T y tamano Size

public:

    T& obtener(size_t indice)  //Obtenemos un elemento del arreglo por indice
    {
        return arreglo[indice];
    }

   
    void establecer(size_t indice, const T& valor) //Metodo para establecer un valor en una posicion del array
    {
        arreglo[indice] = valor;
    }

  
    void imprimir() const  //imprimimos todos los elementos del arreglo
    {
        for (size_t i = 0; i < Size; ++i) 
        {
            std::cout << arreglo[i] << " ";
        }
        cout << "\n";
    }
};

int main()
 {

    Contenedor<int, 5> miContenedor;//Ejemplo de uso con un arreglo de enteros de tamaño 5


    miContenedor.establecer(0, 10);  //establecemos valores en el arreglo
    miContenedor.establecer(1, 20);
    miContenedor.establecer(2, 30);
    miContenedor.establecer(3, 40);
    miContenedor.establecer(4, 50);

 
    cout << "Contenido del arreglo: "; //Imprimir el contenido del arreglo
    miContenedor.imprimir();

   
    miContenedor.establecer(2, 35);  //Modificamos un valor del array


    cout << "Contenido del arreglo actualizado: ";
    miContenedor.imprimir(); // imprimimos el contenido actualizado

    cout << "Elemento en la posicion 3: " << miContenedor.obtener(3) << "\n"; // accedemos a un elemento especifico del arreglo

    return 0;
}
