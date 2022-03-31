
Assignment Name: Tweet Manager
Name of Creator: Nabeel Abu-Mahfouz (1104136)
Email: nabumahf@uoguelph.ca
Course ID: CIS 2500
Date of last Revision: 2022/03/31



How to Compile & Run Tweet Manager:

1. Enter the “make” command with all the files in the same directory
2. Next, run the program with the executable: ./A3_output




Program Summary:

When running the program, a menu will appear with 9 options to choose from.
The menu options and their functionalities are as follows:

When “1” is entered by the user:
The user is able to create a tweet with a username and a uniquely generated user ID.

When “2” is entered by the user:
The list of tweets created or imported by the user will be displayed as follows: <userID>, <username>, <tweet>

When “3” is entered by the user:
They will be prompted for a keyword to search within the list of present tweets.

When “4” is entered by the user:
The total amount of stop words across all the tweets in the list will be calculated.

When “5” is entered by the user:
They will be able to select a tweet of their choice to delete.

When “6” is entered by the user:
They will be prompted for a filename to save the current list of tweets to that file.

When “7” is entered by the user:
They will be prompted for a filename to load tweets from a specific csv file.

When “8” is entered by the user:
The list of present tweets will be sorted in ascending order based on their user ID’s.

When "9" is entered by the user:
The program will empty the current list of tweets, free its memory, and exit the program.



Limitations:

1.	The tweets are only able to be loaded from a csv file in function 7.
2.	When loading in tweets, edge cases that include multiple punctuation symbols could cause error. 



Future Improvement:

1.	Improving the way the 2 nodes in the sortID function (function #8) are swapped; I used a brute force method but there is a more efficient way to do it. 
2.	The load function can be improved to be compatible with multiple file types instead of just csv files.

