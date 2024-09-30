// Library
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include <ctype.h>
#include<Windows.h>

// Function
void login();
void Interface();
void Menu();
void Change(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
				,float DVDdisk,float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
				,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD ,int option ,bool a ,bool b );
void Statement(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
				,float DVDdisk, float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
				,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD );
void Check(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
				,float DVDdisk,float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
				,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD );
				
// String					
char user[10] , pass[10] ,Select,Method;

// Integer
int i=0,option;

// Boolean
bool a = true;
bool b = true;

// Float
float moneyBottlePlasticWhite[10],moneyBottlePlasticTurbid[10],moneyBottlePlasticColor[10],moneyScrap[10],moneyPaperBook[10],moneyBronze[10],moneyCD[10],moneyDVD[10];
float BottlePlasticWhite[10]  ,BottlePlasticTurbid[10],BottlePlasticColor[10], Scrap[10]  , PaperBook[10],Bronze[10] ,CDdisk[10],DVDdisk[10],Total[10] ;

// FILE variable
FILE*re;
FILE*Pl;
FILE*Pl2;
FILE*Pl3;
FILE*Scr;
FILE*Pa;
FILE*Ba;
FILE*Cd;
FILE*Dvd;

//FILE Profile
FILE*BWP;
FILE*BPT;
FILE*BPC;
FILE*SC;
FILE*PAB;
FILE*BZ;
FILE*CDD;
FILE*DVDD;

// Main
void main(){
	int s,num;
	system("COLOR 3F");
	 //Local Declarations
	char now[20],username[15],password[12];
	while(a){
		time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(now,80,"%d %B %Y %H:%M", timeinfo);
	printf("Date and time to the transection: %s\n", now);
    Interface();
	scanf("%d",&s);
	system("CLS");
	switch(s){
		case 1:
				printf("\t\t\t\tPlease login to lists \n\n\n\n");
    login();
	system("CLS");
			while(b){
    printf("\t\t\t\t\t\t\nHello %s \n",user);
    Menu();
        printf("\t\t\t\tYour select lists: ");
			scanf("%d",&num);
	system("CLS");
			switch(num){
				case 1:
				 Change(BottlePlasticWhite[10],BottlePlasticTurbid[10],BottlePlasticColor[10],Scrap[10] ,PaperBook[10],Bronze[10] ,CDdisk[10]
				,DVDdisk[10],moneyBottlePlasticWhite[10],moneyBottlePlasticTurbid[10],moneyBottlePlasticColor[10],moneyScrap[10]
				,moneyPaperBook[10],moneyBronze[10],moneyCD[10],moneyDVD[10] ,option,a,b);
					break;
				case 2:
					printf("\t\t\t\t-------------Statement of %s ------------\n",user);
    	Statement(BottlePlasticWhite[10],BottlePlasticTurbid[10],BottlePlasticColor[10],Scrap[10] ,PaperBook[10],Bronze[10] ,CDdisk[10]
				,DVDdisk[10],moneyBottlePlasticWhite[10],moneyBottlePlasticTurbid[10],moneyBottlePlasticColor[10],moneyScrap[10]
				,moneyPaperBook[10],moneyBronze[10],moneyCD[10],moneyDVD[10] );
					break;
				case 3:
						printf("\t\t\t\t-------------Check the Your material of %s------------\n",user);
    	Check(BottlePlasticWhite[10],BottlePlasticTurbid[10],BottlePlasticColor[10],Scrap[10] ,PaperBook[10],Bronze[10] ,CDdisk[10]
				,DVDdisk[10],moneyBottlePlasticWhite[10],moneyBottlePlasticTurbid[10],moneyBottlePlasticColor[10],moneyScrap[10]
				,moneyPaperBook[10],moneyBronze[10],moneyCD[10],moneyDVD[10] );
					break;
				case 4:
					printf("\t\t\t\t-----------Take your a receipt!!!--------- \n\n\n");
        printf("\t\t\t\t------------------Thank you %s for service Material money-----------------\n",user);
        return 0;
					break;
					default:
				 printf("\t\t\t\t\t\t\t\tYou selected invalid number!!  \n ");
					break;
			}
			 printf("\n\n");
    printf("\t\t\t\t\t\t\t\tWould you like to do another transection?\n\n\n");
        printf("\t\t\t\t\t\t\t\t[1]Yes \n\n\n");
        printf("\t\t\t\t\t\t\t\t[2]No \n\n\n");
        printf("\t\t\t\t\t\t\t\tYour select: ");
        scanf("%d", &option);
        system("CLS");
        if (option == 2){
            a = false ;
            b = false ;
           printf("\t\t\t\t                      -----------Take your a receipt!!!--------- \n\n\n");
           printf("\t\t\t\t------------------Thank you %s for using service Material money-----------------",username);
           return 0;
        }
			}
		break;
		case 2:
		regis();
		break;
		case 3:
			return 0;
		break;
		default:
//  warning symbol
	break;
	
	}
	printf("Invaild try again!!!");
	Sleep(1000);
	}
}

