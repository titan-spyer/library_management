# 📚 Modern Library ERP

![Python Version](https://img.shields.io/badge/python-3.10%2B-blue.svg)
![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![Tests](https://img.shields.io/badge/tests-98%20passed-success.svg)
![Architecture](https://img.shields.io/badge/architecture-Modular%20%7C%20OOP-blue.svg)

> A robust, terminal-based Enterprise Resource Planning (ERP) system for modern libraries, engineered with Python.

**Modern Library ERP** is a fully engineered backend system featuring Role-Based Access Control (RBAC), the Factory Design Pattern, decoupled data persistence (Repository Pattern), and an isolated business logic engine. 

---

## 🌟 Core Features

### 🔐 Role-Based Access Control (RBAC)
- **Multi-Tiered Users:** Secure environments for `Students`, `Faculty`, `Librarians`, and `Admins`.
- **Dynamic Permissions:** Borrowing limits, fine thresholds, and access rights scale securely based on the inherited user role.
- **Security:** Salted password hashing implementation for secure user authentication.

### ⚙️ Business Rules Engine
- **State Machine:** Resources transition through strict states (`Available`, `Checked Out`, `Lost`, `Archived`).
- **Financial Logic:** Automated calculation of overdue fines, grace periods, payment tracking, and fine waiving workflows.
- **Concurrency Control:** Strict validation rules prevent users from borrowing duplicate copies or exceeding tier limits.

### 🏛️ Engineering Architecture
- **Repository Pattern:** File I/O operations are strictly isolated in the data access layer. The business engine never directly touches the database.
- **Factory Pattern:** Polymorphic instantiation of Users and Resources (Books, Journals, Digital Media) from raw data.
- **Abstract Base Classes:** Enforced architectural contracts across all resource and user types.

---

## 📂 Project Structure

The codebase is organized following industry-standard separation of concerns:

```text
📦 Modern-Library-ERP
 ┣ 📂 .github/workflows/  # CI/CD Pipeline Configuration
 ┣ 📂 data/               # Persistent CSV Storage (Isolated Database)
 ┣ 📂 src/                # Core Application Code
 ┃ ┣ 📂 core/             # Business Logic & Rules Engine (engine.py, validator.py)
 ┃ ┣ 📂 models/           # Domain Entities & Schemas (user.py, book.py)
 ┃ ┣ 📂 repository/       # Data Access Layer (storage.py)
 ┃ ┣ 📂 utils/            # Shared Helpers (logger.py, auth_tools.py)
 ┃ ┗ 📜 main.py           # CLI Entry Point & Controller
 ┣ 📂 tests/              # 98-Test Pytest Suite (Integration & Unit)
 ┣ 📜 .gitignore          # Environment & Cache exclusion
 ┣ 📜 requirements.txt    # Project Dependencies
 ┗ 📜 README.md           # Documentation
```

---

## 🚀 Quick Start

### Prerequisites

* Python 3.10 or higher installed.

### Installation

1. **Clone the repository:**
```bash
git clone [https://github.com/yourusername/Modern-Library-ERP.git](https://github.com/yourusername/Modern-Library-ERP.git)
cd Modern-Library-ERP

```



2. **Create and activate a virtual environment:**
```bash
# On Windows
python -m venv venv
.\venv\Scripts\activate

# On macOS/Linux
python3 -m venv venv
source venv/bin/activate

```


3. **Install dependencies:**
```bash
pip install -r requirements-test.txt

```


4. **Run the Application:**
```bash
python -m src.main

```



*(Note: On first run, the storage engine will automatically initialize the secure database files in the `/data` directory).*

---

## 🧪 Testing & CI/CD

This project is heavily tested with a 98-test `pytest` suite covering unit rules, database storage, and full integration workflows. It uses **GitHub Actions** for Continuous Integration to ensure code reliability on every push.

To run the tests locally:

```bash
pytest tests/ -v

```

---

## 👨‍💻 Author

**Satyabrata Behera** *Software Engineering Intern Candidate | Machine Learning Enthusiast*

* **Education:** B.Tech in Electronics & Telecommunication, Veer Surendra Sai University Of Technology (VSSUT)
* **LinkedIn:** [Satyabrata Behera](https://www.linkedin.com/in/satya-brata-behera/)
* **GitHub:** [@titan-spyer](https://github.com/titan-spyer)