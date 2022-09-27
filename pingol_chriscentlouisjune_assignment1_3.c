#include <stdio.h>
int main(){
  //declaring that said variables are this types of numbers 
  long long lifeLeft, yearConv1, yearConv2, totalBD, totalCD, age, ageConv, month, days, years1, month1, days1, years2, month2, days2, fullYear = 365;

  //days from each month from january
  int jan = 31, feb = 59, mar = 90, apr = 120, may = 151, jun = 181, jul = 212, aug = 243, sep = 273, oct = 304, nov = 334, dec = 365;

  //Birthdate
  printf("I will magically convert your age into seconds!!!\n");
  printf("\nTo start the magic, enter your birth year:\n");
  scanf("%lli", &years1);

  printf("Enter your birth month (1-12):\n");
  scanf("%lli", &month1);

  printf("Enter the day you were born:\n");
  scanf("%lli", &days1);

  //Current Date
  printf("\nBefore I begin calculating, what is today's current date?\n");
  printf("Enter today's year: \n");
  scanf("%lli", &years2);

  printf("Enter today's month (1-12):\n");
  scanf("%lli", &month2);

  printf("Enter today's day:\n");
  scanf("%lli", &days2);

   //convert years into days
  yearConv1 = years1 * fullYear;
  yearConv2 = years2 * fullYear;

  //if-else statement for month1
  if (month1 == 1) {month1 = jan;} 
  else if (month1 == 2) {month1 = feb;} 
  else if (month1 == 3) {month1 = mar;} 
  else if (month1 == 4) {month1 = apr;} 
  else if (month1 == 5) {month1 = may;} 
  else if (month1 == 6) {month1 = jun;} 
  else if (month1 == 7) {month1 = jul;} 
  else if (month1 == 8) {month1 = aug;}
  else if (month1 == 9) {month1 = sep;} 
  else if (month1 == 10) {month1 = oct;} 
  else if (month1 == 11) {month1 = nov;} 
  else {month1 = dec;}

    //if-else statement for month1
  if (month2 == 1) {month2 = jan;} 
  else if (month2 == 2) {month2 = feb;} 
  else if (month2 == 3) {month2 = mar;} 
  else if (month2 == 4) {month2 = apr;} 
  else if (month2 == 5) {month2 = may;} 
  else if (month2 == 6) {month2 = jun;} 
  else if (month2 == 7) {month2 = jul;} 
  else if (month2 == 8) {month2 = aug;}
  else if (month2 == 9) {month2 = sep;} 
  else if (month2 == 10) {month2 = oct;} 
  else if (month2 == 11) {month2 = nov;} 
  else {month2 = dec;}
  
  //total days of birth date and current date
  totalBD = yearConv1 + month1 + days1;
  totalCD = yearConv2 + month2 + days2;

  //last convert from days to seconds
  age = totalCD - totalBD;
  ageConv = (((age*24)*60)*60);

  //Design <body>
  printf("\n\n\n\n\n\n\n*************************************************************************\n\n");

  //print the following results
  printf("\nThis is how long you have lived on Earth converted to seconds: %llisecs\n", ageConv);
  
  printf("\n\n*************************************************************************\n\n");
  printf("\n\n#################################\n");

  //Additional Info
  printf("\n=== These are the additional info's ===\n");
  printf("\nHow long you have stayed on Earth in days: %lli\n", age);
  printf("Total days from 1st A.D. to Now: %lli\n", totalCD);
  printf("Total days from 1st A.D. to birthday: %lli\n", totalBD);
  printf("\nAssuming expectation age is at 80...\n");
  lifeLeft = (80 * 365) - age;
  printf("Days left to live: %lli\n", lifeLeft);
  printf("\nRemember, time is ticking... Memento Mori\n");
  printf("\n#################################\n\n");
  //Design </body>

  /* I am exploring new potential ways of my imagination...
  from watching youtube tutorials to w3school.com it has given me 
  new and bright ideas that stimulated my mind. New perspectives
  in using the C language... I've always thought that i hated C just
  because i had it hard to understand when i was young...
  This line will help me reach the 100th code block
  */
  return 0;
}