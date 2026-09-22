# Project ANTIK: Console Order Management System

A C++ console application designed to manage customer orders and retail inventory. The system reads an available product catalog from a text file, interacts with the user to process purchases, and generates a formatted receipt with total costs and shipping calculations.

## ✨ Features
* **File-Based Inventory:** Dynamically loads available items, descriptions, and prices directly from a local text file (`ITEMS20003.txt`).
* **Interactive Shopping Cart:** Displays a formatted menu to the user, allowing them to search for items by code and specify quantities until they decide to checkout (by entering `0`).
* **Automated Receipt Generation:** Writes a detailed, formatted order summary to an output file (`ORDERS20003.txt`), including customer details, individual item subtotals, total cost, and calculated shipping fees (free shipping for orders over 200).
* **Object-Oriented Design:** Utilizes multiple inheritance, where the `Order` class inherits from both `Customer` and `Item` to manage transaction states cleanly.

## 🗂️ Repository Structure
* **`mainANTIK.cpp`**: The main execution script handling the CLI menu, file I/O (`ifstream`/`ofstream`), and transaction loops.
* **`Customer.cpp` & `Customer.h`**: Class defining customer attributes (Number, Name, Email) and basic data entry/retrieval.
* **`Item.cpp` & `Item.h`**: Class defining individual product attributes (Item Number, Description, Price).
* **`Order.cpp` & `Order.h`**: Class managing the active cart, tracking total amounts, and calculating dynamic shipping costs.
* **`ITEMS20003.txt`**: The input database of available products (e.g., Karekla, Grafeio, Skoupa).
* **`ProjectANTIK.dev` & `Makefile.win`**: Project configuration and makefiles used by the Dev-C++ IDE.

## 🛠️ Tech Stack
* **Language:** C++
* **Environment/Compiler:** Dev-C++ IDE / MinGW64 (GCC)

## 🚀 Getting Started

### Prerequisites
* A C++ compiler (like g++) to build from source, or the Dev-C++ IDE to open the `.dev` project file. 
* Ensure `ITEMS20003.txt` is located in the same root directory as the executable before running, as it acts as the database.

### Compilation
If you are compiling manually via terminal, navigate to the directory and run:
```bash
g++ mainANTIK.cpp Customer.cpp Item.cpp Order.cpp -o ProjectANTIK.exe
```

### Execution
Run the compiled executable:
```bash
./ProjectANTIK.exe
```

## 💻 Usage Flow
1. Upon launching, the program prompts you for your **Customer No**, **Name**, and **Email**.
2. You will then provide the **Order No** and **Order Date**.
3. The application displays the list of available items loaded from `ITEMS20003.txt`.
4. Enter the **Item Code** you want to purchase, followed by the **Quantity**.
5. Enter `0` when you are finished shopping.
6. The program confirms the end of the transaction (`...Telos agorwn!`) and automatically generates your receipt in `ORDERS20003.txt`.