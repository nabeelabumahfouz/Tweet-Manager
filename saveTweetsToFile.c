#include "Abu-MahfouzNabeelA3.h"


//FUNCTION #6: WRITING INTO A FILE

void saveTweetsToFile(tweet * tweetList){
    
    char *fileName = malloc(sizeof(char) * 150);
    tweet *tempTweet = tweetList;

    printf("Enter the filename where you would like your tweets stored: ");
    scanf("%s", fileName); //ARE YOU GOING TO BE USING FILENAMES WITH SPACES???

    FILE *ptr = fopen(fileName, "w");


    //writing to file:       
    while (tempTweet != NULL){

            fprintf(ptr,"%d, %s, %s\n", tempTweet->id, tempTweet->user, tempTweet->text);
            //Going to next tweet:
            tempTweet = tempTweet -> next;

    }
        //Output success!
        printf("\n\nOutput successful!\n\n");


    //FREEING DYNAMICALLY STORED MEMORY:
    free(fileName);
    //Closing file:
    fclose(ptr);
}
