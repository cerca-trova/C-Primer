#include <stdio.h>

int main(void){
    /* char data type demo */
    char char_represented_with_alphabeta = 'A';
    char char_represented_with_number = 65; /* ok for ASCII, but poor style. */

    printf("print character A with a alphabet-declaration style: %c.\n", char_represented_with_alphabeta);
    printf("print character A with a number-declaration style: %c.\n", char_represented_with_number);

    /* what if we print a char data with %d notation */
    printf("print character A with a decimal notation %d.\n", char_represented_with_alphabeta); /* result would be 65 */

    /* In C, char was treated as a int type, totally 32 bits in memory.So, you can assign four letters to a char, but only 
    the last 8 bits would be used. */
    char a_four_letter_char = 'FATE';
    
    /* FATE, a four-letter char,but only E would be dispalyed. */
    printf("Only the last 8 bits would be used even we can assign multiple letter to a char. Here is the result :%c\n",a_four_letter_char);
    return 0;

}