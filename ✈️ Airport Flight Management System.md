# ✈️ Airport Flight Management System

[cite_start]**Technology Stack:** C [cite: 200]
**Core Concepts:** Dynamic Memory Allocation, Structs, Pointers, CRUD Operations

## 📌 Project Overview
[cite_start]This project is a console-based Airport Flight Management System developed in C[cite: 200]. [cite_start]It demonstrates foundational programming skills such as dynamic memory management (using `malloc`, `realloc`, and `free`) and the manipulation of complex data structures to handle flight records[cite: 221, 232, 269].

## ⚙️ Features
* [cite_start]**Flight Data Structure:** Utilizes a custom `Ucus` struct to store flight details including departure, arrival, aircraft model, and passenger capacity[cite: 202, 203, 204, 206, 208].
* [cite_start]**Add Flights:** Dynamically allocates memory to add new flight records to the system using `realloc`[cite: 220, 221].
* [cite_start]**Remove Flights:** Safely removes flights by index and resizes the memory array to prevent memory leaks[cite: 228, 230].
* [cite_start]**List Flights:** Iterates through the stored data to display all current flights in a formatted console output[cite: 241, 243].

## 🚀 How to Run
1. Compile the C file using a standard C compiler (e.g., GCC):
   `gcc airport_management.c -o airport_management`
2. Run the executable:
   `./airport_management`