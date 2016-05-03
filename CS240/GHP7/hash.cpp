/*-- hash.cpp-------------------------------------------------------------
              This file implements hash member functions.
--------------------------------------------------------------------------*/

#include <iostream>
#include <typeinfo>
using namespace std;

#include "hash.h"

    //--- Definition of hash constructor
    Hash::Hash()
    : container()
    {
        for(i=0;i<23;i++)
        container[i] = "";//make sure every position is the array is empty
    }
    
    void Hash::store(string word){
    /* * * * * * * * * *
     Stores word in Hash
     ('r') = 114  +  ('y') = 121  = 235%23 = 5
    * * * * * * * * * * */
        i = ((int)word[0] + (int)word[word.length() - 1]) % 23;
        bool stored = false;
        while(!stored){
            if (container[i] == ""){
                container[i] = word;
                stored = true;
            } 
            else if (i == HASH_CAPACITY - 1)
                i = 0;
            else
                i++;
        }
        cout << container[i] << i <<endl;
    }
    void Hash::display_word(){
    /* * * * * * * * * *
     displays a specific word from Hash
    * * * * * * * * * * */
    }
    void Hash::display_all(){
    /* * * * * * * * * *
     displays all words in Hash
    * * * * * * * * * * */
        for(i=0;i<HASH_CAPACITY;i++)
            cout << i << ": " << container[i] << endl;
    }
    int  Hash::find(){
    /* * * * * * * * * *
     finds and returns location of word in Hash
    * * * * * * * * * * */
    }
