# Database Management Systems (DBMS)

### SQL Exercises · Relational Databases · Query Practice

[![SQL](https://img.shields.io/badge/SQL-Database%20Practice-4479A1?style=for-the-badge&logo=databricks&logoColor=white)](https://en.wikipedia.org/wiki/SQL)
[![Oracle SQL](https://img.shields.io/badge/Oracle-Style%20SQL-F80000?style=for-the-badge&logo=oracle&logoColor=white)](https://www.oracle.com/database/)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **DBMS** section of CampusCore.

This folder brings together SQL scripts for practising relational database concepts, including table creation, data insertion, filtering, aggregate functions, and queries involving customers, employees, products, salespeople, orders, and Nobel Prize winners.

The goal is to make database practice easier to explore: open a script, understand the statements, execute them in a suitable learning environment, and experiment with your own queries.

> **Learn SQL by working with data, questioning the results, and improving your queries.**

---

## Quick Navigation

| File | What it covers |
|---|---|
| [`crate table.sql`](./crate%20table.sql) | Table definitions and combined database exercises |
| [`customers.sql`](./customers.sql) | Customer table definition and a sample filtering query |
| [`employee.sql`](./employee.sql) | Employee record insertion |
| [`nobel_win.sql`](./nobel_win.sql) | Nobel Prize winner table and query examples |
| [`products.sql`](./products.sql) | Product table, insertion, and row counting |
| [`salesman.sql`](./salesman.sql) | Order table definition and salesperson-related query examples |

**Note:** Some scripts contain incomplete statements, inconsistent identifiers, or dependencies on other tables. Review the code before executing it.

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Explore the SQL Files](#explore-the-sql-files)
- [SQL Concepts to Practise](#sql-concepts-to-practise)
- [Getting Started](#getting-started)
- [Running the Scripts](#running-the-scripts)
- [Execution Order and Dependencies](#execution-order-and-dependencies)
- [Known Issues and Verification](#known-issues-and-verification)
- [Safe Database Practice](#safe-database-practice)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The folder contains six SQL files covering different database exercises:

- **Table definitions:** Create relational tables with columns and data types.
- **Data insertion:** Add records using `INSERT` statements.
- **Filtering:** Retrieve records based on conditions.
- **Aggregate functions:** Count records and summarise data.
- **Relational references:** Explore foreign-key declarations between related tables.
- **Query practice:** Work with selection, sorting, pattern matching, and combining query results.

The scripts use Oracle-style elements such as `NUMBER`, `CHAR`, `DATE`, and substitution variables beginning with `&`. The exact statements and their compatibility should be checked against the database engine you choose.

## Explore the SQL Files

<details>
<summary><strong>1. Table Creation and Combined Exercises</strong></summary>

**File:** [`crate table.sql`](./crate%20table.sql)

This script combines several exercises, including definitions for a Nobel Prize winner table, an orders table, a salesperson table, a customer table, and a product table.

It also contains commented query examples and a product-counting query.

**Concepts to explore:**

- `CREATE TABLE`
- Column data types
- Primary-key and foreign-key declarations
- `INSERT INTO`
- `SELECT`
- `COUNT()`

**Before running:** The file has table-order and column-reference issues that may prevent successful execution as written. It also contains spelling inconsistencies in identifiers and uses substitution variables. Review the statements individually rather than executing the entire file unchanged.

</details>

<details>
<summary><strong>2. Customer Records</strong></summary>

**File:** [`customers.sql`](./customers.sql)

This file defines a `customer1` table with columns for a customer ID, name, grade, and salesperson ID. It also includes a commented example for inserting a customer and a query intended to filter customers by grade.

**Concepts to explore:**

- Table definitions
- Customer records
- Foreign-key relationships
- Filtering rows with `WHERE`

**Before running:** The foreign-key declaration references `salesman1`. That table and the referenced key must be defined correctly before the constraint can be created. The commented insertion example also contains an extra value relative to the declared table columns, so it needs correction before use.

</details>

<details>
<summary><strong>3. Employee Records</strong></summary>

**File:** [`employee.sql`](./employee.sql)

This file contains an `INSERT` statement for an `emp` table using values for an employee ID, name, salary, age, date of birth, and phone number.

**Concepts to explore:**

- Inserting records
- Matching values to table columns
- Data types and date handling
- Required table structure

**Before running:** The script assumes that an `emp` table already exists with a compatible column order and data types. Its substitution variables and date value must be handled using the syntax supported by your SQL client.

</details>

<details>
<summary><strong>4. Nobel Prize Winner Queries</strong></summary>

**File:** [`nobel_win.sql`](./nobel_win.sql)

This file defines a `nobel_win` table and includes commented query exercises based on years, subjects, winner names, countries, and categories.

The examples provide opportunities to practise:

- Filtering with `WHERE`
- Combining conditions with `AND`
- Pattern matching with `LIKE`
- Excluding values with `NOT IN`
- Sorting with `ORDER BY`
- Combining query results with `UNION`

**Before running:** Several commented statements contain misspelled identifiers, inconsistent column names, or invalid condition syntax. Treat them as exercises to review and correct rather than assuming they will execute successfully as written.

</details>

<details>
<summary><strong>5. Product Records and Counting</strong></summary>

**File:** [`products.sql`](./products.sql)

This file creates a `products` table with columns for a product ID, price, and name. It then inserts a record using substitution variables and counts product IDs.

**Concepts to explore:**

- `CREATE TABLE`
- `INSERT INTO`
- `COUNT()`
- Aliasing a result with `AS`

**Before running:** The current definition uses a one-digit numeric precision for the product ID and a five-character field for the product name. Consider whether those limits are appropriate for the data you want to store. The insertion statement also expects a SQL client that supports the substitution syntax being used.

</details>

<details>
<summary><strong>6. Orders and Salesperson Exercises</strong></summary>

**File:** [`salesman.sql`](./salesman.sql)

This file defines an `orders1` table with order number, purchase amount, order date, customer ID, and salesperson ID fields. It also contains commented queries involving orders and salesperson details.

**Concepts to explore:**

- Order records
- Foreign-key relationships
- Selecting specific columns
- Retrieving distinct values
- Filtering by salesperson

**Before running:** The foreign-key reference to `salesman1` must be valid, including the referenced key. The insertion statement also has a value-count and column-reference problem that should be corrected before execution.

</details>

---

## SQL Concepts to Practise

The examples in this folder can help you revise several core SQL concepts.

| Concept | Example or purpose |
|---|---|
| `CREATE TABLE` | Define a table and its columns |
| `INSERT INTO` | Add records to a table |
| `SELECT` | Retrieve data |
| `WHERE` | Filter records |
| `AND` / `OR` | Combine conditions |
| `LIKE` | Match text patterns |
| `NOT IN` | Exclude specified values |
| `ORDER BY` | Sort query results |
| `COUNT()` | Count matching values or rows |
| `UNION` | Combine compatible query results |
| Primary and foreign keys | Define and connect relational records |

These are concepts to practise using the available examples; not every concept is implemented in a complete, executable form in every file.

---

## Getting Started

### Prerequisites

You'll need:

- A database engine and SQL client compatible with the statements you intend to run.
- Basic familiarity with SQL syntax.
- A separate learning database for testing and experimentation.

Because the scripts use Oracle-style data types and substitution variables, **Oracle Database with a compatible client such as SQL*Plus or SQL Developer is a reasonable starting point**. Compatibility should still be checked for each script.

Official resources:

- [Oracle Database](https://www.oracle.com/database/)
- [Oracle SQL Developer](https://www.oracle.com/database/sqldeveloper/)
- [Oracle SQL Language Reference](https://docs.oracle.com/en/database/oracle/oracle-database/)

### Clone the repository

If you haven't already cloned CampusCore:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/DBMS
```

If you already have the repository, navigate to its existing `DBMS` directory.

### Prepare a learning database

Connect to a database you are authorised to use. Create or select a separate schema for these exercises, and inspect the table definitions before executing insertion statements.

Avoid using a production database or any database containing important personal or business data.

---

## Running the Scripts

The exact execution steps depend on your database engine and client.

For an Oracle-style environment, the general workflow is:

1. Open your SQL client and connect to your learning schema.
2. Open one SQL file.
3. Read the entire script, including commented statements.
4. Check table dependencies, column names, and data types.
5. Correct any syntax or logic issues.
6. Execute the required statements and inspect the results.

### Understanding substitution variables

Some scripts use expressions such as:

```sql
INSERT INTO products
VALUES (&p_id, &p_price, '&p_name');
```

The `&p_id`, `&p_price`, and `&p_name` expressions are substitution variables commonly used in Oracle SQL*Plus-compatible workflows. They are not universally supported by every SQL client.

The table must also exist, and the supplied values must match the table's columns and data types.

### Check your results

After inserting records, use a query such as:

```sql
SELECT * FROM products;
```

To count non-null product IDs:

```sql
SELECT COUNT(p_id) AS total_no_of_products
FROM products;
```

`COUNT(p_id)` counts rows where `p_id` is not `NULL`. If you want to count every row regardless of column values, use `COUNT(*)` instead.

These are examples of SQL usage, not a claim that all repository scripts have been tested successfully.

---

## Execution Order and Dependencies

Some files depend on tables created elsewhere. For example, the customer and order exercises reference a `salesman1` table.

A sensible workflow is:

1. Identify the tables required by the exercise.
2. Check their column names, data types, and keys.
3. Create referenced tables before dependent tables.
4. Insert valid parent records before records that reference them.
5. Run the relevant query and inspect its output.

Do not assume that the order of files in the folder represents a valid execution sequence. Table names and definitions should be checked across the scripts before deciding which to run first.

---

## Known Issues and Verification

The current SQL files contain inconsistencies that learners should be aware of.

Examples identified during source review include:

- The `crate table.sql` and `nobel_win.sql` scripts contain misspelled or inconsistent table and column identifiers.
- Some foreign-key declarations refer to a column that is not declared as a primary or unique key in the referenced table definition.
- The order-related insertion statement does not consistently match the declared columns.
- The customer insertion example contains more values than the table definition allows.
- The employee insertion script assumes an existing `emp` table.
- Some example queries are commented out and contain syntax or naming issues.

These issues mean that **the scripts should be reviewed and corrected before expecting them to run successfully**. They are useful starting points for SQL practice, but should not be treated as a verified, ready-to-run database setup.

When fixing a statement, check the table definition, expected number of values, data types, constraints, and SQL dialect together.

---

## Safe Database Practice

A few habits can make SQL practice safer and more productive:

- Use a dedicated learning schema.
- Read statements before executing them.
- Be especially careful with `UPDATE`, `DELETE`, and `DROP` statements.
- Check foreign-key dependencies before creating or inserting related records.
- Use small sample datasets to verify query results.
- Never commit database passwords, connection strings, or other credentials to GitHub.

---

## Contributing

Improvements that make the SQL exercises more accurate and easier to understand are welcome.

Useful contributions include:

- Fixing syntax errors and inconsistent identifiers.
- Correcting table definitions and key constraints.
- Adding valid sample records.
- Documenting the expected SQL dialect.
- Including example queries and their verified results.
- Explaining why a query works and what its output means.

Test changes in a disposable database and ensure that the README accurately reflects the updated scripts.

For repository-wide discussion or issue reports, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[AI & Python](../AI/) · [Data Structures](../DS/) · [Machine Learning](../ML/) · [OOPS](../OOPS/) · [Operating Systems](../OS/) · [Robotics Laboratory](../ROBOTICS_LAB/)

---

<p align="center">
  <sub>Understand the schema. Question the query. Verify the result.</sub>
</p>
