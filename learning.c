#include<stdio.h>
#include<string.h>
#include <ctype.h>

// int compstr(char *a, char *b) {
//     int i = 0;
//     while(a[i] != '\0' && b[i] != '\0') {
//         if(a[i] != b[i]) {
//             return 1;
//         }
//         i++;
//     }
//     return 0;
// }

int find_char(char *str, int c){
  char * index = strchr(str, c);

  if(index != NULL){
    // pos = index IF index - str is true OTHERWISE (:) index = -1
    int pos = index ? index - str : -1;
    printf("%d\n", pos);
    return pos;
  } else {
    return -1;
  }
}

// int check_for_char_match(char input, char word[]) {
//     char check = strcmp(word, input);
//     printf("%c", check);
//
//     return 0;
// }

int main() {
    char word[] = "SANDWICH"; // word variable
    int length = strlen(word);  // get word length
    char blank[length];

    for(int x=0;x<=length;x++){
      blank[x] = "_";
    }
    while (0 == 0) {
      printf("Hangman");
      for(int i=0; i <= length; i++){
        printf("%c ", blank[i]);
      }
      char word2[1];
      fgets(word2, 1, stdin);
      int index = find_char(word, toupper(word2[0]));
      blank[index] = word[index];
    }
    // int x = 0;
    // for (int y = 0; y < length; y++) {
    //     if (word[y] == toupper(word2[y]) ) {
    //         x++;
    //     } else {
    //         continue;
    //     }
    // }

    // if (compstr(word,word2) == 0) {  // strcmp returns 0 if strings match
    //     printf("It matches!\n");
    // } else {
    //     printf("It does not matches!\n");
    // }
    // char *index = strchr(word, str[0]);
    // int pos = index ? index - word : -1;
    // find_char(word, toupper(str[0]));
    // printf("There are %d matching letters!\n", x);
    // printf("%d\n", pos);
    return 0;
}
