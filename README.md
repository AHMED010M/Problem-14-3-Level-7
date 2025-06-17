ج
```markdown
# 🧮 Scalar Matrix Checker (3x3)

This C++ program checks whether a 3x3 matrix is a **Scalar Matrix**.

## 🔍 What's a Scalar Matrix?

A Scalar Matrix is a special square matrix where:
- All diagonal elements are **equal**
- All non-diagonal elements are **0**

Example:
```

5 0 0
0 5 0
0 0 5

```

## 🧾 What This Program Does

- 🛠 Initializes a 3x3 matrix (you can hardcode or later randomize it)
- 🖨 Prints the matrix
- ✅ Checks whether it's a scalar matrix
- 📢 Outputs result: "YES: Matrix is Scalar" or "NO: Matrix is Not Scalar"

## 💡 Output Example

```

Matrix 1 :
05  00  00
00  05  00
00  00  05
YES: Matrix is Scalar.

````

## ⚙️ Tech Stack

- Language: **C++**
- Headers: `<iostream>`, `<iomanip>`, `<string>`, `<cstdlib>`

## 🧪 How to Run

```bash
g++ -o scalar_checker scalar_checker.cpp
./scalar_checker
````

