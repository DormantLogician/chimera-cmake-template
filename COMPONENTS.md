## Software component categories

### Module
Set that gives access to at least one structure/reader/writer/function/module declaration and definition.

### Structure
A basic class with only public getter and setter methods,
constructors, and an implementation-defined layout - it must
be possible to explicitly set structure states for testing purposes.

### Reader
Function that both takes no arguments, and outputs a single structure
containing info from world - cannot contain any testable logic.

### Writer
Function that takes a single structure as an argument, writes data to world, and outputs
nothing - cannot contain any testable logic.

### Function
Function that takes zero or more structures and/or functions as
arguments, produces outputs, and only factors in explicit arguments given by
user in order to calculate this. Writers and/or readers must be given as
arguments in order to produce side effects on and/or get info from the world, respectively.