# Factorial using Recursion in C

This project calculates the **factorial of a number** using **recursion** in the C programming language.

## 📌 What is Factorial?

The factorial of a non-negative integer `n` is written as:

```text
n!
```

and is calculated as:

```text
n! = n × (n - 1) × (n - 2) × ... × 1
```

For example:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

Also:

```text
0! = 1
1! = 1
```

## 🔄 Recursion

The function calls itself with a smaller value:

```c
return fact(a - 1) * a;
```

The stopping condition is:

```c
if (a == 1 || a == 0)
{
    return 1;
}
```

This prevents the function from calling itself indefinitely.

## 💻 Code

```c
#include <stdio.h>

int fact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }

    return fact(a - 1) * a;
}

int main()
{
    int a = 5;

    printf("%d!=%d\n", a, fact(a));

    return 0;
}
```

## ▶️ Output

```text
5!=120
```

## 🧠 How it works

For `fact(5)`:

```text
fact(5)
= 5 × fact(4)
= 5 × 4 × fact(3)
= 5 × 4 × 3 × fact(2)
= 5 × 4 × 3 × 2 × fact(1)
= 5 × 4 × 3 × 2 × 1
= 120
```

## 📚 Concepts Used

- C programming
- Functions
- Recursion
- Conditional statements
- Return values
- Factorial

## ▶️ How to Compile and Run

### Compile:

```bash
gcc fact.c -o fact
```

### Run:

```bash
./fact
```

---

## 📁 File Structure

```
fact.c      # Main source code
README.md   # Documentation
```

---

## 👨‍💻 Author

- AOUAMEUR RIADH

---
