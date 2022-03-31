#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #1:
tweet * createTweet( tweet * tweetList){
    
    tweet * newTweet = malloc(sizeof(tweet));
    tweet * tempTweet = tweetList;
    int lengthUser = 0;
    int i = 0;

    //Scanning in username:
    printf("Enter the username: ");
    fgets(newTweet->user, 51, stdin);

    printf("\n\n");

    //Scanning in tweet:
    printf("Enter the user's tweet: ");
    fgets(newTweet->text, 141, stdin);

    
    //Counting ASCII values:
    for (i = 0; i < strlen(newTweet -> user) - 1; i++){
        lengthUser += newTweet -> user[i];
    }

    //Counting character values of tweet:
    lengthUser += strlen(newTweet -> text) - 1;


    newTweet -> id = lengthUser;

    //CHECKING TO SEE IF ANY IDS ARE THE SAME:
    srand(time(NULL));

    while (tempTweet != NULL){

        if(tempTweet -> id == lengthUser){
            printf("\n\nSAME ID DETECTED!\n\n");

            //Adding random number to userid
            newTweet -> id += rand() % 999 + 1; 
            
        }

        tempTweet = tempTweet -> next;  
    }


    printf("\n\n\nYour computer-generated userid is %d.\n\n\n", newTweet -> id);

    //Removing new lines from end of Tweet & username: 
    newTweet->user[strlen(newTweet -> user) - 1] = '\0';
    newTweet->text[strlen(newTweet -> text) - 1] = '\0';

    newTweet -> next = NULL;

    return newTweet;
}

