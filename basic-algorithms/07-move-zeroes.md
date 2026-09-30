## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a pointer to keep track of the position where the next non-zero element should be placed. I moved all non-zero elements to the front while keeping their original order, and the remaining positions became zero.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The array is modified in-place without using another array.