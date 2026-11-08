# ✈️ Airport Flight Management System

**Technology Stack:** C
**Core Concepts:** Dynamic Memory Allocation, Structs, Pointers, CRUD Operations

## 📌 Project Overview
This project is a console-based Airport Flight Management System developed in C. It demonstrates foundational programming skills such as dynamic memory management (using `malloc`, `realloc`, and `free`) and the manipulation of complex data structures to handle flight records.

## ⚙️ Features
* **Flight Data Structure:** Utilizes a custom `Ucus` struct to store flight details including departure, arrival, aircraft model, and passenger capacity.
* **Add Flights:** Dynamically allocates memory to add new flight records to the system using `realloc`.
* **Remove Flights:** Safely removes flights by index and resizes the memory array to prevent memory leaks.
* **List Flights:** Iterates through the stored data to display all current flights in a formatted console output.

## 🚀 How to Run
1. Compile the C file using a standard C compiler (e.g., GCC):
   `gcc "Airport Flight Management System.c" -o airport_management`
2. Run the executable:
   `./airport_management`
