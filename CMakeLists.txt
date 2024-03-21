cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled "Binary Search (logn).cpp"
        "Jump search (n).cpp"
        "Merge sort (nlogn).cpp"
        "Bubble sort (n2).cpp"
        "Recursive Fibonacci (2n).cpp"
)
