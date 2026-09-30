## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far. For each price, I calculated the profit that could be made by selling on that day and updated the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices keep decreasing, the maximum profit remains 0.