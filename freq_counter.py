from collections import Counter

def top_two_frequent(arr):
    # Count frequencies
    freq = Counter(arr)
    
    # Get the 2 most common elements
    top_two = freq.most_common(2)
    
    return [top_two[0][0], top_two[1][0]]

# Example usage
arr = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
print(top_two_frequent(arr))  # Output: [4, 3]
