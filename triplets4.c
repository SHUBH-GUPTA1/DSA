
#include<stdio.h>

struct entry{

    int data;
    int prev_index;
};

int main() {

    long N=0;struct entry sequence[100000]; int i, j;long int count = 0;
    int left_smaller,right_greater;

    scanf("%ld",&N);

    for(i = 0;i < N;i++){
    	//sequence[i].data = i;
        scanf("%d",&sequence[i].data);
        sequence[i].prev_index = -1;
    }

    for(i = 0;i < (N-1);i++){

        if(sequence[i].prev_index == -1){

            for(j = i+1;j < N;j++){

                if(sequence[j].data== sequence[i].data){

                    sequence[j].prev_index = i;
                    break;
                }
            }
        }
    }

    for(i = 1;i < (N-1);i++){

    	left_smaller = 0;
    	right_greater = 0;

        for(j = (sequence[i].prev_index +1);j < i;j++){

            if((sequence[j].data < sequence[i].data) && (sequence[j].prev_index == -1)){

                ++left_smaller;
            }
        }

        for(j = i+1;j < N;j++){

            if((sequence[j].data > sequence[i].data)){

                if(sequence[j].prev_index == -1){

                    ++right_greater;
                }
                else if(sequence[j].prev_index < i){

                    ++right_greater;
                }
            }
        }

        count+=(left_smaller*right_greater);
    }

    printf("%ld",count);
}