#include <iostream>

using namespace std;

template<typename T, size_t N> // intercambiamos elementos de un array
void swap(T (&arr)[N], int i, int j) 
{
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


template<typename T, size_t N> //imprimimos elementos de un array
void printArray(const T (&arr)[N])
{
    for (size_t i = 0; i < N; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


template<typename T, size_t N> //ordenam,os un array ascendentemente
void selectionSort(T (&arr)[N]) 
{
    for (size_t i = 0; i < N - 1; ++i) 
    {
        size_t min_index = i;
        for (size_t j = i + 1; j < N; ++j) 
        {
            if (arr[j] < arr[min_index]) 
            {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr, i, min_index);// Imprimimos el estado del array despues de cada intercambio
    
            cout << "Paso " << i + 1 << ": ";
            printArray(arr);
        }
    }
}

int main() 
{
    int arr[] = {64, 25, 12, 22, 11};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array original: ";
    printArray(arr);
    
    selectionSort(arr);  //Ordenar el array utilizando sort
    
    cout << "\nArray ordenado: ";
    printArray(arr);
    
    return 0;
}
