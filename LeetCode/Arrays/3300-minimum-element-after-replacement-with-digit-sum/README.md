# 3300. Minimum Element After Replacement With Digit Sum

> **Platform:** `LeetCode` | **Topic:** `Arrays` | **Difficulty:** `Easy` | **Languages:** `CPP` | [Problem Link](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/)

---

## Problem Statement

You are given an integer array `nums`.

You replace each element in `nums` with the **sum** of its digits.

Return the **minimum** element in `nums` after all replacements.

 

**Example 1:**

**Input:** nums = [10,12,13,14]

**Output:** 1

**Explanation:**

`nums` becomes `[1, 3, 4, 5]` after all replacements, with minimum element 1.

**Example 2:**

**Input:** nums = [1,2,3,4]

**Output:** 1

**Explanation:**

`nums` becomes `[1, 2, 3, 4]` after all replacements, with minimum element 1.

**Example 3:**

**Input:** nums = [999,19,199]

**Output:** 10

**Explanation:**

`nums` becomes `[27, 10, 19]` after all replacements, with minimum element 10.

 

**Constraints:**

* `1 <= nums.length <= 100`

* `1 <= nums[i] <= 10^4`

---

## Complexity Analysis

- **Time Complexity:** `O(N) — Linear scan through the input`
- **Space Complexity:** `O(N) — Auxiliary data structure storage`

---

## Solution

### CPP (`solution.cpp`)

```cpp
class Solution {
public:
    int minElement(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int sum = 0;
        while(a>0) {
            int digit = a % 10;
            sum = sum + digit;
            a = a/10;
        }
        return sum;
    }
};
```

---

*Synced automatically with [DSASync](https://github.com/tanmay9783/DSASync).*