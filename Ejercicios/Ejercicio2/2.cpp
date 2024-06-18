#include <iostream>

using namespace std;


template<typename T, size_t N> //Plantilla para ordenamiento
class Ordenamiento 
{
public:
 
    void swap(T (&arr)[N], int i, int j) //intercambiamos elementos del array
    {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

  
    void printArray(const T (&arr)[N]) //imprimimos elementos del array
    {
        for (size_t i = 0; i < N; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }


    void selectionSort(T (&arr)[N]) //ordenamos de manera ascendente
    {
        for (size_t i = 0; i < N - 1; ++i) {
            size_t min_index = i;
            for (size_t j = i + 1; j < N; ++j) 
            {
                if (arr[j] < arr[min_index]) 
                {
                    min_index = j;
                }
            }
            if (min_index != i) 
            {
                swap(arr, i, min_index);// Imprimimos el estado del array despues de cada intercambio
                cout << "Paso " << i + 1 << ": ";
                printArray(arr);
            }
        }
    }
};

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    Ordenamiento<int, 5> sorter; // Creamos una instancia del objeto Ordenamiento para tipo int y tamaño 5
    
    cout << "Array original: ";
    sorter.printArray(arr);
    
    sorter.selectionSort(arr); //Ordenar el array utilizando sort
    
    cout << "\nArray ordenado: ";
    sorter.printArray(arr);
    
    return 0;
}
