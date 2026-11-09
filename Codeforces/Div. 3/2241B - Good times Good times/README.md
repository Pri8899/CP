# B. Good times Good times
 
| Field | Value |
|---|---|
| **Contest** | [2241](https://codeforces.com/contest/2241) |
| **Problem** | [2241B — Good times Good times](https://codeforces.com/contest/2241/problem/B) |
| **Rating** | 1100 |
| **Tags** | constructive algorithms, dfs and similar, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

An integer `n` is said to be *good* if it contains **at most** two distinct digits in its decimal representation. For example, the integers `3`, `8588`, `67` are good, whereas the integers `123`, `9447` are not. 

You are given an integer `x` ( `1 ≤ x < 10⁸` ), which is good. Your task is to find an integer `y` ( `2 ≤ y ≤ 10⁹` ) such that both of the following conditions are satisfied: 

 - `y` is good.
- `x × y` is good.

## Input

The first line contains an integer `t` ( `1 ≤ t ≤ 10⁴` ) — the number of test cases. The description of each test case follows. 

Each test case contains a single integer `x` ( `1 ≤ x < 10⁸` ). **It is guaranteed that `x` is good.**

## Output

For each test case, print a single integer `y` ( `2 ≤ y ≤ 10⁹` ) such that both the integers `y` and `x × y` are good.

If there are multiple valid answers, output any one of them.

## Examples

**Example:**

```
4
8
73
299
6767
```

**Output:**

```
11
4
26
3366
```

## Note

For the first test case, we have `x = 8`; choosing `y = 11` is valid because both `y = 11` and `x × y = 88` are good.

For the second test case, we have `x = 73`; choosing `y = 4` is valid because both `y = 4` and `x × y = 292` are good.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2241/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
