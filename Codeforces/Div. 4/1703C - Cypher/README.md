# C. Cypher
 
| Field | Value |
|---|---|
| **Contest** | [1703](https://codeforces.com/contest/1703) |
| **Problem** | [1703C — Cypher](https://codeforces.com/contest/1703/problem/C) |
| **Rating** | 800 |
| **Tags** | brute force, implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Luca has a cypher made up of a sequence of `n` wheels, each with a digit `aᵢ` written on it. On the `i`-th wheel, he made `bᵢ` moves. Each move is one of two types: 

 - *up* move (denoted by `U`): it increases the `i`-th digit by `1`. After applying the up move on `9`, it becomes `0`.
- *down* move (denoted by `D`): it decreases the `i`-th digit by `1`. After applying the down move on `0`, it becomes `9`.

 ![](https://espresso.codeforces.com/e7d600f11c24d38409dbc43e8440155462dbb127.png)   Example for `n=4`. The current sequence is `0 0 0 0`. Luca knows the final sequence of wheels and the moves for each wheel. Help him find the original sequence and crack the cypher.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of test cases.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the number of wheels.

The second line contains `n` integers `aᵢ` (`0 ≤ aᵢ ≤ 9`) — the digit shown on the `i`-th wheel after all moves have been performed.

Then `n` lines follow, the `i`-th of which contains the integer `bᵢ` (`1 ≤ bᵢ ≤ 10`) and `bᵢ` characters that are either `U` or `D` — the number of moves performed on the `i`-th wheel, and the moves performed. `U` and `D` represent an *up* move and a *down* move respectively.

## Output

For each test case, output `n` space-separated digits  — the initial sequence of the cypher.

## Examples

**Example:**

```
3
3
9 3 1
3 DDD
4 UDUU
2 DU
2
0 9
9 DDDDDDDDD
9 UUUUUUUUU
5
0 5 9 8 3
10 UUUUUUUUUU
3 UUD
8 UUDUUDDD
10 UUDUUDUDDU
4 UUUU
```

**Output:**

```
2 1 1 
9 0 
0 4 9 6 9
```

## Note

In the first test case, we can prove that initial sequence was `[2,1,1]`. In that case, the following moves were performed: 

 - On the first wheel: `2 xrightarrow[D] 1 xrightarrow[D] 0 xrightarrow[D] 9`.
- On the second wheel: `1 xrightarrow[U] 2 xrightarrow[D] 1 xrightarrow[U] 2 xrightarrow[U] 3`.
- On the third wheel: `1 xrightarrow[D] 0 xrightarrow[U] 1`.

 The final sequence was `[9,3,1]`, which matches the input.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1703/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
