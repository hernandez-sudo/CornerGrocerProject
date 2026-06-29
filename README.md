# CornerGrocerProject
cs-210 project 3

# CS 210 Portfolio Reflection
## Corner Grocer Item Tracking Program

### Project Summary

For my portfolio, I selected the Corner Grocer Item Tracking Program. The purpose of this project was to help a grocery store track how many times each item was purchased throughout the day. The program reads grocery items from an input file, counts how many times each item appears, and stores the information using a C++ map. Users can search for the frequency of a specific item, display all item frequencies, view a histogram of purchases, and create a backup file containing the item frequencies. This project demonstrates object-oriented programming, file input and output, data structures, and menu-driven program design.

### What I Did Particularly Well

I believe I did well organizing my code into multiple files using object-oriented programming. I created a `GroceryTracker` class that handled the program's main functionality while keeping the `main()` function simple. I also successfully used a map to efficiently count grocery items, which made the program easy to manage and update. Separating the code into a header file, implementation file, and main program made the project more organized and easier to understand.

### Where I Could Enhance My Code

If I continued improving this project, I would add stronger input validation to handle unexpected user input more effectively. I would also make searches case-insensitive so users could find items regardless of capitalization. Another improvement would be sorting the output in different ways, such as by frequency instead of alphabetically, and creating a more user-friendly interface. These improvements would make the program more efficient and easier to use.

### Challenges and How I Overcame Them

The most challenging part of this project was learning how to read data from a file and use a map to count the frequency of each grocery item. I also had to troubleshoot issues related to file locations and making sure the program could correctly find the input file. I overcame these challenges by testing each function individually, using Visual Studio's debugging tools, reviewing the course materials, and asking questions when I became stuck. Breaking the project into smaller tasks made it much easier to complete.

### Transferable Skills

This project strengthened my understanding of object-oriented programming, file handling, functions, loops, maps, and program organization. I also gained more experience creating projects with multiple source and header files in Visual Studio. These skills will transfer directly to future programming courses and software development projects where clean code organization and data processing are important.

### Maintainability, Readability, and Adaptability

I made this program maintainable by separating responsibilities into different files and functions. The `GroceryTracker` class contains all of the program's data and functionality, while `main()` is responsible only for running the menu and calling class functions. I used descriptive function names and organized related code together to improve readability. This design also makes the program adaptable because additional features, such as removing items, updating frequencies, or displaying different reports, could be added without changing the overall structure of the program.
