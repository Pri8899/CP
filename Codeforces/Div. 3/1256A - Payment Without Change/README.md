# A. Payment Without Change
 
| Field | Value |
|---|---|
| **Contest** | [1256](https://codeforces.com/contest/1256) |
| **Problem** | [1256A — Payment Without Change](https://codeforces.com/contest/1256/problem/A) |
| **Rating** | 1000 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You have `a` coins of value `n` and `b` coins of value `1`. You always pay in exact change, so you want to know if there exist such `x` and `y` that if you take `x` ( `0 ≤ x ≤ a` ) coins of value `n` and `y` ( `0 ≤ y ≤ b` ) coins of value `1`, then the total value of taken coins will be `S`.

You have to answer `q` independent test cases.

## Input

The first line of the input contains one integer `q` ( `1 ≤ q ≤ 10⁴` ) — the number of test cases. Then `q` test cases follow.

The only line of the test case contains four integers `a`, `b`, `n` and `S` ( `1 ≤ a, b, n, S ≤ 10⁹` ) — the number of coins of value `n`, the number of coins of value `1`, the value `n` and the required total value.

## Output

For the `i` -th test case print the answer on it — `YES` (without quotes) if there exist such `x` and `y` that if you take `x` coins of value `n` and `y` coins of value `1`, then the total value of taken coins will be `S`, and `NO` otherwise.

You may print every letter in any case you want (so, for example, the strings `yEs`, `yes`, `Yes` and `YES` will all be recognized as positive answer).

## Examples

**Example:**

```
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18

```

**Output:**

```
YES
NO
NO
YES

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1256/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
