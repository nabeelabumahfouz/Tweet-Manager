#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #8    
void sortID (tweet ** head){

    int swapping = 0;
    int tempid = 0;
    char tempuser[51];
    char temptext[151];

    tweet *tempTweet;
    tweet *lastNode = NULL;
        
    if (*head == NULL) return;

    do{
        //Setting our swap var to 0
        swapping = 0;
        tempTweet = *head;

        while (tempTweet->next != lastNode){

            //Checking if current node is larger than the next & makes the swap if true
            if(tempTweet->id > tempTweet->next->id){

                //Swapping Algo (EASIEST WAY --> USING BRUTE FORCE METHOD):
                
                //Assigning Temp var:
                tempid = tempTweet->id;
                strcpy(tempuser,tempTweet->user);
                strcpy(temptext,tempTweet->text);

                //Moving up current node
                tempTweet->id = tempTweet->next->id;
                strcpy(tempTweet->user,tempTweet->next->user);
                strcpy(tempTweet->text,tempTweet->next->text);

                //Moving next node back 
                tempTweet->next->id = tempid;
                strcpy(tempTweet->next->user,tempuser);
                strcpy(tempTweet->next->text,temptext);


                //Showing swapping occured:
                swapping = 1;
            }
            tempTweet = tempTweet->next;      
        }
        lastNode = tempTweet;

    } while (swapping);
}
