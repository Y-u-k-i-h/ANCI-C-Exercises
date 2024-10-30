#include <stdio.h>
/*To count blank spaces, tabs and newlines*/

main() {

    int c;
    int newlines = 0;
    int tab_spaces = 0;
    int blanks = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n'){
            newlines++;
        }
        else if(c == '\t') {
            tab_spaces++;
        }
        else if(c == ' ') {
            blanks++;
        }
    }
    printf("Newlines: %d\nTab spaces: %d\nBlanks: %d\n", newlines, tab_spaces, blanks);
}

