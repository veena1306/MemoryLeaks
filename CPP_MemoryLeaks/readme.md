How New works internally :- 

When we write �
  int *ptr = new int{5};   => initialises the constructor
             this new internally calls the function : void *operator new(size_t size){
                                                     // allocate memory
                                                    } this function is already implemented in the library.
                                                    // returns the memory address.
                                                    
                                                    
  =>  failures for new :- 

    -> new throws an exception on failure.
    -> it throws an exception of bad_alloc(default behaviour).
    -> it calls a function set by set_new_handler function.
    -> it returns NULL if nothrow version of new is used.
