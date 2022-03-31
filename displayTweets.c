#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #2:
void displayTweets(tweet * tweetList){
    tweet *temporary = tweetList;

   	while ( temporary != NULL) {
        printf("<%d>: Created by <%s>: <%s>\n", temporary->id, temporary->user, temporary->text);
        temporary = temporary->next;
    } 
}
