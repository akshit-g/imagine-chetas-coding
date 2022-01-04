import random

def insertionSort(A):
    for i in range(len(A)):
        j = i
        while (j > 0 and A[j - 1] > A[j]):
            A[j - 1], A[j] = A[j], A[j - 1]
            j = j - 1

ls = []

n = int(input("Enter number: "))
# print("Enter list: ")

# for i in range(n):
#     elt = int(input("Elt: "))
#     ls.append(elt)

ls = [random.randint(0, 15) for i in range(n)]
print("Unsorted list:\n", ls)

insertionSort(ls)

print("Sorted list:\n", ls)