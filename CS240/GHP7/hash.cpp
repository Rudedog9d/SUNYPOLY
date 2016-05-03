/*-- hash.cpp-------------------------------------------------------------
              This file implements hash member functions.
--------------------------------------------------------------------------*/

#include <iostream>
#include "hash.h"

    //--- Definition of hash constructor
Hash::Hash()
: container()
{
    for(i=0;i<HASH_CAPACITY;i++)//make sure every position is the array is empty 
    container[i] = "";
}

void Hash::store(std::string word){
    /* * * * * * * * * *
     Stores word in Hash based on value returned from get_hash():
    * * * * * * * * * * */
    bool stored = false;
    //get hash value of word
    i = get_hash(word);
    while(!stored){
        //if location empty, store word, otherwise increment position
        if (container[i] == ""){
            container[i] = word;
            stored = true;
        } 
        //if end of hash reached, return to beggining
        else if (i == HASH_CAPACITY - 1)
            i = 0;
        else
            i++;
    }
}
    
void Hash::display_all(){
    /* * * * * * * * * *
     Displays all words in the Hash
    * * * * * * * * * * */
    for(i=0;i<HASH_CAPACITY;i++)
        std::cout << i << ": " << container[i] << std::endl;
    }

int Hash::find(std::string word){
    /* * * * * * * * * *
     finds and returns the location of a word in Hash
    * * * * * * * * * * */
    //get hash value of word
    int word_hash = get_hash(word);
    i = word_hash;
    while(i != word_hash - 1){
        //if word is found, return position of that word
        if(word == container[i])
            return i;
        //if word is'nt found by end of hash, start at beggining
        if (i == HASH_CAPACITY - 1)
            i = 0;
        else
            i++;
    }
        //if word wasn't found, return negative value
        return -1;
    }

int Hash::get_hash(std::string word){
    /* * * * * * * * * *
     hashes a word based on the following function
     ((first_letter) +  (last_letter))%HASH_CAPACITY
    * * * * * * * * * * */
    return ((int)word[0] + (int)word[word.length() - 1]) %HASH_CAPACITY;
}
