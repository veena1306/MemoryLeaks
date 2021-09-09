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
4. Code Segment :- program executable code.

example �

  int g_var1;
  int gvar_2 = 10;











