# Priority Queue implementation in Python

# Function to heapify the tree

def heapify(arr, n , i):
    # Find the largest among root, left child and right child
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r
    
    # Swap and continue heapifying if root is not largest

    if largest != i:
        arr[i], arr[largest] = arr[largest],arr[i]
        heapify(arr, n , largest)

    # Function to insert an element into the tree
    