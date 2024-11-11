/*Chloe is learning about bitwise operations in her computer science class. Her teacher gave her a challenge: to take an integer input n, compute its bitwise negation (flipping all bits), and print the result. 



Help Chloe by writing a program to accomplish this task.

Input format :
The input consists of an integer n.

Output format :
The output displays an integer which is the value after performing the bitwise operation.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans = ~n;
    printf("%d\n", ans);

    return 0;
}

