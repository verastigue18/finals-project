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
#include <math.h>

void banner(void);

void mainMenu(void);

//This is for Registration
void registList(void);
void listRegistered(void);

//This is for Simple Calculator
void simpleCal(void);

void basicComp(void);
 
void areaOFShape(void); 
void areaTri(void);
void areaSqr(void);
void areaCirle(void);
void areaPar(void);

void gradeCal(void);
void gradeRange(void);

void greet(void);

//global Variable
char select;
int opt;

int main()
{
    system("Color A");
    banner();
    return 0;
}

void banner(void)
{
    printf("\n\n\t\t---------------------------------- Welcome to ----------------------------------  \n");
    printf("\t\t               #########   ######    ######  ##        ##  ######                 \n");
    printf("\t\t               ##      ## ##    ##       ##  ####    #### ##    ##                \n");
    printf("\t\t               ##      ## ##    ##       ##  ## ##  ## ## ##    ##                \n");
    printf("\t\t               #########  ########       ##  ##   ##   ## ########                \n");
    printf("\t\t               ##      ## ##    ##       ##  ##        ## ##    ##                \n");
    printf("\t\t               ##      ## ##    ## ##    ##  ##        ## ##    ##                \n");
    printf("\t\t               #########  ##    ##  ######   ##        ## ##    ##                \n");
    printf("\t\t               +--------------------------------------------------+               \n");
    printf("\t\t               | Brian      Aron    Joshua     Maxwell     Albert |               \n");
    printf("\t\t               +--------------------------------------------------+               \n");
    printf("\t\t--------------------------------------------------------------------------------\n\n");

    printf("\t\tDo You Want to Use this Program? press [Y/N] : ");
    select = getch();
    //scanf("%c", &select);

    switch(select)
    {
        case 'Y': case 'y' :
            system("cls");
            mainMenu();
            break;

        case 'N': case 'n':
            system("cls");
            greet();
            break;

        default:
            printf("Invalid Value! \n");
            break;
    }
}

void mainMenu(void)
{
    printf("\n\n\t\t                                     MENU                                      \n");
    printf("\t\t  ================================================================================ \n");
    printf("\t\t          ___________________________       ___________________________            \n");
    printf("\t\t         /___________________________  |   /___________________________  |         \n");
    printf("\t\t        |                            | |  |                            | |         \n");
    printf("\t\t        | [1] Registration Form      | |  | [6] Color Selector         | |         \n");
    printf("\t\t        | [2] Simple Calculator      | |  | [7] Grade Range            | |         \n");
    printf("\t\t        | [3] Integers Identifier    | |  | [8] Intergers Comparison   | |         \n");
    printf("\t\t        | [4] Temperature Converter  | |  | [9] Back                   | |         \n");
    printf("\t\t        | [5] Qualification to Vote  | |  |                            | |         \n");
    printf("\t\t        |____________________________|/   |____________________________|/        \n\n");
    printf("\t\t  ================================================================================ \n\n");

    printf("\t\t  Pick a number that you Want to Use [1-9] : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            registList();
            break;

        case 2:
            system("cls");
            printf("Simple Calculator \n");
            simpleCal();
            break;

        case 3:
            system("cls");
            printf("UNDER PROCESS! \n");
            break;

        case 4:
            system("cls");
            printf("UNDER PROCESS! \n");
            //tempConvert();
            break;

        case 5:
            system("cls");
            printf("UNDER PROCESS! \n");
            //qualiVote();
            break;

        case 6:
            system("cls");
            printf("UNDER PROCESS! \n");
            //colorSelec();
            break;

        case 7:
            system("cls");
            printf("UNDER PROCESS! \n");
            //gradeRange();
            break;

        case 8:
            system("cls");
            printf("UNDER PROCESS! \n");
            //integer();
            break;

        case 9:
            system("cls");
            banner();
            break;

        default:
            printf("Invalid Value! \n");
            break;

    }
}

//This is for Registration or case 1
void registList(void)
{

    printf("\n\n\t\t ==========Registration List==========\n\n");

    printf("\t\t [1] - Registration Form                \n");
    printf("\t\t [2] - List of Registered               \n");
    printf("\t\t [3] - Back                           \n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            regisForm();
            break;

        case 2:
            system("cls");
            listRegistered();
            break;

        case 3:
            system("cls");
            mainMenu();
            break;

    }

}

