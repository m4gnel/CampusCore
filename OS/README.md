# Operating Systems

### CPU Scheduling · Memory Management · Process Synchronization · Inter-Process Communication

[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
[![Subject](https://img.shields.io/badge/Subject-Operating%20Systems-2563EB?style=for-the-badge)](https://www.kernel.org/doc/)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **Operating Systems (OS)** section of CampusCore.

This folder contains C programs that explore fundamental operating system concepts through practical implementations. The exercises cover CPU scheduling algorithms, page replacement, process synchronization, and inter-process communication using shared memory.

The goal is to connect theoretical OS concepts with executable examples, helping students understand how processes are scheduled, how memory resources are managed, and how processes coordinate and exchange information.

> **Understand the algorithm. Trace the execution. Analyse the result.**

---

## Quick Navigation

| File | Concept |
|---|---|
| [`fcfs.c`](./fcfs.c) | First-Come, First-Served CPU scheduling |
| [`SRTF.c`](./SRTF.c) | Shortest Remaining Time First scheduling |
| [`Priority.c`](./Priority.c) | Priority-based CPU scheduling |
| [`Non_preamptive.c`](./Non_preamptive.c) | Non-preemptive priority scheduling exercise |
| [`RR.c`](./RR.c) | Round Robin CPU scheduling |
| [`fifo.c`](./fifo.c) | FIFO page replacement |
| [`pc.c`](./pc.c) | Producer–consumer synchronization exercise |
| [`smwp.c`](./smwp.c) | Shared-memory creation and writing |
| [`smrp.c`](./smrp.c) | Shared-memory attachment and reading |

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Explore the Programs](#explore-the-programs)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Compile and Run](#compile-and-run)
- [Important Implementation Notes](#important-implementation-notes)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The programs are organised around four important areas of operating systems.

- **CPU scheduling:** FCFS, SRTF, priority scheduling, and Round Robin.
- **Memory management:** FIFO page replacement and page-fault counting.
- **Process synchronization:** A simplified producer–consumer exercise using counters and mutual-exclusion logic.
- **Inter-process communication (IPC):** Shared-memory examples using System V shared-memory system calls.

These programs are learning exercises rather than production operating-system components. Their results depend on the implementation, the supplied inputs, and the assumptions made by each algorithm.

## Explore the Programs

<details>
<summary><strong>1. CPU Scheduling Algorithms</strong></summary>

CPU scheduling determines which ready process receives CPU time. These programs explore different scheduling policies and calculate metrics such as completion time, turnaround time, and waiting time.

### First-Come, First-Served (FCFS)

[`fcfs.c`](./fcfs.c)

Processes are ordered by arrival time and executed in that order. The program accepts process details, calculates scheduling metrics, and displays a Gantt-chart-style representation.

**Concepts:** Arrival time, burst time, completion time, turnaround time, and waiting time.

### Shortest Remaining Time First (SRTF)

[`SRTF.c`](./SRTF.c)

Explores preemptive shortest-job scheduling by selecting the available process with the smallest remaining burst time.

**Concepts:** Preemption, remaining execution time, and scheduling metrics.

### Priority Scheduling

[`Priority.c`](./Priority.c)

Implements a priority-based scheduling exercise that selects among arrived processes and updates their remaining execution times.

**Concepts:** Process priority, arrival time, waiting time, and turnaround time.

**Implementation note:** The program decrements remaining time one unit at a time, making it a preemptive priority-style implementation. It treats smaller numeric priority values as higher priority.

### Non-Preemptive Priority Scheduling

[`Non_preamptive.c`](./Non_preamptive.c)

Selects a process according to its priority from the processes that have arrived, then runs the selected process to completion.

**Concepts:** Non-preemptive scheduling, process selection, and average scheduling metrics.

The implementation uses a fixed-size process array and a sentinel entry. Review the array bounds and idle-time handling before relying on results for arbitrary inputs.

### Round Robin (RR)

[`RR.c`](./RR.c)

Explores time-sliced scheduling using a configurable time quantum. The program records execution segments and attempts to display a Gantt chart.

**Concepts:** Time quantum, ready processes, remaining burst time, and context-switch scheduling behaviour.

The implementation should be tested carefully with different arrival times and time-quantum values; see the notes below.

</details>

<details>
<summary><strong>2. Page Replacement</strong></summary>

### First-In, First-Out (FIFO)

[`fifo.c`](./fifo.c)

Simulates page replacement using a reference string and a fixed number of frames. When a referenced page is absent, the program replaces a page according to a FIFO-style rotation and reports page faults and hits.

**Concepts:**
- Page references and memory frames.
- Page hits and page faults.
- FIFO replacement order.
- Hit and miss ratios.

Try different reference strings and frame counts to observe how replacement behaviour changes.

</details>

<details>
<summary><strong>3. Process Synchronization</strong></summary>

### Producer–Consumer Exercise

[`pc.c`](./pc.c)

Provides a menu-driven producer–consumer simulation using counters for the mutex state, occupied slots, available slots, and item count.

**Concepts:**
- Producer and consumer roles.
- Buffer capacity.
- Mutual exclusion.
- Simplified wait and signal operations.

**Important:** This is a single-process simulation using ordinary variables, not a complete concurrent producer–consumer implementation. Its `wait()` and `signal()` functions do not provide real operating-system semaphore semantics.

</details>

<details>
<summary><strong>4. Inter-Process Communication (IPC)</strong></summary>

### Shared Memory Writer

[`smwp.c`](./smwp.c)

Uses System V shared-memory functions to create or access a shared-memory segment and write input into it.

### Shared Memory Reader

[`smrp.c`](./smrp.c)

Attempts to attach to a shared-memory segment, read its contents, and perform a calculation based on the stored text.

**Concepts:**
- Shared-memory segments.
- `shmget()` and `shmat()`.
- Communication between separate processes.
- Data representation and shared-memory access.

The two examples use the same shared-memory key, `1222`, suggesting that they are intended to work together. The reader expects the shared-memory segment to exist and contain data in the expected format.

</details>

---

## Requirements

You will need:

- A C compiler such as GCC.
- A Linux environment for the shared-memory programs.
- A terminal or shell.
- Basic familiarity with C, arrays, structures, loops, and functions.

### Recommended environment

Linux or Ubuntu under WSL is suitable for these exercises. The shared-memory programs use System V IPC headers and system calls that are available on Linux.

Useful resources:

- [GCC documentation](https://gcc.gnu.org/)
- [Linux man-pages project](https://www.kernel.org/doc/man-pages/)
- [Operating Systems: Three Easy Pieces](https://pages.cs.wisc.edu/~remzi/OSTEP/)

Check whether GCC is installed:

```bash
gcc --version
```

On Ubuntu or WSL, install the compiler if necessary:

```bash
sudo apt update
sudo apt install build-essential
```

---

## Getting Started

Clone the repository if you have not already:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/OS
```

If the repository is already on your computer, navigate to its existing `OS` directory instead.

## Compile and Run

Compile each program separately because each source file is a standalone exercise.

### Example: FCFS scheduling

```bash
gcc fcfs.c -o fcfs
./fcfs
```

### Example: SRTF scheduling

```bash
gcc SRTF.c -o srtf
./srtf
```

### Example: Priority scheduling

```bash
gcc Priority.c -o priority
./priority
```

### Example: Round Robin scheduling

```bash
gcc RR.c -o rr
./rr
```

### Example: FIFO page replacement

```bash
gcc fifo.c -o fifo
./fifo
```

### Example: Producer–consumer simulation

```bash
gcc pc.c -o pc
./pc
```

### Example: Shared-memory programs

Compile both programs:

```bash
gcc smwp.c -o smwp
gcc smrp.c -o smrp
```

Run the writer first, enter the data, and then run the reader in another terminal:

```bash
./smwp
```

In a second terminal, from the same directory:

```bash
./smrp
```

The reader relies on the shared-memory segment created or accessed by the writer. Check the error handling and data format before expecting the pair to work reliably.

**Note:** These commands show how to compile the files; successful compilation does not guarantee correct algorithmic results. The implementations should be validated with known test cases before being used for assignments or demonstrations.

---

## Important Implementation Notes

The following points are worth reviewing when studying or improving these exercises.

- **Input validation:** Most programs assume valid input. Check process counts, positive burst times, frame counts, and time quantum values before using them in calculations or array indexing.
- **Fixed-size arrays:** Several scheduling programs use fixed-size arrays. Entering more processes than the supported capacity can cause out-of-bounds memory access.
- **FCFS average waiting time:** In `fcfs.c`, the average waiting-time accumulation uses `avgwt += avgwt + p[i].wt`, which does not correctly accumulate waiting times. It should be reviewed and corrected to sum each process's waiting time once.
- **SRTF boundary conditions:** `SRTF.c` uses a fixed sentinel index and does not robustly handle every case, including process counts beyond its array assumptions or invalid input.
- **Priority scheduling:** `Priority.c` and `Non_preamptive.c` use different priority-selection conventions. Confirm whether smaller or larger numbers mean higher priority when comparing their output.
- **Round Robin scheduling:** `RR.c` stores execution segments in an array indexed by elapsed time and assumes a particular process iteration order. Test cases involving late arrivals, idle CPU periods, and different time quanta may expose incorrect scheduling or chart output.
- **FIFO page replacement:** `fifo.c` assumes valid positive frame and reference-string lengths. A zero frame count or zero reference-string length can lead to invalid operations or division by zero.
- **Producer–consumer simulation:** `pc.c` demonstrates the idea using counters but does not implement thread-safe synchronization or actual semaphores.
- **Shared-memory error handling:** `smwp.c` and `smrp.c` should check the return values of `shmget()` and `shmat()` before using the returned identifiers or addresses. The programs also need a clearly defined data format and appropriate shared-memory cleanup.
- **Shared-memory calculation:** `smrp.c` derives values from specific character positions and uses a character subtraction expression that should be verified against the intended input format.

These are source-level observations, not a claim that every possible failure has been tested.

---

## Suggested Learning Path

If you are studying Operating Systems for the first time, follow this sequence:

1. **Start with FCFS:** Understand arrival, burst, completion, turnaround, and waiting times.
2. **Compare scheduling strategies:** Study SRTF and both priority-scheduling exercises.
3. **Learn time slicing:** Explore Round Robin and see how the time quantum affects execution.
4. **Study memory replacement:** Trace FIFO page replacement manually and compare page faults.
5. **Understand synchronization:** Learn the producer–consumer problem, critical sections, and semaphore concepts.
6. **Explore IPC:** Run the shared-memory examples and understand how separate processes access the same memory segment.
7. **Validate the implementations:** Use small, known inputs and compare calculated metrics against hand-worked results.

For each program, try drawing the execution timeline, calculating the expected result manually, and then comparing it with the program's output.

---

## Contributing

Improvements that make these programs more reliable and useful for learning are welcome.

Potential contributions include:

- Correcting algorithmic and calculation errors.
- Improving input validation and array bounds.
- Adding clear comments and sample input/output.
- Verifying Gantt charts against scheduling timelines.
- Testing edge cases such as idle CPU periods and late process arrivals.
- Improving shared-memory error handling and cleanup.
- Replacing simulated synchronization with proper POSIX threads and semaphores in a separate, clearly documented example.

Test changes with representative inputs and document any assumptions made by the implementation.

For repository-wide improvements, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[Artificial Intelligence](../AI/) · [DBMS](../DBMS/) · [Data Structures](../DS/) · [Machine Learning](../ML/) · [OOPS](../OOPS/) · [Robotics Laboratory](../ROBOTICS_LAB/)

---

<p align="center">
  <sub>Understand processes. Manage resources. Build a stronger foundation in operating systems.</sub>
</p>
