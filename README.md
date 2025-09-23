# Exception_Handaling_In_CPP
## Aim
Learn to handle exceptions in C++.
## Theory
Exception handling in C++ is a mechanism to deal with runtime errors and exceptional situations in a structured and controlled manner, preventing abnormal program termination. It involves three main keywords: try, throw, and catch. 

1. try block:
The try block encloses the code segment that might potentially throw an exception. If an exception occurs within this block, control is transferred to an appropriate catch block.

2. throw keyword:
When an error or exceptional condition is detected, the throw keyword is used to raise an exception. The throw statement can throw any type of value (e.g., integer, string, or an object of a custom exception class).

3. catch block:
The catch block follows a try block and is responsible for handling specific types of exceptions. It takes an argument that specifies the type of exception it can handle. If a thrown exception matches the type in a catch block, that block's code is executed. Multiple catch blocks can be used to handle different exception types.

## Algorithms
### Division by 0

### Checking age for voting
1. Start.

2. Input age.

3. Begin try block: If age < 18, throw the value of age. Else, print "You are eligible to vote."

4. If an exception is thrown, catch it in the catch block:

5. Print error message: "ERROR: Persons below 18 are not allowed to vote."

6. End.
## Conclusion
We learnt to handle exceptions via 3 different blocks . 
