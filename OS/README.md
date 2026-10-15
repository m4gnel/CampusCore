# Object-Oriented Programming (OOPS)

### Java Programming · OOP Concepts · Exception Handling · Multithreading

[![Java](https://img.shields.io/badge/Language-Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](https://www.java.com/)
[![Swing](https://img.shields.io/badge/GUI-Java%20Swing-4479A1?style=for-the-badge)](https://docs.oracle.com/javase/tutorial/uiswing/)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **Object-Oriented Programming (OOPS)** section of CampusCore.

This folder contains Java programs and practical exercises covering core object-oriented programming concepts, basic algorithms, collections and strings, exception handling, file operations, multithreading, and graphical user interfaces using Java Swing.

The examples are intended to help learners understand programming concepts through code, experiment with different inputs, and build confidence in Java.

> **Learn the concepts. Write the code. Understand the behaviour.**

---

## Quick Navigation

| File | Topic |
|---|---|
| [`Hello_world.java`](./Hello_world.java) | Basic Java program |
| [`Student_details.java`](./Student_details.java) | Input and display student information |
| [`Sum3nums.java`](./Sum3nums.java) | Sum of three numbers |
| [`Largest_num.java`](./Largest_num.java) | Largest-number exercise |
| [`Array_sum.java`](./Array_sum.java) | Array sum |
| [`Binarysearch.java`](./Binarysearch.java) | Binary search |
| [`Quicksort.java`](./Quicksort.java) | Quick sort |
| [`Palindrome.java`](./Palindrome.java) | Palindrome checking |
| [`Reverse_string.java`](./Reverse_string.java) | String reversal |
| [`Frequency.java`](./Frequency.java) | Frequency-counting exercise |
| [`Line.java`](./Line.java) | Tokenising input and summing integers |
| [`Matrix_sum.java`](./Matrix_sum.java) | Matrix addition |
| [`matrix_multiplication.java`](./matrix_multiplication.java) | Matrix multiplication |
| [`Transepose.java`](./Transepose.java) | Matrix transpose |
| [`Doublylinkedlist.java`](./Doublylinkedlist.java) | Doubly linked list |
| [`abstraction.java`](./abstraction.java) | Abstraction using shapes |
| [`shape.java`](./shape.java) | Abstract classes and shape subclasses |
| [`employee.java`](./employee.java) | Inheritance and employee information |
| [`engineer.java`](./engineer.java) | Employee and engineer inheritance example |
| [`superandthis.java`](./superandthis.java) | Constructors, `this`, and `super` |
| [`calculator.java`](./calculator.java) | Calculator exercise |
| [`Trycatch.java`](./Trycatch.java) | Exception handling |
| [`finally.java`](./finally.java) | The `finally` block |
| [`Filehandling.java`](./Filehandling.java) | File reading and writing |
| [`Multithreading.java`](./Multithreading.java) | Threads and the `Runnable` interface |
| [`thread.java`](./thread.java) | Shared bank account and synchronisation |
| [`swing.java`](./swing.java) | Java Swing text-field interface |
| [`login.java`](./login.java) | Login-style Swing interface |
| [`trafficlight.java`](./trafficlight.java) | Traffic-light GUI exercise |
| [`file.java`](./file.java) | File-related exercise |
| [`Testgarbage.java`](./Testgarbage.java) | Garbage-collection-related exercise |
| [`Fibonacci.c`](./Fibonacci.c) | Fibonacci series using recursive and iterative methods; contains Java code |

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Explore the Programs](#explore-the-programs)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Compile and Run](#compile-and-run)
- [Important Notes](#important-notes)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The programs cover several areas of Java programming.

- **Java fundamentals:** Classes, methods, variables, input, output, and basic calculations.
- **Arrays and algorithms:** Searching, sorting, matrix operations, and Fibonacci numbers.
- **Strings and number exercises:** Palindromes, reversing strings, and frequency counting.
- **Object-oriented programming:** Classes, objects, abstraction, inheritance, constructors, `this`, and `super`.
- **Linked lists:** Node-based structures and doubly linked list operations.
- **Exception handling:** `try`, `catch`, and `finally`.
- **File handling:** Reading and writing text files.
- **Multithreading:** Creating threads, implementing `Runnable`, and synchronising shared data.
- **Graphical user interfaces:** Java Swing components, buttons, text fields, and event handling.

These programs are educational examples. Their presence in this folder does not mean every program has been tested against all inputs or is ready for production use.

## Explore the Programs

<details>
<summary><strong>1. Java Fundamentals and Input/Output</strong></summary>

Start with these files to understand Java syntax and basic program structure.

- [`Hello_world.java`](./Hello_world.java) — prints a simple greeting.
- [`Student_details.java`](./Student_details.java) — accepts and displays a student's name, class, and roll number.
- [`Sum3nums.java`](./Sum3nums.java) — practices arithmetic with three numbers.
- [`Largest_num.java`](./Largest_num.java) — explores comparing numbers.
- [`Array_sum.java`](./Array_sum.java) — practices processing array elements.
- [`calculator.java`](./calculator.java) — calculator-related programming exercise.

**Concepts:** Variables, data types, operators, methods, standard input, and standard output.

</details>

<details>
<summary><strong>2. Algorithms, Strings, and Matrices</strong></summary>

### Searching and sorting

- [`Binarysearch.java`](./Binarysearch.java) — binary search.
- [`Quicksort.java`](./Quicksort.java) — quicksort.

Binary search requires sorted input. Quicksort illustrates a divide-and-conquer sorting approach.

### Strings and frequency counting

- [`Palindrome.java`](./Palindrome.java) — palindrome checking.
- [`Reverse_string.java`](./Reverse_string.java) — reversing strings.
- [`Frequency.java`](./Frequency.java) — frequency-counting exercise.
- [`Line.java`](./Line.java) — uses `StringTokenizer` to parse integers and calculate their sum.

### Matrix operations

- [`Matrix_sum.java`](./Matrix_sum.java) — matrix addition.
- [`matrix_multiplication.java`](./matrix_multiplication.java) — matrix multiplication.
- [`Transepose.java`](./Transepose.java) — matrix transpose.

**Concepts:** Loops, arrays, strings, searching, sorting, parsing, and multidimensional data.

</details>

<details>
<summary><strong>3. Classes, Objects, and Inheritance</strong></summary>

### Abstraction and shapes

- [`abstraction.java`](./abstraction.java) — demonstrates an abstract shape class and concrete subclasses.
- [`shape.java`](./shape.java) — uses an abstract class with rectangle, triangle, and hexagon subclasses.

### Inheritance and constructors

- [`employee.java`](./employee.java) — demonstrates employee-related classes, including officer and manager subclasses.
- [`engineer.java`](./engineer.java) — explores inheritance between employee and engineer classes.
- [`superandthis.java`](./superandthis.java) — demonstrates constructor calls and the use of `this` and `super`.

### Linked lists

- [`Doublylinkedlist.java`](./Doublylinkedlist.java) — implements a doubly linked list with node links in both directions.

**Concepts:** Classes, objects, inheritance, abstraction, constructors, method overriding, access modifiers, and references.

</details>

<details>
<summary><strong>4. Exception Handling and File Operations</strong></summary>

- [`Trycatch.java`](./Trycatch.java) — demonstrates exception handling with an array-index error and a `finally` block.
- [`finally.java`](./finally.java) — illustrates the execution of a `finally` block.
- [`Filehandling.java`](./Filehandling.java) — reads from `input.txt` and writes the contents to `output.txt`.
- [`file.java`](./file.java) — additional file-related exercise.

**Concepts:** Exceptions, error handling, file readers, file writers, and resource management.

**Before running:** `Filehandling.java` expects an `input.txt` file in its working directory. Create a test file first and run the program in a directory where you have permission to write `output.txt`.

</details>

<details>
<summary><strong>5. Multithreading and Synchronisation</strong></summary>

- [`Multithreading.java`](./Multithreading.java) — uses `Runnable` implementations and separate threads to process generated numbers.
- [`thread.java`](./thread.java) — demonstrates multiple threads interacting with a shared bank account and synchronised deposit and withdrawal methods.

**Concepts:** Threads, the `Runnable` interface, `Thread.start()`, `run()`, synchronisation, and shared mutable state.

Multithreading examples are useful for understanding concurrent execution. Output order can vary between runs because threads may execute in different orders.

</details>

<details>
<summary><strong>6. Java Swing GUI Programs</strong></summary>

- [`swing.java`](./swing.java) — a basic text-field interface with a submit button.
- [`login.java`](./login.java) — a login-style interface with text fields and buttons.
- [`trafficlight.java`](./trafficlight.java) — a traffic-light interface using Swing components and event handling.

**Concepts:** Frames, labels, text fields, buttons, layouts, event listeners, and GUI state.

These are basic GUI exercises. The login example should not be treated as a secure authentication system.

</details>

<details>
<summary><strong>7. Additional Exercises</strong></summary>

- [`Fibonacci.c`](./Fibonacci.c) — contains Java code for recursive and iterative Fibonacci calculations.
- [`Testgarbage.java`](./Testgarbage.java) — a garbage-collection-related exercise.

**Note:** Despite its filename, `Fibonacci.c` is written in Java. Rename it to `Fibonacci.java` before compiling it with `javac`, or copy its contents into a correctly named Java source file.

</details>

---

## Requirements

To run the Java programs, you need:

- A compatible Java Development Kit (JDK).
- A terminal or command prompt.
- A text editor or Java IDE.
- A graphical desktop environment for the Swing applications.

Official resources:

- [Java downloads](https://www.oracle.com/java/technologies/downloads/)
- [OpenJDK](https://openjdk.org/)
- [Java documentation](https://docs.oracle.com/en/java/)
- [Java Swing tutorial](https://docs.oracle.com/javase/tutorial/uiswing/)

Check whether Java is installed:

```bash
java -version
javac -version
```

Both commands should report a compatible Java installation.

## Getting Started

Clone the repository if you haven't already:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/OOPS
```

If CampusCore is already on your computer, navigate to the existing `OOPS` directory instead.

## Compile and Run

Many source files in this folder use lowercase or non-standard class names, and some define a `main()` method in a class whose name differs from the filename. Java's compiler rules therefore matter when compiling and running individual programs.

For a simple example, `Hello_world.java` declares a class named `helloworld`. Compile it with:

```bash
javac Hello_world.java
```

Then run the class by its declared name:

```bash
java helloworld
```

For a source file with a public class, the filename must match the public class name. Other source files may contain multiple package-private classes, so check the declarations before choosing the command.

### Running the Fibonacci example

`Fibonacci.c` contains Java source, not C source. After renaming a copy to `Fibonacci.java`, compile and run it as follows:

```bash
javac Fibonacci.java
java Fibonacci
```

### Running Swing applications

Compile the selected Java file and run the class containing its `main()` method. Swing programs require a graphical environment and may not open a window in a headless terminal session.

**Important:** These commands illustrate the workflow. Check each file's class declarations and compile errors individually; not every file is guaranteed to compile unchanged.

---

## Important Notes

- **Filename and class-name mismatches:** Some source files contain class names that differ from their filenames. Java imposes a strict filename match for public top-level classes.
- **Java source saved as `.c`:** `Fibonacci.c` contains Java code and cannot be compiled as C.
- **GUI event handling:** `swing.java` and `login.java` contain `if` statements with trailing semicolons, which can cause their handlers to run differently than intended.
- **Login example:** The login GUI is a basic interface exercise, not secure credential validation. It should not be used to protect real accounts.
- **File handling:** `Filehandling.java` depends on an existing input file and writable output location. Robust code should also close resources reliably when an exception occurs.
- **Input validation:** Several exercises assume that users enter valid values. Test invalid, empty, and boundary inputs.
- **Thread behaviour:** Concurrent output may appear in a different order across runs. Synchronisation and shared-state access should be reviewed carefully.

These notes describe issues identified during source review. They are not a claim that every file has been compiled and tested.

---

## Suggested Learning Path

For a beginner, this order provides a useful progression:

1. **Start with Java fundamentals:** `Hello_world.java`, `Student_details.java`, and `Sum3nums.java`.
2. **Practise algorithms:** `Array_sum.java`, `Binarysearch.java`, and `Quicksort.java`.
3. **Work with strings and matrices:** `Palindrome.java`, `Reverse_string.java`, and the matrix programs.
4. **Learn OOP fundamentals:** `abstraction.java`, `shape.java`, `employee.java`, and `superandthis.java`.
5. **Explore data structures:** `Doublylinkedlist.java`.
6. **Handle errors and files:** `Trycatch.java`, `finally.java`, and `Filehandling.java`.
7. **Study concurrency:** `Multithreading.java` and `thread.java`.
8. **Build graphical interfaces:** `swing.java`, `login.java`, and `trafficlight.java`.

Try tracing each program manually, changing its input, and explaining why the output changes. Fixing small issues is also a valuable way to deepen your understanding of Java.

---

## Contributing

Improvements that make these exercises more accurate, readable, and useful for learning are welcome.

You can help by:

- Fixing compilation errors and logic bugs.
- Using consistent Java naming conventions.
- Adding comments and example input/output.
- Improving input validation and exception handling.
- Closing files and other resources safely.
- Correcting GUI event-handling issues.
- Documenting the Java version required by each example.
- Adding tests for important algorithms and edge cases.

Compile and test changes before submitting them, and ensure that the README reflects the actual implementation.

For repository-wide discussion or improvements, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[AI & Python](../AI/) · [DBMS](../DBMS/) · [Data Structures](../DS/) · [Machine Learning](../ML/) · [Operating Systems](../OS/) · [Robotics Laboratory](../ROBOTICS_LAB/)

---

<p align="center">
  <sub>Design with objects. Handle errors thoughtfully. Build with understanding.</sub>
</p>
