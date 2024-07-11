#include <stdio.h>

int main() {
    struct stud {
        int rno;
        int per;
        char name[20];
    } s1[100], t;

    int i, n, pass;
    printf("Enter Limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Rno Name Per: ");
        scanf("%d%s%d", &s1[i].rno, s1[i].name, &s1[i].per);
    }

    for (pass = 1; pass < n; pass++) {
        for (i = 0; i < n - pass; i++) {
            if (s1[i].per < s1[i + 1].per) {
                t = s1[i];
                s1[i] = s1[i + 1];
                s1[i + 1] = t;
            }
        }
    }

    printf("\nStudent Information\n");
    for (i = 0; i < n; i++) {
        printf("\n%d\t%s\t%d", s1[i].rno, s1[i].name, s1[i].per);
    }

    return 0;
}