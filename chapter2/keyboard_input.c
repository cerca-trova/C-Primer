#include <stdio.h>

int main(void){
    float weight;
    unsigned int largest_integer_this_os_allowed = 0xffffffff;
    printf("largest_integer_this_os_allowed size is %d\n",sizeof(largest_integer_this_os_allowed));
    printf("The largest integer this os allowed %u",largest_integer_this_os_allowed);
    return 0;

}