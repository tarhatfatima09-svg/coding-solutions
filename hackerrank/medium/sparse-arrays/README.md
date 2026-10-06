# Sparse Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results. 

**Example**  

$stringList = ['ab','ab','abc']$  
$queries = ['ab','abc','bc']$  

There are $2$ instances of '$ab$', $1$ of '$abc$', and $0$ of '$bc$'. For each query, add an element to the return array: $results = [2, 1, 0]$.

**Function Description**

Complete the function $matchingStrings$ with the following parameters:

-  $string\ stringList[n]$: an array of strings to search  
-  $string\ queries[q]$: an array of query strings  

**Returns**  

- $int[q]$: the results of each query  

**Input Format**

The first line contains and integer $n$, the size of $stringList[]$.  
Each of the next $n$ lines contains a string $stringList[i]$.  
The next line contains $q$, the size of $queries[]$.  
Each of the next $q$ lines contains a string $queries[i]$.  

**Constraints**

$1 \leq n \leq 1000$  
$1 \leq q \leq 1000$  
$1 \leq |stringList[i]|,|queries[i]| \leq 20$ . 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T15:37:04.131Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freq;

    for (string s : stringList)
        freq[s]++;

    vector<int> result;

    for (string q : queries)
        result.push_back(freq[q]);

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> stringList(n);

    for (int i = 0; i < n; i++)
        cin >> stringList[i];

    int q;
    cin >> q;

    vector<string> queries(q);

    for (int i = 0; i < q; i++)
        cin >> queries[i];

    vector<int> result = matchingStrings(stringList, queries);

    for (int x : result)
        cout << x << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sparse-arrays/problem)