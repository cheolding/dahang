#include<stdio.h>

int main() {
    int num1[4] = { 4, 3, 2, 1 }; // 첫번째 다항식의 계수
    int num2[3] = { 3, 2, 8 }; // 두번째 다항식의 계수
    int num3[6] = { 0 }; // 결과 다항식의 계수

    
    for (int i = 0; i < 4; i++) //다항식 곱하기; 
    {
        for (int j = 0; j < 3; j++)
        {
            num3[i + j] += num1[i] * num2[j];
        }
        
    }

    // 결과 다항식 출력
    for (int i = 5; i >= 0; i--) {
        if (num3[i] != 0) 
        {
            printf("%dx^%d ", num3[i], i);
            if (i != 0)
                printf(" + ");
        }
    }
    return 0;
}