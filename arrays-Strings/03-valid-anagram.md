## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used an array of 26 characters to count the frequency of each lowercase letter. I increased the count for characters in the first string and decreased it for characters in the second string.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings must have the same length and the frequency of every character must match.