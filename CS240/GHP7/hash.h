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

#include <iostream>
#ifndef HASH
#define HASH

const int HASH_CAPACITY = 23;
typedef char HashElement;

class Hash
{
 public:

    /***** Constructor *****/
    Hash();

    void store(string);
    /* * * * * * * * * *
     Stores word in hash
    * * * * * * * * * * */
    void display_word();
    /* * * * * * * * * *
     displays a specific word from hash
    * * * * * * * * * * */
    void display_all();
    /* * * * * * * * * *
     displays all words in hash
    * * * * * * * * * * */
    int  find();
    /* * * * * * * * * *
     finds and returns location of word in hash
    * * * * * * * * * * */


 private:
  /***** Data Members *****/
    int i;
    string container[HASH_CAPACITY];
}; // end of class declaration
#endif
