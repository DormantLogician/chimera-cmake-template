## Software components

#### Interface

Set that contains at least one reader, writer, function, or module declaration key - key is public to users.

#### Classification

Set that contains at least one reader, writer, function, or module definition value - value is private to users. May implement one or more interfaces.

#### Unit

An integer or decimal, or a non-structure class that is located outside of project.

#### Function

Takes zero or more units, structures, and/or functions as arguments, produces outputs, and only factors in explicit arguments given by user and/or data members of class it is inside of in order to calculate this. Writers and/or readers must be given as arguments in order to produce side effects on and/or get info from the world.

#### Reader

Function that both takes no arguments, and outputs a single unit or structure
containing info from world - cannot contain any testable logic.

#### Writer

Function that takes a single unit or structure as an argument, writes data to world, and outputs nothing - cannot contain any testable logic.