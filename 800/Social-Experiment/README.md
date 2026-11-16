# A. Social Experiment

## Problem Statement

There are `n` people participating in a social experiment.

The participants must form teams of 2 people each. Each team then chooses one of two civilizations to participate in.

Find the minimum possible difference between the number of people in the two civilizations.

## Examples

**Example 1:**
```text
Input:
2

Output:
2
```

**Example 2:**
```text
Input:
5

Output:
1
```

**Example 3:**
```text
Input:
12

Output:
0
```

## Constraints

- Multiple test cases are given.
- Each test case contains an integer `n`, representing the number of participants.

## Approach

Calculate the minimum possible difference between the number of people in the two civilizations while ensuring that every team consists of exactly 2 people.

## Complexity Analysis

- **Time Complexity:** \(O(1)\) per test case.
- **Space Complexity:** \(O(1)\) auxiliary space.
