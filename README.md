(a) SINGLE INHERITANCE – SINGLEINHERITANCE.CPP

AIM:

To demonstrate single inheritance where one derived class inherits from a single base class.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Single inheritance allows a derived class to inherit properties and methods of a single base class. It facilitates code reusability and hierarchical class structure.

ALGORITHM:

Start the program and include necessary header files.

Define a base class with a method.

Define a derived class inheriting from the base class.

Create an object of derived class.

Call the method from the base class using derived class object.

Call the method from the derived class.

Stop the program.

CONCLUSION:

The program successfully demonstrates single inheritance, allowing the derived class to access base class methods.

(b) MULTIPLE INHERITANCE – MULTIPLEINHERITANCE.CPP

AIM:

To demonstrate multiple inheritance where one derived class inherits from two base classes.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Multiple inheritance allows a derived class to inherit from more than one base class. It enables the derived class to combine functionalities from multiple sources.

ALGORITHM:

Start the program and include necessary header files.

Define two base classes, each with a method.

Define a derived class inheriting from both base classes.

Create an object of the derived class.

Call methods of both base classes using the derived class object.

Call the derived class method.

Stop the program.

CONCLUSION:

The program successfully demonstrates multiple inheritance, allowing a derived class to access members from multiple base classes.

(c) MULTILEVEL INHERITANCE – MULTILEVELINHERITANCE.CPP

AIM:

To demonstrate multilevel inheritance where a class is derived from another derived class.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Multilevel inheritance forms a chain: Base → Intermediate → Derived. Properties and methods of base classes are accessible in derived classes down the chain.

ALGORITHM:

Start the program and include necessary header files.

Define a base class with a method.

Define an intermediate class inheriting from the base class.

Define a derived class inheriting from the intermediate class.

Create an object of the derived class.

Call methods of base, intermediate, and derived classes.

Stop the program.

CONCLUSION:

The program successfully demonstrates multilevel inheritance, showing hierarchical access to methods across classes.

(d) HIERARCHICAL INHERITANCE – HIERARCHICALINHERITANCE.CPP

AIM:

To demonstrate hierarchical inheritance where multiple derived classes inherit from a single base class.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Hierarchical inheritance allows multiple derived classes to inherit from a single base class. Each derived class can access base class members independently.

ALGORITHM:

Start the program and include necessary header files.

Define a base class with a method.

Define multiple derived classes inheriting from the base class.

Create objects of derived classes.

Call base class and derived class methods using respective objects.

Stop the program.

CONCLUSION:

The program successfully demonstrates hierarchical inheritance, showing independent access of base class members by multiple derived classes.

(e) ACCESS SPECIFIER IN INHERITANCE (PROTECTED) – PROTECTEDINHERITANCE.CPP

AIM:

To demonstrate the use of protected access specifier in inheritance.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

A protected member of a base class is not accessible outside the class but is accessible in derived classes. This allows controlled access for inheritance.

ALGORITHM:

Start the program and include necessary header files.

Define a base class with a protected data member.

Define a derived class inheriting from the base class.

Create a method in derived class to access and display the protected member.

In main(), create an object of derived class.

Set the value of protected member using base class method.

Call the derived class method to display the value.

Stop the program.

CONCLUSION:

The program successfully demonstrates protected access specifier in inheritance, allowing derived classes to access base class members while restricting external access.
