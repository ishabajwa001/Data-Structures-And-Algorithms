# Array Update Algorithm

## Explanation

**[Updating a Linear Array]**. Here, `LA` is a linear array. This algorithm updates the element at a specific index `LOC` with the new value `VALUE`.

## Algorithm

1. Start.
2. **[Update Element:]** Set `LA[LOC] := VALUE`.
3. Exit.

## C++ Implementation

- [update.cpp](./update.cpp)

## Time Complexity

- **Best Case:** `O(1)`
- **Average Case:** `O(1)`
- **Worst Case:** `O(1)`

## Space Complexity

- **O(1)** (Constant Space)

**Reason:** Updating an element at a known index requires a single direct memory access and uses no extra space other than the variables `LOC` and `VALUE`.