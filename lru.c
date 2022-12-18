#include<stdio.h>
   
int main()
{
    int i, j, pos, f, k, l, n, a = 0, b = 0, fault = 0, frames[5], temp[5], pages[100];
printf("Enter the frame size(3 or 4):");
scanf("%d",&f);
printf("Enter the size of Reference String: ");
scanf("%d",&n);
printf("Enter the Reference String:\n");
for(i=0;i<n;i++){
scanf("%d",&pages[i]);
}
   // int  = {1, 2, 3, 2, 1, 5, 2, 1, 6, 2, 5, 6, 3, 1, 3, 6, 1, 2, 4, 3};
   // int n = sizeof(pages)/sizeof(pages[0]);

    for(i = 0; i < f; i++){
            frames[i] = -1;
    }
   
    for(j = 0; j < n; j++)
    {
        printf("%d: ", pages[j]);
            a = 0, b = 0;
            for(i = 0; i < f; i++)
            {
                if(frames[i] == pages[j])
                {
                        a = 1;
                        b = 1;
                        break;
                }
            }
            if(a == 0)
            {
                for(i = 0; i < f; i++)
                {
                    if(frames[i] == -1)
                    {
                        frames[i] = pages[j];
                        b = 1;
                        fault++;
                        break;
                    }
                }
            }
            if(b == 0)
            {
                for(i = 0; i < f; i++)
                {
                    temp[i] = 0;
                }
                for(k = j - 1, l = 1; l <= f - 1; l++, k--)
                {
                    for(i = 0; i < f; i++)
                    {
                        if(frames[i] == pages[k])
                        {
                            temp[i] = 1;
                        }
                    }
                }
                for(i = 0; i < f; i++)
                {
                    if(temp[i] == 0)
                        pos = i;
                }
                frames[pos] = pages[j];
                fault++;
            }
           
            for(i = 0; i < f; i++)
            {
                printf("%d\t", frames[i]);
            }
            printf("\n");
    }
    printf("\nTotal Number of Page Faults:\t%d\n", fault);
   
    return 0;
}