void regisForm(void)
{
    //Prelim Act2

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

    system("cls");

    printf("\n\n\t\t =========================================  \n");
    printf("\t\t            REGISTRATION FORM               \n");
    printf("\t\t =========================================\n\n");

    printf("\t\t NAME           : %s\n", name);
    printf("\t\t AGE            : %i\n", age);
    printf("\t\t BIRTHDAY       : %s\n", birthday);
    printf("\t\t ADDRESS        : %s\n", add);
    printf("\t\t CONTACT NO.    : %s\n", contactNum);
    printf("\t\t EMAIL ADD.     : %s\n", emailAdd);
    printf("\t\t CITIZENSHIP    : %s\n", citizen);
    printf("\t\t FATHER'S NAME  : %s\n", fatherName);
    printf("\t\t MOTHER'S NAME  : %s\n", motherName);

    printf("\t\t ========================================   \n");
    printf("\t\t           EDUCATIONAL ATTAINTMENT          \n");
    printf("\t\t =========================================\n\n");

    printf("\t\t PRIMARY        : %s\n", educPri);
    printf("\t\t SECONDARY      : %s\n", educSec);
    printf("\t\t TERTIARY       : %s\n\n", educTer);

    printf("\t\t 1ST CHOICE     : %s\n", firstChoice);
    printf("\t\t 2ND CHOICE     : %s\n", secondChoice);
    printf("\t\t 3RD CHOICE     : %s\n\n", thirdChoice);

    printf("\t\t BACK press [0]           EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("cls");
            registList();
            break;

        case '1':
            system("cls");
            greet();
            break;

        default:
            system("cls");
            printf("Invalid");
            break;
    }
}

