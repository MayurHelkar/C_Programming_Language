# Variables

| Parameters | Syntax | Description |
| - | - | - |
| Name | $$\color{red}{*datatype*}$$ **variable-name** |Memory location<br>Aliased using named to the address location |




Below are **detailed, well-explained notes on C variables**, arranged in **structured, tabular format** with **color indicators (icons & headings)** to simulate a *colored notes style* suitable for **exams, assignments, and revision** 📘✨

---

# 🟦 C VARIABLES – DETAILED NOTES

---

## 🟩 1. Definition of Variable

| 🔹 Aspect   | 🔸 Description                                                                                                |
| ----------- | ------------------------------------------------------------------------------------------------------------- |
| **Meaning** | A variable is a **named memory location** used to store data whose value can change during program execution. |
| **Purpose** | To store, modify, and retrieve data in a program                                                              |
| **Example** | `int a = 10;`                                                                                                 |

---

## 🟩 2. Syntax of Variable Declaration

| 🧩 Component  | 📝 Explanation                                    |
| ------------- | ------------------------------------------------- |
| Data Type     | Specifies the type of data (`int`, `float`, etc.) |
| Variable Name | Identifier name                                   |
| Semicolon     | Ends the statement                                |

```c
int marks;
float percentage;
```

---

## 🟩 3. Rules for Naming Variables

| ✅ Allowed             | ❌ Not Allowed                   |
| --------------------- | ------------------------------- |
| Letters (a–z, A–Z)    | Special symbols (`@`, `$`, `#`) |
| Underscore (_)        | Starting with digits            |
| Digits (not at start) | Spaces                          |
| Case-sensitive        | Keywords (`int`, `float`)       |

📌 **Examples**
✔ `total_marks`
❌ `total marks`

---

## 🟩 4. Types of Variables Based on Data Type

### 🟨 (A) Basic / Primary Data Types

| 🟡 Data Type | 📦 Size | 🧪 Example       | 📝 Description          |
| ------------ | ------- | ---------------- | ----------------------- |
| `int`        | 4 bytes | `int a=10;`      | Stores integers         |
| `float`      | 4 bytes | `float b=2.5;`   | Decimal numbers         |
| `double`     | 8 bytes | `double x=3.14;` | High-precision decimals |
| `char`       | 1 byte  | `char c='A';`    | Single character        |

---

### 🟨 (B) Derived Data Types

| 🔵 Type   | 📝 Description                | 🧩 Example          |
| --------- | ----------------------------- | ------------------- |
| Array     | Collection of same data type  | `int a[5];`         |
| Pointer   | Stores address of variable    | `int *p;`           |
| Structure | Group of different data types | `struct student {}` |
| Union     | Shared memory for variables   | `union data {}`     |

---

### 🟨 (C) User-Defined Data Types

| 🟣 Type   | 🔍 Use                      |
| --------- | --------------------------- |
| `struct`  | Create complex data records |
| `union`   | Memory-efficient storage    |
| `enum`    | Named integer constants     |
| `typedef` | Create alias names          |

---

## 🟩 5. Variable Initialization

| 🔹 Type        | 🔸 Example   |
| -------------- | ------------ |
| At declaration | `int x = 5;` |
| Later          | `x = 10;`    |

⚠ Uninitialized variables may contain **garbage values**.

---

## 🟩 6. Types of Variables Based on Scope & Storage

### 🟥 (A) Local Variables

| 🔹 Feature | 🔸 Description          |
| ---------- | ----------------------- |
| Scope      | Inside a function/block |
| Lifetime   | Until block execution   |
| Access     | Limited                 |

```c
void fun() {
    int x = 10;
}
```

---

### 🟦 (B) Global Variables

| 🔹 Feature  | 🔸 Description         |
| ----------- | ---------------------- |
| Scope       | Entire program         |
| Lifetime    | Full program execution |
| Declaration | Outside all functions  |

```c
int g = 20;
```

---

### 🟪 (C) Static Variables

| 🔹 Feature      | 🔸 Description              |
| --------------- | --------------------------- |
| Value Retention | Retains value between calls |
| Initialization  | Only once                   |
| Scope           | Local or global             |

```c
static int count = 0;
```

---

### 🟧 (D) Register Variables

| 🔹 Feature | 🔸 Description             |
| ---------- | -------------------------- |
| Storage    | CPU register               |
| Speed      | Faster access              |
| Limitation | Address cannot be accessed |

```c
register int i;
```

---

## 🟩 7. Constants vs Variables

