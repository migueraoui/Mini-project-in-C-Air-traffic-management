#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  //Using windows.h library for change texts color with collection of functions -
#include <string.h>              // and for using function system() to clear the console;
#include <time.h>   // using time.h library for extract the current time;

#include "Gueraoui_Gta.h" /*Header File*/

int main()
{
    char choice = '0';
    int test = 1;

    complete_the_list_of_planes_1(); //Display Menu 1 and Fill information;
    EXIT_Terminal(); //Explanation in header file;

    while(test)
    {
        Display_menu1(); // Display menu;

        Etiq0:
        printf(" *----> Saisir %c nouveau le choix : [ 0 - 5 ] : ", 133);
        scanf(" %c", &choice);

        switch (choice)
        {
            case '1' :
                system("cls"); // this function for clear console between each step;
                complete_the_list_of_planes_2(); //function ==> Add new planes or delete and Fill new information;
            break;

            case '2' :
                system("cls");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // for change text color ;
                printf("\n* 2 :----------------------> V%crifier si un avion est dans l%ca%croport --------------*\n\n", 130, 39, 130);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                Check_code_plane(s); //Check plane and display code of plane;
                EXIT_Terminal();
            break;

            case '3' :
                system("cls");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //change color of text in console;
                printf("\n* 3 :----------------------> Supprimer les avions plus de 20 ans -------------------*\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                printf("\n*_*--> La liste des avions apr%cs de supprimer les avions %cg%cs de plus 20 ans :\n", 130, 131, 130);
                int n = *CLL(); // CLL() ==> Calculate the length of the list;
                for ( int i = 1; i <= n; i++) // using this loop for delete all planes older than 20 year;

                {
                    s = Delete_planes_p20_years(); //Becuase this function is delete every time one plane older than 20 year;
                }

                if( display_list(s) == NULL ) //This function display list of planes after delete;
                {                            // this check =>if the list is empty after delete function;
                    complete_the_list_of_planes_1(); // Fill the list obligatory;
                }
                EXIT_Terminal();
            break;

            case '4' :
                system("cls");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //change color of text in console;
                printf("\n * 4 :----------------------> Trier la liste des avions -----------------------------*\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                ascending_classification(); //This function ascending order of the list;
                EXIT_Terminal();
            break;

            case '5' :
                system("cls");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //change color of text in console;
                printf("\n*  5 :----------------------> Afficher la liste des avions --------------------------*\n\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                Display_aircraft_lists(); //Display menu 2 and chosen the steps -
                EXIT_Terminal();         //and see the result;
            break;

            case '0' :
                test = 0;
            break;

            default:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //change color of text in console;
                printf("---!! Choix incorrect !!--- \n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                goto Etiq0;
            break;
        }
    }
    free(s);
    return 0;
}
