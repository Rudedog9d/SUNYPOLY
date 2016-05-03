/*-- hash.h ---------------------------------------------------------------

  This header file defines hash functions and datatype.
  Basic operations:
    constructor:  Constructs an empty stack
    empty:        Checks if a stack is empty
    push:         Modifies a stack by adding a value at the top
    top:          Retrieves the top stack value; leaves stack unchanged
    pop:          Modifies stack by removing the value at the top
    display:      Displays all the stack elements

--------------------------------------------------------------------------*/

#ifndef HASH
#define HASH

const int HASH_CAPACITY = 23;
typedef char HashElement;

class Hash
{
 public:

    /***** Constructor *****/
    Hash();

    void store(std::string);
    /* * * * * * * * * *
     Stores word in Hash based on value returned from get_hash():
    * * * * * * * * * * */
    void display_all();
    /* * * * * * * * * *
     Displays all words in the hash
    * * * * * * * * * * */
    int find(std::string);
    /* * * * * * * * * * 
     Finds and returns the location of a word in the hash
    * * * * * * * * * * */
    int get_hash (std::string);
    /* * * * * * * * * *
     hashes a word based on the following function
     ((first_letter) +  (last_letter))%HASH_CAPACITY
    * * * * * * * * * * */
 

 private:
  /***** Data Members *****/
    int i;
    std::string container[HASH_CAPACITY];
}; // end of class declaration
#endif
