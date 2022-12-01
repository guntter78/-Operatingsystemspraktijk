#include <stdio.h>

void maxArrays(float*, float*, float*);

int main()
{
	float array1[4]={0.7, 3.3, 0.5, 10.3};
    float array2[4]={4.1, 1.5, 0.5, 2.3};
    float array3[4]={4.1, 3.3, 0.5, 10.3};

        maxArrays(&array1[0], &array2[0], &array3[0]);
        printf("-----------------------\n"); 
        printf("Dit zijn de uitkomsten met de hoogste arrays:\n");
        printf("-----------------------\n"); 
        for (int x=0; x<4; ++x){
            
            printf("%i: %.1f \n", x, array3[x]);
        }
        printf("-----------------------\n"); 
        return(0);

}

void maxArrays(float* array1p, float* array2p, float* array3p){
    for (int i=0; i<5; ++i)
        {
            float array1t = array1p[i];
            float array2t = array2p[i];

                if (array1t == array2t){
                    array3p[i] = array1t;
                } else if (array1t > array2t){
                    array3p[i] = array1t;
                } else {
                    array3p[i] = array2t;
                }

        }
}