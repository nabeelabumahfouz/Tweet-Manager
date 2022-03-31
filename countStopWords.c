#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #4:
void countStopWords(tweet * tweetList){
    int i = 0;
    int counter = 0;
    int countTweets = 0;
    char *token;

    tweet *tempTweet = tweetList;

    char * tempArray = malloc(sizeof(char) * 150); 

    //Char string that will be passed through strtok as second parameter; what it will scan the strings for:
    char delim[] = ",;:!?.\n ";

    //String with the 25 stop wrods indicated on the assignment:
    char stopWords[125][125] = {"an", "a", "and", "are", "as", "at", "be", "by", "for", "from", "has", "he", "in", "is", "it", "its", "on", "of", "that", "the", "to", "was", "were", "will", "with"};

    while (tempTweet != NULL){

        tempArray = strcpy(tempArray, tempTweet -> text);
        token = strtok(tempArray, delim);

        //Strtok iteration:
        while (token != NULL){

            for (i = 0; i < 25; i++){
                //Check for word
                if (strcmp(token, stopWords[i]) == 0){
                    counter++;
                }
            }

            //Tokenize string each time:
            token = strtok(NULL, delim);
        }
        countTweets++;
        tempTweet = tempTweet -> next;
    }

    //FREE EXCESS MEMORY:
    free(tempArray);

    printf("\n\nAcross %d tweets ---> %d stop words were found\n\n", countTweets, counter);

}