// Login
void login(){
	int count;
	char userID[10], password[10] ;
	system("CLS");
	 re = fopen("memberse.txt","r");
	printf("\t\t\t\t\t\t\t\t Please enter the username and password to login: \n\n\n");
	printf("\t\t\t\t\t\t\t\t Username ");
	scanf("%s",&user);
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\t\t Password ");
	scanf("%s",&pass);
	printf("\n\n\n");
	while(fscanf(re,"%s",userID)&&fscanf(re,"%s",password)){
		if(strcmp(user,userID)==0 && strcmp(pass,password)==0){
			count=1;
			break;
			system("CLS");
		} else if(feof(re)){ break; }
}
	fclose(re);
	if(count==1){
		printf("\t\t\t\t\t\t\t\t %s \n\n \t\t\t\t\t\t\t\t Your login is successful \n\n \t\t\t\t\t\t\t\t thanks for logging \n",userID);
		Sleep(1000);
	}else{
		system("CLS");
		printf("\n\t\t\t\t\t\t\t\t login error \n\n Please check your username and password \n");
		Sleep(1000);
		main();
	}
}

// Register
void regis(){
	
	system("CLS");
	re = fopen("memberse.txt", "a+");
	printf("\t\t\t\t\t\t\t\t Register to Material Money:\n\n\n");
	printf("\t\t\t\t\t\t\t\t Enter the username: ");
	scanf("%s",&user);
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\t\t Enter the password: ");
	scanf("%s",&pass);
	printf("\n\n\n");

	fprintf(re,"%s\n%s\n ",user,pass);
	printf("\t\t\t\t\t\t\t\t Register is successful \n");
	Sleep(1000);
	system("CLS");
	fclose(re);
	main();
}

