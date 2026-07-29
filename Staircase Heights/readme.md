# 🪜 Staircase Heights

## 📄 Problem Description

You are building a staircase. Each step has a **difficulty rating**. Assign the minimum number of blocks to each step such that:

- Every step gets **at least 1 block**
- If step `i` is **harder** than its **left neighbor**, it must have **strictly more blocks** than the left neighbor
- If step `i` is **harder** than its **right neighbor**, it must have **strictly more blocks** than the right neighbor

Return the **minimum total blocks** needed.

---

## 🧩 Function Signature

```cpp
int minBlocks(vector<int>& difficulty)
```

---

## 📌 Constraints

- `1 <= difficulty.length <= 2 * 10^4`
- `0 <= difficulty[i] <= 2 * 10^4`

---

## 💡 Examples

### Example 1
```
Input:  difficulty = [3, 1, 2, 4, 2]
Output: 11

difficulty = [3,  1,  2,  4,  2]
blocks     = [2,  1,  2,  3,  1]  →  sum = 11
```

### Example 2
```
Input:  difficulty = [1, 0, 2]
Output: 5

difficulty = [1,  0,  2]
blocks     = [2,  1,  2]  →  sum = 5
```

### Example 3
```
Input:  difficulty = [1, 2, 2]
Output: 4

difficulty = [1,  2,  2]
blocks     = [1,  2,  1]  →  sum = 4
```

### Example 4
```
Input:  difficulty = [1]
Output: 1

Only one step, gets the minimum 1 block.
```

---

## ✅ Test Cases

| # | Input | Output | Type |
|---|---|---|---|
| 1 | `[3, 1, 2, 4, 2]` | `11` | General |
| 2 | `[1, 0, 2]` | `5` | Valley |
| 3 | `[1, 2, 2]` | `4` | Equal adjacent |
| 4 | `[1]` | `1` | Single element |
| 5 | `[1, 2, 3, 4, 5]` | `15` | Strictly increasing |
| 6 | `[5, 4, 3, 2, 1]` | `15` | Strictly decreasing |
| 7 | `[1, 3, 2, 2, 1]` | `9` | Peak in middle |
| 8 | `[0, 0, 0, 0]` | `4` | All equal |
