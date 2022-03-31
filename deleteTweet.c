#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #5:
void deleteTweet(tweet ** tweetList){

    int counter = 0;
    int n = 0;

    tweet *currentTweet = *tweetList;
    tweet *previousTweet = *tweetList;
    tweet *tempTweet = *tweetList;

    printf("Which tweet do you want to delete?: ");
    scanf("%d", &n);
    printf ("\n\n");

    //Counting total # of tweets:
    while (tempTweet != NULL){
        counter++;
        tempTweet = tempTweet -> next;
    }



    //Replacing the first ndoe is different from replacing the rest:
    if (n == 1){
        *tweetList = currentTweet -> next;
        free(currentTweet);
        currentTweet = NULL;
    }

    else{

        //Updating the previous and next addresses until we reach the node we want to delete
        while (n != 1){
            n--;
            previousTweet = currentTweet;
            currentTweet = currentTweet -> next;

        }
        
        //When node (tweet) We want to delete is reached do the following:
        previousTweet -> next = currentTweet -> next;
        free(currentTweet);
        currentTweet = NULL;
    }

    //Subtracting the deleted tweet from the total number of tweets:
    counter--;

    printf("Tweet <%d> has been deleted, there are %d tweets left\n\n\n", n, counter);

}
