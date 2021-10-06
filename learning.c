#include<stdio.h>
#include<string.h>

int main() {
//    for (int i=0; i<10; i++) {
//        printf("%d\n",i);
//    }

    char word[] = "Sandwich"; // word variable
    int length = strlen(word);  // get word length
    char word2[25];

    printf("%s\n", word);
    printf("%d\n", length);

    fgets(word2, 25, stdin);

    if (strcmp(word,word2) == 0) {  // strcmp returns 0 if strings match
        printf("It matches!\n");
    } else {
        printf("It does not matches!\n");
    }

    for (int i = 0; i < length; i++) {  // iterate through word and print characters
        printf("%c\n",word[i]);
    }
//    fgets(word, 25, stdin);  // get user input, ignore spaces and such
//    printf("Your name is: %s", word);

    return 0;
}
