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
    
    
  ==> non- throwing new :- 
        
    -> this doesn't throw an exception if fails, but returns an nullptr.
    -> it may be usefull when its not possible to catch an exception.
    -> you may be calling c++ code from c code, in such casses its not possible to catch an exception.
    -> an application or library compiled with different compilers calls each others code that may throw exception. There is no guarantee that such exception can be caught by  either application & library.
    
    
  => placement New :- 
  
      -> allocates memory at the address specified by the user.
      -> used for creating objects at designated memory locations.
            -> useful in embedded devices where objects may be stored at known locations.
            -> memory pooling
     -> you may need to call delete explicitly for objects that have been created by placement new.
     -> standard library uses placement new in allocators.
     
   Syntax:   int *ptr = new(<memory_address>)Type{};


=> diff between malloc/calloc and new 

     ->                 malloc                                                          new
      1.              function                                                         operator
           requires size during allocation                            size is ascertained from the type.
           can not inilialize memory                                  can inilialize memory
           can't call constructors                                    can call constructors
           returns void pointers that needs to be                     returns correct type of pointers
           typecasted
           can't customized                                            can customized through overloading
           returnd null on failure.                                     throws exception on failure



Memory Issues :- 

    -> allocating insufficient memory that leads to overwrite.
    -> accessing memory after is has been freed.
    -> accessing memory after it has been freed.
    -> freeing same memory twice.
    -> No freeing memory after it is no longer required.


 

