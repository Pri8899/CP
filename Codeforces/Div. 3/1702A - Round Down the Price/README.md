# A. Round Down the Price
 
| Field | Value |
|---|---|
| **Contest** | [1702](https://codeforces.com/contest/1702) |
| **Problem** | [1702A — Round Down the Price](https://codeforces.com/contest/1702/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

At the store, the salespeople want to make all prices *round*. 

In this problem, a number that is a power of `10` is called a *round* number. For example, the numbers `10⁰ = 1`, `10¹ = 10`, `10² = 100` are *round* numbers, but `20`, `110` and `256` are not *round* numbers. 

So, if an item is worth `m` bourles (the value of the item is not greater than `10⁹`), the sellers want to change its value to the nearest *round* number that is not greater than `m`. They ask you: by how many bourles should you **decrease** the value of the item to make it worth exactly `10ᵏ` bourles, where the value of `k` — is the maximum possible (`k` — any non-negative integer).

For example, let the item have a value of `178`-bourles. Then the new price of the item will be `100`, and the answer will be `178-100=78`.

## Input

The first line of input data contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases .

Each test case is a string containing a single integer `m` (`1 ≤ m ≤ 10⁹`) — the price of the item.

## Output

For each test case, output on a separate line a single integer `d` (`0 ≤ d < m`) such that if you reduce the cost of the item by `d` bourles, the cost of the item will be the maximal possible *round* number. More formally: `m - d = 10ᵏ`, where `k` — the maximum possible non-negative integer.

## Examples

**Example:**

```
7
1
2
178
20
999999999
9000
987654321
```

**Output:**

```
0
1
78
10
899999999
8000
887654321
```

## Note

In the example:

 - `1 - 0 = 10⁰`,
- `2 - 1 = 10⁰`,
- `178 - 78 = 10²`,
- `20 - 10 = 10¹`,
- `999999999 - 899999999 = 10⁸`,
- `9000 - 8000 = 10³`,
- `987654321 - 887654321 = 10⁸`.

Note that in each test case, we get the maximum possible *round* number.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1702/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
