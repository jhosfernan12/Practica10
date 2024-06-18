public class SelectionSort 
{

    public static <T extends Comparable<T>> void swap(T[] arr, int i, int j) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static <T> void printArray(T[] arr) 
    {
        for (T elem : arr) {
            System.out.print(elem + " ");
        }
        System.out.println();
    }

    public static <T extends Comparable<T>> void selectionSort(T[] arr) 
    {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j].compareTo(arr[min_index]) < 0) 
                {
                    min_index = j;
                }
            }
            if (min_index != i) {
                swap(arr, i, min_index);
                System.out.print("Paso " + (i + 1) + ": ");
                printArray(arr);
            }
        }
    }

    public static void main(String[] args) 
    {
        Integer[] arr = {64, 25, 12, 22, 11};

        System.out.print("Array original: ");
        printArray(arr);

        selectionSort(arr);

        System.out.print("\nArray ordenado: ");
        printArray(arr);
    }
}
