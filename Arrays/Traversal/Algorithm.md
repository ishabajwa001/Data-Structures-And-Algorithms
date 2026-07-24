# Array Traversal Algorithm

## Explanation

**[Traversing a Linear Array]**. Here, `LA` is a linear array with lower bound `LB` and upper bound `UB`. This algorithm traverses `LA` by applying the operation `PROCESS` to each element of the array.

## Algorithm

1. **[Initialize Counter:]** Set `K := LB`.
2. Repeat **Steps 3 and 4** while `K <= UB`.
3. **[Visit Element:]** Apply `PROCESS` to `LA[K]`.
4. **[Increase Counter:]** Set `K := K + 1`.
   **[End of Step 2].**
5. Exit.

## C++ Implementation

- [traverse.cpp](./traverse.cpp)

## Time Complexity

- **Best Case:** `O(n)`
- **Average Case:** `O(n)`
- **Worst Case:** `O(n)`

## Space Complexity

- **O(1)** (Constant Space)

**Reason:** Only a few extra variables (`LB`, `UB`, and `K`) are used, irrespective of the array size.