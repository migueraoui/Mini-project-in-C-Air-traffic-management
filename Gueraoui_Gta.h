#define NB_date 11   //Date format ==> DD/MM/YYYY+\0;

#define min_yr 1969 //The first successful passenger plane "Boeing 747" was built in 9 February 1969;
#define min_month 2  /* Source : https://www.historylink.org/File/1181 */
#define min_day 9



/***Declaration of structure***/
//will use this new type in Linked list later;
typedef struct
{
    char *code; //
    int capacity;
    char etat;
    char date[NB_date];
    int nbvols;

}planes;


/***Linked list declaration***/
typedef struct Airplanes
{
    planes pl; //using the new type;
    struct Airplanes * suiv;

}Airplanes;


/***Head of Linked list***/
//using Head in structure for declare once and don't using lot of parameters in functions and procedures;
struct Airplanes *s=NULL;




/**======================================================================================================================**/
/******************************************************| Procedures |******************************************************/
/**======================================================================================================================**/


/*********| Menus Procedures |*********/
//0) /**Procedure presenting this program**/
void Introduction(void)
{
    //this collection of function to change text color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("\n\t\t   /** -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ **/\n\t\t   /** ________");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf(" Universit%c de Sa%cda Dr. Moulay Tahar ", 130, 139);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("__________ **/\n\t\t   /** _________");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf(" Algorithmique & structure de donn%ces ", 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("_________ **/\n\t\t   /** ________");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf(" Mini projet en C : Les Listes Cha%cn%ces ", 140,130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("________ **/\n\t\t   /** _____________");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf(" La gestion du trafic a%crien ", 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); printf("______________ **/\n\t\t   /** _________________ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf("Dr. Tayeb BAHRAM ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("_____________________ **/\n\t\t   /** _______________ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf("Pr%cnom : Mohamed Ilyes ", 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("_________________ **/\n\t\t   /** _______________ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf("Nom : Gueraoui ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("_________________________ **/\n\t\t   /** _______________ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf("Groupe : 03 ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("____________________________ **/\n\t\t   /** _______________ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);printf("Promotion : 2020/2021 ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("__________________ **/\n\t\t   /** _-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ **/\n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}



//1) Procedure Display menu 1;
void Display_menu1(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("\t**************************** Gestion du Trafic A%crien *******************************\n", 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\t* 1 :----------------------> Remplir la liste des avions ---------------------------*\n");
    printf("\t* 2 :----------------------> V%crifier si un avion est dans l%ca%croport --------------*\n", 130, 39, 130);
    printf("\t* 3 :----------------------> Supprimer les avions plus de 20 ans -------------------*\n");
    printf("\t* 4 :----------------------> Trier la liste des avions -----------------------------*\n");
    printf("\t* 5 :----------------------> Afficher la liste des avions --------------------------*\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf("\t**************************>>> Appuyez sur '0' pour EXIT <<<**************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("\t*************************************************************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}



//2) Procedure Display menu 2;
void Display_menu2(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("   **************************** Affichage ***************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("   * 5 :------> La liste des avions d%ccoll%cs -----------------------------------*\n", 130, 130);
    printf("   * 5 :------> La liste des avions atterris  ----------------------------------*\n");
    printf("   * 5 :------> La liste des avions en maintenance ---------------------------- *\n");
    printf("   * 6 :------> La liste des avions qui ont assur%c le max des vols et ag%cs -----*\n", 130, 130);
    printf("   * 6 :------> La liste des avions qui ont assur%c le min des vols et ag%cs -----*\n", 130, 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf("   **********************>>> Appuyez sur '0' pour EXIT <<<***********************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("   ******************************************************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}





//4) //this menu ==> if user press Fill again so if add planes or delete and fill again;
void Display_menu_3(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("\n ******************************************************************************************\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf(" ******************* 1:----> Ajouter des nouvelles avions . *******************************\n");
    printf(" ******************* 2:----> Supprimer et remplir de nouvelles donn%ces. *******************\n", 130);
    printf(" ****************** :----> Appuyez sur n%cimporte quelle caract%cre pour ", 39, 130);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf(" ANNULER ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf(". *********\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf(" ******************************************************************************************");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}




//5) // this menu to ask user if want to exit program;
void EXIT_Terminal(void)
{
    char choice = '0';

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf("\n ******************************************************************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf(" **********************>>>  Appuyez sur '1' pour");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf(" CONTINUER  "); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("<<<****************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf(" **********************>>>     Appuyez sur '0' pour");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf(" EXIT    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("<<<****************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf(" ******************************************************************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf(" *----> Donner le choix : ");
    Etiq1:
    scanf(" %c", &choice);
    if( choice != '1' && choice != '0')
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf(" !! Choix incorrect !! \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        goto Etiq1;
    }
    if( choice == '0' )
    {
        free(s);
        exit(0);
    }
    system("cls"); // this function and his parameter  for clear the page of  previous step;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    printf("\t\t\t\t************* New Page *************\n");
    printf("\t\t\t\t**** Clearing the previous page ****\n");
    printf("\t\t\t\t************************************\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}




//6) this procedure test if fill is successful or filed;
void Test_Fill(void)
{
    if( s != NULL)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("\n\t\t\t\t|| Succ%cs remplir les informations ||\n", 138);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
    else
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\n\t\t\t\t<> Erreur de Remplir  <> \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        free(s);
        exit(0);
    }
}



//7) Display list using recursive mod;
void Display_list_R(struct Airplanes *list)
{
    if (list == NULL)
    {
        printf(""); //print nothing;
    } else
    {
        printf("\t*** ---> Code : %s \n", list->pl.code);

        Display_list_R(list->suiv);
    }
}




/**======================================================================================================================**/
/********************************************************|Functions|*******************************************************/
/**======================================================================================================================**/


/*********| Time Functions |*********/

/***Functions of current time***/

int current_year(void)
{
    time_t currentTime; //"time.h" time_t is an integer type and its values represent
    time(&currentTime); // the number of seconds or Days or Years .. elapsed since the epoch;

    struct tm *matime = localtime(&currentTime); // using tm structure for choice Day or Month or Year;

    return matime->tm_year+1900; // add 1900 because in C language  year start from 0 and 1900 == 0;
}



int current_Month(void)
{
    time_t currentTime;
    time(&currentTime);

    struct tm *matime = localtime(&currentTime);

    return matime->tm_mon+1;  // add one because the month  start from 0 in C language ;
}



int current_Day(void)
{
    time_t currentTime;
    time(&currentTime);

    struct tm *matime = localtime(&currentTime);

    return matime->tm_mday;
}




/***Function to check the year is leap or not***/
//if the year is a leap year return 1 else return 0;
int is_leap(int y)
{
    if((y % 4 == 0))  //Example: 2016 is leap year <=> 2016 % 4 == 0 , so will return 1;
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



/***Function to check the date is valid or not***/
//if data valid return 1 else return 0;
int datevalid(int d, int m, int y)
{
    if(y < min_yr || y >current_year()) //Check the year is between 1969 and current year;
    {
      return 0;
    }
    if( y == current_year() ) //Check year of manufacture (building) plane is the current year !!;
    {                        //This check-in order not to fall into the case of a manufacture date in the future;
        if( m > current_Month() )
        {
            return 0;
        }
        if( m == current_Month() )
        {
            if( d >= current_Day() ) //A plane cannot take off in the same day of its manufacture date;
            {                       //The plane must go through a final test in 24 hours minimum after manufacture date;
                return 0;          /* Source : https://www.almeezan.qa/LawArticles.aspx?LawTreeSectionID=12699&lawId=3965&language=ar */
            }                     //This check-in order not fall into the case a manufacture date is to-day or in future;
        }
    }

    if( y == min_yr )      //Check year of manufacture (building) plane is the year of building the first plane;
    {
        if( m < min_month ) //This check-in order not to fall into the case of -
        {                  //a manufacture date is before the date of the first plane manufacture;
            return 0;
        }
        if( m ==  min_month ) //and  check the day & month;
        {
            if( d < min_day )
            {
                return 0;
            }
        }
    }

    if(m < 1 || m > 12) //check the month;
    {
      return 0;
    }
    if(d < 1 || d > 31) //check the Days;
    {
      return 0; //Now check date according to month.
    }
    if( m == 2 ) { // if month is February;
        if(is_leap(y)) // if is leap year so 29 Days;
        {
            if(d <= 29) //check the Days <= 29 ;
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else //else so 28 Days;
        {
          if(d <= 28) //check the Days <= 28;
            {
            return 1;
            }
                else
            {
                return 0;
            }
        }
    }
     //April, June, September and November are with 30 days
    if ( m == 4 || m == 6 || m == 9 || m == 11 )
    {
        if(d <= 30) //check the Days <= 30;
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}



/***function convert Day type string to integer***/
int Day_convert( char date[NB_date] )
{
    char DD[]="00"; //(DD)
    char * endPtr;

    /* The prototype of valid date is DD/MM/YYYY, so
    the parameter is String Arrays of size NB_date,
    i take two first boxes of Days(DD)
    to convert them to an integer using strtol function in "stdlib.h" */
    DD[0]=date[0];
    DD[1]=date[1];

    long int x = strtol(DD, &endPtr, 10); //strtol() function is used to convert string to integer;
    return x;
}



/***Function convert Month type string to integer***/
int Month_convert( char date[NB_date] )
{
    char MM[]="00"; //(MM)
    char * endPtr;

    //the same thing in Day Convert() function but with Months (DD);
    MM[0]=date[3];
    MM[1]=date[4];

    long int x = strtol(MM, &endPtr, 10); //strtol() function is used to convert string to integer;
    return x;
}



/***Function convert Year type string to integer***/
//use the Year_convert () function to calculate the age of the planes;
int Year_convert( char date[NB_date] )
{
    char YYYY[]="0000"; //(YYYY)
    char * endPtr;

    //the same thing in Day & Month Convert() functions but with Years (YYYY);
    YYYY[0]=date[6];
    YYYY[1]=date[7];
    YYYY[2]=date[8];
    YYYY[3]=date[9];

    long int x = strtol(YYYY, &endPtr, 10); //strtol() function is used to convert string to integer;
    return x;
}
/* ==> The role of this functions converts the string Date to an integer-
-variable For check Date valid using integer variable because is easy when use integer*/




/*** Function Count the number of planes ***/
//take-off planes and landing planes;
int aircraft_calculation( char etat ) //using parameter for now witch situation (D A M);
{
    int i=0;
    struct Airplanes *s1;

    s1=s;
    while ( s1 != NULL)
    {
       if(s1->pl.etat == etat ) // according to the situation of plane;
       {
           i++;
       }
       s1=s1->suiv;
    }
    return i; // return the number of planes;
}


//Function display the number of planes and return 0;
int Display_number_of_planes(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); printf("\n  *====> ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("Le nombre d%cavions d%ccoll%cs est : %d .\n", 39, 130, 130, aircraft_calculation('D') );
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); printf("  *====> ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("Le nombre d%cavions atterris est : %d .\n\n", 39, aircraft_calculation('A'));
    return 0;
}

/* Calculate the length of the list */
int *CLL(void) //using a pointer function;
{
    int  i=0, *t=&i; //declare integer pointer;
    Airplanes *p=s;

    while ( p != NULL)
    {
        i++;
        p=p->suiv;
    }
    return t; //return pointer;
}


/** Function for dynamically allocated the plane code **/
char* get_code()
{
    char* code = (char*) malloc(sizeof(char)); //dynamically allocated of code;
    *code = '\0';

    int i ,j = 2; // initialize j to the value of 2 to be able to store the \0 character;

    char sup[2] = {'\0'}; // declare this string arrays for add \n in the end of string;
                                   /* The getc() function reads a single character from the current
                                    stream position and advances the stream position to the next character
                                    and s*/
    while( (i = getc(stdin)) != '\n') //
    {
    code = realloc(code,j * sizeof(char)); //
    sup[0] = (char) i; // when the user press enter add this string in end \0;

    strcat(code,sup); // strcat() ==> appends the string pointed to by sup to the end of the string pointed to by code pointer;
    j++;
    }
    return code;

}


/*****Function to create first element of Linked list*****/
Airplanes *create_List(void)
{
    struct Airplanes *p, *s1;
    char *code;

    p=(struct Airplanes *)malloc(sizeof(struct Airplanes)); // dynamically allocated linked list p;

    printf("-Code d%cavion : ", 39);   //Fill the code;
    get_code();
    code=get_code();
    p->pl.code = code;

    do{
        printf("-Capacit%c de stockage : ", 130); //Fill the storage;
        scanf("%d", &p->pl.capacity);
    }while( p->pl.capacity < 0 );

    printf("-l%c%ctat : \n   D => a d%ccoll%c.\n   A => a atterri.\n   M => en maintenance techique. \n", 39, 130, 130, 130); //Fill the condition of plane;
    ETIQ1:
    scanf(" %c", &p->pl.etat);
    if( p->pl.etat != 'D' && p->pl.etat != 'A' && p->pl.etat != 'M')   //Check condition of plane if (D or A or M);
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf(" ---!! Choix incorrect !!--- \n",39);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        goto ETIQ1;
    }

    printf("-La date de fabrication : (DD/MM/YYYY)  \n", 130, 39, 130); //Fill Date;
    ETIQ2:
    scanf("%s", &p->pl.date);
    if ( p->pl.date[2] != '/' || p->pl.date[5] != '/' || strlen( p->pl.date) != 10 ) //Check the format of date;
    {
        printf("!! Le formulaire est invalide ==> Exemple : 08/05/1971 !!\n");
        goto ETIQ2;
    }

    int d=Day_convert(p->pl.date), m=Month_convert(p->pl.date), y=Year_convert(p->pl.date); //declare 3 variables for using them parameters in datevalid() function;

    if(datevalid(d, m, y)) //Check the date is valid or not using datevalid() function;
    {
        printf("");
    }
    else
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("- Invalide !!\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        goto ETIQ2;
    }
    do{
        printf("-Nombre de vols assur%cs : ", 130); //Fill number of flights;
        scanf("%d", &p->pl.nbvols);
    }while( p->pl.nbvols < 0);

    p->suiv=NULL;
    if ( s== NULL)
    {
        s=p;
    }
    else
    {
        s1=s;
        while (s1->suiv != NULL) //next node ( element );
        {
            s1=s1->suiv;
        }
        s1->suiv=p;
    }
}



/*****Function to insert in end element of Liked List*****/
Airplanes *insert_end(void)
{
    struct Airplanes *p, *s1;
    char *code;

    p=(struct Airplanes *)malloc(sizeof(struct Airplanes)); // dynamically allocated linked list p;

    printf("-Code d%cavion : ", 39);   //Fill the code;
    get_code();
    code=get_code();
    p->pl.code = code;


    do{
        printf("-Capacit%c de stockage : ", 130); //Fill the storage;
        scanf("%d", &p->pl.capacity);
    }while( p->pl.capacity < 0 );

    printf("-l%c%ctat : \n   D => a d%ccoll%c.\n   A => a atterri.\n   M => en maintenance techique. \n", 39, 130, 130, 130); //Fill the condition of plane;
    ETIQ1:
    scanf(" %c", &p->pl.etat);
    if( p->pl.etat != 'D' && p->pl.etat != 'A' && p->pl.etat != 'M') //Check condition of plane if (D or A or M);
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf(" ---!! Choix incorrect !!--- \n",39);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        goto ETIQ1;
    }

    printf("-La date de fabrication : (DD/MM/YYYY)  \n", 130, 39, 130); //Fill Date;
    ETIQ2:
    scanf("%s", &p->pl.date);
    if ( p->pl.date[2] != '/' || p->pl.date[5] != '/' || strlen( p->pl.date) != 10 ) //Check the format of date;
    {
        printf("!! Le formulaire est invalide ==> DD/MM/YYYY !!\n");
        goto ETIQ2;
    }
    int d=Day_convert(p->pl.date), m=Month_convert(p->pl.date), y=Year_convert(p->pl.date); //declare 3 variables for using them parameters in datevalid() function;

    if(datevalid(d, m, y)) //Check the date is valid or not using datevalid() function;
    {
        printf("");
    }
    else
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("- Invalide !!\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        goto ETIQ2;
    }

    do{
        printf("-Nombre de vols assur%cs : ", 130); //Fill number of flights;
        scanf("%d", &p->pl.nbvols);
    }while( p->pl.nbvols < 0 );

    p->suiv=NULL;
    if(s == NULL)
    {
        s=p;
    }
    else
    {
        s1=s;
        while (s1->suiv != NULL)
        {
            s1=s1->suiv;
        }
        s1->suiv=p;
    }
}



/*****Function to Display and return elements of Liked List  *****/
Airplanes *display_list(  Airplanes *Head )
{
    struct Airplanes *s1;

    if( Head == NULL ) //Test if Liked List is empty;
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\n\t <>  !! La liste vide !!  <> \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        EXIT_Terminal();
        return(Head); // return the list;
    }
    else{
        int i=1;
        s1=Head;
        while(s1!=NULL) //Display the List;
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            printf("\n- Avion %d : ***************************************************************************** \n",i);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("-\t\tCode : %s \n", s1->pl.code);
            printf("-\t\tCapacit%c de stockage : %d \n", 130, s1->pl.capacity);
            printf("-\t\tl%c%ctat : %c  \n", 39, 130, s1->pl.etat);
            printf("-\t\tLa date de fabrication : %s \n", s1->pl.date);
            printf("-\t\tNombre de vols assur%cs : %d \n", 130,s1->pl.nbvols);
            i++;
            s1=s1->suiv;
        }
    }
        return(Head);
    printf("\n");
}



/****Function to Fill in list of planes ****/
Airplanes *complete_the_list_of_planes_1(void)
{
    char choice;
    int n=0;

    Display_menu1(); // procedure menu1;
    Etiq1:
    printf(" *----> Donner le choix : ");
    scanf(" %c", &choice);
    if( choice == '0')
    {
        free(s);
        exit(0);
    }
    if ( choice != '1' )
    {
        if ('2'<=choice && '5'>=choice) // Fill the list obligatory;
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            printf("\t <>  !! La liste vide !!  <> \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("- Vous devez d%cabord remplir le formulaire 1.. pour proc%cder %c cette s%clection: \n", 39, 130, 133, 130);
            goto Etiq1;
        }else{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            printf("- Choix incorrect  \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            goto Etiq1;
        }
    }

    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    printf("\n\n\t* 1 :----------------------> Remplir la liste des avions ---------------------------*\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    do{

        printf(" **--> Quel est le nombre actuel d'avions ? : ");
        scanf("%d", &n);

    } while ( n <= 0);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("==> Avion %d : \n", 1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    create_List();

    for (int i = 2; i <= n ; i++)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("==> Avion %d : \n", i);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        insert_end();
    }
    system("cls");
    Test_Fill();
    display_list(s);
    Display_number_of_planes();
}



/**Function to Fill list of planes but when user Choose again 1 ==> Fill the list For the second time or more**/
// ==> so this function Fill new list after delete the previous or add planes;
Airplanes *complete_the_list_of_planes_2(void)
{
    char choice;
    int n=0;

    Display_menu_3();
    printf("\n *----> Donner le choix : ");
    scanf(" %c", &choice);

    if( choice == '1' ) // Add new planes;
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("\n\n\t* 1 :----------------------> Ajouter des nouvelles avions ---------------------------*\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        do{

            printf(" **--> Combien d'avions voulez-vous ajouter ? : ");
            scanf("%d", &n);

        } while ( n <= 0);

        for (int i = 1; i <= n ; i++)   // using the function insert_end();
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            printf("==> Avion Ajout%c  %d : \n", 130, i);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            insert_end();
        }
        system("cls");
        Test_Fill();
        display_list(s);
        Display_number_of_planes(); // for display number of planes;
        EXIT_Terminal();
    }

    else if( choice == '2' ) // Delete the previous list and fill new one;
    {
        s=NULL;     /*=>for delete nodes of the list */
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("\n\n\t* 2 :----------------------> Supprimer et remplir nouvelle liste  ---------------------------*\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        do{

            printf(" **--> Quel est le nombre actuel d'avions ? : ");
            scanf("%d", &n);

        } while ( n <= 0);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("==> Avion %d : \n", 1);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        create_List();

        for (int i = 2; i <= n ; i++)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            printf("==> Avion %d : \n", i);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            insert_end();
        }
        system("cls");
        Test_Fill();
        display_list(s);
        Display_number_of_planes();
        EXIT_Terminal();
    }
    system("cls"); // clear the console;
    if(choice == '0')
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);printf("\n/*** ===> Copyright (C) 2020/2021 Mohamed Ilyes Gueraoui, All Rights Reserved. <=== ***/\n\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
}



/****Function to check if an plane in the list of planes****/
Airplanes *Check_code_plane( struct Airplanes *s1 )
{
    int result, k=0;

    char *code;
    printf("*----> Saisissez Le code de avion que vous souhaitez rechercher : ");

    get_code();
    code=get_code();

    while (s1 != NULL)
    {
        result= strcmp(s1->pl.code, code); // strcmp() compares two strings  character by character-
        if(result == 0)                    // if they are equals, the function return 0, found it in "string.h" library;
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            printf("*** :---> L%cavion trouv%c \n\t|>> Code : %s  \n", 39, 130, code);
            printf("\t|>> Capacit%c : %d \n", 130, s1->pl.capacity);
            printf("\t|>> L%c%ctat : %c  \n", 39, 130, s1->pl.etat);
            printf("\t|>> Date de fabrication : %s \n", s1->pl.date);
            printf("\t|>> Nombre de vols assur%cs : %d \n", 130, s1->pl.nbvols);

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            k=1;
        break;
        }
        else
        {
           s1=s1->suiv; //Next node;
        }
    }
    if( k == 0 ) // this check for case of plane don't exist;
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
        printf("\n*****    | !! Il n%cy a pas d'avion avec ce code : %s !! |    *****\n\n", 39, code);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
}



/****Function : classification planes  in order ascending and Display them ****/
Airplanes *ascending_classification(void)
{
    Airplanes *temp, *P;
    planes Data;

    printf("\n*_*--> Trier  la liste des avions par ordre croissant des capacit%cs de stockage :\n", 130);
    for( temp=s; temp->suiv != NULL; temp=temp->suiv )
    {
        for ( P=temp->suiv; P != NULL; P=P->suiv)  //using crossed loop;
        {
            if( P->pl.capacity < temp->pl.capacity )
            {
                Data = P->pl;
                P->pl = temp->pl; //changer between the nodes
                temp->pl = Data;
            }
        }
    }
    display_list(s); //display list after ascending classification;
    Display_number_of_planes();
}



/***Function Display list of planes have landed ("atterris")***/
/***and list of planes have maintenance***/
Airplanes *Display_List_planes( char etat) // using string parameter;
{
    struct Airplanes *s1;
    int k = 0;

    if(s==NULL)
    {
        printf("\n\t <> Erreur !! La list vide  <> \n");
    }
    else{
        int i = 1;
        s1=s;
        while(s1!=NULL )    //Display the planes have maintenance or landed passing a string parameter ;
        {
            if( s1->pl.etat == etat )
            {
            printf("\t\t\t%d- Code : %s \n", i, s1->pl.code);
            i++;
            k=1;
            }
          s1=s1->suiv;
        }
    }
    if( k == 0 ) // this check for case does not exist planes;
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\t\t\t--Vide--\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
}



/******* Function to delete + 20 years *******/
//but this function delete the first planes over than 20 years
// so in man function i use loop stat from 1 a length of
//list for delete all planes over than 20 years
Airplanes *Delete_planes_p20_years(void)
{
    Airplanes  *temp, *p;
    if( (current_year()-Year_convert(s->pl.date) ) > 20  ) // case of the  first plane over than 20 years;
    {
        p=s;
        s=s->suiv;
        free(p);
    }
    else
    {
        temp=s;  // for delete a node must be stop before this node so using the next of next node;
        while ( temp->suiv  != NULL && (current_year()-Year_convert(temp->suiv->pl.date) ) <= 20 )
        {
            temp=temp->suiv;
        }
        if( temp->suiv  != NULL )
        {
            p=temp->suiv;
            temp->suiv=temp->suiv->suiv;
            free(p);
        }
    }
   return s;
}



/*** Function to display menu2 and given choice to user and return list ***/
Airplanes *Display_aircraft_lists(void)
{
    char choice='0';

    Display_menu2(); //display menu 2
    ETIQ1:
    printf(" *----> Donner le choix : ");
    scanf(" %c", &choice);

    switch (choice)
    {
        case '5': // display lites of planes contrition;
            system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            printf("\n\t************************************************************************\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("\t* 1 :------> La liste des avions d%ccoll%cs -----------------------------*\n",130,130);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            Display_List_planes('D');
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            printf("\t************************************************************************\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("\t* 2 :------> La liste des avions atterris -----------------------------*\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            Display_List_planes('A');
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            printf("\t************************************************************************\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("\t* 3 :------> La liste des avions en maintenance -----------------------*\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            Display_List_planes('M');
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            printf("\t************************************************************************\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        break;

        case '6':  // in this case incomplete;
            system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            printf("\n\t******************************************************************************\n");
            printf("\t* 1 :------> La liste des avions qui ont assur%c le max des vols et ag%cs ---- *\n", 130, 130);
            printf("\t******************************************************************************\n");
            printf("\t* 2 :------> La liste des avions qui ont assur%c le min des vols et ag%cs ---- *\n", 130, 130);
            printf("\t******************************************************************************\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("\n\t\t   <>   This service is not available now   <> \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
            printf("\n\t\t    [         | Soon, Inshaa Allah |         ]  \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        break;

        case '0':
            free(s); exit(0);
        break;

        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            printf("---!! Choix incorrect !!--- \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            goto ETIQ1;
        break;
    }
    return s;
}


// <>   I N C O M P L E T E   <> //
/**Airplanes *Display_List_nvols_max(void)
{

}**/

// <>   I N C O M P L E T E   <> //
/**Airplanes *Display_List_nvols_min(void)
{

}**/
/*** ===> Copyright © 2020/2021 Mohamed Ilyes Gueraoui, All Rights Reserved. <=== ***/
