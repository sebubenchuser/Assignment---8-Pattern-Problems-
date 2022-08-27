                                                 //Assignment - 8( Pattern Problems) (completed)



/*1)Write a program to draw the following patterns:

*
**
***
****
*****    */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/* 2)

    *
   **
  ***
 ****
*****           */



/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/*3)  *****
      ****
      ***
      **
      *         */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/

/*4)

*****
 ****
  ***
   **
    *      */

 /*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}  */


/*5)

    *
   ***
  *****
 *******
*********                 */


/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
} */

/*6)

*********
 *******
  *****
   ***
    *              */


/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/*7)

*********
**** ****
***   ***
**     **
*       *               */


/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-i||j>=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/*8)      1
         121
        12321
       1234321          */

/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
         k=0;
        for(j=1;j<=7;j++)
        {

            if(j>=5-i&&j<=3+i)
            {
                if(j>4)
              {
                k--;
              }
              else
              {
              k++;
              }
            printf("%d",k);

            }
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/*9)    1234567
         23456
          345
           4        */

/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {
            k++;
            if(j>=i&&j<=8-i)
            {

                printf("%d",k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}*/

/*10)      1234321
         123 321
         12   21
         1     1          */


/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {
            if(j<=4)
            k++;
            else
            k--;

            if(j<=5-i||j>=3+i)
            {
                printf("%d",k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}*/


/*11)
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA      */

/*#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k=64;
        for(j=1;j<=9;j++)
        {


            if(j>=6-i&&j<=4+i)
            {
                if(j<=5)
                   {
                     k++;
                   }
                  else
                  k--;

                printf("%c",k);

            }
            else
            printf(" ");
        }
        printf("\n");
    }
}     */

/*12
ABCDCBA
 ABCBA
  ABA
   A        */

/*#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                if(j<=4)
                {
                    k++;
                }
                else
                k--;
                printf("%c",k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }

}*/

/*13
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A      */


/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k=64;
        for(j=1;j<=13;j++)
        {
            if(j<=7)
            k++;
            else
            k--;
            if(j<=8-i||j>=6+i)
            {
                printf("%c",k);

            }
            else
            printf(" ");
        }
        printf("\n");
    }
}*/

/*14)

*
* *
*  *
*   *
******       */

/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i<=4&&j==1||j==i)
            {
                printf("*");
            }
            if(i>4)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}   */


/*15
    *
   **
  * *
 *  *
*****     */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if(i<=4)
          {
            if(j==5||j==6-i)
            {
                printf("*");
            }
            else
            printf(" ");
          }
          if(i==5)
          {
              printf("*");
          }

        }
        printf("\n");
    }

}*/


/*16

    *
   *  *
  *    *
 *      *
**********     */


/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i<=4&&j==6-i||j==4+i)
            {
                printf("*");
            }
            if(i>4)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

}*/

/* 17)

 * * * * * * * * *
  *           *
    *       *
      *   *
        *            */

/*#include<stdio.h>
int main()
{
    int i,j,k=2,l=14;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=17;j++)
        {
            if(i==1)
            {
                if(j%2==0)
                printf(" ");
                else
                printf("*");
            }
            if(i>=2)
            {

                if(j==k||j==l)
                {
                    printf("*");
                }
                else
                {
                printf(" ");
                }
            }
        }
        if(i>=2)
        {
           k=k+2;
          l=l-2;
        }

        printf("\n");

    }
    return 0;
}*/

/*18

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *       */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i<=4)
            {
              if(j>=6-i&&j<=i+4)
               {
                printf("*");

                }
               else
               printf(" ");
            }
            if(i>=5)
            {
                if(j>=i-4&&j<=14-i)
            {
              printf("*");
            }
            else
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/


/*

   *****     *****
  *******   *******
 ********* *********
****** MySirG *******
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *           */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=21;j++)
        {
            if(i<=3)
            {
                if(j>=5-i&&j<=7+i||j>=15-i&&j<=17+i)
                printf("*");
                else
                printf(" ");
            }

            if(i>=5)
            {
                if(j>=i-2&&j<=24-i)
                {
                    printf("*");
                }
                else
                printf(" ");
            }
        }
         if(i==4)
            {
                printf("****** MySirG *******");
            }
        printf("\n");
    }
}*/



