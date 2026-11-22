# B. Laura and Operations

## Problem Statement
Given three integers `a`, `b`, and `c`, representing the number of digits `1`, `2`, and `3` respectively, determine which digit types can remain on the board after performing zero or more operations.

In one operation:
- Select two **different digits** and erase them.
- Write the third digit (the one different from both erased digits).

For each test case, determine whether it is possible to make all remaining digits identical to:
- `1`
- `2`
- `3`

Print `1` if possible and `0` otherwise, in the respective order.

## Examples

**Example 1:**
```text
Input:
1
1 1 1

Output:
1 1 1
```

**Example 2:**
```text
Input:
1
2 3 2

Output:
0 1 0
```

**Example 3:**
```text
Input:
1
82 47 59

Output:
1 0 0
```
