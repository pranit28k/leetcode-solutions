## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, I checked whether it matches the most recently added opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The string is valid only when every opening bracket has the correct closing bracket and the stack is empty at the end.