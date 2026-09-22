### OOP's-cpp-Unit-3



* ###### **Student Name:-Shreya Dhurandhar**
* ###### **ZPRN:-125UAD1131**
* ###### **Class/Division:-S.Y B.Tech-(F)**
* ###### **Course Name:-OOP's**
* ###### **Unit-3**
* ###### **List of Program and Brief description of each code:-**

|**Program**|**Brief Description**|
|-|-|
|Function Overloading|Demonstrates compile-time polymorphism by using the same add() function with different parameter types and numbers of parameters.|
|Area Calculator|Uses function overloading to calculate the area of a square, rectangle, and circle using different parameter lists.|
|Unary Minus Operator|Overloads the unary '-' operator so an object of the Number class can be negated using '-object'.|
|Prefix \& Postfix Increment|Demonstrates overloading of '++' in both prefix (++object) and postfix (object++) forms.|
|Complex Number Addition|Overloads the binary '+' operator to add the real and imaginary parts of two complex-number objects.|
|Distance Comparison|Overloads the '>' relational operator to compare the stored distance values of two Distance objects.|
|Friend Operator Overloading|Demonstrates a non-member friend function to support expressions such as '10 + complexNumber', where the left operand is an integer.|
|Base Pointer Without Virtual Function|Shows static binding. Even though a base pointer points to a derived object, the base version of a non-virtual function is called.|
|Base Pointer With Virtual Function|Demonstrates run-time polymorphism. A base pointer calls the appropriate 'Dog' or 'Cat' implementation because 'sound()' is virtual.|
|Base Reference With Virtual Function|Demonstrates run-time polymorphism using a base-class reference. The correct derived 'area()' function is selected for a rectangle or circle.|
|Abstract Class \& Pure Virtual Function|Shows how a class becomes abstract using a pure virtual function area() = 0, and how a derived class implements it.|
|Collection of Shape Pointers|Stores different derived shape objects using 'std::unique\_ptr<Shape>' and processes them through a common abstract interface.|
|Virtual Destructor|Demonstrates why a virtual destructor is needed when deleting a derived object through a base pointer, ensuring both destructors execute.|
|Object Slicing|Shows how passing a derived object by value as a base object loses the derived portion, while passing by reference preserves polymorphic behavior.|
|Payment Processing System|Applies polymorphism to a real-world payment system with 'CardPayment', 'UpiPayment', and 'NetBankingPayment' derived from an abstract Payment class.|
|Employee Payroll Mini-Project|Uses an abstract 'Employee' class and derived 'PermanentEmployee' and 'ContractEmployee' classes to calculate salaries through run-time polymorphism.|



