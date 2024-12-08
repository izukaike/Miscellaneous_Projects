#include <iostream>
#include <chrono> // For high_resolution_clock

int main() {
    // Start the timer
    auto start_time = std::chrono::high_resolution_clock::now();

    // Perform the loop
    volatile double variable = 0;
    for (int i = 0; i < 1000000; ++i) {
        variable = variable + 1.0; // Increment variable by 1
    }

    // End the timer
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    // Print the duration
    std::cout << duration.count() << std::endl;

    return 0;
}

