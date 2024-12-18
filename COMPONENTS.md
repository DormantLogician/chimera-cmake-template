## Software component categories

#### Module
Set that gives access to at least one structure, reader, writer, function, or module.

#### Function
Takes zero or more structures and/or functions as arguments, produces outputs, and only
factors in explicit arguments given by user in order to calculate this. Writers and/or
readers must be given as arguments in order to produce side effects on and/or get info
from the world, respectively.

#### Reader
Function that both takes no arguments, and outputs a single structure
containing info from world - cannot contain any testable logic.

#### Writer
Function that takes a single structure as an argument, writes data to world, and outputs
nothing - cannot contain any testable logic.

#### Structure
A class with only public getter and setter methods, constructors, and an implementation-defined data layout - it must be possible to explicitly set structure states for testing purposes. A class may non-virtually inherit from one or more other classes.