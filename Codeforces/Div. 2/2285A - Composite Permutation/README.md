# A. Composite Permutation
 
| Field | Value |
|---|---|
| **Contest** | [2285](https://codeforces.com/contest/2285) |
| **Problem** | [2285A — Composite Permutation](https://codeforces.com/contest/2285/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an integer `n`. Construct a permutation `∗` `p` of length `n` such that `i · pᵢ` is composite<sup>†</sup> for every `1 ≤ i ≤ n`, or determine that no such permutation exists.

 `∗` A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation ( `2` appears twice in the array), and `[1,3,4]` is also not a permutation ( `n=3` but there is `4` in the array).

<sup>†</sup>A positive integer `x` is composite if it has at least one other divisor besides `1` and `x`. For example, `6` is composite because `2` is a divisor of it, while `1` and `5` are not.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` ( `1 ≤ t ≤ 100` ). The description of the test cases follows.

The only line of each test case contains a single integer `n` ( `1 ≤ n ≤ 100` ).

## Output

For each test case, if no suitable permutation exists, print a single integer `-1`.

Otherwise, print `n` integers `p₁, p₂, …, pₙ` representing a suitable permutation.

If there are multiple solutions, print any of them.

## Examples

**Example:**

```
3
1
4
5
```

**Output:**

```
-1
4 3 2 1
4 5 3 1 2
```

## Note

In the first test case, it can be shown that no suitable permutation exists.

In the second test case, the values of `i· pᵢ` are `4`, `6`, `6`, and `4`, respectively, which are all composite.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2285/problem/A#)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
