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
#include <math.h>

void banner(void);

void mainMenu(void);

// This is for Registration
void registList(void);
void regisForm(void);
void listRegistered(void);

// This is for Simple Calculator
void simpleCal(void);
void basicComp(void);
void areaOFShape(void);
void areaTri(void);
void areaTrape(void);
void areaSqr(void);
void areaPar(void);
void gradeCal(void);
void gradeRange(void);
void passIdent(void);
void growthRate(void);
void sizePopulation(void);
void numPeople(void);
void rateOfGrowth(void);
void timeRate(void);
void bitwise(void);

// This is For Temperature Converter
void tempConvert(void);
void celCon(void);
void fahCon(void);

// This is For Integers Identifier
void intId(void);
void posNeg(void);
void intCom(void);

//This is For Increment and Decrement
void incrDecre(void);
void preIncre(void);
void postIncre(void);
void preDecre(void);
int opt, x, y;

// This is For the last frame in our program either GREET or if it INVALID
void greet(void);
void invalid(void);

// global Variable
char slt;
int opt, x, y;
float ans, A, P, r, t, a, b, h, area, side, grade, e = 2.718;
float add, sub, product, quote, num1, num2, num3, expo;

int main()
{
    system("Color A");
    system("clear");
    banner();
    return 0;
}

