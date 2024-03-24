#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a = 0, b = 0; // giá trị dòng chẵn lẻ tách riêng
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){ //xét dòng chẵn lẻ, chẵn ngược, lẻ xuôi
            if (i == 1){
                printf("a");
                a = 1; // chữ a đầu tiên
            }
            else{
                a += 2 * i - 3;
                for (int j = a; j <= a + i - 1; j++)
                    printf("%c ", j + 'a' - 1); 
            } // in tăng dần
        }
        else{
            b += 2 * i - 1;
            for (int j = b; j >= b - i + 1; j--)
                printf("%c ", j + 'a' - 1); // in giảm dần
        } 
        printf("\n");
    }
}