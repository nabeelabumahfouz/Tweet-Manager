#include "Abu-MahfouzNabeelA3.h"

//FUNCTION #7: IMPORTING FROM A FILE 
void loadTweetsFromFile(tweet ** tweetList){
    tweet * tempTweet;
    char *fileName = malloc(sizeof(char) * 150);
    char *fileLine = malloc(sizeof(char) * 500);
    char *fileUsername;
    char *fileTweet;


    printf("Enter a filename to load from: ");
    scanf("%s", fileName); 

    FILE *ptr = fopen(fileName, "r");

    //IF THERE IS A PROBLEM WITH THE FILE:
    if (ptr == NULL){
        printf("ERROR: cannot find file\n");
        exit(1);
    }
    else{
    //Reading each line (null character found at end of each line while using fgets)      
        while (fgets(fileLine, 500, ptr) != NULL ) { 
            tempTweet = malloc(sizeof(tweet));
            //Gathering userid information using strtok: -> atoi function converts string literal to int
            tempTweet->id = atoi( strtok(fileLine, ",") );

            //Gathering username information using strtok:
            fileUsername = strtok(NULL, " ,");
            strcpy(tempTweet->user, fileUsername);

            //Gathering tweet information using strtok:
            fileTweet = strtok(NULL, "\n");
            strcpy(tempTweet->text, fileTweet);

            tempTweet->next = NULL;

            //Adding temp tweet to the end of the current list:
            addNodeToList(tweetList, tempTweet);

        }
        //Output success!
        printf("\n\nTweets imported successfully!\n\n");
    }

    //FREEING DYNAMICALLY STORED MEMORY:

  
    free(fileLine);
    free(fileName);

    //Closing file:
    fclose(ptr);
}
