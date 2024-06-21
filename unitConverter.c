#include<stdio.h>
#include<math.h>
#include<conio.h>       //getch()
#include <stdlib.h>     // system("cls");


void temp(); //tepm converter
void speed(); //speed convrter
void mass(); // mass converter
void currency();  //currency converter

//main function
int main() {
    //system("clear"); Linux and Mac
	system("cls"); //windows
	
    int main_menu;
    printf("\n---------- UNIT CONVERTER ----------\n");
    printf("1. Temperature\n");
    printf("2. Valocity\n");
    printf("3. Mass\n");
    printf("4. Currency\n");
    printf("0. Exit\n");
    printf("\n--------------------------------------\n\n");

    scanf("%d", &main_menu); //input menu 

    switch (main_menu) {

    case 1:      //temp
        temp();
        break;

    case 2:		 //speed
        speed();
        break;

    case 3:		 //mass
        mass();
        break;

    case 4:		 //currency
        currency();
        break;

    case 0:      //exit
        printf("Exit...\n");
        // printf("Author: Shehab\n");
        return 0;
        break;
        
    default:
        printf("Wrong Input\n");
        main();
    }
}

//for temperature
void temp() {
    //system("clear"); Linux and Mac
	system("cls");

    printf("\n---------- 1. Temperature ---------\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("*. Press any key to back main menu...\n");
    printf("\n--------------------------------------\n\n");

    int temp_menu;
    scanf("%d", &temp_menu);
    
	float c, f;
    switch (temp_menu) {

    case 1:
        c = 0, f = 0;
        printf("Enter temp in F: ");
        scanf("%f", &f);

        c = (5.0 / 9.0) * (f - 32.0);

        printf("\n%.2f F = %.2f C\n\n", f, c);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 2:
        c = 0, f = 0;
        printf("Enter temp in C: ");
        scanf("%f", &f);

        c = (9.0 / 5.0) * f + 32.0;

        printf("\n%.2f C = %.2f F\n\n", f, c);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    default:
        printf("\nBack to main menu...\n");
        main();
    }
}

//for speed calculation
void speed() {
    //system("clear"); Linux and Mac
	system("cls");

    printf("\n---------- 2. Valocity ---------      \n");
    printf("1. km/h to m/s      \n");
    printf("2. m/s to km/h      \n");
    printf("3. km/h to mile/h   \n");
    printf("4. mile/h to km/h   \n");
    printf("*. Press any key to back main menu...   \n");
    printf("\n---------------------------------     \n");

    int temp_menu;
    scanf("%d", &temp_menu);
    // scan()
    float km_h, m_s;
    float kmph, miph;

    switch (temp_menu) {
    case 1:
    	m_s = 0,km_h =0;
        printf("1. km/h to m/s \n\n");

        printf("Enter km/s : ");
        scanf("%f", &km_h);
	
        m_s = (km_h * 1000) / (3600);
        printf("%.2f km/h = %.2f m/s\n", km_h, m_s);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 2:
    	km_h = 0,m_s = 0;
        printf("2. m/s to km/h \n\n");

        printf("Enter km/h : ");
        scanf("%f", &m_s);

        km_h = (m_s * 3600) / (1000);
        printf("%.2f m/s = %.2f km/h\n", m_s, km_h);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        
    case 3:
    	kmph = 0, miph = 0;
        printf("3. km/h to mile/h\n\n");
        printf("Enter km/h: ");
        scanf("%f", &kmph);

        miph = (kmph * 0.6213712);

        printf("%.2f km/h = %.2f mile/h\n", kmph, miph);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 4:
    	miph = 0, kmph =0;
        printf("4. mile/h to km/h\n\n");
        printf("Enter mile/h: ");
        scanf("%f", &miph);

        kmph = miph / 0.6213712;

        printf("%.2f mile/h = %.2f km/h\n", miph, kmph);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    default:
        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;
    }
}

//mass
void mass() {
    //system("clear"); Linux and Mac
	system("cls");

    printf("\n---------- 3. Mass ---------\n");

    printf("1. Kg to gm\n");
    printf("2. gm to Kg\n");
    printf("3. lb to kg\n");
    printf("4. kg to lb\n");
    printf("*. Press any key to Back to main menu...\n");
    printf("\n----------------------------\n");

    float kg, gm, lb; //defining

    int mass_menu;
    scanf("%d", &mass_menu);

    switch (mass_menu) {
    case 1:
        /* code */
        printf("1. Kg to gm\n");
        printf("------------------------------\n");

        printf("Enter kg: ");
        scanf("%f", &kg);

        gm = kg * 1000.0;
        printf("%.2f kg = %.2f gm\n", kg, gm);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;
    case 2:
        /* code */

        printf("2. gm to Kg\n");
        printf("------------------------------\n");

        printf("Enter gm: ");

        scanf("%f", &gm);

        kg = gm / 1000.0;
        printf("%.2f gm = %.2f kg\n", gm, kg);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 3:
        /* code */

        printf("3. lb to kg\n");
        printf("------------------------------\n");
        printf("Enter lb: ");

        scanf("%f", &lb);

        kg = lb * 0.453592;
        printf("%.2f lb = %.2f kg\n", lb, kg);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 4:
        /* code */

        printf("4. kg to lb\n");
        printf("------------------------------\n");
        printf("Enter kg: ");

        scanf("%f", &kg);

        lb = kg / 0.453592;
        printf("%.2f kg = %.2f lb\n", kg, lb);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    default:
        break;
    }
}

void currency() {  //currency converter
    //menu selector

    int currency_menu;
    //system("clear"); Linux and Mac
	system("cls");
	
    printf("\n---------- 4. currency ---------\n");

    printf("1. USD to BDT\n");
    printf("2. BDT to USD\n");
    printf("3. BDT to RS\n");
    printf("4. RS to BDT\n");
    printf("5. BDT to Yen\n");
    printf("6. Yen to BDT\n");
    printf("*. Press any key to Back to main menu...\n");

    printf("\n----------------------------------\n");

    scanf("%d", &currency_menu);
    float USD, BDT, RS, Yen;

    switch (currency_menu) {//switch statement

    case 1: //usd to bdt
        BDT = 0, USD = 0;
        printf("1. USD to BDT\n");
        printf("----------------------------------\n");
        printf("Enter USD :: ");
        scanf("%f", &USD);
        BDT = USD * 117.56;
        printf("%.2f USD = %.2f BDT\n", USD, BDT);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 2: //bdt to usd
        BDT = 0, USD = 0;
        printf("2. BDT to USD\n");
        printf("----------------------------------\n");
        printf("Enter BDT :: ");
        scanf("%f", &BDT);
        USD = BDT * 0.0085;
        printf("%.2f BDT = %.2f USD\n", BDT, USD);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 3: //bdt to rs
        BDT = 0, RS = 0;
        printf("3. BDT to RS\n");
        printf("----------------------------------\n");
        printf("Enter BDT :: ");
        scanf("%f", &BDT);
        RS = BDT * 0.71;
        printf("%.2f BDT = %.2f Rs.\n ", BDT, RS);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 4: //RS to BDT
        BDT = 0, RS = 0;
        printf("4. Rs. to BDT\n");
        printf("----------------------------------\n");
        printf("Enter Rs. :: ");
        scanf("%f", &RS);
        BDT = RS * 1.41;
        printf("%.2f Rs. = %.2f BDT.\n ", RS, BDT);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;
    case 5: //btd to yen
        BDT = 0, Yen = 0;
        printf("5. BDT to Yen\n");
        printf("----------------------------------\n");
        printf("Enter BDT. :: ");
        scanf("%f", &BDT);
        Yen = BDT * 1.33;
        printf("%.2f BDT = %.2f Yen.\n ", BDT, Yen);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    case 6: //btd to yen
        BDT = 0, Yen = 0;
        printf("6. Yen to BDT\n");
        printf("----------------------------------\n");
        printf("Enter Yen :: ");
        scanf("%f", &Yen);
        BDT = Yen * 0.75;
        printf("%.2f Yen = %.2f BDT.\n ", Yen, BDT);

        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;

    default:
        printf("\nPress any key to Back to main menu...\n");
        getch();
        main();
        break;
    }
}
