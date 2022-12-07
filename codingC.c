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
void growthRate(void);
void bitwise(void);

//This is For Temperature Converter
void tempConvert(void);
void celCon(void);
void fahCon(void);

void greet(void);

//global Variable
char select;
int opt;

int main()
{
    //system("Color A");
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

//Main Menu
void mainMenu(void)
{
    printf("\n\n\t\t                                     MENU                                      \n");
    printf("\t\t  ================================================================================ \n");
    printf("\t\t          ___________________________       ___________________________            \n");
    printf("\t\t         /___________________________  |   /___________________________  |         \n");
    printf("\t\t        |                            | |  |                            | |         \n");
    printf("\t\t        | [1] Registration Form      | |  | [6] Color Selector         | |         \n");
    printf("\t\t        | [2] Simple Calculator      | |  | [7] Grade Range            | |         \n");
    printf("\t\t        | [3] Temperature Converter  | |  | [8] Intergers Comparison   | |         \n");
    printf("\t\t        | [4] Integers Identifier    | |  | [9] Back                   | |         \n");
    printf("\t\t        | [5] Qualification to Vote  | |  |                            | |         \n");
    printf("\t\t        |____________________________|/   |____________________________|/        \n\n");
    printf("\t\t  ================================================================================ \n\n");

    printf("\t\t  Pick a number that you Want to Use [1-9] : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("clear");
            registList();
            break;

        case 2:
            system("clear");
            simpleCal();
            break;

        case 3:
            system("clear");
            tempConvert();
            break;

        case 4:
            system("clear");
            printf("UNDER PROCESS! \n");
            break;

        case 5:
            system("clear");
            printf("UNDER PROCESS! \n");
            //qualiVote();
            break;

        case 6:
            system("clear");
            printf("UNDER PROCESS! \n");
            //colorSelec();
            break;

        case 7:
            system("clear");
            printf("UNDER PROCESS! \n");
            //gradeRange();
            break;

        case 8:
            system("clear");
            printf("UNDER PROCESS! \n");
            //integer();
            break;

        case 9:
            system("clear");
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
            system("clear");
            regisForm();
            break;

        case 2:
            system("clear");
            listRegistered();
            break;

        case 3:
            system("clear");
            mainMenu();
            break;

    }

}

//Prelim Act2
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

    system("clear");

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
            system("clear");
            registList();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//Prelim Act1
void listRegistered(void)
{
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

    printf("\t\t ==============================================  \n");
    printf("\t\t            REGISTRATION FORM                    \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t NAME           : SANTELICES, ALBERT             \n");
    printf("\t\t AGE            : 21 YEARS OLD                   \n");
    printf("\t\t BIRTHDAY       : APRIL 03, 2001                 \n");
    printf("\t\t ADDRESS        : SAN JOSE                       \n");
    printf("\t\t CONTACT NO.    : 09485618348                    \n");
    printf("\t\t EMAIL ADD.     : santelicesalbert03@gmail.com   \n");
    printf("\t\t CITIZENSHIP    : FILIPINO                       \n");
    printf("\t\t FATHER'S NAME  : SANTELICES, ARNOLD             \n");
    printf("\t\t MOTHER'S NAME  : SANTELICES, MA. LILIBETH     \n\n");

    printf("\t\t =============================================   \n");
    printf("\t\t             EDUCATIONAL ATTAINTMENT             \n");
    printf("\t\t ==============================================\n\n");

    printf("\t\t PRIMARY        : KVES                           \n");
    printf("\t\t SECONDARY      : KVNHS                          \n");
    printf("\t\t TERTIARY       : KVSHS                        \n\n");

    printf("\t\t 1ST CHOICE     : BSIT                           \n");
    printf("\t\t 2ND CHOICE     : BS CRIM                        \n");
    printf("\t\t 3RD CHOICE     : HRM                          \n\n");

    printf("\t\t ----------------------------------------------\n\n");

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            registList();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//MENU for Simple Calculator
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
            system("clear");
            basicComp();
            break;

        case 2:
            system("clear");
            areaOFShape();
            break;

        case 3:
            system("clear");
            gradeCal();
            break;

        case 4:
            system("clear");
            growthRate();
            break;

        case 5:
            system("clear");
            bitwise();
            break;

        case 6:
            system("clear");
            mainMenu();
            break;
    }
}

