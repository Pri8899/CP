# A. Holiday Of Equality
 
| Field | Value |
|---|---|
| **Contest** | [758](https://codeforces.com/contest/758) |
| **Problem** | [758A — Holiday Of Equality](https://codeforces.com/contest/758/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland by the expense of the state treasury. 

Totally in Berland there are `n` citizens, the welfare of each of them is estimated as the integer in `aᵢ` burles (burle is the currency in Berland).

You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. The king can only give money, he hasn't a power to take away them.

## Input

The first line contains the integer `n` ( `1 ≤ n ≤ 100` ) — the number of citizens in the kingdom.

The second line contains `n` integers `a₁, a₂,..., aₙ`, where `aᵢ` ( `0 ≤ aᵢ ≤ 10⁶` ) — the welfare of the `i` -th citizen.

## Output

In the only line print the integer `S`  — the minimum number of burles which are had to spend.

## Examples

**Example 1:**

```
5
0 1 2 3 4

```

**Output 1:**

```
10
```

**Example 2:**

```
5
1 1 0 1 1

```

**Output 2:**

```
1
```

**Example 3:**

```
3
1 3 1

```

**Output 3:**

```
4
```

**Example 4:**

```
1
12

```

**Output 4:**

```
0
```

## Note

In the first example if we add to the first citizen `4` burles, to the second `3`, to the third `2` and to the fourth `1`, then the welfare of all citizens will equal `4`.

In the second example it is enough to give one burle to the third citizen. 

In the third example it is necessary to give two burles to the first and the third citizens to make the welfare of citizens equal `3`.

In the fourth example it is possible to give nothing to everyone because all citizens have `12` burles.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/758/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
