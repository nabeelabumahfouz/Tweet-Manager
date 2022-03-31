#include "Abu-MahfouzNabeelA3.h"

int main () {
    tweet * tweetList = NULL; //why do we do this?
    

    int user = 0;

    while (user != 9){

        //Printing user menu:
        printf("CHOOSE ONE OF THE FOLLOWING OPTIONS:\n\n\n");
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet (by keyword)\n");
        printf("4. Find how many words are “stop words”\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Save tweets to a file\n");
        printf("7. Load tweets from a file\n");
        printf("8. Sort the given linked list on userid\n");
        printf("9. Exit\n\n\n");
        
        //Scanning user menu option Input:
        printf("Choose a menu option: ");
        scanf("%d", &user);
        getchar();
        printf("\n\n");

        if (user == 1){

            tweet *x = createTweet(tweetList);
            addNodeToList(&tweetList, x);

        }
        else if (user == 2){

            displayTweets(tweetList);
            printf("\n\n");

        }
        else if (user == 3){

            searchTweetsByKeyword(tweetList);
            printf("\n\n");

        }
        else if (user == 4){

            countStopWords(tweetList);

        }
        else if (user == 5){ 

            deleteTweet(&tweetList);

        }        
        else if (user == 6){ 

            saveTweetsToFile(tweetList);

        }    
        else if (user == 7){ 

            loadTweetsFromFile(&tweetList);

        }
        else if (user == 8){ 

            sortID (&tweetList);

        }      
        else if (user == 9){ // MEMORY OF TWEETLIST CLEARED WHEN EXITING:

            printf("EXITING\n\n");

            //Freeing Memory:
            while (tweetList != NULL){
                tweet * tempTweet = tweetList;
                tweetList = tweetList->next;
                free(tempTweet);
            }
            
            return 0;

        }
        else{ 
            
            printf("\n\nINVALID ENTRY, TRY AGAIN\n\n");
        
        }

    }

    return 0;
}