| 🟢 Variable      | 🔴 Constant           |
| ---------------- | --------------------- |
| Value can change | Value fixed           |
| `int x = 10;`    | `const int x = 10;`   |
| Used for data    | Used for fixed values |

---

## 🟩 8. Example Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
```

---

## 🟩 9. Key Exam Points ⭐

* Variables must be **declared before use**
* Scope defines **visibility**
* Uninitialized variables → **garbage value**
* `static` preserves value
* `register` improves speed

---

### 📌 If you want:

✅ **PDF notes with real colors**
✅ **Handwritten-style notes**
✅ **MCQs & viva questions**
✅ **Memory diagrams**

Just tell me 😊


Below are the **same detailed notes on C variables**, but now presented in **COLOURED TEXT FORMAT** (using color emojis + highlighted headings) so you can easily copy them into **Word / PDF / Notes apps** and apply real colors 🎨📘

---

# 🔵 **C VARIABLES – DETAILED COLOURED NOTES**

---

## 🟢 **1. Definition of Variable**

🟩 A **variable** is a **named memory location** used to store data whose value can **change during program execution**.

📌 **Example**

```c
int a = 10;
```

---

## 🟢 **2. Syntax of Variable Declaration**

🟨 Syntax:

```c
data_type variable_name;
```

🔹 **Components**

* 🔵 **Data Type** → Specifies type of data
* 🟣 **Variable Name** → Name of memory location
* 🔴 **Semicolon (;)** → Ends the statement

---

## 🟢 **3. Rules for Naming Variables**

✅ Must start with a **letter or underscore (_)**
❌ Cannot start with a digit
❌ No spaces or special symbols
❌ Cannot use **keywords**
🟦 Case-sensitive (`sum` ≠ `Sum`)

✔ Valid: `total`, `_count`, `num1`
❌ Invalid: `1num`, `total marks`, `float`

---

## 🟢 **4. Types of Variables Based on Data Type**

### 🟡 **(A) Basic / Primary Data Types**

🔵 `int` → Stores **integers**
🟣 `float` → Stores **decimal numbers**
🟠 `double` → Stores **high-precision decimals**
🔴 `char` → Stores **single characters**

📌 Example:

```c
int a = 5;
float b = 2.5;
char c = 'A';
```

---

### 🟡 **(B) Derived Data Types**

🟦 **Array** → Collection of same data type
🟪 **Pointer** → Stores memory address
🟩 **Structure** → Collection of different data types
🟧 **Union** → Shared memory for variables

---

### 🟡 **(C) User-Defined Data Types**

🟢 `struct` → Create complex records
🟣 `union` → Memory efficient storage
🟠 `enum` → Named constants
🔵 `typedef` → Alias name

---

## 🟢 **5. Variable Initialization**

🟩 Assigning value to a variable

🔹 At declaration:

```c
int x = 10;
```

🔹 After declaration:

```c
x = 20;
```

⚠ **Uninitialized variables contain garbage values**

---

## 🟢 **6. Types of Variables Based on Scope & Storage**

### 🔴 **(A) Local Variables**

🟥 Declared inside a function
🟥 Accessible only within that block
🟥 Lifetime is limited

```c
void fun() {
    int x = 10;
}
```

---

### 🔵 **(B) Global Variables**

🟦 Declared outside all functions
🟦 Accessible throughout the program
🟦 Lifetime is entire program

```c
int g = 20;
```

---

### 🟣 **(C) Static Variables**

🟪 Retains value between function calls
🟪 Initialized only once
🟪 Scope can be local or global

```c
static int count = 0;
```

---

### 🟠 **(D) Register Variables**

🟧 Stored in CPU registers
🟧 Faster access
🟧 Address cannot be accessed using `&`

```c
register int i;
```

---

## 🟢 **7. Constants vs Variables**

🟦 **Variable** → Value can change
🟥 **Constant** → Value cannot change

```c
int x = 5;          // Variable
const int y = 10;   // Constant
```

---

## 🟢 **8. Example Program**

```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
```

---

## 🟢 **9. Important Exam Points ⭐**

⭐ Variables must be declared before use
⭐ Scope defines visibility
⭐ Static variables retain value
⭐ Register variables increase speed
⭐ Uninitialized variables give garbage values

---

### 📌 Want this converted into:

🎨 **Real color PDF / Word file**
✍ **Handwritten-style notes**
📘 **Short exam notes**
❓ **MCQs & Viva questions**

Just tell me 😊
