# Authentication_System
This repository contains a simple authentication system implemented in C++ using object-oriented design principles. It showcases the use of the Strategy and Singleton, and Command design patterns to manage user registration and login operations.
# Features
User Registration: Allows users to register with a username and password.

Login: Supports multiple login strategies (e.g., username/password, OTP, Google account, Scanner).

# Design
User Class: Encapsulates user details and password management.

UserDatabase Class: Manages a collection of User objects and handles registration, login, and logout.

Strategies: Different login strategies implement the ILoginStrategy interface.
