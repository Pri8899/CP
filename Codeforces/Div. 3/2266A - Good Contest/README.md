# A. Good Contest
 
| Field | Value |
|---|---|
| **Contest** | [2266](https://codeforces.com/contest/2266) |
| **Problem** | [2266A — Good Contest](https://codeforces.com/contest/2266/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

The next programming contest has three problems and `n` participants.

Problem `1` is easy, problem `2` is medium, and problem `3` is hard.

A participant is called *weak* if they did not solve all three problems.

Unfortunately, the scoreboard was lost. The only remaining information is an array `a` of length `3`, where `aᵢ` is the number of participants who solved problem `i`.

Among all scoreboards consistent with this information, find the minimum possible number of weak participants.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 3000`) — the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 9`) — the number of participants.

The second line of each test case contains three integers `a₁, a₂, a₃` (`0 ≤ aᵢ ≤ n`), where `aᵢ` is the number of participants who solved problem `i`.

## Output

For each test case, print a single integer — the minimum possible number of weak participants.

## Examples

**Example:**

```
6
3
3 3 3
4
4 4 3
1
1 1 1
9
9 8 9
5
0 5 5
6
4 3 2
```

**Output:**

```
0
1
0
1
5
4
```

## Note

In the first test case, all `3` participants can have solved all three problems, so the answer is `0`.

In the second test case, participant `1` could have solved only problems `1` and `2`, while participants `2`, `3`, and `4` solved all three problems. Therefore, participant `1` is the only participant who is weak, so the answer is `1`. It can be shown that this is minimal.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2266/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
