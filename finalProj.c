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
            int indicateTime();
        void bitwise(void);

    // This is For Temperature Converter
    void tempConvert(void);
        void celCon(void);
        void fahCon(void);

    // This is For Integers Identifier
    void intId(void);
        void posNeg(void);
        void intCom(void);

    // This is for Qualification to Vote
    void qualiVote(void);

    //This is For Increment and Decrement
    void incrDecre(void);
        void preIncre(void);
        void postIncre(void);
        void preDecre(void);
        void postDecre(void);
        void forLoop(void);
            void loopIncre(void);
            void loopDecre(void);
            void forLoopTri(void);
            void invertedTri(void);

// This is For the last frame in our program either GREET or if it INVALID
void greet(void);
void invalid(void);

// global Variable
char slt;
int opt, x, y, i, j, n;
float ans, A, P, r, t, a, b, h, area, side, grade;
float add, sub, product, quote, num1, num2, num3, expo;
float time, year, month, day;
float fahrenheit, celsius;
const float e = 2.718;

int main()
{
    system("Color A");
    system("cls");
    banner();
    return 0;
}

void banner(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                           WELCOME TO                           \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t      #########   ######    ######  ##        ##  ######\n");
    printf("\t\t      ##      ## ##    ##       ##  ####    #### ##    ##\n");
    printf("\t\t      ##      ## ##    ##       ##  ## ##  ## ## ##    ##\n");
    printf("\t\t      #########  ########       ##  ##   ##   ## ########\n");
    printf("\t\t      ##      ## ##    ##       ##  ##        ## ##    ##\n");
    printf("\t\t      ##      ## ##    ## ##    ##  ##        ## ##    ##\n");
    printf("\t\t      #########  ##    ##  ######   ##        ## ##    ##\n");
    printf("\t\t      +--------------------------------------------------+\n");
    printf("\t\t      | Brian      Aron    Joshua     Maxwell     Albert |\n");
    printf("\t\t      +--------------------------------------------------+\n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Do You Want to Use this Program? press [Y/N] : ");
    scanf("%c", &slt);

    switch (slt)
    {
    case 'Y':
    case 'y':
        system("cls");
        mainMenu();
        break;

    case 'N':
    case 'n':
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        registList();
        break;

    case 2:
        system("cls");
        simpleCal();
        break;

    case 3:
        system("cls");
        tempConvert();
        break;

    case 4:
        system("cls");
        intId();
        break;

    case 5:
        system("cls");
        qualiVote();
        break;

    case 6:
        system("cls");
        printf("UNDER PROCESS! \n");
        // colorSelec();
        break;

    case 7:
        system("cls");
        incrDecre();

        break;

    case 8:
        system("cls");
        printf("UNDER PROCESS! \n");
        // integer();
        break;

    case 9:
        system("cls");
        banner();
        break;

    default:
        system("cls");
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

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        registList();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        registList();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        growthRate();
        break;

    case 5:
        system("cls");
        bitwise();
        break;

    case 6:
        system("cls");
        mainMenu();
        break;

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        simpleCal();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        areaTri();
        break;

    case 2:
        system("cls");
        areaTrape();
        break;

    case 3:
        system("cls");
        areaSqr();
        break;

    case 4:
        system("cls");
        areaPar();
        break;

    case 5:
        system("cls");
        simpleCal();
        break;

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        areaOFShape();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        areaOFShape();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        areaOFShape();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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

    system("cls");

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
        system("cls");
        areaOFShape();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        gradeRange();
        break;

    case 2:
        system("cls");
        passIdent();
        break;

    case 3:
        system("cls");
        // gradeComp1(); midterm activity 1
        break;

    case 4:
        system("cls");
        // gradeComp2(); midterm exam
        break;

    case 5:
        system("cls");
        simpleCal();
        break;

    default:
        system("cls");
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
        system("cls");
        gradeCal();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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

    // To cls
    system("cls");

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
        system("cls");
        gradeCal();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        sizePopulation();
        break;

    case 2:
        system("cls");
        numPeople();
        break;

    case 3:
        system("cls");
        rateOfGrowth();
        break;

    case 4:
        system("cls");
        timeRate();
        break;

    case 5:
        system("cls");
        mainMenu();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void sizePopulation(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                    POPULATION AFTER IN GROWS                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    indicateTime();

    system("cls");

    ans = P * pow(e, ((r / 100) * time));

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                    POPULATION AFTER IN GROWS                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t    Given :                                             \n");
    printf("\t\t        P = %g                                          \n", P);
    printf("\t\t        e = 2.718                                       \n");
    printf("\t\t        r = %g                                          \n", r);
    printf("\t\t        t = %g                                          \n", time);
    printf("\t\t        A = ?                                           \n");
    printf("\t\t    Answer :                                            \n");
    printf("\t\t        A = %.0f therefore, the City population would be\n", ans);
    printf("\t\t                   about %.0f after %g Years.      \n", ans, time);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        growthRate();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void numPeople(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     INITIAL NUMBER OF PEOPLE                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    indicateTime();

    system("cls");

    ans = A / pow(e, ((r / 100) * time));

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     INITIAL NUMBER OF PEOPLE                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t    Given :                                                   \n");
    printf("\t\t        A = %g                                                \n", A);
    printf("\t\t        e = 2.718                                             \n");
    printf("\t\t        r = %g                                                \n", r);
    printf("\t\t        t = %g                                                \n", time);
    printf("\t\t        P = ?                                                 \n");
    printf("\t\t    Answer :                                                  \n");
    printf("\t\t        P = %.0f therefore, the initial number of Population  \n", ans);
    printf("\t\t                   would be %.0f in %g Years.               \n", ans, time);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        growthRate();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void rateOfGrowth(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                          RATE OF GROWTH                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    indicateTime();

    system("cls");

    ans = (log10(A / P) / (time * log10(e))) * 100;

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                          RATE OF GROWTH                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t    Given :                                                  \n");
    printf("\t\t        A = %g                                               \n", A);
    printf("\t\t        P = %g                                               \n", P);
    printf("\t\t        e = 2.718                                            \n");
    printf("\t\t        t = %g                                               \n", time);
    printf("\t\t        r = ?                                                \n");
    printf("\t\t    Answer :                                                 \n");
    printf("\t\t        r = %.2f therefore, the rate of growth of the        \n", ans);
    printf("\t\t           Population would be %.2f in the %.1f Years.       \n", ans, time);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t           BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        growthRate();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

int indicateTime()
{
    printf("\t\t Enter the Number of Time \n");
    printf("\t\t     [1] - Year           \n");
    printf("\t\t     [2] - Month          \n");
    printf("\t\t     [3] - Day            \n");
    printf("\t\t Indicate the Time. Pick the No. : ");
    scanf("%i", &opt);

    switch (opt)
    {
        case 1:
            printf("\t\t Enter the Year : ");
            scanf("%f", &year);
            return time = year;
            break;

        case 2:
            printf("\t\t Enter the Month : ");
            scanf("%f", &month);
            return time = month /= 12;
            break;

        case 3:
            printf("\t\t Enter the Day : ");
            scanf("%f", &day);
            return time = day /= 365;
            break;

        default:
            system("cls");
            invalid();
            break;
    }
    return time;
}

void timeRate(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                              TIME                              \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("\t\t Initial Number of People : ");
    scanf("%f", &P);

    printf("\t\t Enter the Rate of Growth : ");
    scanf("%f", &r);

    system("cls");

    ans = log10(A / P) / ((r / 100) * log10(e));

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                              TIME                              \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t    Given :                                                     \n");
    printf("\t\t        A = %g                                                  \n", A);
    printf("\t\t        P = %g                                                  \n", P);
    printf("\t\t        e = 2.718                                               \n");
    printf("\t\t        r = %g                                                  \n", r);
    printf("\t\t        t = ?                                                   \n");
    printf("\t\t    Answer :                                                    \n");
    printf("\t\t        t = %g therefore, in the %g Years the size of       \n", ans, ans);
    printf("\t\t                       Population was %g                        \n", A);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t           BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        growthRate();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        bitwise();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        celCon();
        break;

    case 2:
        system("cls");
        fahCon();
        break;

    case 3:
        system("cls");
        mainMenu();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

// Prelim Activity 3    This code came from ALBERT SANTELICES
void celCon(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     CELSIUS TO FAHRENHEIT                    \n");
    printf("\t\t ==============================+==============================\n");
    printf("\n\t\t Enter the Value of Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    system("cls");

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     CELSIUS TO FAHRENHEIT                    \n");
    printf("\t\t ==============================+==============================\n");
    printf("\t\t\t         ___________ \n");
    printf("\t\t\t        /           \\\n");
    printf("\t\t\t       |             | \n");
    printf("\t\t\t       | °F      °C  | \n");
    printf("\t\t\t       |      |      | \n");
    printf("\t\t\t       | 160__|__60  | \n");
    printf("\t\t\t       | 140__|__50  | \n");
    printf("\t\t\t       | 120__|__40  |       %.1f°C\n", celsius);
    printf("\t\t\t       | 100__|__30  | \n");
    printf("\t\t\t       |  80__|__20  |  is equivalent to  \n");
    printf("\t\t\t       |  60__|__10  | \n");
    printf("\t\t\t       |  40__|__0   |       %.1f°F\n", fahrenheit);
    printf("\t\t\t       |  20__|__-10 | \n");
    printf("\t\t\t       |   0__|__-20 | \n");
    printf("\t\t\t       | -20__|__-30 | \n");
    printf("\t\t\t       |      |      | \n");
    printf("\t\t\t       |      O      | \n");
    printf("\t\t\t       |_____________| \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        tempConvert();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

// Prelim Activity 3    This code came from ALBERT SANTELICES
void fahCon(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     FAHRENHEIT TO CELSIUS                   \n");
    printf("\t\t ==============================+==============================\n");
    printf("\n\t\t Enter the Value of Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    system("cls");

    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                     FAHRENHEIT TO CELSIUS                   \n");
    printf("\t\t ==============================+==============================\n");
    printf("\t\t\t         ___________ \n");
    printf("\t\t\t        /           \\\n");
    printf("\t\t\t       |             | \n");
    printf("\t\t\t       | °F      °C  | \n");
    printf("\t\t\t       |      |      | \n");
    printf("\t\t\t       | 160__|__60  | \n");
    printf("\t\t\t       | 140__|__50  | \n");
    printf("\t\t\t       | 120__|__40  |       %.1f°F\n", fahrenheit);
    printf("\t\t\t       | 100__|__30  | \n");
    printf("\t\t\t       |  80__|__20  |  is equivalent to  \n");
    printf("\t\t\t       |  60__|__10  | \n");
    printf("\t\t\t       |  40__|__0   |       %.1f°C\n", celsius);
    printf("\t\t\t       |  20__|__-10 | \n");
    printf("\t\t\t       |   0__|__-20 | \n");
    printf("\t\t\t       | -20__|__-30 | \n");
    printf("\t\t\t       |      |      | \n");
    printf("\t\t\t       |      O      | \n");
    printf("\t\t\t       |_____________| \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        tempConvert();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
        system("cls");
        posNeg();
        break;

    case 2:
        system("cls");
        intCom();
        break;

    case 3:
        system("cls");
        mainMenu();
        break;

    default:
        system("cls");
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
        system("cls");
        intId();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
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
    printf("\t\t     Enter the Value of X : ");
    scanf("%i", &x);
    printf("\t\t     Enter the Value of Y : ");
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
        system("cls");
        intId();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

//Midterm SeatWork Qualification to vote CALPO, MAXELL
void qualiVote(void)
{

    int age;

    printf("Enter Age: ");
    scanf("%i", &age);

    if(age>=18)
    {
    printf("You are eligible for voting");
    }
    else
    {
    printf("You are not eligible for voting");
    }
}

//Final Group Activity # 1 This line of code is made by Joshua Meredores
void incrDecre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                      INCREMENT AND DECREMENT                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - Pre-Increment                                        \n");
    printf("\t\t\t [2] - Post-Increment                                       \n");
    printf("\t\t\t [3] - Pre-Decrement                                        \n");
    printf("\t\t\t [4] - Post-Decrement                                       \n");
    printf("\t\t\t [5] - For Loop                                             \n");
    printf("\t\t\t [6] - Back                                                 \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter a number: ");
    scanf("%i",&opt);

    switch(opt)
    {
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

        case 5:
            system("cls");
            forLoop();
            break;

        case 6:
            system("cls");
            mainMenu();
            break;

        default :
            system("cls");
            invalid();
            break;
    }
}

void preIncre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                          PRE - INCREMENT                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the value of X : ");
    scanf("%i", &x);

      ++x;

    printf("\n\n\t\t                  The updated value : %i \n\n", x);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("cls");
        incrDecre();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void postIncre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                         POST - INCREMENT                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the value of X : ");
    scanf("%i", &x);

    y = x++;

    printf("\t\t                        The original value : %i \n ", y);
    printf("\t\t                        The updated value  : %i \n\n", x);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("cls");
        incrDecre();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void preDecre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                         PRE - DECREMENT                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the value of X : ");
    scanf("%i", &x);

    --x;

    printf("\n\n\t\t                  The updated value of Y : %i \n\n", x);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("cls");
        intId();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}
void postDecre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                        POST - DECREMENT                        \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the value of X : ");
    scanf("%i", &x);

    y =x--;

    printf("\t\t                        The original value : %i \n ", y);
    printf("\t\t                        The updated value  : %i \n\n", x);
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("cls");
        incrDecre();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}
void forLoop(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                            FOR LOOP                            \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t\t [1] - For Loop Increment                                     \n");
    printf("\t\t\t [2] - For Loop Decrement                                     \n");
    printf("\t\t\t [3] - For Loop Triangle                                      \n");
    printf("\t\t\t [4] - Inverted Triangle                                      \n");
    printf("\t\t\t [5] - Back                                                   \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter a number: ");
    scanf("%i", &opt);

    switch(opt)
    {
        case 1:
            system("cls");
            loopIncre();
            break;

        case 2:
            system("cls");
            loopDecre();
            break;

        case 3:
            system("cls");
            forLoopTri();
            break;

        case 4:
            system("cls");
            invertedTri();
            break;

        case 5:
            system("cls");
            incrDecre();
            break;

        default :
            system("cls");
            invalid();
            break;
    }
}

//Final seatwork for loop Increment Jhon Brian Arce
void loopIncre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                       FOR LOOP INCREMENT                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the Initial Value : ");
    scanf("%i", &i);

    printf("\t\t Enter the Ending Value : ");
    scanf("%i", &n);

    printf("\n\t\t                         Increment by 1\n\n");
    for(x = i; x <= n; x++)
    {
        printf("\t\t                               |- %i\n", x);
        printf("\t\t                               |\n");
    }

    printf("\n\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);
    switch (opt)
    {
    case 0:
        system("cls");
        forLoop();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

//Final Group Activity for loop Decrement Joshua Meredores
void loopDecre(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                       FOR LOOP DECREMENT                       \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter The Initial value : ");
    scanf("%i", &i);

    printf("\t\t Enter The Ending value : ");
    scanf("%i", &n);

    printf("\n\t\t                         Decrement by 1\n\n");
    for(x = i; x >= n; x--)
    {
        printf("\t\t                               |- %i\n", x);
        printf("\t\t                               |\n");
    }

    printf("\n\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        forLoop();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

//Final SeatWork Loop Triangle  Arce, Jhon Brian
void forLoopTri(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                        FOR LOOP TRIANGLE                       \n");
    printf("\t\t ==============================+==============================\n\n");

    printf("\t\t Enter the Number of Row : ");
    scanf("%i", &n);

    printf("\n");

    for(i = 1; i <= n; i++)
    {
        printf("\t\t                           ");

        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        forLoop();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

//Final GroupActivity Aron James Betinol
void invertedTri(void){
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t                      FOR LOOP INVERTED TRIANGLE                \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t Enter the Number of Row: ");
    scanf("%i", &n);

    printf("\n");

    for(i = n; i >= 0; --i)
    {
        printf("\t\t                           ");
        for(j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }
        for(j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         BACK press [0]               EXIT press [1] : ");
    scanf("%i", &opt);

    switch (opt)
    {
    case 0:
        system("cls");
        forLoop();
        break;

    case 1:
        system("cls");
        greet();
        break;

    default:
        system("cls");
        invalid();
        break;
    }
}

void greet(void)
{
    printf("\n\n\n\t\t ==============================+==============================\n");
    printf("\t\t _________                              _    _                 \n");
    printf("\t\t ___   ___ _   _  _____  _   _  _   _  | |  | | _____  _   _   \n");
    printf("\t\t    | |   | | | ||     || | | || | | | | |  | ||  _  || | | |  \n");
    printf("\t\t    | |   | |_| || |_| ||  \\| || |/ /  |  \\/  || | | || | | |\n");
    printf("\t\t    | |   |     ||  _  || |\\  ||   |    \\    / | | | || | | |\n");
    printf("\t\t    | |   | | | || | | || | | || |\\ \\    |  |  | | | || | | |\n");
    printf("\t\t    | |   | | | || | | || | | || | | |   |  |  | |_| || |_| |  \n");
    printf("\t\t    |_|   |_| |_||_| |_||_| |_||_| |_|   |__|  |_____||_____|  \n");
    printf("\t\t +-----------------------------------------------------------+ \n");
    printf("\t\t |                  For Using Our Program                    | \n");
    printf("\t\t +-----------------------------------------------------------+ \n");
    printf("\t\t ==============================+==============================\n");
}

//this is for Invalid Input
void invalid(void)
{
    printf("\n\n\t\t ==============================+==============================\n");
    printf("\t\t                             ERROR                              \n");
    printf("\t\t ==============================+==============================\n\n");
    printf("\t\t         _   _  _____  _   _   |                          \n");
    printf("\t\t        |#| |#||#####||#| |#|  |                          \n");
    printf("\t\t        |#|_|#||#| |#||#|_|#|  | Page could not be found. \n");
    printf("\t\t        |#####||#| |#||#####|  |                          \n");
    printf("\t\t            |#||#|_|#|    |#|  | Invalid User input.      \n");
    printf("\t\t            |#||#####|    |#|  |                          \n");
    printf("\t\t                               |                        \n\n");
    printf("\t\t ==============================+==============================\n\n");
}
