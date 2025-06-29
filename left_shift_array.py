def left_shift(arr):
    if not arr:
        return arr
    first_element = arr[0]
    for i in range(len(arr) - 1):
        arr[i] = arr[i + 1]
    arr[-1] = first_element
    return arr

arr = list(map(int, input("Enter array elements: ").split()))
shifted_array = left_shift(arr)
print("Array after left shift:", shifted_array)