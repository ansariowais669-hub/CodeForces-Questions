# A. Yes or Yes

## Problem Statement

You are given a string `s` consisting only of characters `Y` and `N`.

In one operation, you can choose any two adjacent characters and replace them with their logical OR:

- `Y` OR `Y` = `Y`
- `Y` OR `N` = `Y`
- `N` OR `N` = `N`

Each operation decreases the length of the string by 1.

Determine whether it is possible to reduce the string to a single character without ever combining two `Y` characters.

## Examples

**Example 1:**
```text
Input:
YY

Output:
NO
```

**Example 2:**
```text
Input:
NN

Output:
YES
```

**Example 3:**
```text
Input:
NNY

Output:
YES
```

**Example 4:**
```text
Input:
YYYNY

Output:
NO
```

**Example 5:**
```text
Input:
NNNNN

Output:
YES
```

**Example 6:**
```text
Input:
YYYYYY

Output:
NO
```

**Example 7:**
```text
Input:
YNNNNN

Output:
YES
```

## Constraints

- \(1 \leq t \leq 500\)
- \(2 \leq |s| \leq 100\)
- Each character of `s` is either `Y` or `N`.

## Approach

Determine whether the string can be reduced to a single character without combining two `Y` characters.

## Complexity Analysis

- **Time Complexity:** \(O(n)\) per test case.
- **Space Complexity:** \(O(1)\) auxiliary space.
