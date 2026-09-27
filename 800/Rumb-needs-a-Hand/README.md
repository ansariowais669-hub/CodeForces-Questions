# A. Rumb Needs a Hand

## Problem Statement

Mr. Rumb visits a prosthetist because his arms have gone numb. The prosthetist can assemble replacement arms, but the numbered components are out of order.

You are given a **permutation** `p` of length `n`.

Mr. Rumb can perform the following operation **exactly once**:

1. Choose an integer `m` such that `1 ≤ m ≤ n`.

2. Choose indices:

   `i₁ < i₂ < ... < iₘ`

3. Reverse the elements of `p` at the selected indices.

More precisely, for every `j` from `1` to `m`, the element currently at index `iⱼ` moves to index `iₘ₋ⱼ₊₁`.

All elements at unselected indices remain unchanged.

The selected indices **do not need to be consecutive**.

### Example

Suppose:

```text
p = [1, 6, 3, 4, 5, 2]
```

If we choose indices:

```text
2, 4, 6
```

then the selected elements are:

```text
[6, 4, 2]
```

Reversing them gives:

```text
[2, 4, 6]
```

Therefore, the resulting permutation becomes:

```text
[1, 2, 3, 4, 5, 6]
```

Determine whether it is possible to sort `p` in increasing order by performing the operation **exactly once**.

---

## Definition: Permutation

A permutation of length `n` is an array containing every integer from `1` to `n` exactly once.

For example:

```text
[2, 3, 1, 5, 4]
```

is a valid permutation of length `5`.

However:

```text
[1, 2, 2]
```

is not a permutation because `2` appears twice.

Similarly:

```text
[1, 3, 4]
```

is not a permutation of length `3` because it contains `4`.

---

## Input

The first line contains a single integer `t` — the number of test cases.

For each test case:

* The first line contains an integer `n` — the length of the permutation.
* The second line contains `n` integers `p₁, p₂, ..., pₙ` — the permutation.

### Constraints

```text
1 ≤ t ≤ 500
1 ≤ n ≤ 100
p is a permutation of {1, 2, ..., n}
```

---

## Output

For each test case, print:

* `YES` if the permutation can be sorted using exactly one operation.
* `NO` otherwise.

The answer is case-insensitive.

For example, all of the following are accepted:

```text
YES
yes
Yes
yEs
```

---

## Examples

### Example 1

**Input:**

```text
1
1
```

**Output:**

```text
YES
```

**Explanation:**

Choose the only index.

Reversing a single element does not change the permutation, so the requirement of performing exactly one operation is satisfied.

---

### Example 2

**Input:**

```text
1
4
4 2 3 1
```

**Output:**

```text
YES
```

**Explanation:**

Choose indices `1` and `4`.

The selected elements are:

```text
[4, 1]
```

After reversing them:

```text
[1, 4]
```

The permutation becomes:

```text
[1, 2, 3, 4]
```

---

### Example 3

**Input:**

```text
1
4
3 4 1 2
```

**Output:**

```text
NO
```

It is not possible to sort the permutation using one allowed reversal operation.

---

### Example 4

**Input:**

```text
1
5
2 1 3 5 4
```

**Output:**

```text
NO
```

The permutation cannot be sorted using exactly one allowed operation.

---

### Example 5

**Input:**

```text
1
6
1 6 3 4 5 2
```

**Output:**

```text
YES
```

**Explanation:**

Choose indices:

```text
2, 4, 6
```

The selected elements are:

```text
[6, 4, 2]
```

After reversing them:

```text
[2, 4, 6]
```

The resulting permutation is:

```text
[1, 2, 3, 4, 5, 6]
```

---

## Sample Input

```text
5
1
1
4
4 2 3 1
4
3 4 1 2
5
2 1 3 5 4
6
1 6 3 4 5 2
```

## Sample Output

```text
YES
YES
NO
NO
YES
```

---

## Key Observation

The operation only reverses the elements at the selected indices. Therefore, for the permutation to become sorted, the elements that are currently out of order must be correctable by reversing their relative order while all other elements remain unchanged.

The selected indices can be **non-consecutive**, which is an important property of this operation.

---

## Complexity

For `n ≤ 100`, a direct approach is sufficient.

```text
Time Complexity: O(n²)
Space Complexity: O(n)
```
