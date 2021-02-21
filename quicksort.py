def quicksort(arr, l, r):
    if l >= r:
        return
    
    pivot = arr[r]
    i = l
    for j in range(l, r):
        if arr[j] < pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[i], arr[r] = arr[r], arr[i]

    quicksort(arr, l, i - 1)
    quicksort(arr, i + 1, r)

arr = [4, 1, 0, 2, 5, 3, 8, 9, 7, 6];
quicksort(arr, 0, len(arr) - 1)
print(arr)
