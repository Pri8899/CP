# A. Divide and Conquer
 
| Field | Value |
|---|---|
| **Contest** | [2241](https://codeforces.com/contest/2241) |
| **Problem** | [2241A — Divide and Conquer](https://codeforces.com/contest/2241/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two positive integers `x` and `y`.

You are allowed to perform the following operation any number of times (possibly zero): 

 - Choose any positive integer `z` such that `z` divides `x`;
- Set `x:= x/z`.

Determine whether you can make `x` exactly equal to `y` using this operation.

## Input

The first line of the input contains a single integer `t` ( `1 ≤ t ≤ 10⁴` ) — the number of test cases. The description of each test case follows.

The only line of each test case contains two space-separated integers `x` and `y` ( `1 ≤ x, y ≤ 100` ).

## Output

For each test case, print "`YES`" if you can make `x` exactly equal to `y` and "`NO`" otherwise.

You can output "`YES`" and "`NO`" in any case (for example, strings "`yEs`", "`yes`" and "`Yes`" will be recognized as a positive response).

## Examples

**Example:**

```
3
12 2
6 7
99 79
```

**Output:**

```
YES
NO
NO
```

## Note

For the first test case, 

 - Choosing `z = 2` makes `x = 12/2 = 6`
- Choosing `z = 3` makes `x = 6/3 = 2`

Thus, we can make `x = y`. Hence, output YES.

For the second test case, it can be shown that it is impossible to make `x` equal to `y`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2241/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
