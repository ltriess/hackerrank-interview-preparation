#!/bin/python3

# Example 1:
#     Input:
#         4
#         4 3 1 2
#     Output:
#         3
    
# Example 2:
#     Input:
#         5
#         2 3 4 1 5
#     Output:
#         3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    swaps = 0
    finished = False
    
    while not finished:
        static = True
    
        for idx, elem in enumerate(arr):
            if elem == idx + 1:
                continue
            else:
                arr[idx] = arr[elem - 1]
                arr[elem - 1] = elem
                swaps += 1
                static = False
        
        finished = static
    
    return swaps


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
