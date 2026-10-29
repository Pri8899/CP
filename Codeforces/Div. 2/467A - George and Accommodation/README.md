# A. George and Accommodation
 
| Field | Value |
|---|---|
| **Contest** | [467](https://codeforces.com/contest/467) |
| **Problem** | [467A — George and Accommodation](https://codeforces.com/contest/467/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory. 

George and Alex want to live in the same room. The dormitory has `n` rooms in total. At the moment the `i`-th room has `pᵢ` people living in it and the room can accommodate `qᵢ` people in total (`pᵢ ≤ qᵢ`). Your task is to count how many rooms has free place for both George and Alex.

## Input

The first line contains a single integer `n` `(1 ≤ n ≤ 100)` — the number of rooms.

The `i`-th of the next `n` lines contains two integers `pᵢ` and `qᵢ` `(0 ≤ pᵢ ≤ qᵢ ≤ 100)` — the number of people who already live in the `i`-th room and the room's capacity.

## Output

Print a single integer — the number of rooms where George and Alex can move in.

## Examples

**Example 1:**

```
3
1 1
2 2
3 3
```

**Output 1:**

```
0
```

**Example 2:**

```
3
1 10
0 10
10 10
```

**Output 2:**

```
2
```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/467/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
