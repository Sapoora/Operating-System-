# Operating-System-

The project involves implementing a multi-threaded system to apply various image processing filters. Here's a summary of the project:

---

### **Project Description**
This project requires creating a program to process images by applying several filters, including:

1. **Horizontal and Vertical Mirroring Filters**: Reflecting the image horizontally or vertically.
2. **Sepia Filter**: Converting images to a nostalgic, brownish tone.
3. **Grayscale Filter**: Converting the image to grayscale.
4. **Edge Detection**: Detecting edges in grayscale images using techniques like Laplacian edge detection.
5. **Blur Filter**: Reducing noise and enhancing edge detection by applying a box filter.

The project has two phases:
- **Serial Implementation**: The filters are applied sequentially.
- **Parallel Implementation**: Using multi-threading for better performance.

The primary objective is to compare the execution times of serial and parallel implementations to assess performance improvement through multi-threading.

The program will:
- Accept a 24-bit bitmap (BMP) image as input.
- Process it with the filters.
- Save the outputs of serial and parallel versions separately.

Additionally, the project emphasizes developing a clear and optimized solution with proper synchronization and resource management in multi-threaded scenarios.

---

### **Required Tools and Technologies**
1. **Programming Language**: C++ (with C++11 standard)
2. **Multi-threading Library**: PThread library for parallel programming.
3. **Image Processing Library**: OpenCV (for reading and manipulating BMP images).
4. **Development Environment**: Linux system with g++ compiler.
5. **Build Tool**: Makefile for compiling the project.
