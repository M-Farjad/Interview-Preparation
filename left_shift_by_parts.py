def rotate_left(arr, d):
    n = len(arr)
    d = d % n  # In case d > n
    return arr[d:] + arr[:d]

# Example usage
arr = [1, 2, 3, 4, 5]
d = 2
print(rotate_left(arr, d))  # Output: [3, 4, 5, 1, 2]
