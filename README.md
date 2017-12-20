# ece160-hw06
## Due Wednesday, December 20th at 11:59 PM
### I will be avilable on Google hangouts for realtime homework help from 6-9 on the 20th. You can also email me questions and/or code any time and I will try to respond within a few hours. I will pull assignments starting on the 13th so I can get grades out early for anyone who has a working program in GitHub. Happy winter break!

This assignment is an extension of [hw05](https://github.com/cooper-ece160/ece160-hw05) with two major additions: 
  * A derived `MastersStudent` class that inherits from `Student` and adds an additional graduation year and a separate vector for post-undergrad grades.
  * A `StudentDatabase` class that contains a map for storing and looking up `Student` objects.

Given the provided `Student.h`, `MastersStudent.h`, `StudentDatabase.h` and `main.cpp`, fill in the empty `.cpp` files for each of the three provided headers that implements the methods declared in each header. You may use your exact `Student.cpp` from [hw05](https://github.com/cooper-ece160/ece160-hw05) if you wish, with the addition of one extra method (see `Student.h`). 


Your project MUST build with the provided `Makefile`, though you may modify the `Makefile` to use
`g++` instead of `clang++` if you don't have clang available locally. 

You should be able to build your project simply by typing `make` at the command line from within the project directory.

When you run `./hw06`, it should produce the exact output in `example_output.txt`. Note that this makefile uses a `*.cpp` wildcard to find source files, so you shouldn't have any extra `.cpp` files lying around in your local directory when you build the project. 

When I test your program, I will use a different `main.cpp`, so make sure your implementations are generally applicable!


