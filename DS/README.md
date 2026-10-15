# Data Structures and Algorithms (DS)

### C Programming · Core Data Structures · Algorithm Practice

[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Algorithms](https://img.shields.io/badge/Focus-Data%20Structures%20%26%20Algorithms-2563EB?style=for-the-badge)](https://en.wikipedia.org/wiki/Computer_science)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **Data Structures and Algorithms** section of CampusCore.

This folder contains C programs that demonstrate fundamental data structures and algorithms through practical implementations. The collection covers sorting and searching, linked lists, stacks, queues, binary search trees, hash tables, expression processing, polynomial addition, and sparse matrix operations.

Each program offers an opportunity to study how an algorithm works, understand how data is represented in memory, and experiment with its behaviour using different inputs.

> **Understand the logic. Trace the operations. Analyse the result.**

---

## Quick Navigation

| Program | Main topic |
|---|---|
| [`Binarysearch.c`](./Binarysearch.c) | Sorting an array and performing binary search |
| [`Bubblesort.c`](./Bubblesort.c) | Bubble sort |
| [`Insertionsort.c`](./Insertionsort.c) | Insertion sort |
| [`Linearsearch.c`](./Linearsearch.c) | Linear search |
| [`Linkedlist.c`](./Linkedlist.c) | Singly linked list insertion and deletion |
| [`Stackoperations.c`](./Stackoperations.c) | Stack operations using an array |
| [`Queueusingll.c`](./Queueusingll.c) | Queue operations using a linked list |
| [`Hashtable.c`](./Hashtable.c) | Hash table with linear probing |
| [`Binarysearchtree.c`](./Binarysearchtree.c) | Binary search tree operations and traversals |
| [`Infixtopostfix.c`](./Infixtopostfix.c) | Infix-to-postfix expression conversion |
| [`Postfixevaluation.c`](./Postfixevaluation.c) | Postfix expression evaluation |
| [`Poly_addition.c`](./Poly_addition.c) | Polynomial addition using arrays of terms |
| [`Sparsematrixadd.c`](./Sparsematrixadd.c) | Sparse matrix addition using tuple representation |

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Explore the Programs](#explore-the-programs)
- [Output Screenshots](#output-screenshots)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Compile and Run](#compile-and-run)
- [Important Implementation Notes](#important-implementation-notes)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The programs are organised around several core areas of data structures and algorithms.

- **Sorting and searching:** Arrange array elements and locate values efficiently.
- **Linear data structures:** Manage elements using linked lists, stacks, and queues.
- **Non-linear data structures:** Organise values in binary search trees.
- **Hashing:** Store and retrieve records using a hash function.
- **Expression processing:** Convert infix expressions to postfix notation and evaluate postfix expressions.
- **Mathematical representations:** Add polynomials and sparse matrices.

These implementations are useful for learning and experimentation. They should not all be assumed to be production-ready or fully validated for every possible input.

## Explore the Programs

<details>
<summary><strong>1. Searching and Sorting</strong></summary>

### Binary Search

**File:** [`Binarysearch.c`](./Binarysearch.c)

Reads an array, sorts it using bubble sort, and then searches for a specified key using binary search.

**Concepts:** Arrays, sorting, search boundaries, and binary search.

**Complexity:** The sorting stage is \(O(n^2)\); the binary search stage is \(O(\log n)\).

**Output screenshot:** [`Binarysearch_out.png`](./Binarysearch_out.png)

### Bubble Sort

**File:** [`Bubblesort.c`](./Bubblesort.c)

Sorts array elements in ascending order by repeatedly comparing and swapping adjacent elements.

**Concepts:** Arrays, nested loops, comparisons, and swapping.

**Typical time complexity:** \(O(n^2)\).

**Output screenshot:** [`Bubblesort_out.png`](./Bubblesort_out.png)

### Insertion Sort

**File:** [`Insertionsort.c`](./Insertionsort.c)

Sorts an array by inserting each element into its correct position within the already-processed portion of the array.

**Concepts:** Arrays, shifting elements, and maintaining a sorted prefix.

**Typical time complexity:** \(O(n^2)\); best-case time is \(O(n)\) for an already sorted array.

**Output screenshot:** [`insertionsort_out.png`](./insertionsort_out.png)

### Linear Search

**File:** [`Linearsearch.c`](./Linearsearch.c)

Scans an array sequentially until the requested element is found or the array has been checked.

**Concepts:** Sequential traversal, comparisons, and search results.

**Time complexity:** \(O(n)\) in the worst case.

**Output screenshot:** [`Linearsearch_out.png`](./Linearsearch_out.png)

</details>

<details>
<summary><strong>2. Linked Lists, Stacks, and Queues</strong></summary>

### Singly Linked List

**File:** [`Linkedlist.c`](./Linkedlist.c)

Demonstrates insertion at the beginning of a linked list, deletion from the beginning, and displaying the list.

**Concepts:** Nodes, pointers, dynamic memory allocation, and linked-list traversal.

**Output screenshot:** [`Linkedlist_0ut.png`](./Linkedlist_0ut.png)

### Stack Operations

**File:** [`Stackoperations.c`](./Stackoperations.c)

Implements an array-based stack with a menu for pushing, popping, peeking at the top element, displaying contents, and reinitialising the stack.

**Concepts:** LIFO (Last In, First Out), stack overflow and underflow checks, and array-based storage.

**Output screenshot:** [`Stackoperation_out.png`](./Stackoperation_out.png)

### Queue Using a Linked List

**File:** [`Queueusingll.c`](./Queueusingll.c)

Implements a linked-list-based queue with enqueue, dequeue, and display operations.

**Concepts:** FIFO (First In, First Out), front and rear pointers, dynamic allocation, and node deletion.

**Output screenshot:** [`queueusingll.png`](./queueusingll.png)

</details>

<details>
<summary><strong>3. Trees and Hashing</strong></summary>

### Binary Search Tree

**File:** [`Binarysearchtree.c`](./Binarysearchtree.c)

Implements a binary search tree with insertion, deletion, and in-order, pre-order, and post-order traversals.

**Concepts:** Tree nodes, recursive operations, ordering properties, and tree traversal.

**Output screenshot:** [`binarysearchtree_out.png`](./binarysearchtree_out.png)

### Hash Table

**File:** [`Hashtable.c`](./Hashtable.c)

Uses a fixed-size array and linear probing to demonstrate insertion, searching, deletion, and displaying stored key-value entries.

**Concepts:** Hash functions, collisions, probing, and hash-table operations.

**Important:** Review how deleted entries are represented and how a full table is handled before testing edge cases.

</details>

<details>
<summary><strong>4. Expression Conversion and Evaluation</strong></summary>

### Infix to Postfix Conversion

**File:** [`Infixtopostfix.c`](./Infixtopostfix.c)

Uses a stack to convert an infix expression into postfix notation based on operator precedence and parentheses.

**Concepts:** Stacks, operator precedence, associativity, and expression parsing.

**Output screenshot:** [`infixtopostfix_out.png`](./infixtopostfix_out.png)

### Postfix Evaluation

**File:** [`Postfixevaluation.c`](./Postfixevaluation.c)

Evaluates a postfix expression using a stack of numeric values.

**Concepts:** Operand handling, operator application, stack operations, and arithmetic evaluation.

**Output screenshot:** [`postevaluvation_out.png`](./postevaluvation_out.png)

**Important:** The current implementation handles multi-digit non-negative integers and the four basic arithmetic operators. It does not fully validate malformed expressions, stack bounds, or division by zero.

</details>

<details>
<summary><strong>5. Polynomial and Sparse Matrix Operations</strong></summary>

### Polynomial Addition

**File:** [`Poly_addition.c`](./Poly_addition.c)

Reads two polynomials as coefficient-exponent pairs and combines their terms to construct a resultant polynomial.

**Concepts:** Structures, arrays of terms, exponents, and polynomial representation.

**Important:** The implementation assumes terms are entered in descending exponent order. Review the coefficient-combination logic and result handling before relying on it for general inputs.

### Sparse Matrix Addition

**File:** [`Sparsematrixadd.c`](./Sparsematrixadd.c)

Represents sparse matrices as tuples containing row, column, and value, then merges entries to calculate a sum.

**Concepts:** Sparse representations, tuple storage, ordered traversal, and matrix addition.

**Output screenshot:** [`Sparsematrix_out.png`](./Sparsematrix_out.png)

**Important:** The input tuples should be sorted consistently by row and column. Validate the input order and resulting values, especially when the same position appears in both matrices.

</details>

---

## Output Screenshots

The folder includes screenshots associated with several programs. Open them to inspect the captured output.

| Program | Screenshot |
|---|---|
| Binary search | [View output](./Binarysearch_out.png) |
| Bubble sort | [View output](./Bubblesort_out.png) |
| Binary search tree | [View output](./binarysearchtree_out.png) |
| Infix to postfix | [View output](./infixtopostfix_out.png) |
| Insertion sort | [View output](./insertionsort_out.png) |
| Linear search | [View output](./Linearsearch_out.png) |
| Linked list | [View output](./Linkedlist_0ut.png) |
| Postfix evaluation | [View output](./postevaluvation_out.png) |
| Queue using linked list | [View output](./queueusingll.png) |
| Sparse matrix addition | [View output](./Sparsematrix_out.png) |
| Stack operations | [View output](./Stackoperation_out.png) |

Screenshots are provided for reference; they should not be treated as proof that every edge case has been tested.

---

## Requirements

To compile and run these programs, you need:

- A C compiler, such as GCC or Clang.
- A terminal or command prompt.
- Basic knowledge of C syntax, arrays, functions, pointers, and structures.

Official resources:

- [GCC documentation](https://gcc.gnu.org/)
- [Clang documentation](https://clang.llvm.org/)
- [C language reference on cppreference.com](https://en.cppreference.com/w/c)

## Getting Started

Clone the repository if you haven't already:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/DS
```

If the repository is already on your computer, navigate to its existing `DS` directory instead.

## Compile and Run

With GCC installed, compile a program using:

```bash
gcc Bubblesort.c -o bubblesort
```

Run it on Linux or macOS:

```bash
./bubblesort
```

On Windows using a GCC environment such as MinGW-w64:

```powershell
gcc Bubblesort.c -o bubblesort.exe
.\bubblesort.exe
```

For another program, replace the source filename and output name. For example:

```bash
gcc Insertionsort.c -o insertionsort
gcc Linearsearch.c -o linearsearch
gcc Linkedlist.c -o linkedlist
gcc Binarysearchtree.c -o binarysearchtree
```

Then run the generated executable using the command appropriate for your operating system.

**Tip:** Compile one source file at a time. These files are separate programs and may each define their own `main()` function.

---

## Important Implementation Notes

These programs are learning examples. A few deserve particular care when testing:

- **Input validation:** Several programs assume valid input sizes. Check array capacities and reject negative or excessively large limits.
- **Binary search:** The array is sorted before searching, so the reported index refers to the sorted array, not the original input order.
- **Expression processing:** Test operator precedence, parentheses, malformed expressions, and division by zero. The current conversion and evaluation programs have limitations.
- **Hash table:** Test collisions, repeated keys, deletion, and a table that becomes full.
- **Polynomial addition:** Check that matching exponents have their coefficients added correctly and that unmatched terms are retained.
- **Sparse matrix addition:** Verify that tuple entries are ordered and that output capacity is sufficient for the combined entries.
- **Memory management:** Programs using dynamic allocation should check allocation results and release memory appropriately.

These notes identify areas to review; they do not claim that every program has been compiled or exhaustively tested.

---

## Suggested Learning Path

If you're learning data structures for the first time, this order provides a useful progression:

1. **Start with arrays:** Linear search, bubble sort, and insertion sort.
2. **Understand search efficiency:** Binary search and the importance of sorted data.
3. **Learn pointer-based structures:** Linked lists, stacks, and queues.
4. **Move to trees and hashing:** Binary search trees and hash tables.
5. **Study expression processing:** Infix-to-postfix conversion and postfix evaluation.
6. **Practise specialised representations:** Polynomial addition and sparse matrix addition.

For each program, try tracing a small example by hand, changing the input, checking boundary cases, and explaining the algorithm's time and space complexity.

---

## Contributing

Contributions that improve correctness, clarity, and learning value are welcome.

You can help by:

- Fixing bugs and validating edge cases.
- Improving input validation and memory management.
- Adding clear comments and sample inputs.
- Documenting algorithmic complexity.
- Updating screenshots to match verified program output.
- Adding explanations of the algorithm and its limitations.

Keep each program focused, compile and test changes before submitting them, and ensure the documentation reflects the actual implementation.

For questions or improvements, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[AI & Python](../AI/) · [DBMS](../DBMS/) · [Machine Learning](../ML/) · [OOPS](../OOPS/) · [Operating Systems](../OS/) · [Robotics Laboratory](../ROBOTICS_LAB/)

---

<p align="center">
  <sub>Build the structure. Understand the algorithm. Verify the result.</sub>
</p>
