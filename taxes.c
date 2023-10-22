/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax here
  if(agi>0 && agi<=19900){
    tax=0.1*agi;}
    else if(agi>19900 && agi<=81050){
      tax=(0.12*agi)+1990;
    }
    else if(agi>81050 && agi<172750)
    {
      tax=(0.22*agi)+9328;
    }
    else if(agi>172751 && agi<=329850){
      tax=((0.24*agi)+29502);

    }
    else if(agi>329850 && agi<=418850){
      tax=((0.32*agi)+67206);
    }
    else if(agi>418850 && agi<=628300){
      tax=((0.35*agi)+95686);
    }
    else if(agi>628300)
      tax=((0.37*agi)+168933.50);
      
    if(numChildren>0){
      childCredit=numChildren*2000;
    }
    totalTax=tax-childCredit;
    if(totalTax<=0){
      totalTax=0;
    }


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
