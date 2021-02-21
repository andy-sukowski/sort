def bubblesort(arr):
    n = len(arr)
    swapped = True
    while (swapped):
        swapped = False
        for i in range(1, n):
            if arr[i - 1] > arr[i]:
                arr[i - 1], arr[i] = arr[i], arr[i - 1]
                swapped = True
        n -= 1

arr = [4, 1, 0, 2, 5, 3, 8, 9, 7, 6];
bubblesort(arr)
print(arr)
