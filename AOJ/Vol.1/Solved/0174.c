// include
// ----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

// repetition
// ----------------------------------------------------------------------------
#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// memory clear
// ----------------------------------------------------------------------------
#define CLRNUM(a) memset((a), 0, sizeof(a))
#define CLRBOOL(a, flag) memset((a), flag, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

// debug
// ----------------------------------------------------------------------------
#define DEBUGINT(x) printf("%d\n", x);
#define DEBUGFLOAT(x) printf("%f\n", x);
#define DEBUGCHAR(x) printf("%c\n", x);
#define DEBUGSTR(x) printf("%s\n", x);
#define DEBUGFORINT(i, a, b, x) FOR(i, a, b){ printf("%d ", x[i]); }
#define DEBUGFORFLOAT(i, a, b,x ) FOR(i, a, b){ printf("%f ", x[i]); }
#define DEBUGFORCHAR(i, a, b, x) FOR(i, a, b){ printf("%c ", x[i]); }
#define DEBUGREPINT(i, n, x) REP(i, n){ printf("%d ", x[i]); }
#define DEBUGREPFLOAT(i, n, x) REP(i, n){ printf("%f ", x[i]); }
#define DEBUGREPCHAR(i, n, x) REP(i, n){ printf("%c ", x[i]); }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000

int main(void)
{
    char serve[150];
    int A, B;
    int i;

    while (1){
        A = 0;
        B = 0;
        memset(serve, '\0', sizeof(serve));
        
        scanf("%s", serve);

        if (strcmp(serve, "0") == 0){
            break;
        }

        for (i = 1; serve[i - 1] != '\0'; ++i){
            if (serve[i] == 'A'){
                A++;
            }
            else if (serve[i] == 'B'){
                B++;
            }
        }
        
        if (A > B){
            A++;
        }
        else {
            B++;
        }

        printf("%d %d\n", A, B);
    }

    return 0;

}
