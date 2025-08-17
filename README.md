# Exp- 9 Pointer Basics and Operations in C++

## Aim

To study and implement **C++ Pointer basics** and perform various operations using pointers, including:

* Pointer declaration and usage
* Pointer arithmetic
* Difference between two pointers
* Traversing arrays with pointers
* Printing strings using pointers
* Reversing arrays and strings using pointers

---

## Tools Used

* **VS Code**

---

## Theory

A **pointer** in C++ is a variable that stores the **memory address** of another variable. Instead of holding the actual value, pointers give direct access to where the data is stored in memory.

### Important Facts About Pointers:

1. **Declaration:**

   ```cpp
   int *p;    // pointer to int
   char *c;   // pointer to char
   ```
2. **Address-of operator (&):** Gives the address of a variable.
3. **Dereference operator (\*):** Accesses the value stored at the address the pointer points to.
4. **Pointer Arithmetic:**

   * `p++` → moves to next element of type.
   * `p--` → moves to previous element.
   * `p + n` → moves forward by `n` elements.
   * `p - q` → gives number of elements between pointers.
5. **Pointers and Strings:** Strings are stored as **character arrays** ending with a `\0` (null terminator). A `char*` pointer can traverse the string.

---

### Advantages of Pointers (Compared to Arrays):

* **Dynamic memory management:** Pointers allow creation of variables/arrays at runtime using `new` and `delete`.
* **Efficient array traversal:** Pointers can move directly to elements without recalculating indices.
* **Pass by reference:** Functions can modify actual values of arguments using pointers (not possible with normal arrays unless passed explicitly).
* **Low-level memory control:** Useful in system programming, embedded systems, and data structures (linked lists, trees).
* **Flexibility:** Unlike arrays (fixed size), pointers can point to dynamically allocated memory.

---

## Algorithms

### 1) Pointer Basics – Print Address and Value

**Goal:** Demonstrate declaration, initialization, dereferencing.

```
Step 1: Start
Step 2: Declare variables → int x, float y, char c
Step 3: Declare pointers → int* px, float* py, char* pc
Step 4: Assign addresses → px = &x; py = &y; pc = &c
Step 5: Print variable values → x, y, c
Step 6: Print variable addresses → px, py, pc
Step 7: Print dereferenced values → *px, *py, *pc
Step 8: Stop
```

---

### 2) Pointer Arithmetic

**Goal:** Show effect of pointer increment.

```
Step 1: Start
Step 2: Declare int a = 10; int* p = &a
Step 3: Print address in p
Step 4: Print sizeof(int)
Step 5: Do p++ 
Step 6: Print new address in p (original + sizeof(int))
Step 7: Stop
```

---

### 3) Difference Between Two Pointers

```
Step 1: Start
Step 2: Declare int arr[5] = {10,20,30,40,50}
Step 3: Let p1 = &arr[1], p2 = &arr[4]
Step 4: Calculate value difference → *p2 - *p1
Step 5: Calculate address difference → p2 - p1
Step 6: Print both differences
Step 7: Stop
```

---

### 4) Traversing Array with Pointers

```
Step 1: Start
Step 2: Declare int arr[] = {1,2,3,4,5}
Step 3: Pointer p = arr
Step 4: For i = 0 to size-1:
           Print *p
           p++
Step 5: Stop
```

---

### 5) Printing String with Pointers

```
Step 1: Start
Step 2: Declare char str[] = "Hello"
Step 3: Pointer p = str
Step 4: While (*p != '\0'):
           Print *p
           p++
Step 5: Stop
```

---

### 6) Reverse Array with Pointers

```
Step 1: Start
Step 2: Declare int arr[] = {1,2,3,4,5}, n=5
Step 3: Pointer p = arr + (n-1)
Step 4: For i = n-1 down to 0:
           Print *p
           p--
Step 5: Stop
```

---

### 7) Reverse String with Pointers

```
Step 1: Start
Step 2: Declare char str[] = "Hello"
Step 3: Find length using strlen(str)
Step 4: Pointer p = str + (len-1)
Step 5: For i = len-1 down to 0:
           Print *p
           p--
Step 6: Stop
```

---

## Outcome

By completing these programs, you will:

* Understand pointer declaration, initialization, and dereferencing.
* Apply pointer arithmetic (`p++`, `p+n`, `p1-p2`).
* Traverse arrays and strings using only pointers.
* Compare addresses and values through pointer differences.
* Reverse arrays and strings with pointer manipulation.
* Gain strong foundation for **dynamic memory**, **data structures**, and **system-level programming**.

---

## Conclusion

Pointers are a **powerful feature of C++** that allow direct access to memory, unlike arrays which are fixed in size and limited in functionality. Through these exercises, we learned:

* How pointers interact with different data types.
* How pointer arithmetic works relative to type size.
* How arrays and strings can be accessed or reversed using only pointers.
* Why pointers are crucial for advanced topics like dynamic memory allocation, linked lists, trees, and low-level system programming.

Mastering pointers builds confidence in **memory management, data structure implementation, and efficient program design**.

---

Do you want me to also **write small sample code snippets** (C++ examples) for each algorithm so it looks like a **lab manual with explanation + code**?
