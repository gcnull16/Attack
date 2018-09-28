#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isplayeralive = 1;
    int CurrentHP = 5;

     while (isplayeralive == 1)
     {
         //prompt the user if they want to attack
         printf("Attack player? Y or N:  ");

        //get user input from console
         char attackOption;
         scanf("%c", &attackOption);

            switch(attackOption)
            {
            case 'Y':
            case 'y':
                CurrentHP--;
                printf("Player takes 1 damage. \nRemaining HP: %d\n", CurrentHP);
                break;
            case 'N':
            case 'n':
                printf("You've passed player takes 0 damage \nRemaining HP: %d\n", CurrentHP);
                break;
            }

      if (CurrentHP == 0)
      {
          isplayeralive = 0;
          printf("player is ded. \n Rip");
      }

     }
    return 0;
}
