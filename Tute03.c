/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n,count=1,tot=0;
  printf("n -> ");
  scanf("%d",&n);
  while(count<=n)
  {
  tot=tot+count;
  count++;
  }
  printf("sum = %d",tot);
  return 0;
}

