
//输入整数，输出平均数和大于平均数的数。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x ;
    double sum = 0;
    int cnt = 0;
    int number[100] ;
    scanf("%d",&x );
    while (x != -1) {
        number[cnt] = x ;
        /*
        {
            int i;
            printf("%d\t",cnt);
            for (i = 0 ; i <= cnt ; i++ ) {
                printf("%d\t",number[i]);
            }
            printf("\n");
        }
        */
        sum += x ;
        cnt++ ;
        scanf("%d",&x );
    }
    if (cnt > 0) {
        printf("%-7.2f\n",sum/cnt);
        int i ;
        for ( i = 0 ; i < cnt ; i++ ) {
            if ( number[i] > sum/cnt) {
                printf("%d\n",number[i]);
            }
        }
    }
    
    return 0;
}