//Prelim Examination.    This code is from MAXELL JANE CALPO
void basicComp(void)
{

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
            system("clear");
            basicComp();
            break;

        case 'n': case 'N':
            system("clear");
            simpleCal();
            break;

        default:
            system("clear");
            printf("Invalid Value! \n");
            break;


    }
}

//MENU for Area of Shape
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
            system("clear");
            areaTri();
            break;

        case 2:
            system("clear");
            areaSqr();
            break;

        case 3:
            system("clear");
            areaCirle();
            break;

        case 4:
            system("clear");
            areaPar();
            break;

        case 5:
            system("clear");
            mainMenu();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//Prelim Exercise Area of Triangle.    This line of Code came from ARON JAMES BETINOL
void areaTri(void)
{

    float b, h, area;

    printf("\t\t \" Area of Triangle\" \n\n");

    // For Base
    printf("\t\t Base = ");
    scanf("%f", &b);

    //For Height
    printf("\t\t Height = ");
    scanf("%f", &h);

    system("clear");

    area = (b*h)/2;

    // Answer/Equal/Total
    printf("\n\n\t\t Total Area = %.2f\n\n", area);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            areaOFShape();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }

}

//Code came From  JOSHUA MEREDORES
void areaSqr(void)
{
    int area,side;

    printf("\n\n\t\t Enter sides of square: ");
    scanf("%d", &side);

    area = side * side;

    printf("\n\t\t Area of square = %d\n\n",area);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            areaOFShape();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//Code came From  JOSHUA MEREDORES
void areaCirle(void)
{
    int radius;
    float pi = 3.14, area;

    printf("\n\n\t\t Enter the radius of circle: ");
    scanf("%d", &radius);

    area = pi * radius * radius;

    printf("\n\t\t Area of circle= 1%f\n\n",area);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            areaOFShape();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }

}

//Code came From  JOSHUA MEREDORES
void areaPar(void)
{
    float b, h, area;

    printf("\n\n\t\t Enter the Base: ");
    scanf("%f",&b);

    printf("\n\t\t Enter the Vertical height: ");
    scanf("%f",&h);

    area = b * h;

    printf("\n\t\t Area of Parallelogram = %f\n\n", area);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            areaOFShape();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//MENU for Grade Calculation
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
            system("clear");
            gradeRange();
            break;

        case 2:
            system("clear");
            //passIdent();
            break;

        case 3:
            system("clear");
            //gradeComp1();
            break;

        case 4:
            system("clear");
            //gradeComp2();
            break;

        case 5:
            system("clear");
            mainMenu();
            break;

    }
}

