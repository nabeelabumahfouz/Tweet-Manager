#include "Abu-MahfouzNabeelA3.h"

//SUPPLEMENTARY FUNCTION USED TO CONCATONATE NEW TWEETS AT THE END OF THE CURRENT LIST:
void addNodeToList(tweet**tweetList,tweet * node){

    tweet *temp = *tweetList;

    //Seeing if linked list is empty; if it is found to be empty add "node" to tweetlist to be the head of the linked list
    if (*tweetList == NULL){
        *tweetList = node;
        return;
    } 

    else{
        while (temp -> next != NULL){
            temp = temp -> next;
        }
    }

    temp -> next = node;
}
