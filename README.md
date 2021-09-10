# MemoryLeaks

Process Layout :- 
  1. When a program is started, memory is allocated and it is called virtual address space.
  2. Virtual address space provides an environment for the executable to run.
  3. Some Parts of memory are used for storing data , like global variables, static variables, local and run time.

   Different Segements of the Memory :-
      1. Heap
      2. Stack
      3. Data Segment
      4. Code Segment

1. Heap :- Dynamically allocated memory.
2. Stack :- Local variables.
3. Data Segment :- static and global variables.
4. Code Segment :- program executable code.  // statements of the program
5. pointer variables are stored on stack.

example �

  int g_var1;         // uninitialized global variable
  int gvar_2 = 10;   // initialized global variable
  
  void increment(int arg)   // arg is a local variable
  {
     int copy;
     copy = arg;
     static int couter = 0;
     counter += arg;
     cout << counter;
  }
  

Dynamic Memory Allocation :- 

  1. Refers to allocation on Heap.
  2. Allocated memory at runtime.
  3. scope is same as global varibale, can access data as long as we have address of data.
  4. Lifetime has to be manage by the programer, have to relase manually when required.
   
  Memory allocation methods :- 
   1. malloc : allocates raw memory on heap.
   2. calloc : allocated raw memory on heap and initializes it to 0.'
   3. realloc : can change the size of memory block.
   4. free : releases the memory allocated by other functions. 





Why Dynamic Memory :- 

  1. Required size of memory may be unknown at compile time.
  2. Loading information from external source.
  3. build data structures without fixed size.
  4. more control over lifetime of data., as lifetime of stack based data has limited by scope.
  5. creating large objects.

Why allocation functions doesn't work with c++ :- 
   1. cannot initialize memory.
   2. constructors can not be invoked during allocation.
   3. destructors can not be invoked during allocation.
   4. return NULL on failure.