//Midterm Exercises : Grade Range   This Line of code is came from  JHON BRIAN ARCE
void gradeRange(void)
{
    float grade;

    printf("\n\n\t\t Enter Your Grade : ");
    scanf("%f", &grade);

    if(grade >= 90 && grade <= 100)
    {
        printf("\n\t\t Grade : A\n\n");
    }
    else if(grade >= 80 && grade < 90)
    {
        printf("\n\t\t Grade : B\n\n");
    }
    else if(grade >= 70 && grade < 80)
    {
        printf("\n\t\t Grade : C\n\n");
    }
    else if(grade >=60 && grade < 70)
    {
        printf("\n\t\t Grade : D\n\n");
    }
    else if(grade >= 0 && grade < 60)
    {
        printf("\n\t\t Grade : E\n\n");
    }
    else
    {
        printf("\n\t\t OUT OF RANGE!\n\n");
    }

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            gradeCal();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//This code is Group Midter Project
void growthRate(void)
{

    float ans, A, P, r, t;
    const float e = 2.718;

    //View
    printf(" \n\n\t\t ____________________________________ \n");
    printf("\t\t |####################################|\n");
    printf("\t\t |#|                                |#|\n");
    printf("\t\t |#|     Population Growth Rate     |#|\n");
    printf("\t\t |#|________________________________|#|\n");
    printf("\t\t |####################################|\n");
    printf("\t\t |#|   What did you want to FIND?   |#|\n");
    printf("\t\t |#|                                |#|\n");
    printf("\t\t |#| [1] - Size of Population       |#|\n");
    printf("\t\t |#|                                |#|\n");
    printf("\t\t |#| [2] - Number of People         |#|\n");
    printf("\t\t |#|                                |#|\n");
    printf("\t\t |#| [3] - Rate of Growth           |#|\n");
    printf("\t\t |#|                                |#|\n");
    printf("\t\t |#| [4] - Time                     |#|\n");
    printf("\t\t |#|________________________________|#|\n");
    printf("\t\t |####################################|\n\n");

    //Getting input to a User
    printf("\t\t           Enter zero if no value      \n\n");

    printf("\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    printf("\t\t Enter the Time in Month : ");
    scanf("%f", &t);

    printf("\t\t What did you want to find? ");
    scanf("%i", &opt);

    // processing or a computation to rate onto decimal
    t /= 12;
    r /= 100;

    // the Decision of opt
    if(opt <= 4 && opt > 0)
    {
        if(opt == 1)
        {
            //procesd
            ans = P * pow(e,(r * t));

            // To clear
            system("clear");

            //The outout
            printf("\n\n\t\t =======================================================================================\n");
            printf("\t\t                                 Population after in grows                              \n");
            printf("\t\t =======================================================================================\n");
            printf("\t\t             Given :                                                                    \n");
            printf("\t\t                 P = %g                                                              \n", P);
            printf("\t\t                 e = 2.718                                                              \n");
            printf("\t\t                 r = %g                                                              \n", r);
            printf("\t\t                 t = %g                                                              \n", t);
            printf("\t\t                 A = ?                                                                  \n");
            printf("\t\t             Answer :                                                                   \n");
            printf("\t\t                 A = %.0f therefore, the City population would be about            \n", ans);
            printf("\t\t                                 %.0f after %.1f Years.                           \n", ans, t);
            printf("\t\t =======================================================================================\n");
            printf("\t\t                                 © Group #2   2022-2022                                 \n");
            printf("\t\t                                  Colegio De Montalban                              \n\n\n");
            }

        if(opt == 2)
        {
            //processing
            ans = A / pow(e,(r * t));

            //to Clear
            system("clear");

            //Output
            printf("\n\n\t\t =======================================================================================\n");
            printf("\t\t                                 Initial Number of People                               \n");
            printf("\t\t =======================================================================================\n");
            printf("\t\t             Given :                                                                    \n");
            printf("\t\t                 A = %g                                                              \n", A);
            printf("\t\t                e = 2.718                                                              \n");
            printf("\t\t                r = %g                                                              \n", r);
            printf("\t\t                t = %g                                                              \n", t);
            printf("\t\t                P = ?                                                                  \n");
            printf("\t\t            Answer :                                                                   \n");
            printf("\t\t                P = %.0f therefore, the initial number of Population would be     \n", ans);
            printf("\t\t                                   %.0f in %.1f Years.                         \n", ans, t);
            printf("\t\t=======================================================================================\n");
            printf("\t\t                                © Group #2   2022-2022                                 \n");
            printf("\t\t                                 Colegio De Montalban                              \n\n\n");
        }

        if(opt == 3)
        {
            //process
            ans = log10(A / P) / ( t * log10(e));

            //to clear
            system("clear");

            //Output
            printf("\n\n\t\t =======================================================================================\n");
            printf("\t\t                                     Rate of Growth                                     \n");
            printf("\t\t =======================================================================================\n");
            printf("\t\t             Given :                                                                    \n");
            printf("\t\t                 A = %g                                                              \n", A);
            printf("\t\t                 P = %g                                                              \n", P);
            printf("\t\t                 e = 2.718                                                              \n");
            printf("\t\t                 t = %g                                                              \n", t);
            printf("\t\t                 r = ?                                                                  \n");
            printf("\t\t             Answer :                                                                   \n");
            printf("\t\t                 r = %.3f therefore, the rate of growth of the Population would be \n", ans);
            printf("\t\t                                        %.3f in the %.1f Years.                 \n", ans, t);
            printf("\t\t =======================================================================================\n");
            printf("\t\t                                 © Group #2   2022-2022                                 \n");
            printf("\t\t                                  Colegio De Montalban                              \n\n\n");
        }

        if(opt == 4)
        {
            //processing
            ans = log10(A / P) / (r * log10(e));

            //To Clear
            system("clear");

            //Output
            printf("\n\n\t\t =======================================================================================\n");
            printf("\t\t                                        Time                                            \n");
            printf("\t\t =======================================================================================\n");
            printf("\t\t             Given :                                                                    \n");
            printf("\t\t                 A = %g                                                              \n", A);
            printf("\t\t                 p = %g                                                              \n", P);
            printf("\t\t                 e = 2.718                                                              \n");
            printf("\t\t                 r = %g                                                              \n", r);
            printf("\t\t                 t = ?                                                                  \n");
            printf("\t\t             Answer :                                                                   \n");
            printf("\t\t                 t = %.0f therefore, in the %.1f Years the size of Population was %g \n", ans, ans, A);
            printf("\t\t                                                                                        \n");
            printf("\t\t =======================================================================================\n");
            printf("\t\t                                 © Group #2   2022-2022                                 \n");
            printf("\t\t                                  Colegio De Montalban                              \n\n\n");
        }
    }

    //if the user input a Wrong Character
    if(opt > 4 || opt < 0)
    {
        system("clear");

        printf("\n\n\t\t =======================================================================================\n");
        printf("\t\t                                       !! WARNING !!                                    \n");
        printf("\t\t =======================================================================================\n");
        printf("\t\t                                                                                        \n");
        printf("\t\t                                                                                        \n");
        printf("\t\t                         Sorry! this variable number was not EXIST.                     \n");
        printf("\t\t                                        Please try Again.                               \n");
        printf("\t\t                                                                                        \n");
        printf("\t\t                                                                                        \n");
        printf("\t\t =======================================================================================\n");
        printf("\t\t                                 © Group #2   2022-2022                                 \n");
        printf("\t\t                                  Colegio De Montalban                             \n\n\n");

    }

    printf("\t\t                 BACK press [0]                           EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            simpleCal();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}


//Midterm Exercises BITWISE            This code is from MAXELL JANE CALPO
void bitwise(void)
{
    int x, y;

    printf("\n\n\t\t First Number: ");
    scanf("%d",&x);

    printf("\t\t Second Number: ");
    scanf("%d",&y);

    if((x <= 255 && x > 0) && (y <= 255 && y > 0))
    {
        printf("\n\n\t\t Bitwise AND = %d\n", x & y);
        printf("\t\t Bitwise OR = %d\n", x | y);
        printf("\t\t Bitwise XOR = %d\n\n", x ^ y);
    }
    else
    {
       printf("\n\t\t Out of range!\n\n");
    }

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            gradeCal();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//MENU for Temperature Converter
void tempConvert(void)
{
    printf("\n\n\t\t ========== Temperature Converter ==========\n\n");
    printf("\t\t [1] - Celsius to Fahrenheit                      \n");
    printf("\t\t [2] - Fahrenheit to Celsius                      \n");
    printf("\t\t [3] - Back                                     \n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("clear");
            celCon();
            break;

        case 2:
            system("clear");
            fahCon();
            break;

        case 3:
            system("clear");
            mainMenu();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//Prelim Activity 3    This code came from ALBERT SANTELICES
void celCon(void)
{
    float fahrenheit, celsius;

    printf("\n\n\t\t Enter the celsius: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius*9/5)+32;


    printf("\n\t\t %.1f celsius = %.1f fahrenheit\n\n", celsius, fahrenheit);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            tempConvert();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
}

//Prelim Activity 3    This code came from ALBERT SANTELICES
void fahCon(void)
{
    float celsius, fahrenheit;

    printf("\n\n\t\t Enter the fahrenheit: ");
    scanf("%f", &fahrenheit);


    celsius = (fahrenheit - 32) * 5 / 9;


    printf("\n\t\t %.1f fahrenheit = %.1f celsius\n\n", fahrenheit, celsius);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    select = getch();

    switch(select)
    {
        case '0':
            system("clear");
            tempConvert();
            break;

        case '1':
            system("clear");
            greet();
            break;

        default:
            system("clear");
            printf("Invalid");
            break;
    }
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
