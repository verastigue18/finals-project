/*  Final Project #2
    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxell
        Santelices, Albert
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void banner(void);
void registList(void);
void mainMenu(void);

int main()
{
    banner();
    return 0;
}

void banner(void)
{
    char select;

    system("Color A");
    printf("---------------------------------- Welcome to ----------------------------------  \n");
    printf("               #########   ######    ######  ##        ##  ######                 \n");
    printf("               ##      ## ##    ##       ##  ####    #### ##    ##                \n");
    printf("               ##      ## ##    ##       ##  ## ##  ## ## ##    ##                \n");
    printf("               #########  ########       ##  ##   ##   ## ########                \n");
    printf("               ##      ## ##    ##       ##  ##        ## ##    ##                \n");
    printf("               ##      ## ##    ## ##    ##  ##        ## ##    ##                \n");
    printf("               #########  ##    ##  ######   ##        ## ##    ##                \n");
    printf("               +--------------------------------------------------+               \n");
    printf("               | Brian      Aron    Joshua     Maxwell     Albert |               \n");
    printf("               +--------------------------------------------------+               \n");
    printf("--------------------------------------------------------------------------------  \n");

    printf("Do You Want to Use this Program? [Y/N] : ");
    scanf("%c", &select);

    switch(select)
    {
        case 'Y': case 'y' :
            mainMenu();
            //printf("Menu");
            break;
        case 'N': case 'n':
            system("cls");
            printf("exit");
            //exit();
            exit(0);
            break;

        default:
            printf("Invalid Value! \n");
            break;
    }
}

void mainMenu(void)
{
    system("cls");

    printf("\n                                     MENU                                      \n");
    printf("================================================================================ \n");
    printf("        ___________________________       ___________________________            \n");
    printf("       /___________________________  |   /___________________________  |         \n");
    printf("      |                            | |  |                            | |         \n");
    printf("      | [1] Registration Form      | |  | [6] Color Selector         | |         \n");
    printf("      | [2] Area of Triangle       | |  | [7] Grade Range            | |         \n");
    printf("      | [3] Simple Calculator      | |  | [8] Intergers Comparison   | |         \n");
    printf("      | [4] Temperature Converter  | |  | [9] Integers Identifier    | |         \n");
    printf("      | [5] Qualification to Vote  | |  | [0] Bitwise                | |         \n");
    printf("      |____________________________|/   |____________________________|/        \n\n");
    printf("================================================================================ \n");

    int opt;
    printf("Pick a number that you Want to Use [1-9] : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            printf("Registration Form\n");
            registList();
            //regisForm();
            break;

        case 2:
            system("cls");
            printf("Area of \n");
            //areaOf();
            break;

        case 3:
            system("cls");
            printf("Simple Calculator \n");
            //simpleCal();
            break;

        case 4:
            system("cls");
            printf("Temperature Converter \n");
            //tempConvert();
            break;

        case 5:
            system("cls");
            printf("Qualitification to Vote \n");
            //qualiVote();
            break;

        case 6:
            system("cls");
            printf("Color Selection \n");
            //colorSelec();
            break;

        case 7:
            system("cls");
            printf("Grade Range \n");
            //gradeRange();
            break;

        case 8:
            system("cls");
            printf("Intergers \n");
            //integer();
            break;

        case 9:
            system("cls");
            printf("Back");
            //banner();
            break;

        default:
            printf("Invalid Value! \n");
            break;

    }
}

void registList(void)
{
    system("cls");
    int opt;
    printf("==========Registration List==========\n\n");

    printf("[1] - Registration Form                \n");
    printf("[2] - List of Registered               \n");
    printf("[3] - Back                           \n\n");

    printf("Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            regisForm();
            break;

    }

}

void regisForm(void)
{

    char name[50], birthday[50], add[50], contactNum[50], emailAdd[50], citizen[50], fatherName[50], motherName[50];
    char educPri[50], educSec[50], educTer[50], firstChoice[50], secondChoice[50], thirdChoice[50];
    int age;

    printf("What is your Name? ");
    scanf(" %50[^\n]", &name);

    printf("How old Are you? ");
    scanf("%i", &age);

    printf("What is your Birthday? ");
    scanf(" %50[^\n]", &birthday);

    printf("Where are you from? ");
    scanf(" %50[^\n]", &add);

    printf("What is your Contact Number? ");
    scanf("%s", &contactNum);

    printf("What is your Email Address? ");
    scanf("%s", &emailAdd);

    printf("What is your Citizenship? ");
    scanf("%s", &citizen);

    printf("Name of your Father? ");
    scanf(" %50[^\n]", &fatherName);

    printf("Name of your Mother? ");
    scanf(" %50[^\n]", &motherName);

    printf("Primary Education: ");
    scanf(" %50[^\n]", &educPri);

    printf("Secondary Education: ");
    scanf(" %50[^\n]", &educSec);

    printf("Teriary Education: ");
    scanf(" %50[^\n]", &educTer);

    printf("What is your First Choice? ");
    scanf(" %50[^\n]", &firstChoice);

    printf("What is your Second Choice? ");
    scanf(" %50[^\n]", &secondChoice);

    printf("What is your Third Choice? ");
    scanf(" %50[^\n]", &thirdChoice);

    printf("=========================================  \n");
    printf("           REGISTRATION FORM               \n");
    printf("=========================================\n\n");

    printf("NAME           : %s\n", name);
    printf("AGE            : %i\n", age);
    printf("BIRTHDAY       : %s\n", birthday);
    printf("ADDRESS        : %s\n", add);
    printf("CONTACT NO.    : %s\n", contactNum);
    printf("EMAIL ADD.     : %s\n", emailAdd);
    printf("CITIZENSHIP    : %s\n", citizen);
    printf("FATHER'S NAME  : %s\n", fatherName);
    printf("MOTHER'S NAME  : %s\n", motherName);

    printf("========================================   \n");
    printf("          EDUCATIONAL ATTAINTMENT          \n");
    printf("=========================================\n\n");

    printf("PRIMARY        : %s\n", educPri);
    printf("SECONDARY      : %s\n", educSec);
    printf("TERTIARY       : %s\n\n", educTer);

    printf("1ST CHOICE     : %s\n", firstChoice);
    printf("2ND CHOICE     : %s\n", secondChoice);
    printf("3RD CHOICE     : %s\n", thirdChoice);
}
