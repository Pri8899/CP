# B. Good Kid
 
| Field | Value |
|---|---|
| **Contest** | [1873](https://codeforces.com/contest/1873) |
| **Problem** | [1873B — Good Kid](https://codeforces.com/contest/1873/problem/B) |
| **Rating** | 800 |
| **Tags** | brute force, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Slavic is preparing a present for a friend's birthday. He has an array `a` of `n` digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add `1` to exactly one of his digits. 

What is the maximum product Slavic can make?

## Input

The first line contains a single integer `t` ( `1 ≤ t ≤ 10⁴` ) — the number of test cases.

The first line of each test case contains a single integer `n` ( `1 ≤ n ≤ 9` ) — the number of digits.

The second line of each test case contains `n` space-separated integers `aᵢ` ( `0 ≤ aᵢ ≤ 9` ) — the digits in the array.

## Output

For each test case, output a single integer — the maximum product Slavic can make, by adding `1` to exactly one of his digits.

## Examples

**Example:**

```
4
4
2 2 1 2
3
0 1 2
5
4 3 2 3 4
9
9 9 9 9 9 9 9 9 9
```

**Output:**

```
16
2
432
430467210

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1873/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
