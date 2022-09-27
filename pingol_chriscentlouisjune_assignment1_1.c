#include <stdio.h>
int main(){
  //declaring that said variables are this types of numbers
  float radius, area;
  float mPi = 3.14159;

  //Introduction
  printf("I am an Area calculator for Circle!\n");
  printf("Please input the radius of the circle you want to measure!\n");
  
  //asks user to input the radius
  printf("Enter the radius: ");
  scanf("%f", &radius);

  //Calculating Product
  area = mPi * radius * radius;

  //Outputing the answer visually
  printf("Area = %.4f", area);

  return 0;
}