#include<stdio.h>
#define N 6

struct entry{
    
    int data;
    int left_smaller;
    int right_greater;
    int prev_index;
};

int main() {
    
    struct entry sequence[N]; int i, j;long count = 0;
    
    for(i = 0;i < N;i++){
        
        scanf("%d",&sequence[i].data);
        // printf("\n");
        sequence[i].prev_index = -1;
        sequence[i].right_greater = 0;
        sequence[i].left_smaller = 0;
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
        
        for(j = (sequence[i].prev_index +1);j < i;j++){
        
            if((sequence[j].data < sequence[i].data) && (sequence[j].prev_index == -1)){
                
                ++sequence[i].left_smaller;
            }
        }
        
        for(j = i+1;j < N;j++){
            
            if((sequence[j].data > sequence[i].data)){
                
                if(sequence[j].prev_index == -1){
                    
                    ++sequence[i].right_greater;
                }
                else if(sequence[j].prev_index < i){
                    
                    ++sequence[i].right_greater;
                }
            }
        }
        
        count+=(sequence[i].left_smaller*sequence[i].right_greater);
    }
        
    printf("Number of required triplets = %ld",(count));
    
}