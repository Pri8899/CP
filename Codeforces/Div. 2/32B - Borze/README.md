# B. Borze
 
| Field | Value |
|---|---|
| **Contest** | [32](https://codeforces.com/contest/32) |
| **Problem** | [32B — Borze](https://codeforces.com/contest/32/problem/B) |
| **Rating** | 800 |
| **Tags** | expression parsing, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 92 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as `«.»`, 1 as `«-.»` and 2 as `«--»`. You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

## Input

The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

## Output

Output the decoded ternary number. It can have leading zeroes.

## Examples

**Example 1:**

```
.-.--
```

**Output 1:**

```
012
```

**Example 2:**

```
--.
```

**Output 2:**

```
20
```

**Example 3:**

```
-..-.--
```

**Output 3:**

```
1012
```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/32/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