void listRegistered(void)
{
    //Prelim Act1
    printf("\n\n\t\t            List of Registered People        \n\n");

    printf("\t\t ==============================================  \n");
    printf("\t\t               REGISTRATION FORM                 \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t NAME           : ARCE, JHON BRIAN V.            \n");
    printf("\t\t AGE            : 19 YEARS OLD                   \n");
    printf("\t\t BIRTHDAY       : APRIL 02, 2003                 \n");
    printf("\t\t ADDRESS        : SAN ISIDRO                     \n");
    printf("\t\t CONTACT NO.    : 09951779567                    \n");
    printf("\t\t EMAIL ADD.     : arce.jhonbrian@gmail.com       \n");
    printf("\t\t CITIZENSHIP    : FILIPINO                       \n");
    printf("\t\t FATHER'S NAME  : ARCE, REGAN                    \n");
    printf("\t\t MOTHER'S NAME  : ARCE, LIEZEL                 \n\n");

    printf("\t\t =============================================   \n");
    printf("\t\t             EDUCATIONAL ATTAINTMENT             \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t PRIMARY        : SNES                           \n");
    printf("\t\t SECONDARY      : OMNHS                          \n");
    printf("\t\t TERTIARY       : CDM                          \n\n");

    printf("\t\t 1ST CHOICE     : BSED                           \n");
    printf("\t\t 2ND CHOICE     : BSCS                           \n");
    printf("\t\t 3RD CHOICE     : BSIT                         \n\n");

    printf("\t\t ----------------------------------------------\n\n");

    printf("\t\t ==============================================  \n");
    printf("\t\t            REGISTRATION FORM                    \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t NAME           : BETINOL, ARON JAMES L.         \n");
    printf("\t\t AGE            : 18 YEARS OLD                   \n");
    printf("\t\t BIRTHDAY       : MARCH 03, 2004                 \n");
    printf("\t\t ADDRESS        : SAN JOSE                       \n");
    printf("\t\t CONTACT NO.    : 09652635576                    \n");
    printf("\t\t EMAIL ADD.     : betinolaronjames529@gmail.com  \n");
    printf("\t\t CITIZENSHIP    : FILIPINO                       \n");
    printf("\t\t FATHER'S NAME  : BETINOL, PATERNO               \n");
    printf("\t\t MOTHER'S NAME  : BETINOL, CIRILIA              \n\n");

    printf("\t\t =============================================   \n");
    printf("\t\t             EDUCATIONAL ATTAINTMENT             \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t PRIMARY        : KVES                           \n");
    printf("\t\t SECONDARY      : KVNHS                          \n");
    printf("\t\t TERTIARY       : AICS                         \n\n");

    printf("\t\t 1ST CHOICE     : BSIT                           \n");
    printf("\t\t 2ND CHOICE     : BSCS                           \n");
    printf("\t\t 3RD CHOICE     : BScPE                        \n\n");

    printf("\t\t ----------------------------------------------\n\n");

    printf("\t\t ==============================================  \n");
    printf("\t\t            REGISTRATION FORM                    \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t NAME           : MEREDORES, JOSHUA U.           \n");
    printf("\t\t AGE            : 18 YEARS OLD                   \n");
    printf("\t\t BIRTHDAY       : MARCH 03, 2004                 \n");
    printf("\t\t ADDRESS        : SOUTHVILLE 8B ROD              \n");
    printf("\t\t CONTACT NO.    : 09093575240                    \n");
    printf("\t\t EMAIL ADD.     : joshuameredores@gmail.com      \n");
    printf("\t\t CITIZENSHIP    : FILIPINO                       \n");
    printf("\t\t FATHER'S NAME  : MEREDORES, BONIFACIO           \n");
    printf("\t\t MOTHER'S NAME  : MEREDORES, MARIBETH          \n\n");

    printf("\t\t =============================================   \n");
    printf("\t\t             EDUCATIONAL ATTAINTMENT             \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t PRIMARY        : SILES                          \n");
    printf("\t\t SECONDARY      : SNHS                           \n");
    printf("\t\t TERTIARY       : AICS                         \n\n");

    printf("\t\t 1ST CHOICE     : BScPE                          \n");
    printf("\t\t 2ND CHOICE     : BSHR                           \n");
    printf("\t\t 3RD CHOICE     : BSIT                         \n\n");

    printf("\t\t ----------------------------------------------\n\n");

    printf("\t\t ==============================================  \n");
    printf("\t\t            REGISTRATION FORM                    \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t NAME           : CALPO, MAXELL JANE             \n");
    printf("\t\t AGE            : 34 YEARS OLD                   \n");
    printf("\t\t BIRTHDAY       : DECEMBER 19, 1987              \n");
    printf("\t\t ADDRESS        : QUEZON CITY                    \n");
    printf("\t\t CONTACT NO.    : 09293023344                    \n");
    printf("\t\t EMAIL ADD.     : calpomax@gmail.com             \n");
    printf("\t\t CITIZENSHIP    : FILIPINO                       \n");
    printf("\t\t FATHER'S NAME  : CALPO, PROCESS                 \n");
    printf("\t\t MOTHER'S NAME  : ASIS, ROSEMARIE              \n\n");

    printf("\t\t =============================================   \n");
    printf("\t\t             EDUCATIONAL ATTAINTMENT             \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t PRIMARY        : SVES                           \n");
    printf("\t\t SECONDARY      : CHS                            \n");
    printf("\t\t TERTIARY       : PNM                          \n\n");

    printf("\t\t 1ST CHOICE     : BSIT                           \n");
    printf("\t\t 2ND CHOICE     : BSIT                           \n");
    printf("\t\t 3RD CHOICE     : BSIT                         \n\n");

    printf("\t\t ----------------------------------------------\n\n");

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("cls");
            registList();
            break;

        case '1':
            system("cls");
            greet();
            break;

        default:
            system("cls");
            printf("Invalid");
            break;
    }
}

//This is for Simple Calculator of or case 2
void simpleCal(void)
{

    printf("\t\t           Simple Calculator          \n\n");

    printf("\t\t  [1] - Basic Computation               \n");
    printf("\t\t  [2] - Area of Shape                   \n");
    printf("\t\t  [3] - Grade Calculation               \n");
    printf("\t\t  [4] - Population Growth Rate          \n");
    printf("\t\t  [5] - Bitwise                         \n");
    printf("\t\t  [6] - Back                            \n");
    printf("\t\t______________________________________\n\n");
    printf("\t\t  Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            basicComp();
            break;

        case 2:
            system("cls");
            areaOFShape();
            break;

        case 3:
            system("cls");
            gradeCal();
            break;

        case 4:
            system("cls");
            //growthRate();
            break;

        case 5:
            system("cls");
            //bitwise();
            break;

        case 6:
            system("cls");
            mainMenu();
            break;
    }
}

