def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

def print_array(arr):
    for elem in arr:
        print(elem, end=' ')
    print()

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        if min_index != i:
            swap(arr, i, min_index)
            print(f"Paso {i + 1}: ", end='')
            print_array(arr)


arr = [64, 25, 12, 22, 11]
    
print("Array original:", end=' ')
print_array(arr)
    
selection_sort(arr)
    
print("\nArray ordenado:", end=' ')
print_array(arr)

