# A. Roma and Lucky Numbers
 
| Field | Value |
|---|---|
| **Contest** | [262](https://codeforces.com/contest/262) |
| **Problem** | [262A — Roma and Lucky Numbers](https://codeforces.com/contest/262/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Roma (a popular Russian name that means 'Roman') loves the Little Lvov Elephant's lucky numbers.

Let us remind you that lucky numbers are positive integers whose decimal representation only contains lucky digits `4` and `7`. For example, numbers `47`, `744`, `4` are lucky and `5`, `17`, `467` are not.

Roma's got `n` positive integers. He wonders, how many of those integers have not more than `k` lucky digits? Help him, write the program that solves the problem.

## Input

The first line contains two integers `n`, `k` `(1 ≤ n, k ≤ 100)`. The second line contains `n` integers `aᵢ` `(1 ≤ aᵢ ≤ 10⁹)` — the numbers that Roma has. 

The numbers in the lines are separated by single spaces.

## Output

In a single line print a single integer — the answer to the problem.

## Examples

**Example 1:**

```
3 4
1 2 4
```

**Output 1:**

```
3
```

**Example 2:**

```
3 2
447 44 77
```

**Output 2:**

```
2
```

## Note

In the first sample all numbers contain at most four lucky digits, so the answer is `3`.

In the second sample number `447` doesn't fit in, as it contains more than two lucky digits. All other numbers are fine, so the answer is `2`.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/262/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
