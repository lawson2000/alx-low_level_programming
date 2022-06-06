1 #include <stdlib.h>
2 #include <time.h>
3 #include <stdio.h>
4 /**
5  * main - Determine if the last digit of a random number is
6  * greater than or less than 5, or is zero..
7 (*
8  * Return: 0 on success
9  */
10 int main(void)
11 {
12         int n;
13         char last[] = "Last digit of";
14
15         srand(time(0));
16         n = rand() - RAND_MAX / 2;
17         printf("%s %d is %d and is ", last, n, n % 10);
18         if (n % 10 > 5)
19         {
20         printf("greater than 5\n");
21         }
22         else if (n % 10 == 0)
23 {
24         printf("0\n");
25         }
26         else
27         {
28         printf("less than 6 and not 0\n");
29         }
30         return (0);
31 }
