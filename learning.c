#include<stdio.h>
#include<string.h>

int main() {
//    for (int i=0; i<10; i++) {
//        printf("%d\n",i);
//    }

    char word[] = "Sandwich"; // word variable
    int length = strlen(word);  // get word length

    printf("%s\n", word);
    printf("%d\n", length);

    for (int i = 0; i < length; i++) {  // iterate through word and print characters
        printf("%c\n",word[i]);
    }
//    fgets(word, 25, stdin);  // get user input, ignore spaces and such
//    printf("Your name is: %s", word);

    return 0;
}
