# CampusCore

### Computer Science Programs · Practical Exercises · Lab Work

[![GitHub stars](https://img.shields.io/github/stars/m4gnel/CampusCore?style=for-the-badge&logo=github&color=181717)](https://github.com/m4gnel/CampusCore/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/m4gnel/CampusCore?style=for-the-badge&logo=github&color=181717)](https://github.com/m4gnel/CampusCore/forks)
[![Last Commit](https://img.shields.io/github/last-commit/m4gnel/CampusCore?style=for-the-badge&logo=git&color=blue)](https://github.com/m4gnel/CampusCore/commits/main)
[![Open Issues](https://img.shields.io/github/issues/m4gnel/CampusCore?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore/issues)

**CampusCore is a collection of computer science programs, programming exercises, database scripts, machine learning notebooks, and robotics laboratory work.**

The idea is simple: keep practical work organized in one place, make it easier to revisit important concepts, and provide a starting point for experimenting with code.

Whether you're revising a data structure, exploring a regression notebook, practising SQL, or working through a robotics exercise, CampusCore brings these learning materials together in one repository.

**Explore the code. Understand the logic. Experiment. Improve.**

---

## Quick Navigation

| Subject | What you'll find |
|---|---|
| [Artificial Intelligence & Python](./AI/) | Python fundamentals, logic exercises, and Jupyter notebooks |
| [Database Management Systems](./DBMS/) | SQL scripts and relational database exercises |
| [Data Structures](./DS/) | C implementations of algorithms and data structures |
| [Machine Learning](./ML/) | Regression notebooks and Python exercises |
| [Object-Oriented Programming](./OOPS/) | Java programs covering OOP concepts and related topics |
| [Operating Systems](./OS/) | CPU scheduling and process-related exercises in C |
| [Robotics Laboratory](./ROBOTICS_LAB/) | Arduino-style programs for displays, sensors, and motors |

---

## Table of Contents

- [About the Repository](#about-the-repository)
- [Explore the Subjects](#explore-the-subjects)
- [Repository Structure](#repository-structure)
- [Technology Stack](#technology-stack)
- [Getting Started](#getting-started)
- [Running the Programs](#running-the-programs)
- [Working with Jupyter Notebooks](#working-with-jupyter-notebooks)
- [Working with SQL](#working-with-sql)
- [Working with Robotics Hardware](#working-with-robotics-hardware)
- [How to Learn from This Repository](#how-to-learn-from-this-repository)
- [Contributing](#contributing)
- [Limitations and Verification](#limitations-and-verification)
- [License](#license)

---

## About the Repository

CampusCore organizes practical programming work by subject rather than treating it as one large application. Each directory contains exercises that can be explored independently, subject to the dependencies and requirements of the individual files.

The repository currently brings together seven areas:

- **Programming fundamentals:** Build familiarity with basic syntax, conditions, arithmetic, and strings.
- **Algorithms and data structures:** Study searching, sorting, linked structures, stacks, queues, trees, and related concepts.
- **Database systems:** Explore SQL statements and relational data examples.
- **Machine learning:** Examine introductory modelling notebooks and Python exercises.
- **Object-oriented programming:** Practise Java classes, exceptions, file handling, threads, and GUI-related examples.
- **Operating systems:** Work through scheduling and process-related laboratory exercises.
- **Robotics:** Explore hardware-oriented programs involving displays, input devices, sensors, and motors.

CampusCore is intended for **learning, revision, experimentation, and practical reference**. It is not a single installable application, and the individual exercises may differ in completeness, dependencies, and execution requirements.

## Explore the Subjects

<details>
<summary><strong>1. Artificial Intelligence & Python</strong></summary>

**Folder:** [`AI/`](./AI/)

This directory contains introductory Python programs and Jupyter notebooks.

Topics and examples include:

- Basic Python syntax and output.
- Boolean expressions and conditional logic.
- Calculator and number-checking exercises.
- Grade-related logic and string operations.
- Arithmetic operations, including floor division and exponentiation.
- A notebook exploring the brute-force Travelling Salesperson Problem.
- Additional notebooks for practical programming exercises.

**Suggested starting point:** [`Hello_world.py`](./AI/Hello_world.py), followed by [`Boolean_if.py`](./AI/Boolean_if.py).

</details>

<details>
<summary><strong>2. Database Management Systems (DBMS)</strong></summary>

**Folder:** [`DBMS/`](./DBMS/)

This directory contains SQL scripts and database exercises using examples involving customers, employees, products, salespeople, and other relational data.

Use these files to practise reading SQL statements, understanding table definitions, and exploring how queries work with structured data.

Some scripts may rely on a specific SQL dialect, previously created tables, or particular column names. Review the statements and dependencies before running them.

</details>

<details>
<summary><strong>3. Data Structures</strong></summary>

**Folder:** [`DS/`](./DS/)

This directory contains C programs covering fundamental data structures and algorithms, including:

- Linear search and binary search.
- Bubble sort and insertion sort.
- Linked lists and binary search trees.
- Hash tables.
- Stack and queue operations.
- Infix-to-postfix conversion and postfix evaluation.
- Polynomial addition.
- Sparse-matrix addition.

The folder also contains image files associated with several exercises.

**Suggested approach:** Start with searching and sorting, then move to linked structures, stacks, queues, trees, and expression evaluation.

</details>

<details>
<summary><strong>4. Machine Learning (ML)</strong></summary>

**Folder:** [`ML/`](./ML/)

This directory contains Python exercises and Jupyter notebooks related to introductory machine learning and programming.

Examples include:

- Linear regression with a single variable.
- Logistic regression.
- Polynomial regression.
- A Boston-related modelling notebook.
- Additional machine-learning lab work.
- Set union and intersection.
- Matrix multiplication and file-counting exercises.

Notebook execution may require extra Python packages or datasets. Check each notebook's imports, data-loading steps, and assumptions before running it.

</details>

<details>
<summary><strong>5. Object-Oriented Programming (OOPS)</strong></summary>

**Folder:** [`OOPS/`](./OOPS/)

This directory contains Java exercises covering topics such as:

- Basic input, output, and arithmetic.
- Classes and objects.
- Matrix operations.
- Searching and sorting.
- Linked structures.
- Employee, student, and shape-related examples.
- Exception handling.
- File handling.
- Multithreading.
- Swing-based graphical interfaces.
- Other object-oriented programming concepts.

A C source file for a Fibonacci-related exercise is also present.

</details>

<details>
<summary><strong>6. Operating Systems (OS)</strong></summary>

**Folder:** [`OS/`](./OS/)

This directory contains C programs for operating-system laboratory exercises, including:

- First-Come, First-Served (FCFS) scheduling.
- Round-Robin (RR) scheduling.
- Priority scheduling.
- Shortest Remaining Time First (SRTF).
- Non-preemptive scheduling.
- FIFO-related code.
- Producer-consumer and other process or synchronization-related exercises.

For scheduling algorithms, try small input examples and manually verify the waiting time, turnaround time, and execution order where applicable.

</details>

<details>
<summary><strong>7. Robotics Laboratory</strong></summary>

**Folder:** [`ROBOTICS_LAB/`](./ROBOTICS_LAB/)

This directory contains hardware-oriented exercises involving:

- Keypad password input.
- LCD display output.
- Palindrome detection with LCD output.
- Servo-motor control.
- Touch-pin motor control.
- Ultrasonic sensing and motor control.

Several files use Arduino-style functions and hardware libraries despite having a `.c` extension. Check the source code and intended board before choosing a compiler or uploading a program.

**Important:** Hardware experiments require the appropriate board, compatible libraries, correct wiring, and suitable power and driver circuits.

</details>

---

## Repository Structure

The main branch is organized into these subject directories:

```text
CampusCore/
├── AI/             # Python practice and AI-related notebooks
├── DBMS/           # SQL and database exercises
├── DS/             # C data structures and algorithms
├── ML/             # Machine learning notebooks and Python scripts
├── OOPS/           # Java exercises and a C program
├── OS/             # Operating-system laboratory programs
├── ROBOTICS_LAB/   # Robotics and hardware-oriented exercises
└── README.md       # Repository overview and getting-started guide
```

Each subject directory can be explored independently. The individual files, rather than the folder names alone, determine the exact implementation and requirements.

---

## Technology Stack

| Language or format | Used for |
|---|---|
| C | Data structures, algorithms, and operating-system exercises |
| Java | Object-oriented programming and related exercises |
| Python | Programming fundamentals and supporting exercises |
| Jupyter Notebook | Interactive programming and machine-learning experiments |
| SQL | Database definitions and query exercises |
| Arduino-style C/C++ | Hardware-oriented robotics exercises |

### Tools you may need

- A compatible C compiler, such as GCC or Clang.
- A Java Development Kit (JDK).
- Python 3.
- JupyterLab or Jupyter Notebook.
- A database engine and SQL client compatible with the selected script.
- The appropriate Arduino-compatible development tools, libraries, board, and hardware for robotics exercises.

There is no single dependency file or environment that covers every subject. Install only the tools required for the exercises you intend to run.

---

## Getting Started

### 1. Clone the repository

Make sure Git is installed, then open a terminal and run:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore
```

### 2. Choose a subject

Open the directory that contains the exercise you want to study. Read the source file before executing it, especially if it uses external libraries, database objects, datasets, or hardware.

### 3. Set up the required tools

Follow the relevant instructions below. These examples illustrate common workflows; they do not guarantee that every source file runs without changes.

## Running the Programs

### Python

From the repository root, run:

```bash
python AI/Hello_world.py
```

On systems where Python is invoked as `python3`, use:

```bash
python3 AI/Hello_world.py
```

Replace the file path with the exercise you want to run.

### C

With GCC installed, you can compile an individual program. For example:

```bash
gcc DS/Bubblesort.c -o bubblesort
```

On Linux or macOS:

```bash
./bubblesort
```

On Windows Command Prompt:

```bat
bubblesort.exe
```

On Windows PowerShell:

```powershell
.\bubblesort.exe
```

Compilation requirements can vary by program. Some exercises may need corrections, specific compiler settings, or changes to their input assumptions.

### Java

First check the source file's declared class name and whether it depends on other classes. For a compatible standalone Java class, the general workflow is:

```bash
javac path/to/Example.java
java -cp path/to Example
```

Replace `Example` with the actual class name and use the correct source directory. Java filenames and public class names must follow Java's naming rules.

### SQL

Open the relevant `.sql` file in a database client compatible with its syntax.

Before execution, check:

- Which database engine or SQL dialect it expects.
- Whether the required tables already exist.
- The order in which tables and records must be created.
- Whether the script contains data-changing statements.

### Robotics programs

Do not assume that a robotics source file can be compiled as ordinary desktop C. Identify the intended microcontroller, toolchain, libraries, and hardware connections first.

---

## Working with Jupyter Notebooks

The repository includes notebooks in both the `AI/` and `ML/` directories.

To open JupyterLab, install it in your chosen Python environment and run:

```bash
jupyter lab
```

Then navigate to the notebook you want to explore.

For a more reliable learning experience:

1. Read the notebook's markdown and code cells before execution.
2. Check the required Python packages.
3. Identify any datasets or external files the notebook expects.
4. Execute cells in order.
5. Inspect the outputs, warnings, and errors.
6. Re-run the notebook when you need to verify that the results are reproducible.

Saved notebook outputs may not reflect the result of executing the current code. A dataset or dependency may also be missing or unavailable.

---

## Working with SQL

Database exercises are easiest to understand when you can inspect the tables and results directly.

For safe practice:

- Use a separate learning database rather than production data.
- Read table creation, insertion, update, and deletion statements before running them.
- Check table and column names against the queries that use them.
- Confirm the SQL dialect and data types.
- Keep credentials and connection details out of the repository.

Some scripts may require adjustments before they can execute successfully in your chosen database engine.

---

## Working with Robotics Hardware

Before uploading a hardware-oriented program:

- Identify the intended board and development environment.
- Install the required libraries.
- Verify pin assignments and wiring.
- Check the power requirements of each component.
- Use appropriate motor drivers and other interface circuits.
- Test sensor readings and motor behavior carefully.

**Safety first:** Do not connect a motor or other high-current load directly to a microcontroller pin unless the hardware documentation explicitly permits it. Use suitable driver circuitry and follow your laboratory's safety procedures.

---

## How to Learn from This Repository

You don't need to study every folder at once. Choose an exercise, understand what it does, and then experiment with it.

A possible learning path is:

1. **Start with programming fundamentals.** Explore the introductory Python and Java programs.
2. **Practise algorithms and data structures.** Work through searching, sorting, linked lists, stacks, queues, and trees.
3. **Strengthen object-oriented programming.** Explore classes, exceptions, file handling, and threads.
4. **Learn database fundamentals.** Practise table definitions and SQL queries.
5. **Explore operating-system concepts.** Trace scheduling algorithms and process-related exercises.
6. **Experiment with machine learning.** Run the regression notebooks and examine their inputs and outputs.
7. **Move to robotics.** Identify the required hardware and understand the code before testing it on a board.

This is a suggested learning sequence, not a required order. Feel free to jump directly to the subject you need.

---

## Contributing

Found an issue, noticed an improvement, or want to make an exercise easier to understand? Improvements that preserve the educational purpose of CampusCore are welcome.

Useful contributions include:

- Fixing programming errors.
- Improving code readability and naming.
- Adding input validation and handling edge cases.
- Explaining an algorithm or concept.
- Documenting dependencies and execution steps.
- Providing reproducible examples and verified outputs.
- Updating documentation to match the actual source code.

Before proposing a change, review the existing implementation and check whether the proposed solution works for the intended environment.

If you plan to contribute through GitHub, you can [open an issue](https://github.com/m4gnel/CampusCore/issues) to report a problem or discuss an improvement.

Please avoid committing passwords, API keys, private keys, personal data, or machine-specific configuration.

---

## Limitations and Verification

CampusCore brings together individual learning exercises developed for different subjects and environments. As a result, their dependencies, input assumptions, and level of completeness may vary.

- Not every program has necessarily been tested in every environment.
- Some code may require debugging or modification.
- Notebooks may depend on datasets or packages that are not included.
- SQL scripts may depend on a specific database dialect or table structure.
- Robotics exercises may require particular boards, libraries, and hardware.
- Saved output images and notebook results should not be treated as proof that the current source has been tested.

Read and verify each exercise before relying on its results in coursework, demonstrations, or other work.

---

## License

**No license file is currently present in the repository.**

Until a license is added, do not assume that the code is available for unrestricted reuse, modification, or redistribution. If you maintain this repository, consider choosing and adding an appropriate license that reflects your intentions and the origin of the included material.

---

<p align="center">
  <sub>CampusCore · A place to practise, explore, and build stronger computer science fundamentals.</sub>
</p>
