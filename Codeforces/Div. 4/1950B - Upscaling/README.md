# B. Upscaling
 
| Field | Value |
|---|---|
| **Contest** | [1950](https://codeforces.com/contest/1950) |
| **Problem** | [1950B — Upscaling](https://codeforces.com/contest/1950/problem/B) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an integer `n`. Output a `2n × 2n` checkerboard made of `2 × 2` squares alternating '`#`' and '`.`', with the top-left cell being '`#`'. 

 ![](https://espresso.codeforces.com/a63e1ab3fc712af5616d451c7ac0ba0903f34f1b.png)The picture above shows the answers for `n=1,2,3,4`.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 20`) — the number of test cases.

The only line of each test case contains a single integer `n` (`1 ≤ n ≤ 20`) — it means you need to output a checkerboard of side length `2n`.

## Output

For each test case, output `2n` lines, each containing `2n` characters without spaces — the checkerboard, as described in the statement. Do **not** output empty lines between test cases.

## Examples

**Example:**

```
4
1
2
3
4
```

**Output:**

```
##
##
##..
##..
..##
..##
##..##
##..##
..##..
..##..
##..##
##..##
##..##..
##..##..
..##..##
..##..##
##..##..
##..##..
..##..##
..##..##
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1950/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
