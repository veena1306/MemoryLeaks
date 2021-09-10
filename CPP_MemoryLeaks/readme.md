How New works internally :- 

When we write �
  int *ptr = new int{5};   => initialises the constructor
             this new internally calls the function : void *operator new(size_t size){
                                                     // allocate memory
                                                    } this function is already implemented in the library.
                                                    // returns the memory address.
