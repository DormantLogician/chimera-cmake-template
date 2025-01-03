## Software component categories

#### Module

Set that gives access to at least one structure, reader, writer, function, or module definition/declaration. Modules may be either public (where user is outside of project) or private (where user is local to project).

#### Unit

An integer (either strongly or weakly typed) or decimal type, smart pointer class, or non-structure class from outside of project.

#### Structure

Either a unit, or a class with only public getter and setter methods, constructors, and an implementation-defined (if inside a public module) data layout - it must be possible to explicitly set unit and/or structure states for testing purposes if not a unit. Non-unit structures may only non-virtually inherit from one or more other structures.

#### Function

Takes zero or more units, structures, and/or functions as arguments, produces outputs, and only factors in explicit arguments given by user in order to calculate this. Writers and/or readers must be given as arguments in order to produce side effects on and/or get info from the world, respectively.

#### Reader

Function that both takes no arguments, and outputs a single unit or structure
containing info from world - cannot contain any testable logic.

#### Writer

Function that takes a single unit or structure as an argument, writes data to world, and outputs nothing - cannot contain any testable logic.