# Machine Learning (ML)

### Python · Data Analysis · Regression Models · Jupyter Notebooks

[![Python](https://img.shields.io/badge/Python-3.x-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![Jupyter](https://img.shields.io/badge/Jupyter-Notebooks-F37626?style=for-the-badge&logo=jupyter&logoColor=white)](https://jupyter.org/)
[![Scikit-learn](https://img.shields.io/badge/Scikit--learn-ML%20Practice-F7931E?style=for-the-badge&logo=scikitlearn&logoColor=white)](https://scikit-learn.org/)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **Machine Learning** section of CampusCore.

This folder contains Python exercises and Jupyter notebooks covering foundational data analysis, matrix operations, set operations, word-frequency counting, and introductory machine-learning models.

The notebooks explore regression techniques using the Boston housing dataset, while the Python scripts provide additional practice with programming fundamentals and numerical operations.

The purpose of this collection is to help learners connect Python programming with the basic ideas behind data preparation, model training, prediction, and evaluation.

> **Explore the data. Understand the model. Evaluate the results.**

---

## Quick Navigation

| File | Description |
|---|---|
| [`lab1.ipynb`](./lab1.ipynb) | NumPy, Pandas, arrays, and data manipulation exercises |
| [`linear_regression_with_single_variable.ipynb`](./linear_regression_with_single_variable.ipynb) | Single-variable linear regression |
| [`linear_regression_with_single_variable (1).ipynb`](./linear_regression_with_single_variable%20(1).ipynb) | Additional copy of the single-variable linear regression notebook |
| [`polynomial_regression.ipynb`](./polynomial_regression.ipynb) | Polynomial regression using polynomial features |
| [`logistic_regression.ipynb`](./logistic_regression.ipynb) | Logistic regression model exercise |
| [`Boston_model.ipynb`](./Boston_model.ipynb) | Boston housing dataset modelling exercise |
| [`Union_Intersection.py`](./Union_Intersection.py) | Set union and intersection |
| [`count.py`](./count.py) | Word-frequency counting for user-provided text |
| [`file_count.py`](./file_count.py) | Finding the most frequent word in a text file |
| [`matrix_mul.py`](./matrix_mul.py) | Matrix multiplication exercise |

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Explore the Notebooks](#explore-the-notebooks)
- [Explore the Python Scripts](#explore-the-python-scripts)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Running the Notebooks](#running-the-notebooks)
- [Running the Python Scripts](#running-the-python-scripts)
- [Dataset Requirements](#dataset-requirements)
- [Important Notes](#important-notes)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The folder contains two main types of learning material.

### Jupyter notebooks

The notebooks cover:

- NumPy arrays and numerical operations.
- Pandas Series and DataFrames.
- Data exploration and visualisation.
- Simple linear regression.
- Polynomial regression.
- Logistic regression.
- Model training and evaluation concepts.

### Python scripts

The standalone scripts cover:

- Set operations using union and intersection.
- Counting words in a sentence.
- Finding the most frequent word in a text file.
- Matrix multiplication using nested loops.

These examples provide a starting point for experimentation. Their presence in the repository does not imply that every notebook or script has been independently tested or that all models are suitable for real-world deployment.

## Explore the Notebooks

<details>
<summary><strong>1. NumPy and Pandas Practice</strong></summary>

**File:** [`lab1.ipynb`](./lab1.ipynb)

This notebook introduces numerical arrays and basic data manipulation using NumPy and Pandas.

Topics include:

- Creating one-dimensional and multidimensional arrays.
- Generating arrays of zeros and ones.
- Performing arithmetic on arrays.
- Reshaping and flattening arrays.
- Calculating sums, means, minimums, and maximums.
- Working with Pandas Series and DataFrames.
- Exploring structured tabular data.

**Why it matters:** NumPy and Pandas are widely used for preparing, transforming, and exploring datasets before applying machine-learning algorithms.

</details>

<details>
<summary><strong>2. Single-Variable Linear Regression</strong></summary>

**Files:**

- [`linear_regression_with_single_variable.ipynb`](./linear_regression_with_single_variable.ipynb)
- [`linear_regression_with_single_variable (1).ipynb`](./linear_regression_with_single_variable%20(1).ipynb)

These notebooks explore linear regression using the average number of rooms in a dwelling (`RM`) as a predictor and the median house value (`MEDV`) as the target.

The workflow includes:

- Importing Python data-science libraries.
- Loading and inspecting a dataset.
- Exploring the relationship between a predictor and target.
- Splitting data into training and testing sets.
- Training a linear regression model.
- Generating predictions.
- Evaluating model performance using metrics such as mean squared error and \(R^2\).

**Why it matters:** Linear regression is a foundational supervised-learning technique for modelling relationships between numerical variables.

**Important:** Both notebooks expect a Boston housing CSV file. See [Dataset Requirements](#dataset-requirements) before running them.

</details>

<details>
<summary><strong>3. Polynomial Regression</strong></summary>

**File:** [`polynomial_regression.ipynb`](./polynomial_regression.ipynb)

This notebook explores polynomial regression by transforming input features into polynomial features and fitting a linear regression estimator to those transformed features.

Topics include:

- Loading and inspecting data.
- Selecting predictor and target variables.
- Generating polynomial features.
- Fitting a regression pipeline.
- Visualising relationships between variables.
- Exploring how polynomial degree affects model behaviour.

**Why it matters:** Polynomial regression can represent curved relationships that a straight-line model cannot capture as effectively.

**Important:** Increasing polynomial degree can lead to overfitting. Model performance should be assessed using appropriate evaluation data rather than relying only on how closely the model follows the training observations.

</details>

<details>
<summary><strong>4. Logistic Regression</strong></summary>

**File:** [`logistic_regression.ipynb`](./logistic_regression.ipynb)

This notebook explores a logistic regression workflow using Python machine-learning libraries. It includes data loading, feature and target preparation, train-test splitting, feature scaling, model training, and classification-oriented evaluation.

The notebook imports tools for:

- `LogisticRegression`
- `StandardScaler`
- `train_test_split`
- `accuracy_score`
- `confusion_matrix`
- `ConfusionMatrixDisplay`

**Why it matters:** Logistic regression is commonly used for classification tasks, where the objective is to predict a category rather than an unrestricted continuous value.

**Important:** The notebook uses Boston housing data in its loading workflow. Housing prices are continuous values, so they should not be passed directly to a standard classifier as though they were class labels. Verify that the notebook defines a meaningful categorical target before interpreting its results as a valid classification experiment.

</details>

<details>
<summary><strong>5. Boston Housing Model</strong></summary>

**File:** [`Boston_model.ipynb`](./Boston_model.ipynb)

This notebook contains another housing-data modelling exercise related to the single-variable regression workflow.

The visible notebook cells include imports, dataset loading, data inspection, predictor and target selection, and regression-related evaluation tools.

**Why it matters:** Comparing related notebooks can help you understand how data loading, feature selection, model training, and evaluation fit together.

**Important:** The notebook contains an apparent misspelling in an import statement in one of its Markdown cells. Review the cells before running them, and confirm that the actual executable cells use valid imports and the intended dataset path.

</details>

---

## Explore the Python Scripts

<details>
<summary><strong>1. Union and Intersection</strong></summary>

**File:** [`Union_Intersection.py`](./Union_Intersection.py)

Demonstrates union and intersection using two Python sets.

- **Union:** Combines the distinct elements from both sets.
- **Intersection:** Returns elements shared by both sets.

This exercise reinforces set operations and basic Python collections.

</details>

<details>
<summary><strong>2. Word-Frequency Counting</strong></summary>

**File:** [`count.py`](./count.py)

Accepts a sentence or string from the user, splits it into words, and counts how often each distinct word appears.

The example demonstrates:

- User input.
- String splitting.
- Dictionary-based counting.
- Iterating through dictionary entries.

**Note:** Counting is case-sensitive, and punctuation is not removed before counting. Words with different capitalisation or attached punctuation may therefore be counted separately.

</details>

<details>
<summary><strong>3. Most Frequent Word in a File</strong></summary>

**File:** [`file_count.py`](./file_count.py)

Reads a text file, converts its contents to lowercase, counts the words, and prints the most frequently occurring word and its frequency.

This exercise introduces:

- File handling.
- Reading text from a file.
- Lowercase normalisation.
- Dictionaries and frequency counting.
- Finding the maximum frequency.

**Note:** The file must exist at the path supplied by the user. An empty file produces no word counts, so the current implementation needs an empty-input check to handle that case safely.

</details>

<details>
<summary><strong>4. Matrix Multiplication</strong></summary>

**File:** [`matrix_mul.py`](./matrix_mul.py)

Takes matrix dimensions and user-provided elements, checks the dimension condition for multiplication, and attempts to calculate the resulting matrix using nested loops.

For matrices \(A\) and \(B\), multiplication is possible when the number of columns in \(A\) equals the number of rows in \(B\).

If \(A\) has dimensions \(m \times n\) and \(B\) has dimensions \(n \times p\), the result has dimensions \(m \times p\).

**Important:** The current implementation has an indentation issue in the multiplication loops, which prevents it from correctly calculating a general matrix product. Treat this file as an exercise to debug before relying on its output.

</details>

---

## Requirements

The Python scripts require a compatible Python 3 installation.

The notebooks may require these packages, depending on the cells you execute:

| Package | Purpose |
|---|---|
| NumPy | Numerical arrays and mathematical operations |
| Pandas | Data loading and tabular data manipulation |
| Matplotlib | Plotting and visualisation |
| Seaborn | Statistical data visualisation |
| Scikit-learn | Regression, classification, preprocessing, and evaluation |

Jupyter Notebook or JupyterLab is required to run the notebooks locally.

Official resources:

- [Python](https://www.python.org/)
- [Jupyter](https://jupyter.org/)
- [NumPy](https://numpy.org/)
- [Pandas](https://pandas.pydata.org/)
- [Matplotlib](https://matplotlib.org/)
- [Seaborn](https://seaborn.pydata.org/)
- [Scikit-learn](https://scikit-learn.org/)

## Getting Started

Clone the repository if you haven't already:

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/ML
```

If you already have CampusCore on your computer, navigate to the existing `ML` directory.

### Create a virtual environment

Creating an isolated environment helps keep the project's Python dependencies separate from other projects.

**Windows PowerShell:**

```powershell
py -m venv .venv
.\.venv\Scripts\Activate.ps1
```

**Linux or macOS:**

```bash
python3 -m venv .venv
source .venv/bin/activate
```

### Install the common packages

With the virtual environment activated:

```bash
python -m pip install --upgrade pip
python -m pip install numpy pandas matplotlib seaborn scikit-learn jupyter
```

These commands install common dependencies for the notebooks. They do not guarantee that every notebook will run without additional dataset preparation or code corrections.

## Running the Notebooks

From the `ML` directory, start Jupyter:

```bash
jupyter notebook
```

Alternatively, use JupyterLab:

```bash
jupyter lab
```

Open the notebook you want to explore and execute its cells in order.

If you prefer not to install Jupyter locally, you can use an online notebook environment such as [Google Colab](https://colab.research.google.com/). You will still need to upload the relevant notebook and supply any external datasets it requires.

## Running the Python Scripts

Run a standalone script from the `ML` directory:

```bash
python Union_Intersection.py
```

Other examples:

```bash
python count.py
python file_count.py
python matrix_mul.py
```

Some scripts require interactive input. For `file_count.py`, enter a valid text-file path when prompted.

If you are using Windows, you may use `py` instead of `python` if that is the command configured on your system.

---

## Dataset Requirements

The regression notebooks reference a CSV file named `Boston.csv` or `boston.csv`, depending on the notebook.

**The CSV dataset is not included in the current `ML` folder listing.** Consequently, those notebooks may stop with a file-not-found error until the required dataset is supplied at the expected path.

Before running a notebook:

1. Inspect its dataset-loading cell.
2. Confirm the expected filename and capitalisation.
3. Place the dataset in the directory from which the notebook reads it, or update the path deliberately.
4. Verify that the required columns, including `RM` and `MEDV` where used, exist in the dataset.
5. Check the data source and documentation before interpreting the results.

The historical Boston housing dataset has also been criticised for ethical issues in its original variables and intended uses. Treat it as a legacy educational dataset, not as an appropriate basis for real-world housing decisions.

---

## Important Notes

These examples are learning material and may need corrections or additional validation.

- **Duplicate notebook:** The two single-variable linear regression notebooks appear to contain duplicated content. Compare them before maintaining both versions.
- **Dataset dependency:** The housing-model notebooks require a compatible CSV file that is not included in this folder.
- **Classification target:** Logistic regression requires a meaningful categorical target; verify the target definition in the notebook.
- **Matrix multiplication:** `matrix_mul.py` has a loop-indentation issue that should be corrected.
- **File handling:** `file_count.py` should handle missing files and empty files gracefully.
- **Model evaluation:** A trained model's performance should be assessed on appropriate held-out data. A plot or training result alone does not establish generalisation.
- **Reproducibility:** Record the dataset source, preprocessing steps, model configuration, and evaluation method when improving these examples.

The documentation describes the visible contents and intended learning goals; it does not claim that all notebooks have been executed successfully.

---

## Suggested Learning Path

For a beginner, the following progression builds a useful foundation:

1. **Python data handling:** Start with `Union_Intersection.py` and `count.py`.
2. **Numerical computing:** Explore NumPy arrays and operations in `lab1.ipynb`.
3. **Data preparation:** Learn how Pandas represents and inspects tabular data.
4. **Linear regression:** Understand predictors, targets, training data, and test data.
5. **Polynomial regression:** Explore nonlinear relationships and model complexity.
6. **Classification:** Study logistic regression using a properly defined categorical target.
7. **Evaluation and debugging:** Check data assumptions, fix code issues, and verify results using suitable metrics.

Try changing one variable at a time, predicting what should happen, and comparing your expectations with the actual output.

---

## Contributing

Contributions that improve correctness, reproducibility, and clarity are welcome.

You can help by:

- Fixing bugs in Python scripts and notebooks.
- Removing accidental duplicate files or documenting why both versions are retained.
- Adding a clear dataset source and setup instructions.
- Improving data validation and error handling.
- Explaining model assumptions and evaluation metrics.
- Correcting notebook imports and execution order.
- Recording tested dependency versions and verified results.

Test changes with representative inputs, including edge cases, and ensure that the README reflects the actual code.

For repository-wide discussion or improvements, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[AI & Python](../AI/) · [DBMS](../DBMS/) · [Data Structures](../DS/) · [OOPS](../OOPS/) · [Operating Systems](../OS/) · [Robotics Laboratory](../ROBOTICS_LAB/)

---

<p align="center">
  <sub>Prepare the data. Train with purpose. Evaluate with evidence.</sub>
</p>