void banner(void)
{
    printf("\n\n\n\t\t ========================================+========================================\n");
    printf("\t\t                                    WELCOME TO                                     \n");
    printf("\t\t ========================================+======================================== \n");
    printf("\t\t                #########   ######    ######  ##        ##  ######                 \n");
    printf("\t\t                ##      ## ##    ##       ##  ####    #### ##    ##                \n");
    printf("\t\t                ##      ## ##    ##       ##  ## ##  ## ## ##    ##                \n");
    printf("\t\t                #########  ########       ##  ##   ##   ## ########                \n");
    printf("\t\t                ##      ## ##    ##       ##  ##        ## ##    ##                \n");
    printf("\t\t                ##      ## ##    ## ##    ##  ##        ## ##    ##                \n");
    printf("\t\t                #########  ##    ##  ######   ##        ## ##    ##                \n");
    printf("\t\t                +--------------------------------------------------+               \n");
    printf("\t\t                | Brian      Aron    Joshua     Maxwell     Albert |               \n");
    printf("\t\t                +--------------------------------------------------+               \n");
    printf("\t\t ========================================+========================================\n\n");

    printf("\t\t Do You Want to Use this Program? press [Y/N] : ");
    scanf("%c", &slt);

    switch (slt)
    {
    case 'Y':
    case 'y':
        system("clear");
        mainMenu();
        break;

    case 'N':
    case 'n':
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Main Menu
void mainMenu(void)
{
    printf("\n\n\n\t\t =================================================================================\n");
    printf("\t\t                                        MENU                                       \n");
    printf("\t\t ================================================================================= \n");
    printf("\t\t          ___________________________        ___________________________            \n");
    printf("\t\t         /___________________________  |    /___________________________  |         \n");
    printf("\t\t        |                            | |   |                            | |         \n");
    printf("\t\t        | [1] Registration Form      | |   | [6] Color Selector         | |         \n");
    printf("\t\t        | [2] Simple Calculator      | |   | [7] Increment & Decrement  | |         \n");
    printf("\t\t        | [3] Temperature Converter  | |   | [8]                        | |         \n");
    printf("\t\t        | [4] Integers Identifier    | |   | [9] Back                   | |         \n");
    printf("\t\t        | [5] Qualification to Vote  | |   |                            | |         \n");
    printf("\t\t        |____________________________|/    |____________________________|/        \n\n");
    printf("\t\t =================================================================================\n\n");

    printf("\t\t  Pick a number that you Want to Use [1-9] : ");
    scanf("%i", &opt);

    switch (opt)
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
        intId();
        break;

    case 5:
        system("clear");
        printf("UNDER PROCESS! \n");
        // qualiVote();
        break;

    case 6:
        system("clear");
        printf("UNDER PROCESS! \n");
        // colorSelec();
        break;

    case 7:
        system("clear");
        incrDecre();

        break;

    case 8:
        system("clear");
        printf("UNDER PROCESS! \n");
        // integer();
        break;

    case 9:
        system("clear");
        banner();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// This is for Registration or case 1
void registList(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                       REGISTRATION LIST                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Registration Form                                    \n\n");
    printf("\t\t\t [2] - List of Registered                                   \n\n");
    printf("\t\t\t [3] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
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

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Act2
void regisForm(void)
{

    char name[50], birthday[50], address[50], contactNum[50], emailAdd[50], citizen[50], fatherName[50], motherName[50];
    char educPri[50], educSec[50], educTer[50], firstChoice[50], secondChoice[50], thirdChoice[50];
    int age;

    printf("\n\n\n\t\t ==============================+============================== \n");
    printf("\t\t                         PERSONAL BACKGROUND                         \n");
    printf("\t\t ==============================+==============================       \n");

    printf("\t\t\t What is your Name? ");
    scanf(" %[^\n]s", name);

    printf("\t\t\t How old Are you? ");
    scanf("%i", &age);

    printf("\t\t\t What is your Birthday? ");
    scanf(" %[^\n]s", birthday);

    printf("\t\t\t Where are you from? ");
    scanf(" %[^\n]s", address);

    printf("\t\t\t What is your Contact Number? ");
    scanf("%s", contactNum);

    printf("\t\t\t What is your Email Address? ");
    scanf("%s", emailAdd);

    printf("\t\t\t What is your Citizenship? ");
    scanf("%s", citizen);

    printf("\t\t\t Name of your Father? ");
    scanf(" %[^\n]s", fatherName);

    printf("\t\t\t Name of your Mother? ");
    scanf(" %[^\n]s", motherName);

    printf("\t\t\t Primary Education: ");
    scanf(" %[^\n]s", educPri);

    printf("\t\t\t Secondary Education: ");
    scanf(" %[^\n]s", educSec);

    printf("\t\t\t Teriary Education: ");
    scanf(" %[^\n]s", educTer);

    printf("\t\t\t What is your First Choice? ");
    scanf(" %[^\n]s", firstChoice);

    printf("\t\t\t What is your Second Choice? ");
    scanf(" %[^\n]s", secondChoice);

    printf("\t\t\t What is your Third Choice? ");
    scanf(" %[^\n]s", thirdChoice);

    system("clear");

    printf("\n\n\n\t\t ==============================+============================== \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: %s\n", name);
    printf("\t\t\t AGE................: %i\n", age);
    printf("\t\t\t BIRTHDAY...........: %s\n", birthday);
    printf("\t\t\t ADDRESS............: %s\n", address);
    printf("\t\t\t CONTACT NO.........: %s\n", contactNum);
    printf("\t\t\t EMAIL ADDRESS......: %s\n", emailAdd);
    printf("\t\t\t CITIZENSHIP........: %s\n", citizen);
    printf("\t\t\t FATHER'S NAME......: %s\n", fatherName);
    printf("\t\t\t MOTHER'S NAME......: %s\n", motherName);

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY..........: %s\n", educPri);
    printf("\t\t\t SECONDARY........: %s\n", educSec);
    printf("\t\t\t TERTIARY.........: %s\n\n", educTer);

    printf("\t\t\t 1ST CHOICE.......: %s\n", firstChoice);
    printf("\t\t\t 2ND CHOICE.......: %s\n", secondChoice);
    printf("\t\t\t 3RD CHOICE.......: %s\n\n", thirdChoice);

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t          BACK press [0]           EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        registList();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Act1
void listRegistered(void)
{
    printf("\n\n\n\t\t                List of Registered People                 \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: ARCE, JHON BRIAN V.            \n");
    printf("\t\t\t AGE................: 19 YEARS OLD                   \n");
    printf("\t\t\t BIRTHDAY...........: APRIL 02, 2003                 \n");
    printf("\t\t\t ADDRESS............: SAN ISIDRO                     \n");
    printf("\t\t\t CONTACT NO.........: 09951779567                    \n");
    printf("\t\t\t EMAIL ADDRESS......: arce.jhonbrian@gmail.com       \n");
    printf("\t\t\t CITIZENSHIP........: FILIPINO                       \n");
    printf("\t\t\t FATHER'S NAME......: ARCE, REGAN                    \n");
    printf("\t\t\t MOTHER'S NAME......: ARCE, LIEZEL                 \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY............: SNES                           \n");
    printf("\t\t\t SECONDARY..........: OMNHS                          \n");
    printf("\t\t\t TERTIARY...........: CDM                          \n\n");

    printf("\t\t\t 1ST CHOICE.........: BSED                           \n");
    printf("\t\t\t 2ND CHOICE.........: BSCS                           \n");
    printf("\t\t\t 3RD CHOICE.........: BSIT                         \n\n");

    printf("\t -----------------------------------------------------------------------------\n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: BETINOL, ARON JAMES L.         \n");
    printf("\t\t\t AGE................: 18 YEARS OLD                   \n");
    printf("\t\t\t BIRTHDAY...........: MARCH 03, 2004                 \n");
    printf("\t\t\t ADDRESS............: SAN JOSE                       \n");
    printf("\t\t\t CONTACT NO.........: 09652635576                    \n");
    printf("\t\t\t EMAIL ADDRESS......: betinolaronjames529@gmail.com  \n");
    printf("\t\t\t CITIZENSHIP........: FILIPINO                       \n");
    printf("\t\t\t FATHER'S NAME......: BETINOL, PATERNO               \n");
    printf("\t\t\t MOTHER'S NAME......: BETINOL, CIRILA              \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY........: KVES                           \n");
    printf("\t\t\t SECONDARY......: KVNHS                          \n");
    printf("\t\t\t TERTIARY.......: AICS                         \n\n");

    printf("\t\t\t 1ST CHOICE.....: BSIT                           \n");
    printf("\t\t\t 2ND CHOICE.....: BSCS                           \n");
    printf("\t\t\t 3RD CHOICE.....: BScPE                        \n\n");

    printf("\t ------------------------------------------------------------------------------\n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: MEREDORES, JOSHUA U.           \n");
    printf("\t\t\t AGE................: 18 YEARS OLD                   \n");
    printf("\t\t\t BIRTHDAY...........: MARCH 03, 2004                 \n");
    printf("\t\t\t ADDRESS............: SOUTHVILLE 8B ROD              \n");
    printf("\t\t\t CONTACT NO.........: 09093575240                    \n");
    printf("\t\t\t EMAIL ADDRESS......: joshuameredores@gmail.com      \n");
    printf("\t\t\t CITIZENSHIP........: FILIPINO                       \n");
    printf("\t\t\t FATHER'S NAME......: MEREDORES, BONIFACIO           \n");
    printf("\t\t\t MOTHER'S NAME......: MEREDORES, MARIBETH          \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY............: SILES                          \n");
    printf("\t\t\t SECONDARY..........: SNHS                           \n");
    printf("\t\t\t TERTIARY...........: AICS                         \n\n");

    printf("\t\t\t 1ST CHOICE.........: BScPE                          \n");
    printf("\t\t\t 2ND CHOICE.........: BSHR                           \n");
    printf("\t\t\t 3RD CHOICE.........: BSIT                         \n\n");

    printf("\t ---------------------------------------------------------------------------------\n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: CALPO, MAXELL JANE             \n");
    printf("\t\t\t AGE................: 34 YEARS OLD                   \n");
    printf("\t\t\t BIRTHDAY...........: DECEMBER 19, 1987              \n");
    printf("\t\t\t ADDRESS............: QUEZON CITY                    \n");
    printf("\t\t\t CONTACT NO.........: 09293023344                    \n");
    printf("\t\t\t EMAIL ADDRESS......: calpomax@gmail.com             \n");
    printf("\t\t\t CITIZENSHIP........: FILIPINO                       \n");
    printf("\t\t\t FATHER'S NAME......: CALPO, PROCESS                 \n");
    printf("\t\t\t MOTHER'S NAME......: ASIS, ROSEMARIE              \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY............: SVES                           \n");
    printf("\t\t\t SECONDARY..........: CHS                            \n");
    printf("\t\t\t TERTIARY...........: PNM                          \n\n");

    printf("\t\t\t 1ST CHOICE.........: BSIT                           \n");
    printf("\t\t\t 2ND CHOICE.........: BSIT                           \n");
    printf("\t\t\t 3RD CHOICE.........: BSIT                         \n\n");

    printf("\t ---------------------------------------------------------------------------------\n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                        REGISTRATION FORM                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t NAME...............: SANTELICES, ALBERT             \n");
    printf("\t\t\t AGE................: 21 YEARS OLD                   \n");
    printf("\t\t\t BIRTHDAY...........: APRIL 03, 2001                 \n");
    printf("\t\t\t ADDRESS............: SAN JOSE                       \n");
    printf("\t\t\t CONTACT NO.........: 09485618348                    \n");
    printf("\t\t\t EMAIL ADDRESS......: santelicesalbert03@gmail.com   \n");
    printf("\t\t\t CITIZENSHIP........: FILIPINO                       \n");
    printf("\t\t\t FATHER'S NAME......: SANTELICES, ARNOLD             \n");
    printf("\t\t\t MOTHER'S NAME......: SANTELICES, MA. LILIBETH     \n\n");

    printf("\t\t ==============================+==============================  \n");
    printf("\t\t                     EDUCATIONAL ATTAINTMENT                    \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t\t PRIMARY............: KVES                           \n");
    printf("\t\t\t SECONDARY..........: KVNHS                          \n");
    printf("\t\t\t TERTIARY...........: KVSHS                        \n\n");

    printf("\t\t\t 1ST CHOICE.........: BSIT                           \n");
    printf("\t\t\t 2ND CHOICE.........: BS CRIM                        \n");
    printf("\t\t\t 3RD CHOICE.........: HRM                          \n\n");

    printf("\t ---------------------------------------------------------------------------------\n\n");
    printf("\t\t ==============================+==============================\n");
    printf("\t\t          BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        registList();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// MENU for Simple Calculator
void simpleCal(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                       SIMPLE CALCULATOR                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Basic  Computation                                    \n\n");
    printf("\t\t\t [2] - Area of Shape                                        \n\n");
    printf("\t\t\t [3] - Grade Calculation                                    \n\n");
    printf("\t\t\t [4] - Population Growth Rate                               \n\n");
    printf("\t\t\t [5] - Bitwise                                              \n\n");
    printf("\t\t\t [6] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t  Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
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

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Examination.    This code is from MAXELL JANE CALPO
void basicComp(void)
{
    printf("\n\n\n\t\t +-------------------+ \n");
    printf("\t\t | Basic Computation | \n");
    printf("\t\t +-------------------+ \n\n");
    printf("\t\t First number  : ");
    scanf("%f", &num1);

    printf("\t\t Second number : ");
    scanf("%f", &num2);

    printf("\t\t Third number  : ");
    scanf("%f", &num3);

    system("clear");

    add = num1 + num2 + num3;
    sub = num3 - num2;
    product = num1 * num3;
    quote = num1 / num3;
    expo = pow(num3, num2);

    printf("\n\n\n\t\t +-------------------+ \n");
    printf("\t\t | Basic Computation | \n");
    printf("\t\t +-------------------+ \n\n");
    printf("\t\t # %g + %g + %g = %g\n", num1, num2, num3, add);
    printf("\t\t # %g - %g = %g\n", num3, num2, sub);
    printf("\t\t # %g * %g = %g\n", num1, num3, product);
    printf("\t\t # %g / %g = %g\n", num1, num2, quote);
    printf("\t\t # %g ^ %g = %g\n\n", num3, num2, expo);

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        simpleCal();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// MENU for Area of Shape
void areaOFShape(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                         AREA OF SHAPE                         \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Area of Triangle                                     \n\n");
    printf("\t\t\t [2] - Area of Square                                       \n\n");
    printf("\t\t\t [3] - Area of Trapezoid                                    \n\n");
    printf("\t\t\t [4] - Area of Parallelogram                                \n\n");
    printf("\t\t\t [5] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 1:
        system("clear");
        areaTri();
        break;

    case 2:
        system("clear");
        areaTrape();
        break;

    case 3:
        system("clear");
        areaSqr();
        break;

    case 4:
        system("clear");
        areaPar();
        break;

    case 5:
        system("clear");
        simpleCal();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Exercise Area of Triangle.    This line of Code came from ARON JAMES BETINOL
void areaTri(void)
{
    printf("\n\n\n\t\t Given Value of Triangle\n\n");

    // For Base
    printf("\t\t Enter the Base of Triangle : ");
    scanf("%f", &b);

    // For Height
    printf("\t\t Enter the Height of Triangle : ");
    scanf("%f", &h);

    system("clear");

    area = (b * h) / 2;

    // Answer/Equal/Total
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                          AREA OF TRIANGLE                        \n");
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t\t\t\t              ---          \n");
    printf("\t\t\t\t\t       ^       |           \n");
    printf("\t\t\t\t\t      / \\      |          \n");
    printf("\t\t\t\t\t     /   \\     | h = %g\n", h);
    printf("\t\t\t\t\t    /     \\    |          \n");
    printf("\t\t\t\t\t   /_______\\   |          \n");
    printf("\t\t\t\t\t              ---          \n");
    printf("\t\t\t\t\t  |----------|             \n");
    printf("\t\t\t\t\t     b = %g           \n", b);
    printf("\t\t\t Therefore the Total Area of a Triangle is %g. \n", area);
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        areaOFShape();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Code came From  JOSHUA MEREDORES
void areaSqr(void)
{
    printf("\n\n\n\t\t Given Value of Square\n\n");

    printf("\t\t Enter sides of square: ");
    scanf("%f", &side);

    system("clear");

    area = side * side;

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                           AREA OF SQUARE                         \n");
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t\t\t\t    __________  ---             \n");
    printf("\t\t\t\t\t   |          |  |             \n");
    printf("\t\t\t\t\t   |          |  |             \n");
    printf("\t\t\t\t\t   |          |  | s = %g   \n", side);
    printf("\t\t\t\t\t   |          |  |             \n");
    printf("\t\t\t\t\t   |__________|  |             \n");
    printf("\t\t\t\t\t                ---            \n");
    printf("\t\t\t\t\t  |------------|               \n");
    printf("\t\t\t\t\t      s = %g            \n", side);
    printf("\t\t\t Therefore the Total Area of a Square is %g. \n", area);
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        areaOFShape();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Code came From  JOSHUA MEREDORES
void areaTrape(void)
{
    printf("\n\n\n\t\t Given Value of Trapezoid\n\n");

    printf("\t\t Enter the first value of the Base : ");
    scanf("%f", &a);

    printf("\t\t Enter the second value of the Base : ");
    scanf("%f", &b);

    printf("\t\t Enter the height of Trapezoid : ");
    scanf("%f", &h);

    system("clear");

    area = 0.5 * (a + b) * h;

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                          AREA OF TRAPEZOID                       \n");
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t\t\t           a = %g                 \n", a);
    printf("\t\t\t\t       |-----------|                 \n");
    printf("\t\t\t\t        ___________      ---         \n");
    printf("\t\t\t\t       /           \\      |         \n");
    printf("\t\t\t\t      /             \\     |         \n");
    printf("\t\t\t\t     /               \\    |h = %g\n", h);
    printf("\t\t\t\t    /                 \\   |         \n");
    printf("\t\t\t\t   /___________________\\  |         \n");
    printf("\t\t\t\t                         ---         \n");
    printf("\t\t\t\t  |---------------------|                \n");
    printf("\t\t\t\t           b = %g                \n", b);
    printf("\t\t\t Therefore the Total Area of a Trapezoid is %g. \n", area);
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        areaOFShape();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Code came From  JOSHUA MEREDORES
void areaPar(void)
{
    printf("\n\n\n\t\t Given Value of Parallelogram\n\n");

    printf("\t\t Enter the Base of Parallelogram : ");
    scanf("%f", &b);

    printf("\t\t Enter the Height of Parallelogram : ");
    scanf("%f", &h);

    area = b * h;

    system("clear");

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                        AREA OF PARALLELOGRAM                     \n");
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t\t\t        ________________ ---        \n");
    printf("\t\t\t\t       /               /  |         \n");
    printf("\t\t\t\t      /               /   |         \n");
    printf("\t\t\t\t     /               /    |h = %g\n", h);
    printf("\t\t\t\t    /               /     |         \n");
    printf("\t\t\t\t   /_______________/      |         \n");
    printf("\t\t\t\t                         ---        \n");
    printf("\t\t\t\t  |----------------|                \n");
    printf("\t\t\t\t        b = %g                \n", b);
    printf("\t\t\t Therefore the Total Area of a Parallelogram is %g. \n", area);
    printf("\t\t ==============================+==============================  \n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        areaOFShape();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// MENU for Grade Calculation
void gradeCal(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                        GRADE CALCULATION                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Grade Range                                          \n\n");
    printf("\t\t\t [2] - Passes/Failed Identifier                             \n\n");
    printf("\t\t\t [3] - Grade Computation                                    \n\n");
    printf("\t\t\t [4] - Grade Computation 1.1                                \n\n");
    printf("\t\t\t [5] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 1:
        system("clear");
        gradeRange();
        break;

    case 2:
        system("clear");
        passIdent();
        break;

    case 3:
        system("clear");
        // gradeComp1(); midterm activity 1
        break;

    case 4:
        system("clear");
        // gradeComp2(); midterm exam
        break;

    case 5:
        system("clear");
        simpleCal();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Midterm Exercises : Grade Range   This Line of code is came from  JHON BRIAN ARCE
void gradeRange(void)
{
    printf("\n\n\n\t\t Enter Your Grade : ");
    scanf("%f", &grade);

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                           GRADE RANGE                          \n");
    printf("\t\t ==============================+==============================\n\n");

    if (grade >= 90 && grade <= 100)
    {
        printf("\t\t\t\t\t Grade : A\n\n");
    }
    else if (grade >= 80 && grade < 90)
    {
        printf("\t\t\t\t\t Grade : B\n\n");
    }
    else if (grade >= 70 && grade < 80)
    {
        printf("\t\t\t\t\t Grade : C\n\n");
    }
    else if (grade >= 60 && grade < 70)
    {
        printf("\t\t\t\t\t Grade : D\n\n");
    }
    else if (grade >= 0 && grade < 60)
    {
        printf("\t\t\t\t\t Grade : E\n\n");
    }
    else
    {
        printf("\t\t\t\t\t OUT OF RANGE!\n\n");
    }

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        gradeCal();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Group Activity #1
void passIdent(void)
{
    // Initialization or Assigning Value
    float quiz, assign, proj, CS, ME;

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                         PASSED OR FAILED                       \n");
    printf("\t\t ==============================+==============================\n\n");

    // Getting Value to the User
    printf("\t\t     Enter the Grade of the Quiz : ");
    scanf("%f", &quiz);

    printf("\t\t     Enter the Grade of the Assignment : ");
    scanf("%f", &assign);

    printf("\t\t     Enter the Grade of the Project : ");
    scanf("%f", &proj);

    printf("\t\t     Enter the Grade of the Class Standing : ");
    scanf("%f", &CS);

    printf("\t\t     Enter the Grade of the Major Exam : ");
    scanf("%f", &ME);

    // The Process or Computation
    grade = (CS * .10) + (quiz * .15) + (assign * .15) + (proj * .20) + (ME * .40);

    // To Clear
    system("clear");

    // To print a Value of Grade
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                         PASSED OR FAILED                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         Quiz .................................... : %g\n", quiz);
    printf("\t\t         Assignment .............................. : %g\n", assign);
    printf("\t\t         Project ................................. : %g\n", proj);
    printf("\t\t         Class Standing .......................... : %g\n", CS);
    printf("\t\t         Major Exam     .......................... : %g\n", CS);
    printf("\t\t         ______________________________________________\n");
    printf("\t\t         Tota Grade     .......................... : %g\n\n", grade);

    // The Condition
    if (grade >= 75)
    {
        printf("\t\t                          You Passed!\n");
    }

    if (grade < 75)
    {
        printf("\t\t                          You Failed!\n");
    }

    // Code After If
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        gradeCal();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// This code is Group Midter Project
void growthRate(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     Population Growth Rate                     \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Size of Population                                   \n\n");
    printf("\t\t\t [2] - Number of People                                     \n\n");
    printf("\t\t\t [3] - Rate of Growth                                       \n\n");
    printf("\t\t\t [4] - Time                                                 \n\n");
    printf("\t\t\t [5] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t What did you Want to find? pick a No. : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 1:
        system("clear");
        sizePopulation();
        break;

    case 2:
        system("clear");
        numPeople();
        break;

    case 3:
        system("clear");
        rateOfGrowth();
        break;

    case 4:
        system("clear");
        timeRate();
        break;

    case 5:
        system("clear");
        mainMenu();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

void sizePopulation(void)
{

    printf("\n\n\n\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    printf("\t\t Enter the Time in Month : ");
    scanf("%f", &t);

    system("clear");

    ans = P * pow(e, (r * t));

    printf("\n\n\n\t\t =======================================================================================\n");
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
    printf("\t\t                     BACK press [0]               EXIT press [1] :                      ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        growthRate();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

void numPeople(void)
{

    printf("\n\n\n\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    printf("\t\t Enter the Time in Month : ");
    scanf("%f", &t);

    system("clear");

    ans = A / pow(e, (r * t));

    printf("\n\n\n\t\t =======================================================================================\n");
    printf("\t\t                                 Initial Number of People                               \n");
    printf("\t\t =======================================================================================\n");
    printf("\t\t             Given :                                                                    \n");
    printf("\t\t                A = %g                                                              \n", A);
    printf("\t\t                e = 2.718                                                              \n");
    printf("\t\t                r = %g                                                              \n", r);
    printf("\t\t                t = %g                                                              \n", t);
    printf("\t\t                P = ?                                                                  \n");
    printf("\t\t            Answer :                                                                   \n");
    printf("\t\t                P = %.0f therefore, the initial number of Population would be     \n", ans);
    printf("\t\t                                   %.0f in %.1f Years.                         \n", ans, t);
    printf("\t\t=======================================================================================\n");
    printf("\t\t                     BACK press [0]               EXIT press [1] :                     ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        growthRate();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

void rateOfGrowth(void)
{
    printf("\n\n\n\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Time in Month : ");
    scanf("%f", &t);

    system("clear");

    ans = log10(A / P) / (t * log10(e));

    printf("\n\n\n\t\t =======================================================================================\n");
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
    printf("\t\t                     BACK press [0]               EXIT press [1] :                      ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        growthRate();
        break;

    case 1:
        system("clearr");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

void timeRate(void)
{
    printf("\n\n\n\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    system("clear");

    ans = log10(A / P) / (r * log10(e));

    printf("\n\n\n\t\t =======================================================================================\n");
    printf("\t\t                                        Time                                            \n");
    printf("\t\t =======================================================================================\n");
    printf("\t\t             Given :                                                                    \n");
    printf("\t\t                 A = %g                                                              \n", A);
    printf("\t\t                 p = %g                                                              \n", P);
    printf("\t\t                 e = 2.718                                                              \n");
    printf("\t\t                 r = %g                                                              \n", r);
    printf("\t\t                 t = ?                                                                  \n");
    printf("\t\t             Answer :                                                                   \n");
    printf("\t\t                 t = %.1f therefore, in the %.1f Years the size of Population was %g \n", ans, ans, A);
    printf("\t\t                                                                                        \n");
    printf("\t\t =======================================================================================\n");
    printf("\t\t                     BACK press [0]               EXIT press [1] :                      ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");

        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Midterm Exercises BITWISE            This code is from MAXELL JANE CALPO
void bitwise(void)
{
    printf("\n\n\n\t\t * BITWISE * \n\n");
    printf("\t\t First Number  : ");
    scanf("%d", &x);

    printf("\t\t Second Number : ");
    scanf("%d", &y);

    printf("\n\t\t ============================== \n");

    if ((x <= 255 && x > 0) && (y <= 255 && y > 0))
    {
        printf("\n\t\t Bitwise AND = %d\n", x & y);
        printf("\t\t Bitwise OR  = %d\n", x | y);
        printf("\t\t Bitwise XOR = %d\n\n", x ^ y);
    }
    else
    {
        printf("\n\t\t Out of range!\n\n");
    }

    printf("\t\t BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        bitwise();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// MENU for Temperature Converter
void tempConvert(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     TEMPERATURE CONVERTER                      \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Celsius to Fahrenheit                                \n\n");
    printf("\t\t\t [2] - Fahrenheit to Celsius                                \n\n");
    printf("\t\t\t [3] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
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
        invalid();
        break;
    }
}

// Prelim Activity 3    This code came from ALBERT SANTELICES
void celCon(void)
{
    float fahrenheit, celsius;
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     CELSIUS TO FAHRENHEIT                    \n");
    printf("\t\t ==============================+==============================\n");
    printf("\n\t\t Enter the Value of Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    system("clear");

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     CELSIUS TO FAHRENHEIT                    \n");
    printf("\t\t ==============================+==============================\n");
    printf("\t\t        _______________________                         \n");
    printf("\t\t       |         _____         |                        \n");
    printf("\t\t       |        /     \\        |                       \n");
    printf("\t\t       |       /       \\       |                       \n");
    printf("\t\t       |       |___ 5°F|       |                        \n");
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |___ 4°F|       |                        \n");
    printf("\t\t       |       |--     |       |         %.1f°C         \n", celsius);
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |___ 3°F|       |   is equivalent to     \n");
    printf("\t\t       |       |=======|       |                        \n");
    printf("\t\t       |       |--WWWWW|       |         %.1f°C         \n", fahrenheit);
    printf("\t\t       |       |___w2°F|       |                        \n");
    printf("\t\t       |      /--WWWWWWW\\      |                       \n");
    printf("\t\t       |    /--WWWWWWWWWWW\\    |                       \n");
    printf("\t\t       |   |___w1°FwWWWWWWW|   |                        \n");
    printf("\t\t       |   |--WWWWWWWWWWWWW|   |                        \n");
    printf("\t\t       |    \\ --WWWWWWWWWW/    |                       \n");
    printf("\t\t       |      \\________ /      |                       \n");
    printf("\t\t       |_______________________|                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        tempConvert();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Prelim Activity 3    This code came from ALBERT SANTELICES
void fahCon(void)
{
    float celsius, fahrenheit;

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     FAHRENHEIT TO CELSIUS                   \n");
    printf("\t\t ==============================+==============================\n");
    printf("\n\t\t Enter the Value of Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    system("clear");

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     FAHRENHEIT TO CELSIUS                   \n");
    printf("\t\t ==============================+==============================\n");
    printf("\t\t        _______________________                         \n");
    printf("\t\t       |         _____         |                        \n");
    printf("\t\t       |        /     \\        |                       \n");
    printf("\t\t       |       /       \\       |                       \n");
    printf("\t\t       |       |___ 5°C|       |                        \n");
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |___ 4°C|       |                        \n");
    printf("\t\t       |       |--     |       |         %.1f°F         \n", fahrenheit);
    printf("\t\t       |       |--     |       |                        \n");
    printf("\t\t       |       |___ 3°C|       |   is equivalent to     \n");
    printf("\t\t       |       |=======|       |                        \n");
    printf("\t\t       |       |--WWWWW|       |         %.1f°C         \n", celsius);
    printf("\t\t       |       |___w2°C|       |                        \n");
    printf("\t\t       |      /--WWWWWWW\\      |                       \n");
    printf("\t\t       |    /--WWWWWWWWWWW\\    |                       \n");
    printf("\t\t       |   |___w1°CwWWWWWWW|   |                        \n");
    printf("\t\t       |   |--WWWWWWWWWWWWW|   |                        \n");
    printf("\t\t       |    \\ --WWWWWWWWWW/    |                       \n");
    printf("\t\t       |      \\________ /      |                       \n");
    printf("\t\t       |_______________________|                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        tempConvert();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

void intId(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                       INTEGERS IDENTIFIER                      \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Positive and Negative                                \n\n");
    printf("\t\t\t [2] - Integers Comparison                                  \n\n");
    printf("\t\t\t [3] - Back                                                 \n\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Pick a Number : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 1:
        system("clear");
        posNeg();
        break;

    case 2:
        system("clear");
        intCom();
        break;

    case 3:
        system("clear");
        mainMenu();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Mideterm Exercises Positive and Negative ARON JAMES BETINOL.
void posNeg(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                      POSITIVE AND NEGATIVE                     \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter Integers Number : ");
    scanf("%i", &x);

    if (x == 0)
    {
        printf("\n\t\t               <---------------|--------------->\n");
        printf("\t\t                               %i", x);
        printf("\n\n\t\t     Therefore, the Integer Number %i is a Positive Number.   \n", x);
    }
    else if (x >= 1)
    {
        printf("\n\t\t               |---------------|--------------->\n");
        printf("\t\t               0               %i", x);
        printf("\n\n\t\t     Therefore, the Integer Number %i is a Positive Number. \n", x);
    }
    else
    {
        printf("\n\t\t               <---------------|---------------|\n");
        printf("\t\t                              %i               0", x);
        printf("\n\n\t\t     Therefore, the Integer Number %i is a Negative Number. \n", x);
    }

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("clear");
        intId();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}

// Midterm SeatWork Integers Comaprison  ARON JAMES BETINOL.
void intCom(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                        INTEGER COMPARISON                      \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t     Enter the Value of A : ");
    scanf("%i", &x);
    printf("\t\t     Enter the Value of B : ");
    scanf("%i", &y);

    if (x > y)
    {
        printf("\n\n\t\t\t     The Highest Value is A with value of %i \n", x);
    }
    else if (x < y)
    {
        printf("\n\n\t\t\t     The Highest Value is B with value of %i \n", y);
    }
    else if (x == y)
    {
        printf("\n\n\t\t  The Value of A and B is the same, and the value of it is %i \n", x);
    }

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("clear");
        intId();
        break;

    case 1:
        system("clear");
        greet();
        break;

    default:
        system("clear");
        invalid();
        break;
    }
}
void incrDecre(void){
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t||\t  Increment & Decrement       ||\n");
    printf("\t||====================================||\n");
    printf("\t||\t   Pre-Increment   [1]        ||\n");
    printf("\t||\t   Post-Increment  [2]        ||\n");
    printf("\t||\t   Pre-Decrement   [3]        ||\n");
    printf("\t||\t   Post-Decrement  [4]        ||\n");
    printf("\t||====================================||\n\n");

    printf("\tEnter a number:  ");
    scanf("%i",&opt);

    switch(opt){
        case 1:
        system("cls");
        preIncre();
        break;

        case 2:
        system("cls");
        postIncre();
        break;

        case 3:
        system("cls");
        preDecre();
        break;

        case 4:
        system("cls");
        postDecre();
        break;

        default :
        system("cls");
        printf("INVALID");
    }
}
void preIncre(void){
      printf("\t\tPre-Increment\n\n");
      printf("\t\tEnter a number : ");
      scanf("%i", &x);

      ++x;
      system("cls");
      printf("\t\tThe updated value of X: %i ", x);


}
void postIncre(void){
      printf("\t\tEnter a number : ");
      scanf("%i", &x);
      y = x++;
      system("cls");
      printf("\t\tPost-Increment\n\n");
      printf("\t\tThe original value of X : %i \n ", y);
      printf("\t\tThe updated value of Y : %i \n", x);

}
void preDecre(void){
      printf("\t\tEnter a number : ");
      scanf("%i", &x);
      --x;
      system("cls");
      printf("\t\tPre-Decrement\n\n");
      printf("\t\tThe updated value of Y : %i \n", x);

}
void postDecre(void){
      printf("\t\tEnter a number : ");
      scanf("%i", &x);
      y =x--;
      system("cls");
      printf("\t\tPost-Decrement\n\n");
      printf("\t\tThe updated value of Y : %i \n", x);
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

void invalid(void)
{
    printf("\n\n\t\t\t ==============================+==============================\n");
    printf("\t\t\t                             ERROR                              \n");
    printf("\t\t\t ==============================+==============================\n\n");
    printf("\t\t\t         _   _  _____  _   _   |                          \n");
    printf("\t\t\t        |#| |#||#####||#| |#|  |                          \n");
    printf("\t\t\t        |#|_|#||#| |#||#|_|#|  | Page could not be found. \n");
    printf("\t\t\t        |#####||#| |#||#####|  |                          \n");
    printf("\t\t\t            |#||#|_|#|    |#|  | Invalid User input.      \n");
    printf("\t\t\t            |#||#####|    |#|  |                          \n");
    printf("\t\t\t                               |                        \n\n");
    printf("\t\t\t ==============================+==============================\n\n");
}
