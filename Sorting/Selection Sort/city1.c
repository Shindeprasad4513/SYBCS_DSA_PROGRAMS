#include <stdio.h>
#include <string.h>

int main() {
    int i, n, pass, index;
    char a[100][100], max[100];

    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Enter %d cities: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    for (pass = 0; pass < n - 1; pass++) 
    {
        index = pass;
        strcpy(max, a[pass]);

        for (i = pass + 1; i < n; i++) 
        {
            if (strcmp(a[i], max) > 0)
             {
                strcpy(max, a[i]);
                index = i;
            }
        }

        if (index != pass) 
        {
            char temp[100];
            strcpy(temp, a[pass]);
            strcpy(a[pass], a[index]);
            strcpy(a[index], temp);
        }
    }

    printf("Sorted Cities in Descending Order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s\t", a[i]);
    }

    return 0;
}
