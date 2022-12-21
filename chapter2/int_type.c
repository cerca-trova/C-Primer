#include <stdio.h>

int main(void){
    
    /*int type demo*/
    unsigned int largest_integer_this_os_allowed = 4294967295; /* Representing 0xffffffff in hexadecimal,occupied a word (32 bits,4 bytes) in memory base on a x86-64 machine. */
    printf("largest_integer_this_os_allowed size is %d\n",sizeof(largest_integer_this_os_allowed)); // sizeof display the byte a int type occupied.
    printf("The largest integer this os allowed %#x\n",largest_integer_this_os_allowed); //dispaly the largest unsigned integet in hexadecimal format.

    /* overflow of int type*/
    unsigned int int_overflow = largest_integer_this_os_allowed + 1;
    printf("What the result could be if we add 1 to the-largest-integer? the result:%u\n",int_overflow);
    /* 
        why it was 0? here is the explanation： 
        The largest integer representing in binary format:
            1111 1111 1111 1111 1111 1111 1111 1111 (aka 0xffffffff)
        But if we add 1 to that value:
            1111 1111 1111 1111 1111 1111 1111 1111 + 1 -->  
          1 0000 0000 0000 0000 0000 0000 0000 0000
        this would transfer a int type to a long long type(a 64 bits number),then,
        the last 32 bits will be truncated，so it would be 0 if use a &u notation to dislpay. 
    */
    return 0;

}