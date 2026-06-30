# Bank Application

A C++ console app (Visual Studio, Windows) that displays bank loan products and checks a customer's loan eligibility based on age and monthly income.

## Features
- Prints a table of loan products (Vehicle, Housing, Education, Senior Citizen, Personal) with age range, income requirement, max loan amount, repay period, and interest rate.
- Classifies a customer's age and income, then shows the loan offer they qualify for (or "Request Denied!").

## Build & Run
1. Open `Bank Application.sln` in Visual Studio.
2. Build (Debug/x64).
3. Run (`F5`). Currently uses hardcoded test values (age 35, income 50,000) instead of live input.

## Requirements
Windows, Visual Studio with C++ workload (uses `<windows.h>`).
