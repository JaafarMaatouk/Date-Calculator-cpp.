# C++ Date Manipulation Library

A console-based C++ application designed to handle complex date calculations. It allows users to input a specific date and accurately add or subtract various time intervals while properly handling leap years and varying month lengths.

## 🎮 Features
- **Input Validation:** Reads Day, Month, and Year from the user.
- **Accurate Leap Year Logic:** Prevents calculation errors during February in leap years.
- **Increase Operations:** Add days, weeks, months, years, decades, centuries, and millennia.
- **Decrease Operations:** Subtract days, weeks, months, years, decades, centuries, and millennia.

## 🛠️ Technical Details
- Uses `struct` to encapsulate date data.
- Separates logic into small, reusable, and well-named functions.
- Handles edge cases (e.g., transitioning from the last day of a month to the next month, or from December 31st to January 1st).

## 🚀 How to Run
1. Clone this repository or download it as a ZIP file.
2. Open the `.sln` file in Visual Studio.
3. Press `F5` or `Ctrl + F5` to build and run the program.
4. Enter the day, month, and year when prompted to see all the calculated date operations.

## 📄 License
This project is open-source and available under the MIT License.
