#include<stdio.h>
int main(){
    int jumsu[5][3];
    int sum[5];
    float average[5];

    // 점수 입력
    for(int i=0; i<5; i++){
        sum[i] = 0; // 합계 초기화
        printf("%d번째 학생 점수 입력: ", i+1);
        for(int j=0; j<3; j++){
            scanf("%d", &jumsu[i][j]);
            sum[i] += jumsu[i][j];
        }
        average[i] = sum[i] / 3.0;
    }

    // 결과 출력
    for(int i=0; i<5; i++)
        printf("%d번째 학생 - 합계: %d, 평균: %.2f\n", i+1, sum[i], average[i]);

    return 0;
}