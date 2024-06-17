# 2D Matrix Operations in C++

This project provides a set of operations for 2D matrices implemented in C++. The operations include:

- Matrix Addition
- Matrix Subtraction
- Matrix Multiplication
- Determinant Calculation
- Matrix Inversion

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Operations](#operations)
  - [Matrix Addition](#matrix-addition)
  - [Matrix Subtraction](#matrix-subtraction)
  - [Matrix Multiplication](#matrix-multiplication)
  - [Determinant Calculation](#determinant-calculation)
  - [Matrix Inversion](#matrix-inversion)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/matrix-operations.git
    ```

2. Navigate to the project directory:
    ```sh
    cd matrix-operations
    ```

3. Compile the code:
    ```sh
    g++ -o matrix_operations main.cpp matrix.cpp
    ```

## Usage

Run the compiled program:
```sh
./matrix_operations
```

## Operations

### Matrix Addition
Add two matrices of the same dimensions.

### Matrix Subtraction
Subtract one matrix from another, both of the same dimensions.

### Matrix Multiplication
Multiply two matrices if the number of columns in the first matrix is equal to the number of rows in the second matrix.

### Determinant Calculation
Calculate the determinant of a square matrix.

### Matrix Inversion
Calculate the inverse of a square matrix if it is invertible.

## Examples
Below are examples of how each operation can be used within the program.

### Matrix Addition
```cpp
Matrix A = {{1, 2}, {3, 4}};
Matrix B = {{5, 6}, {7, 8}};
Matrix C = addMatrices(A, B);
// C is {{6, 8}, {10, 12}}
```
### Matrix Subtraction
```cpp
Matrix A = {{5, 6}, {7, 8}};
Matrix B = {{1, 2}, {3, 4}};
Matrix C = subtractMatrices(A, B);
// C is {{4, 4}, {4, 4}}
```

### Matrix Multiplication
```cpp
Matrix A = {{1, 2}, {3, 4}};
Matrix B = {{5, 6}, {7, 8}};
Matrix C = multiplyMatrices(A, B);
// C is {{19, 22}, {43, 50}}
```

### Determinant Calculation
```cpp
Matrix A = {{1, 2}, {3, 4}};
double det = determinant(A);
// det is -2.0
```

### Matrix Inversion
```cpp
Copy code
Matrix A = {{4, 7}, {2, 6}};
Matrix invA = inverse(A);
// invA is {{0.6, -0.7}, {-0.2, 0.4}}
```

## Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or additions.

## Additional Notes
Ensure your matrices are valid (e.g., dimensions match for the required operations).
Error handling is included for invalid operations, such as attempting to invert a non-invertible matrix.
