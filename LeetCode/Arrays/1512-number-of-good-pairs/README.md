# 1512. Number of Good Pairs

> **Platform:** `LeetCode` | **Topic:** `Arrays` | **Difficulty:** `Easy` | **Languages:** `CPP` | [Problem Link](https://leetcode.com/problems/number-of-good-pairs/submissions/2192040899/)

---

## Problem Statement

Given an array of integers `nums`, return *the number of **good pairs***.

A pair `(i, j)` is called *good* if `nums[i] == nums[j]` and `i` < `j`.

 

**Example 1:**

```
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
```

**Example 2:**

```
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
```

**Example 3:**

```
Input: nums = [1,2,3]
Output: 0
```

 

**Constraints:**

* `1 <= nums.length <= 100`

* `1 <= nums[i] <= 100`

---

## Complexity Analysis

- **Time Complexity:** `O(N²) — Nested loop traversal`
- **Space Complexity:** `O(N) — Auxiliary data structure storage`

---

## Solution

### CPP (`solution.cpp`)

```cpp
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j] && i<j)
                count++;
            }
        }
        return count;
    }
};
```

---

*Synced automatically with [DSASync](https://github.com/tanmay9783/DSASync).*