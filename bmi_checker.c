#include<stdio.h>
int main(){
    int height, weight;
    float bmi;
    int count=0;
    int persons;

    scanf("%d",&persons);
    for(int i=0;i<persons;i++){
        scanf("%d %d", &height,&weight);
        bmi = weight / (height*0.01*height*0.01);
        if(bmi>=25){
        printf("%.1f Overweight\n",bmi);
        count++;
        }
        else{
         printf("%.1f Normal\n",bmi);
    }
}
    
    printf("과체중 인원:%d명\n",count);
    return 0;
}