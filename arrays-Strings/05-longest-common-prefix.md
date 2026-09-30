## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the first string with the corresponding characters of the other strings. I stopped when the characters were different or when the end of a string was reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common prefix among the strings, the result is an empty string.