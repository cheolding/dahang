#include<stdio.h>

int main() {
    int num1[4] = { 4, 3, 2, 1 }; // ù��° ���׽��� ���
    int num2[3] = { 3, 2, 8 }; // �ι�° ���׽��� ���
    int num3[6] = { 0 }; // ��� ���׽��� ���

    
    for (int i = 0; i < 4; i++) //���׽� ���ϱ�; 
    {
        for (int j = 0; j < 3; j++)
        {
            num3[i + j] += num1[i] * num2[j];
        }
        
    }

    // ��� ���׽� ���
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