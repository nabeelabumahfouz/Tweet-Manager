#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #3:
int searchTweetsByKeyword(tweet * tweetList){
    char keyword[100];
    int  counter = 0;

    tweet *temp = tweetList;

    printf("Enter a key word to search: ");
    scanf("%s", keyword);

    //LOOPING THROUGH ALL LIST ELEMENTS (UNTIL END OF LIST IS REACHED):
    while ( temp != NULL) {

        //looking for through each tweet to see if code word is encountered
        if (strcasestr(temp -> text, keyword)){
            printf("Match found for '%s': %s wrote: %s\n", keyword, temp -> user, temp -> text);
            counter++;
        }
        
        temp = temp -> next;
    }

    //Checking to see if no matches were made:
    if (counter == 0){
        printf("\n\nMATCH NOT FOUND\n\n");
    }


    return 0;
}
