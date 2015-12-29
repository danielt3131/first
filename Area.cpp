/* Prints a message on the screen */
#include <stdio.h>
main()
{
    int Alpha;
    int License;
    int timer;
    timer=1;
    int number_exit;
    int number;
    int number_2;
    int radius;
    int length;
    int width;
    float area_c;
    int area_r;

    printf("To order to use this program you must agree to the MIT License\n");
    printf("Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files the Software, to deal in the Software\n");
    printf("without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit\n");
    printf("persons to whom the Software is furnished to do so, subject to the following conditions:\n");
    printf("The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.\n");
    printf("THE SOFTWARE IS PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR\n");
    printf("PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR\n");
    printf("OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n");
    printf("Type 5 if you agree to the License\n");
    scanf(" %d", &License);
    if (License==5)
    printf("Warning this is a alpha build press 9 to continue\n");
    scanf(" %d", &Alpha);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Press 1 to calculate the area of a circle\n");
    scanf(" %d", &number);
    if (number == 1)
        printf("Enter the radius\n");
        scanf(" %d", &radius);
        area_c=radius*radius*3.14159268;
        printf("The Area of the Circle is %.3f \n\a",area_c);
        printf("\n");

//    else
//    if (number == 2)
       printf("Press 2 to calculate the area of a rectangle\n");
       scanf(" %d", &number_2);
    if (number_2 == 2)
        printf("Enter the Length\n");
        scanf(" %d", &length);
        printf("Enter the Width\n");
        scanf(" %d", &width);
        area_r=length*width;
        printf("The Area of the Rectangle is %d \n\a",area_r);
        printf("\n");
        printf("\n");
        printf("\n");


    printf("Thank you\n\a");
    printf("Copyright danielt3131\n");
    printf("Made By danielt3131\n");
    printf("Built by danielt3131\n");
      do
    {
   printf("Press 0 to exit\n");
    scanf(" %d", &number_exit);
    if (number_exit ==0)
    timer=timer+2;
}
    while (timer ==2);

  }

