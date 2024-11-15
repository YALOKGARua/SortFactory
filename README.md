# SortMaster  
**SortMaster** is a C++ project designed to showcase and experiment with various sorting algorithms. It includes utility functions for generating and manipulating arrays, as well as a flexible sorting factory to easily switch between different algorithms.

---

## Features  

- Implementation of multiple sorting algorithms:  
  - Bubble Sort  
  - Quick Sort  
  - Insertion Sort  
  - Selection Sort  

- Utilities for:  
  - Generating random arrays  
  - Creating reversed arrays or arrays with duplicate values  
  - Checking if an array is sorted  
  - Printing arrays  

- Sorting Factory for selecting and applying sorting algorithms dynamically.  

---

## Folder Structure  

```
.
├── CMakeLists.txt      # Build system configuration
├── main.cpp            # Entry point of the application
├── sort_algorithms.h   # Sorting algorithms declarations
├── sort_algorithms.cpp # Sorting algorithms implementations
├── array_manager.h     # Utilities for array creation and manipulation
├── array_manager.cpp   # Implementation of array utilities
├── sort_factory.h      # Sorting factory declarations
├── sort_factory.cpp    # Sorting factory implementation
├── utils.h             # Utility functions declarations
├── utils.cpp           # Utility functions implementation
├── config.h            # Project configuration file
```

---

## Getting Started  

### Prerequisites  

- C++17 or higher  
- CMake 3.10 or higher  

### Build Instructions  

1. Clone the repository:  
   ```bash
   git clone https://github.com/your-username/SortMaster.git
   cd SortMaster
   ```

2. Build using CMake:  
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```

3. Run the executable:  
   ```bash
   ./SortMaster
   ```

---

## Usage  

- The program generates random arrays and sorts them using various algorithms.  
- You can modify the sorting algorithm by editing the call to `getSortFunction` in `main.cpp`.  
- Supported algorithms:  
  - `"bubble"`  
  - `"quick"`  
  - `"insertion"`  
  - `"selection"`  

---

## Example Output  

```
Original Array:  
34 7 23 32 5 62 12 87 45 31  
Sorted with Bubble Sort:  
5 7 12 23 31 32 34 45 62 87  
Sorted with Quick Sort:  
5 7 12 23 31 32 34 45 62 87  
```

---

## Contributing  

Contributions are welcome! If you have additional sorting algorithms or features to add:  

1. Fork the repository.  
2. Create a new branch:  
   ```bash
   git checkout -b feature-name
   ```  
3. Commit your changes:  
   ```bash
   git commit -m "Add feature"
   ```  
4. Push to the branch:  
   ```bash
   git push origin feature-name
   ```  
5. Open a pull request.  

---

## License  

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgments  

- Inspiration: The need for a comprehensive sorting algorithms showcase.  
- Tools: Developed using modern C++ standards and CMake for portability.  

---
