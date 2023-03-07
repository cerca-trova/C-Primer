#include <stdio.h>

int main(void){
    /* A float type demo,include long and long double. */
    float float_type = 10e36;

    /* Float type's display specification */
    printf("dispaly float type using %%f specification.");
    printf("%f\n",float_type);


    /* Overflow and underflow of a float type */
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n",toobig);

}