// Interface
void Interface(){
	printf("                                                                                               #######                                                                                        \n");
	printf("                                                                                             ###########                                                                                      \n");
    printf("                                                                                           ##### $$$ #####                                                                                    \n");
    printf("                                                                                         ####### $$ ########                                                                                  \n");
    printf("                                                                                       ######### $$ ##########                                                                                \n");
    printf("                                                                                     ####### $$ $$$$ $$ ########                                                                              \n");
    printf("                                                                                   ###### $$            $$ #######                                                                            \n");
    printf("                                                                                 ###### $$___         ___$$  #######                                                                          \n");
    printf("                                                                               ###### $$ /   \\       /   \\  $ #######                                                                       \n");
    printf("                                                                             ####### $  /  $$ \\     /  $$ \\  $ ########                                                                     \n");
    printf("                                                                           ######## $    $    $      $    $    $ ##########  #                                                                \n");
    printf("                                                                         ######### $    $*    *$    $*    *$   $ #############                                                                \n");
    printf("                                                                       ########## $     $**  **$    $**  **$   $  ############                                                                \n");
    printf("                                                                         ######## $      $****$      $****$    $    ##########                                                                \n");
    printf("                                                                           ###### $        $$          $$     $  #############   ##                                                           \n");
    printf("                                                            ###############  ##   $  ///                 ///  $                ######                                                         \n");
    printf("                                                               ############        $       \\      /         $  $    $       ##########                                                       \n");
    printf("                                                             ##############         $       \\____/         $    $  $      ##############                                                     \n");
    printf("                                                           ################          $                    $$$    $$         ##############                                                    \n");
    printf("                                                         ##############  ##           $                 $$  $$  $$$$          ##############                                                  \n");
    printf("                                                       ##############     #            $              $$$    $$  $$             ##############                                                \n");
    printf("                                                     ##############                     $            $$       $$$$                ##############                                              \n");
    printf("                                                   ##############                        $          $$   #    $$                    ##############                                            \n");
    printf("                                                  #############                           $       $$    ##                            #############                                           \n");
    printf("                                                  ####################################### $     $$    #############################################                                           \n");
    printf("                                                   ###################################### $   $$    ##############################################                                            \n");
    printf("                                                    ##################################### $$$$ #  ###############################################                                             \n");
    printf("                                                      ################################## $$ #### ###############################################                                              \n");
    printf("                                                        ########################################  ############################################                                                \n");
	printf("                                                         #######################################      #######################################                                                \n");
    printf("                                                                                                        ###                                                                                   \n");
    printf("                                                                                                          #                                                                                   \n");
	printf("\t\t\t\t\t\t \n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t|  [1] Login        |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
    printf("\t\t\t\t\t\t\t\t|  [2] Register     |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
    printf("\t\t\t\t\t\t\t\t|  [3] Quit         | \n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
    printf("\t\t\t\t\t\t\t\t Select to lists: ");
	
}

// Menu
void Menu(){
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t|  [1] Change       |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
    printf("\t\t\t\t\t\t\t\t|  [2] Statement    |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
    printf("\t\t\t\t\t\t\t\t|  [3] Profile      |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
    printf("\t\t\t\t\t\t\t\t|  [4] Exit         |\n");
	printf("\t\t\t\t\t\t\t\t|                   |\n");
	printf("\t\t\t\t\t\t\t\t--------------------\n");
}

// Change
void Change(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
				,float DVDdisk,float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
				,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD ,int option ,bool a ,bool b ){
    int Change,money = 0;
    char now[20];
    bool bwp = true , bpt = true , bpc = true , sc = true , pabo = true , br = true ,cd = true , dvd = true;
    Pl = fopen("costPl.txt","a+");
    Pl2 = fopen("costPl2.txt","a+");
    Pl3 = fopen("costPl3.txt","a+");
    Scr = fopen("costScr.txt","a+");
    Ba = fopen("costBa.txt","a+");
    Pa = fopen("costPa.txt","a+");
    Cd = fopen("costCd.txt","a+");
    Dvd = fopen("costDvd.txt","a+");
    
    BWP = fopen("amonutBWP.txt","a+");
    BPT = fopen("amonutBPT.txt","a+");
    BPC = fopen("amonutBPC.txt","a+");
    SC = fopen("amonutSC.txt","a+");
    PAB = fopen("amonutPAB.txt","a+");
    BZ = fopen("amonutBZ.txt","a+");
    CDD = fopen("amountCDD.txt","a+");
    DVDD = fopen("amonutDVDD.txt","a+");
    		time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(now,20,"%d %B %Y ", timeinfo);
	printf("\n\t\t\t\t\t\t\t\t       ------------Choose the material change to money-------------\n\n\n");
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 1 | Bottle light Plastic (White) 6.5 Bath / Kg  |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 2 |    Bottle Plastic (Turbid) 5 Bath / Kg      |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 3 |     Bottle Plastic (color) 1.1 Bath / Kg    |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 4 |              Scrap 8 Bath / Kg              |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 5 |          Paper,Book 2.8 Bath / Kg           |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 6 |            Bronze 240 Bath / Kg             |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 7 |            CD Disk 12 Bath / Kg             |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    
    printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t            | 8 |           DVD Disk  6 Bath / Kg             |\n");
	printf("\t\t\t\t\t\t\t\t            --------------------------------------------------\n\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t            You select: ");
    scanf("%d",&Change);
    system("CLS");
    switch(Change)
	{ 
    	case 1:
    		while(bwp){
    	printf("\n\t\t\t\t\t\t\t\t      Value of Bottle light Plastic (White) change to money now!!\n\n\n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                        #     #                     \n");
    printf("\t\t\t\t\t                                                        #     #                     \n");
    printf("\t\t\t\t\t                                                      ##       ##                   \n");
    printf("\t\t\t\t\t                                                    ##           ##                 \n");
    printf("\t\t\t\t\t                                                  ##               ##               \n");
    printf("\t\t\t\t\t                                                 ##                 ##              \n");
    printf("\t\t\t\t\t                                                ##                   ##             \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               #                       #            \n");
    printf("\t\t\t\t\t                                               ##                     ##            \n");
    printf("\t\t\t\t\t                                                ###                 ###             \n");
    printf("\t\t\t\t\t                                                  ###################               \n\n");
    printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t          |  Bottle light Plastic (White) 6.5 Bath / Kg |\n");
	printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n\n");
    	printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
		scanf("%f",&BottlePlasticWhite);
		if(BottlePlasticWhite > 0){
			a = false ;
				b = false ;
				bwp = false;
		moneyBottlePlasticWhite = money+(BottlePlasticWhite * 6.5);
		printf("\n\n");
    	printf("\t\t\t\t\t\t\t\tChange Bottle light Plastics (White): %.2f Kg get a money: %.2f Bath\n",BottlePlasticWhite,moneyBottlePlasticWhite);
		fprintf(Pl,"Time:%s Amount to changed Bottle light Plastics (White) %.2f Kg Get money %.2f Bath\n",now,BottlePlasticWhite,moneyBottlePlasticWhite);
		fprintf(BWP,"%.2f kg\n",BottlePlasticWhite);
		fclose(Pl);
		fclose(BWP);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
    	break; 
    	case 2:
    		while(bpt){
    			printf("\n\t\t\t\t\t\t\t\t      Value of Bottle Plastic (Turbid) change to money now!!\n\n\n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                       #########                    \n");
    printf("\t\t\t\t\t                                                        #     #                     \n");
    printf("\t\t\t\t\t                                                        #     #                     \n");
    printf("\t\t\t\t\t                                                      ##       ##                   \n");
    printf("\t\t\t\t\t                                                    ##           ##                 \n");
    printf("\t\t\t\t\t                                                  ##               ##               \n");
    printf("\t\t\t\t\t                                                 ##                 ##              \n");
    printf("\t\t\t\t\t                                                #######################             \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                               #########################            \n");
    printf("\t\t\t\t\t                                                #######################            \n");
    printf("\t\t\t\t\t                                                  ###################               \n\n");
    printf("\t\t\t\t\t\t\t\t              ----------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t              |     Bottle Plastic (Turbid) 5 Bath / Kg     |\n");
	printf("\t\t\t\t\t\t\t\t              ----------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
    scanf("%f",&BottlePlasticTurbid);
	
	if(BottlePlasticTurbid > 0){
			a = false ;
				b = false ;
				bpt = false;
	moneyBottlePlasticTurbid = money+(BottlePlasticTurbid * 5);
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\tChange Bottle Plastics Turbid: %.2f Kg get a money: %.2f Bath\n",BottlePlasticTurbid,moneyBottlePlasticTurbid);
	fprintf(Pl2,"Time:%s Amount to changed Bottle Plastics Turbid %.2f Kg Get money %.2f Bath\n",now,BottlePlasticTurbid,moneyBottlePlasticTurbid);
	fprintf(BPT,"%.2f kg\n",BottlePlasticTurbid);
	fclose(Pl2);
	fclose(BPT);
		}
		else {
			// warning symbol
			system("CLS");
			}
			}
    break;
    case 3:
    	while(bpc){
    printf("\n\t\t\t\t\t\t\t\t      Value of Bottle Plastic (color) change to money now!!\n\n\n");
    printf("\t\t\t\t\t                                                          #########                    \n");
    printf("\t\t\t\t\t                                                          #       #                    \n");
    printf("\t\t\t\t\t                                                          #       #                    \n");
    printf("\t\t\t\t\t                                                           #######                     \n");
    printf("\t\t\t\t\t                                                           #     #                     \n");
    printf("\t\t\t\t\t                                                         ###########                   \n");
    printf("\t\t\t\t\t                                                       ###############                 \n");
    printf("\t\t\t\t\t                                                     ###################               \n");
    printf("\t\t\t\t\t                                                    #####################              \n");
    printf("\t\t\t\t\t                                                   #######################             \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                  #########################            \n");
    printf("\t\t\t\t\t                                                   #######################            \n");
    printf("\t\t\t\t\t                                                     ###################               \n\n");
    printf("\t\t\t\t\t\t\t\t              ----------------------------------------------\n");
   	printf("\t\t\t\t\t\t\t\t              |     Bottle Plastic (color) 1.1 Bath / Kg    |\n");
	printf("\t\t\t\t\t\t\t\t              ----------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
    scanf("%f",&BottlePlasticColor);
	if(BottlePlasticColor > 0){
			a = false ;
				b = false ;
				bpc = false;
		moneyBottlePlasticColor = money+(BottlePlasticColor * 1.1);
		printf("\n\n");
	printf("\t\t\t\t\t\t\t\tChange Bottle Plastics Color: %.2f Kg get a money: %.2f Bath\n",BottlePlasticColor,moneyBottlePlasticColor);
	fprintf(Pl3,"Time:%s Amount to changed Bottle Plastics Color %.2f Kg Get money %.2f Bath\n",now,BottlePlasticColor,moneyBottlePlasticColor);
	fprintf(BPC,"%.2f kg\n",BottlePlasticColor);
	fclose(Pl3);
	fclose(BPC);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
    	break;
    	case 4:
    		while(sc){
			
    	printf("\n\t\t\t\t\t\t\t\t      Value of Scraps change to money now!!\n\n\n");
    printf("\t\t\t\t\t                       ###################                     ###########        \n");
    printf("\t\t\t\t\t                     #######################                       ###            \n");
    printf("\t\t\t\t\t                   ##########       ##########                     ###            \n");
    printf("\t\t\t\t\t                   #########         #########                     ###            \n");
    printf("\t\t\t\t\t                   ##########       ##########                     ###      A     \n");
    printf("\t\t\t\t\t                     #######################                #       V       #     \n");
    printf("\t\t\t\t\t                       ###################                  ######>         #     \n");
    printf("\t\t\t\t\t                         ###############                    #               #     \n");
    printf("\t\t\t\t\t                                                                          #####   \n");
    printf("\t\t\t\t\t                                              #######                             \n");
    printf("\t\t\t\t\t                                        ##    #######    ##                       \n");
    printf("\t\t\t\t\t                                      #######################                     \n");
    printf("\t\t\t\t\t                                     #########################                    \n");
    printf("\t\t\t\t\t                                        #######     #######                       \n");
    printf("\t\t\t\t\t                                   ##########         ##########                  \n");
    printf("\t\t\t\t\t                                   #########           #########                  \n");
    printf("\t\t\t\t\t                                   ##########         ##########                  \n");
    printf("\t\t\t\t\t                                        #######     #######                       \n");
    printf("\t\t\t\t\t                                     #########################                    \n");
    printf("\t\t\t\t\t                                      #######################                     \n");
    printf("\t\t\t\t\t                                        ##    #######    ##                       \n");
    printf("\t\t\t\t\t                                              #######                             \n");
	printf("\t\t\t\t\t                         ###############                       ###########        \n\n");
    	printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t          |              Scrap 8 Bath / Kg              |\n");
		printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n\n");
    	printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
    	scanf("%f",&Scrap);
    	
    	if(Scrap > 0){
			a = false ;
				b = false ;
				sc = false;
	moneyScrap = money+(Scrap * 8 );
	printf("\n\n");
    	printf("\t\t\t\t\t\t\t\tChange Scraps: %.2f Kg get a money: %.2f Bath\n",Scrap,moneyScrap);
    	fprintf(Scr,"Time:%s Amount to changed Scraps %.2f Kg Get money %.2f Bath\n",now,Scrap,moneyScrap);
    	fprintf(SC,"%.2f kg\n",Scrap);
    	fclose(Scr);
    	fclose(SC);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
    	break;
    	case 5:
    		while(pabo){
    	printf("\n\t\t\t\t\t\t\t\t        Value of Papers,Books change to money now!!\n");
    printf("\t\t\t\t\t\t                                       ######################                           \n");
    printf("\t\t\t\t\t\t                                     ###                    #                           \n");
    printf("\t\t\t\t\t\t                                   #####                    #                           \n");
    printf("\t\t\t\t\t\t                                 #######                    #                           \n");
    printf("\t\t\t\t\t\t                               #########                    #                           \n");
    printf("\t\t\t\t\t\t                             ###########                    #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             #                              #                           \n");
    printf("\t\t\t\t\t\t                             ################################                           \n\n");
    printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t          |          Paper,Book 2.8 Bath / Kg           |\n");
	printf("\t\t\t\t\t\t\t\t          ----------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
    scanf("%f",&PaperBook);
   
   		if(PaperBook > 0){
			a = false ;
				b = false ;
				pabo = false;
	  moneyPaperBook = money+(PaperBook * 2.8 );
	  printf("\n\n");
   	printf("\t\t\t\t\t\t\t\tChange Papers,Books: %.2f Kg get a money: %.2f Bath\n",PaperBook,moneyPaperBook);
   	fprintf(Pa,"Time:%s Amount to changed Papers,Books %.2f Kg Get money %.2f Bath\n",now,PaperBook,moneyPaperBook);
   	fprintf(PAB,"%.2f kg\n",PaperBook);
   	fclose(Pa);
   	fclose(PAB);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
   	break;
   	case 6:
   		while(br){
		   
   		printf("\n\t\t\t\t\t\t\t\t        Value of Bronze change to money now!!\n");
   	printf("\t\t\t\t\t\t                                         @@@@@@@@@@@@                   \n");
    printf("\t\t\t\t\t\t                                        @@@@@@@@@@@@                    \n");
    printf("\t\t\t\t\t\t                                       @@@@@@@@@@@@                     \n");
    printf("\t\t\t\t\t\t                                      @@@@@@@@@@@@                      \n");
    printf("\t\t\t\t\t\t                                     @@@@@@@@@@@@                       \n");
    printf("\t\t\t\t\t\t                                    @@@@@@@@@@@@                        \n");
    printf("\t\t\t\t\t\t                                   @@@@@@@@@@@@                         \n");
    printf("\t\t\t\t\t\t                                  @@@@@@@@@@@@                          \n");
    printf("\t\t\t\t\t\t                                 @@@@@@@@@@@@                           \n");
    printf("\t\t\t\t\t\t                                @@@@@@@@@@@@                            \n");
    printf("\t\t\t\t\t\t                               @@@@@@@@@@@@                             \n");
    printf("\t\t\t\t\t\t                              @@@@@@@@@@@@                              \n");
    printf("\t\t\t\t\t\t                                                                      \n");
    printf("\t\t\t\t\t\t                                Bronze                                  \n");
   		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t     |             Bronze 240 Bath / Kg            |\n");
		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n\n"); 
		printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
		scanf("%f",&Bronze);
	
			if(Bronze > 0){
			a = false ;
				b = false ;
				br = false;
		moneyBronze = money+(Bronze * 6.5);
		printf("\n\n");
		printf("\t\t\t\t\t\t\t\tChange Bronzes: %.2f Kg get a money: %.2f Bath\n",Bronze,moneyBronze);
		fprintf(Ba,"Time:%s Amount to changed Bronzes %.2f Kg Get money %.2f Bath\n",now,Bronze,moneyBronze);
		fprintf(BZ,"%.2f kg\n",Bronze);
		fclose(Ba);
		fclose(BZ);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
   	break;
   	case 7:
   		while(cd){
		   
   		printf("\n\t\t\t\t\t\t\t\t        Value of CD Disk change to money now!!\n");
   	printf("\t\t\t\t\t                                               @@@@@@@@@@@@                                        \n");
    printf("\t\t\t\t\t                                        @@@@@@@            @@@@@@@                                 \n");
    printf("\t\t\t\t\t                                    @@@@                          @@@@                             \n");
    printf("\t\t\t\t\t                                  @@@                                @@@                           \n");
    printf("\t\t\t\t\t                               @@@                                      @@@                        \n");
    printf("\t\t\t\t\t                             @@                                            @@                      \n");
    printf("\t\t\t\t\t                           @@                                                @@                    \n");
    printf("\t\t\t\t\t                         @@                                                    @@                  \n");
    printf("\t\t\t\t\t                        @                                                        @                 \n");
    printf("\t\t\t\t\t                       @                                                          @                \n");
    printf("\t\t\t\t\t                      @)                                                          (@               \n");
    printf("\t\t\t\t\t                     (@                            _@@@_                           @)              \n");
    printf("\t\t\t\t\t                     (@                           @     @                          @)              \n");
    printf("\t\t\t\t\t                     (@                          @       @                         @)              \n");
    printf("\t\t\t\t\t                     (@                           @_   _@                          @)              \n");
    printf("\t\t\t\t\t                     (@                             @@@                            @)              \n");
    printf("\t\t\t\t\t                      @)                                                          (@               \n");
    printf("\t\t\t\t\t                       @                       ##      ####+                      @                \n");
    printf("\t\t\t\t\t                        @                    #    #    #    #                    @                 \n");
    printf("\t\t\t\t\t                         @@                 #          #     #                 @@                  \n");
    printf("\t\t\t\t\t                           @@               #          #     #               @@                    \n");
    printf("\t\t\t\t\t                             @@              #    #    #    #              @@                      \n");
    printf("\t\t\t\t\t                               @@@             ###     ####+            @@@                        \n");
    printf("\t\t\t\t\t                                  @@@                                 @@                           \n");
    printf("\t\t\t\t\t                                    @@@@                          @@@@                             \n");
    printf("\t\t\t\t\t                                        @@@@@@@            @@@@@@@                                 \n");
    printf("\t\t\t\t\t                                               @@@@@@@@@@@@                                        \n");
   		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t     |              CD Disk 12 Bath / Kg           |\n");
		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n\n");
		printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
		scanf("%f",&CDdisk);
	
		if(CDdisk > 0){
			a = false ;
				b = false ;
				cd = false;
		moneyCD = money+(CDdisk * 6.5);
		printf("\n\n");
		printf("\t\t\t\t\t\t\t\tChange CD disks: %.2f Kg get a money: %.2f Bath\n",CDdisk,moneyCD);
		fprintf(Cd,"Time:%s Amount to changed CD disks %.2f Kg Get money %.2f Bath\n",now,CDdisk,moneyCD);
		fprintf(CDD,"%.2f kg\n",CDdisk);
		fclose(Cd);
		fclose(CDD);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
   	break;
   	case 8:
   		while(dvd){
   		printf("\n\t\t\t\t\t\t\t\t        Value of DVD Disk change to money now!!\n");
   	printf("\t\t\t\t\t                                          ..oo@@@@@@@@@@@@@oo..                                    \n");
    printf("\t\t\t\t\t                                       o@@@@@@@***********@@@@@@@@o                                \n");
    printf("\t\t\t\t\t                                    @@@@                          @@@@                             \n");
    printf("\t\t\t\t\t                                  @@@                                @@@                           \n");
    printf("\t\t\t\t\t                               @@@     ####+     #         #   ####+    @@@                        \n");
    printf("\t\t\t\t\t                             @@        #    #     #       #    #    #      @@                      \n");
    printf("\t\t\t\t\t                           @@          #     #     #     #     #     #       @@                    \n");
    printf("\t\t\t\t\t                         @@            #     #      #   #      #     #         @@                  \n");
    printf("\t\t\t\t\t                        @              #    #        # #       #    #            @                 \n");
    printf("\t\t\t\t\t                       @               ####+          V        ####+              @                \n");
    printf("\t\t\t\t\t                      @)                                                          (@               \n");
    printf("\t\t\t\t\t                     (@                            _@@@_                           @)              \n");
    printf("\t\t\t\t\t                     (@                           @     @                          @)              \n");
    printf("\t\t\t\t\t                     (@                          @       @                         @)              \n");
    printf("\t\t\t\t\t                     (@                           @_   _@                          @)              \n");
    printf("\t\t\t\t\t                     (@                             @@@                            @)              \n");
    printf("\t\t\t\t\t                      @)                                                          (@               \n");
    printf("\t\t\t\t\t                      @                                                          @                \n");
    printf("\t\t\t\t\t                        @                                                        @                 \n");
    printf("\t\t\t\t\t                         @@                                                    @@                  \n");
    printf("\t\t\t\t\t                           @@                                                @@                    \n");
    printf("\t\t\t\t\t                             @@                                            @@                      \n");
    printf("\t\t\t\t\t                               @@@                                      @@@                        \n");
    printf("\t\t\t\t\t                                  @@@                                 @@                           \n");
    printf("\t\t\t\t\t                                    @@@@                          @@@@                             \n");
    printf("\t\t\t\t\t                                       o@@@@@@@............@@@@@@@o                                \n");
    printf("\t\t\t\t\t                                           *oo@@@@@@@@@@@@@@oo*                                    \n");

   		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t     |             DVD Disk  6 Bath / Kg           |\n");
		printf("\t\t\t\t\t\t\t\t     ----------------------------------------------\n\n");
		printf("\t\t\t\t\t\t\t\tAmount to change (Kg): ");
		scanf("%f",&DVDdisk);
		
		if(DVDdisk > 0){
			a = false ;
				b = false ;
				dvd = false;
		moneyDVD = money+(DVDdisk * 6.5);
		printf("\n\n");
		printf("\t\t\t\t\t\t\t\tChange DVD disks: %.2f Kg get a money: %.2f Bath\n",DVDdisk,moneyDVD);
		fprintf(Dvd,"Time:%s Amount to changed DVD disks %.2f Kg Get money %.2f Bath\n",now,DVDdisk,moneyDVD);
		fprintf(DVDD,"%.2f kg\n",DVDdisk);
		fclose(Dvd);
		fclose(DVDD);
		}
		else {
			// warning symbol
			system("CLS");
			}
		
		}
   	break;
   	default:
   	printf("\n\t\t\t\t\t\t\t\tInvaild to change , please try again!!");
   	break;
	}
	
}

// Statement
void Statement(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
				,float DVDdisk, float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
				,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD ){
 	char Pla[50];
 	char Pla2[50];
 	char Pla3[50];
 	char Sc[50];
 	char Pap[50];
 	char Baz[50];
 	char Cd1[50];
 	char Dvd1[50];
	char userID[10], password[10] ;
	 Pl = fopen("costPl.txt","r");
     Pl2 = fopen("costPl2.txt","r");
     Pl3 = fopen("costPl3.txt","r");
     Scr = fopen("costScr.txt","r");
     Pa = fopen("costPa.txt","r");
     Ba = fopen("costBa.txt","r");
     Cd = fopen("costCd.txt","r");
     Dvd = fopen("costDvd.txt","r");
		printf("\nBottle white Plastic\n");
		while( fgets(Pla, 50 , Pl) != NULL ){
			printf( "%s",Pla) ;
        }fclose(Pl);
        
		printf("\nBottle Plastic Turbid\n");
        while( fgets(Pla2, 50 , Pl2) != NULL ){
			printf( "%s",Pla2) ;
        }fclose(Pl2);
        
		printf("\nBottle Plastic Color\n");
        while( fgets(Pla3, 50 , Pl3) != NULL ){
			printf( "%s",Pla3) ;
        }fclose(Pl3);
        
		printf("\nScrap\n");
        while( fgets(Sc, 50 , 	Scr) != NULL ){
			printf( "%s",Sc) ;
        }fclose(Scr);
        
		printf("\nPaper,Book\n");
        while( fgets(Pap, 50 , Pa) != NULL ){
			printf( "%s",Pap) ;
        }fclose(Pa);
        
		printf("\nBronze\n");
        while( fgets(Baz, 50 , Ba) != NULL ){
			printf( "%s",Baz) ;
        }fclose(Ba);
        
		printf("\nCD disk\n");
        while( fgets(Cd1, 50 , Cd) != NULL ){
			printf( "%s",Cd1) ;
        }fclose(Cd);
        
		printf("\nDVD disk\n");
        while( fgets(Dvd1, 50 , Dvd) != NULL ){
			printf( "%s",Dvd1) ;
        }fclose(Dvd);
    }
// Check
void Check(float BottlePlasticWhite,float BottlePlasticTurbid,float BottlePlasticColor,float Scrap ,float PaperBook,float Bronze ,float CDdisk
			,float DVDdisk,float moneyBottlePlasticWhite,float moneyBottlePlasticTurbid,float moneyBottlePlasticColor,float moneyScrap
			,float moneyPaperBook,float moneyBronze,float moneyCD,float moneyDVD )
	{
		// Bottle white Plastic
		float sum1 = 0, number1, bo1 = 0;
        int state1 = 0;
     if ((BWP = fopen("amonutBWP.txt","r")) == NULL)
        return -1;
    while ((bo1 = fgetc(BWP)) != EOF) {
        switch(state1) {
        case 0: // processing text
            if (isdigit(bo1)) {
                number1 = bo1 - '0';
                state1 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo1)) {
                number1 *= 10;
                number1 += bo1 - '0';
            }
            else {
                sum1 += number1;
                number1 = 0;
                state1 = 0;
            }
            break;
        }
    }
    if (state1 == 1) {
        sum1 += number1;
    }
    printf("Total of Bottles white Plastic to changed: %.2f kg\n", sum1);
    fclose(BWP);
    
    // Bottle Plastic Turbid
		float sum2 = 0, number2, bo2 = 0;
        int state2 = 0;
    if ((BPT = fopen("amonutBPT.txt","r")) == NULL)
        return -1;
    while ((bo2 = fgetc(BPT)) != EOF) {
        switch(state2) {
        case 0: // processing text
            if (isdigit(bo2)) {
                number2 = bo2 - '0';
                state2 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo2)) {
                number2 *= 10;
                number2 += bo2 - '0';
            }
            else {
                sum2 += number2;
                number2 = 0;
                state2 = 0;
            }
            break;
        }
    }
    if (state2 == 1) {
        sum2 += number2;
    }
    printf("Total of Bottles Plastic Turbid to changed: %.2f kg\n", sum2);
    fclose(BPT);
    
    // Bottle Plastic Color
    	float sum3 = 0, number3, bo3 = 0;
        int state3 = 0;
    if ((BPC = fopen("amonutBPC.txt","r")) == NULL)
        return -1;
    while ((bo3 = fgetc(BPC)) != EOF) {
        switch(state3) {
        case 0: // processing text
            if (isdigit(bo3)) {
                number3 = bo3 - '0';
                state3 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo3)) {
                number3 *= 10;
                number3 += bo3 - '0';
            }
            else {
                sum3 += number3;
                number3 = 0;
                state3 = 0;
            }
            break;
        }
    }
    if (state3 == 1) {
        sum3 += number3;
    }
    printf("Total of Bottles Plastic Color to changed: %.2f kg\n", sum3);
    fclose(BPC);
    
    // Scrap
    	float sum4 = 0, number4, bo4 = 0;
        int state4 = 0;
        if ((SC = fopen("amonutSC.txt","r")) == NULL)
        return -1;
    while ((bo4 = fgetc(SC)) != EOF) {
        switch(state4) {
        case 0: // processing text
            if (isdigit(bo4)) {
                number4 = bo4 - '0';
                state4 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo4)) {
                number4 *= 10;
                number4 += bo4 - '0';
            }
            else {
                sum4 += number4;
                number4 = 0;
                state4 = 0;
            }
            break;
        }
    }
    if (state4 == 1) {
        sum4 += number4;
    }
    printf("Total of Scraps to changed: %.2f kg\n", sum4);
    fclose(SC);
    
    // Paper,Book
    	float sum5 = 0, number5, bo5 = 0;
        int state5 = 0;
        if ((PAB = fopen("amonutPAB.txt","r")) == NULL)
        return -1;
    while ((bo5 = fgetc(PAB)) != EOF) {
        switch(state5) {
        case 0: // processing text
            if (isdigit(bo5)) {
                number5 = bo5 - '0';
                state5 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo5)) {
                number5 *= 10;
                number5 += bo5 - '0';
            }
            else {
                sum5 += number5;
                number5 = 0;
                state5 = 0;
            }
            break;
        }
    }
    if (state5 == 1) {
        sum5 += number5;
    }
    printf("Total of Papers,Books to changed: %.2f kg\n", sum5);
    fclose(PAB);
    
     // Bronze
     float sum6 = 0, number6, bo6 = 0;
        int state6 = 0;
      if ((BZ = fopen("amonutBZ.txt","r")) == NULL)
        return -1;
    while ((bo6 = fgetc(BZ)) != EOF) {
        switch(state6) {
        case 0: // processing text
            if (isdigit(bo6)) {
                number6 = bo6 - '0';
                state6 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo6)) {
                number6 *= 10;
                number6 += bo6 - '0';
            }
            else {
                sum6 += number6;
                number6 = 0;
                state6 = 0;
            }
            break;
        }
    }
    if (state6 == 1) {
        sum6 += number6;
    }
    printf("Total of Bronzes to changed: %.2f kg\n", sum6);
    fclose(BZ);
    
    // CD disk
   float sum7 = 0, number7, bo7 = 0;
        int state7 = 0;
      if ((CDD = fopen("amountCDD.txt","r")) == NULL)
        return -1;
    while ((bo7 = fgetc(CDD)) != EOF) {
        switch(state7) {
        case 0: // processing text
            if (isdigit(bo7)) {
                number7 = bo7 - '0';
                state7 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo7)) {
                number7 *= 10;
                number7 += bo7 - '0';
            }
            else {
                sum7 += number7;
                number7 = 0;
                state7 = 0;
            }
            break;
        }
    }
    if (state7 == 1) {
        sum7 += number7;
    }
    printf("Total of CD disk to changed: %.2f kg\n", sum7);
    fclose(CDD);
    
    // DVD disk
   float sum8 = 0, number8, bo8 = 0;
        int state8 = 0;
      if ((DVDD = fopen("amonutDVDD.txt","r")) == NULL)
        return -1;
    while ((bo8 = fgetc(DVDD)) != EOF) {
        switch(state8) {
        case 0: // processing text
            if (isdigit(bo8)) {
                number8 = bo8 - '0';
                state8 = 1;
            }
            break;
        case 1: // processing number
            if (isdigit(bo8)) {
                number8 *= 10;
                number8 += bo8 - '0';
            }
            else {
                sum8 += number8;
                number8 = 0;
                state8 = 0;
            }
            break;
        }
    }
    if (state8 == 1) {
        sum8 += number8;
    }
    printf("Total of DVD disk to changed: %.2f kg\n", sum8);
    fclose(DVDD);
	}
