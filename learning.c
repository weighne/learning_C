#include<stdio.h>
#include<string.h>

int compstr(char *a, char *b) {
    int i;
    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

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
    int x = 0;
    for (int y = 0; y < length; y++) {
        if (word[y] == word2[y] ) {
            x++;
        } else {
            continue;
        }
    }

    if (compstr(word,word2) == 0) {  // strcmp returns 0 if strings match
        printf("It matches!\n");
    } else {
        printf("It does not matches!\n");
    }

//    for (int i = 0; i < length; i++) {  // iterate through word and print characters
//        printf("%c\n",word[i]);
//    }
//    fgets(word, 25, stdin);  // get user input, ignore spaces and such
//    printf("Your name is: %s", word);
    printf("There are %d matching letters!\n", x);
    return 0;
}