void basicComp(void)
{
    //Prelim Examination.    This code is from MAXELL JANE CALPO

    float add, sub, product, quote, num1, num2, num3, expo;

    printf("First number : ");
    scanf("%f", &num1);

    printf("Second number : ");
    scanf("%f", &num2);

    printf("Third number : ");
    scanf("%f", &num3);

    add = num1 + num2 + num3;
    sub = num3 - num2;
    product = num1 * num3;
    quote = num1 / num3;
    expo = pow(num3, num2);

    printf("\n%g + %g + %g = %g\n", num1, num2, num3, add);
    printf("%g - %g = %g\n", num3, num2, sub);
    printf("%g * %g = %g\n", num1, num3, product);
    printf("%g / %g = %g\n", num1, num2, quote);
    printf("%g ^ %g = %.2Lf\n\n", num3, num2, expo);

    printf("Do you want to try again? [Y/N] : ");
    select = getch();
    //scanf("%c", &select);


    switch(select)
    {
        case 'y': case 'Y':
            system("cls");
            basicComp();
            break;

        case 'n': case 'N':
            system("cls");
            simpleCal();
            break;

        default:
            system("cls");
            printf("Invalid Value! \n");
            break;


    }
}

//This is for Area of Shape
void areaOFShape(void)
{
    printf("\n\n\t\t ==========Area of Shape==========\n\n");

    printf("\t\t [1] - Area of Triangle                 \n");
    printf("\t\t [2] - Area of Square                   \n");
    printf("\t\t [3] - Area of Circle                   \n");
    printf("\t\t [4] - Area of Parallelogram            \n");
    printf("\t\t [5] - Back                           \n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            areaTri();
            break;

        case 2:
            system("cls");
            areaSqr();
            break;

        case 3:
            system("cls");
            areaCirle();
            break;

        case 4:
            system("cls");
            areaPar();
            break;

        case 5:
            system("cls");
            mainMenu();
            break;
    }
}

void areaTri(void)
{
    //Prelim Exercise Area of Triangle.    This line of Code came from ARON JAMES BETINOL

    float b, h, area;

    printf("\t\t \" Area of Triangle\" \n\n");

    // For Base
    printf("\t\t Base = ");
    scanf("%f", &b);

    //For Height
    printf("\t\t Height = ");
    scanf("%f", &h);

    system("cls");

    area = (b*h)/2;

    // Answer/Equal/Total
    printf("\n\n\t\t Total Area = %.2f\n\n", area);

     printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("cls");
            areaOFShape();
            break;

        case '1':
            system("cls");
            greet();
            break;

        default:
            system("cls");
            printf("Invalid");
            break;
    }

}

void areaSqr(void)
{
     printf("Under Process!\n");
}

void areaCirle(void)
{
     printf("Under Process!\n");
}

void areaPar(void)
{
    printf("Under Process!\n");
}

//This is for Grade Calculation
void gradeCal(void)
{
    printf("\n\n\t\t ========== GRADE CALCULATION ==========\n\n");
    
    printf("\t\t [1] - Grade Range                            \n");
    printf("\t\t [2] - Passes/Failed Identifier               \n");
    printf("\t\t [3] - Grade Computation                      \n");
    printf("\t\t [4] - Grade Computation 1.1                  \n");
    printf("\t\t [5] - Back                                 \n\n");
    
     printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            gradeRange();
            break;

        case 2:
            system("cls");
            //passIdent();
            break;

        case 3:
            system("cls");
            //gradeComp1();
            break;

        case 4:
            system("cls");
            //gradeComp2();
            break;

        case 5:
            system("cls");
            mainMenu();
            break;

    }
}

void gradeRange(void)
{
    
}


void greet(void)
{
    printf("\n\n\t\t================================================================================ \n");
    printf("\t\t        _________                               _    _                               \n");
    printf("\t\t        ___   ___ _   _  _____  _   _  _   _   | |  | | _____  _   _                 \n");
    printf("\t\t           | |   | | | ||     || | | || | | |  | |  | ||  _  || | | |                \n");
    printf("\t\t           | |   | |_| || |_| ||  \\| || |/ /   |  \\/  || | | || | | |              \n");
    printf("\t\t           | |   |     ||  _  || |\\  ||   |     \\    / | | | || | | |              \n");
    printf("\t\t           | |   | | | || | | || | | || |\\ \\     |  |  | | | || | | |              \n");
    printf("\t\t           | |   | | | || | | || | | || | | |    |  |  | |_| || |_| |                \n");
    printf("\t\t           |_|   |_| |_||_| |_||_| |_||_| |_|    |__|  |_____||_____|                \n");
    printf("\t\t        +-----------------------------------------------------------+                \n");
    printf("\t\t        |                    For Using Our Program                  |                \n");
    printf("\t\t        +-----------------------------------------------------------+                \n");
    printf("\t\t================================================================================     \n");
}
