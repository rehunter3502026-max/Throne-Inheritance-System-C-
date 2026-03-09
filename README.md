# Throne-Inheritance-System-C++

A simplified implementation of the throne inheritance system using object-oriented programming in C++.

This project simulates royal succession using a tree structure and follows inheritance rules using a Depth-First Search (DFS) traversal approach.

🚀 Features

👶 Birth Registration – Add a child under a specific parent

⚰️ Death Handling – Mark a person as deceased (without removing them from the tree)

📜 Inheritance Order Display – Prints the current throne succession order

🌳 Tree-based hierarchy simulation

🔎 Name lookup using linear search

🧠 How It Works

Each person is stored using:

name[] → stores names

parent[] → stores parent index

alive[] → tracks whether the person is alive

Succession order is generated using DFS traversal:

Visit parent (if alive)

Recursively visit children in birth order

Even if a person dies, their children remain in the inheritance line.

📂 Class Structure
ThroneInheritance
🔹 Constructor

Initializes the kingdom with the king.

🔹 birth(parentName, childName)

Adds a child under the given parent.

🔹 death(name)

Marks a person as deceased.

🔹 getInheritanceOrder()

Prints the current inheritance order.

🧠 Concepts Used

Object-Oriented Programming (OOP)

Arrays for structured storage

Depth-First Search (DFS)

Recursion

Tree hierarchy representation
