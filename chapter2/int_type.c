#include <stdio.h>

int main(void){
    
    /*int type demo*/
    unsigned int largest_integer_this_os_allowed = 4294967295; /* Representing 0xffffffff in hexadecimal,occupied a word (32 bits,4 bytes) in memory base on a x86-64 machine. */
    printf("largest_integer_this_os_allowed size is %ld\n",sizeof(largest_integer_this_os_allowed)); // sizeof display the number of byte a int type occupied.
    printf("The largest integer this os allowed %#x\n",largest_integer_this_os_allowed); //dispaly the largest unsigned integer in hexadecimal format.

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

    /* Let's see the difference between short, int, long, long long in a x86-64 machine */
    /* These four data types' declaration */
    short short_integer = 0xffff / 2;
    int integer = 0xffffffff / 2;
    long long_integer = 0xffffffff / 2;
    long long ll_integer = 0xffffffffffffffff / 2;

    /* First, their size in memory */
    printf("short data type's memory size in x86-64 machine %ld.\n",sizeof(short_integer)); /* 2 bytes */
    printf("int data type's memory size in x86-64 machine %ld.\n",sizeof(integer));         /* 4 bytes */
    printf("long data type's memory size in x86-64 machine %ld.\n",sizeof(long_integer));   /* 4 bytes,same as int.In Mac, it was 8 */
    printf("long long data type's memory size in x86-64 machine %ld.\n",sizeof(ll_integer));/* 8 bytes */

    /* Second, get each data type's largest number(signed),respectively */
    printf("the largest number a short can represent %hd(signed).\n",short_integer); 
    printf("the largest number a int can represent %d(signed).\n",integer);         
    printf("the largest number a long int can represent %ld(signed).\n",long_integer);   
    printf("the largest number a long long  can represent %lld(signed).\n",ll_integer);

    /* What if we add 1 to the the biggest integer this machine can represent ? */
    printf("plus 1 to 0xffffffffffffffff %llu",0xffffffffffffffffll);

    return 0;
}