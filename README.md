# General Store Management System

A console-based inventory management system built in C++ during my 1st semester at FJWU. This was my first real project — I wanted to build something that could actually be used in a small shop, not just a textbook exercise.

---

## What it does

The system lets a store owner manage their inventory through a simple menu. Before anything, there's a login screen so only authorized staff can access it.

Once logged in, you can:

- **Add products** — name, price, and quantity
- **View all products** — a clean list of everything in stock
- **Search by name** — find a specific item instantly
- **Update quantity** — when stock comes in or goes out
- **Delete a product** — remove discontinued or expired items
- **Calculate total inventory value** — useful for end-of-day accounting

---

## Why I built it this way

I kept it intentionally simple — no files, no databases, just arrays and structs in memory. The goal was to understand the fundamentals: how data is stored, how functions pass data by reference, and how a real program flows from login to exit.

The login system uses hardcoded credentials (username: `Generalstore`, password: `Password`) — I know that's not production-ready, but for a 1st semester project focused on logic, it served the purpose.

---

## Sample output

```
Enter username: Generalstore
Enter password: Password

        General Store Management System
1. Add Product
2. Display Product
3. Search Product
4. Total inventory price
5. Update inventory
6. Delete Product
7. End
Enter your choice:
```

After adding two products:

```
--------Product List--------
Name    Price   Quantity
oil     500     2
milk    200     3

Total inventory price: 1600
```

---

## How to run it

This project was built with **Visual Studio 2010** on Windows (uses `stdafx.h` and `_tmain`).

**In Visual Studio:**
1. Create a new Win32 Console Application project
2. Replace the default code with `GeneralStore.cpp`
3. Press `Ctrl + F5` to build and run

> If you're on a newer compiler, replace `_tmain(int argc, _TCHAR* argv[])` with `main()` and remove `#include "stdafx.h"` — it'll compile fine.

---

## What I learned

- Passing arrays and counters by reference
- Structuring a real program with multiple functions
- Input validation and basic authentication logic
- How deletion works in a fixed-size array (shifting elements)

---

## About

**Sidra Iftikhar** — 1st Semester, BS Software Engineering  
Fatima Jinnah Women University (FJWU), Islamabad  
Registration: FA24B1-SE-063  

[LinkedIn](https://linkedin.com/in/engr-sidra-rajput)

---

*This is one of my earliest projects. I've since worked on normalized databases handling 80,000 records, full network designs in Cisco Packet Tracer, and complete UML system designs — but every project starts somewhere.*
