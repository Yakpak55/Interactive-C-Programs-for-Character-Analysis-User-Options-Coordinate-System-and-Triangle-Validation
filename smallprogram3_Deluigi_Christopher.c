//Christopher Deluigi
//Dr. Steinberg
//COP3223C Section 1
//Small Program 3
#include<stdio.h>
#include<ctype.h>

void letters();
void greenLawyerthat();
void coordinates(double x,double y);
int triangle(int a, int b,int c);

int main()
{
    //Problem 1
    letters();
    //////////////////////
    //Problem 2
    greenLawyerthat();
    ////////////////////////////
    //Problem 3
    double x;
    double y;
    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);

    printf("Enter the y-coordinate: ");
    scanf("%lf", &y);
    coordinates(x, y);
    /////////////////////////////////
    //Problem 4
    int a;
    int b;
    int c;
    printf("Enter three sides separated by a whitespace: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (triangle(a, b, c) == -1)
        printf("Triangle!\n");
    else printf("Not Triangle!\n");
    /////////////////////
    return 0;
}


void letters()
{
   char entered_character;
    printf("Enter a key from the keyboard: ");
    scanf(" %c", &entered_character);
    if (! isalpha (entered_character))  
        printf("Not a Letter!\n");

    else if (islower (entered_character))  
        printf("Lower!\n");
    else
        printf("Upper!\n");

}


void greenLawyerthat()
{
   int entered_option;
   printf("Hi! Thank you for calling the Superhuman Law Division at GLK&H!\n");
   printf("Our associates are currently working hard for super people like you.\n");
   printf("Please listen carefully to the options of who you would like to speak to in regards to your situation.\n");
   printf("Option 1: Fined for thousands of dollars worth of damage to the city you were trying to protect.\n");
   printf("Option 2: Accidentally create a sentient robot who got the feels and tried to destroy the world.\n");
   printf("Option 3: You are an Asgardian god who unintentionally leaves a giant burning imprint on private\n");
   printf("property every time you visit Earth.\n");
   printf("Option 4: You just gained new superhero strength that is not recognized by the department of\n");
   printf("damage control, and they are chasing you down after you performed a good deed.\n");
   printf("Option 5: Your secret identity was revealed by a notorious person and now your personal life\n");
   printf("is no longer the same.\n");
   printf("Option 6: Another super being issue that was not mentioned previously in the options given.\n");
   printf("Selection: ");
   scanf("%d", &entered_option);
   switch(entered_option)
   {
        case 1:
        printf("You have selected option 1. Do not worry! I will make sure you dont give up that green.\n");
        break;

        case 2:
        printf("You have selected option 2. Do not worry! You probably had a good intention that just didn't work out properly.\n");
        break;

        case 3:
        printf("You have selected option 3. Do not worry! I understand you like to make a grand entrance.\n");
        break;

        case 4:
        printf("You have selected option 4. Do not worry! We will talk to the department of damage control.\n");
        break;

        case 5:
        printf("You have selected option 5 Do not worry! We will make sure that you are protected. PLease be cautious if you decide to seek Dr. Stranges's help.\n");
        break;

        case 6:
        printf("You have selected option 6. Do not worry! I will make sure to use my superhero mind to solve your super problem!\n");
        break;

        default:
        printf("I’m sorry. I don’t recognize that super being option.\n");
        break;
    }


}

void coordinates(double x,double y)
{
    if (x > 0 && y > 0)
        printf("(%.2lf, %.2lf) is in quadrant I.\n", x,y);
        
    else if(x < 0 && y > 0)
        printf("(%.2lf, %.2lf) is in quadrant II.\n", x,y);
        
    else if(x < 0 && y < 0)
        printf("(%.2lf, %.2lf) is in quadrant III.\n", x,y);

    else if(x > 0 && y < 0)
        printf("(%.2lf, %.2lf) is in quadrant IV.\n", x,y);
    
    else if(x == 0 && y == 0)
        printf("(%.2lf, %.2lf) is on the origin.\n", x,y);

    else if(x == 0 && y > 0)
        printf("(%.2lf, %.2lf) is on y plane.\n", x,y);

    else if(x == 0 && y < 0)
        printf("(%.2lf, %.2lf) is on y plane.\n", x,y);
    
    else if(x > 0 && y == 0)
        printf("(%.2lf, %.2lf) is on x plane.\n", x,y);

    else if(x < 0 && y == 0)
        printf("(%.2lf, %.2lf) is on x plane.\n", x,y);
}


int triangle(int a, int b,int c)
{
    printf("Checking these logistics from the input.\n");
    printf("%d + %d > %d\n", a,b,c);
    printf("%d + %d > %d\n", a,c,b);
    printf("%d + %d > %d\n", b,c,a);

    if (b+c >= a || a+c >= b || a+b >= c)
        return 1;
    else return -1;

}