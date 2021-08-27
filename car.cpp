#include<stdio.h>
int main()
{
	char name[20];
	int age;
	float time;
	int startdate;
	char month;
	int enddate;
	int choice;
	printf("\n\n\n\n");
	printf("                                          -------------------------\n");
	printf("                                              WELCOME TO LINGO!!!!         \n");
	printf("                                          -------------------------\n");
	printf("                 \n\n                                          FREEDOM ON WHEELS.....\n");
	printf(" \n____________________________________________\n");
	printf("            _________  \n");
	printf("            |       |\n");
	printf("          ---       ---\n");
	printf("   _______/___O___O___|__________________________\n\n");
	
	printf("                              ENTER UR NAME:");//take the user's name
	scanf("%s",&name);
	printf("                              ENTER UR AGE:");//take the user's age
	scanf("%d", &age); 
	printf("                                   YOU ARE SUCCESSFULLY LOGGED IN!!\n\n\n\n\n");
	printf("                                    SELECT UR CAR TYPE:\n");

	printf("\n%s\n%s\n", "Please type 1 for \"2 wheelers\"","Please type 2 for\"4 wheelers\"");
  scanf("%d", &choice);
  if (choice== 1){  
  
  printf("HERE ARE A FEW OPTIONS:\n");
  printf("\n%s\n%s\n%s\n", "Please type 3 for \"NINJA(KAWASAKI) MODEL NO.87586)\"","Please type 4 for \"KATANA(SUZUKI) MODEL NO.4334)\"","Please type 5 for \"BULLET(ROYAL ENFIELD) MODEL NO.67897)\"");
  scanf("%d", &choice);
  if (choice== 3)
  printf("You have selected NINJA(KAWASAKI) MODEL NO.87586. ");
  if (choice== 4)
  printf("You have selected KATANA(SUZUKI) MODEL NO.4334) ");
  if (choice== 5)
  printf("You have selected BULLET(ROYAL ENFIELD)  MODEL NO.67897");
}
if (choice==2)
{
	
	printf("HERE ARE A FEW OPTIONS:\n");
    printf("\n%s\n%s\n", "Please type 6 for \"5 seater\"","Please type 7 for\"8 seater\"");
	scanf("%d", &choice);
	if (choice== 6){
	
	printf("\n%s\n%s\n", "Please type 8 for \"MARUTISUZUKI ALTO  MODEL NO. 12346\"","Please type 9 for\"MARUTI SUZUKI SWIFT  MODEL NO. 68689\"");
	scanf("%d", &choice);
	if (choice==8)
	printf("YOU HAVE SELECTED MARUTISUZUKI ALTO  MODEL NO. 12346");
	if (choice==9)
	printf("YOU HAVE SELECTED MARUTI SUZUKI SWIFT  MODEL NO.68689");
	
	}
	if (choice==7)
	{printf("YOUR OPTIONS:\n");
	printf("\n%s\n%s\n", "Please type 10 for \"CHEVROLET TAVERA  MODEL NO. 7657\"","Please type 11 for\"MAHINDRA SCORPIO  MODEL NO. 7103\"");
	scanf("%d", &choice);
	if (choice==10)
	printf("YOU HAVE SELECTED CHEVROLET TAVERA  MODEL NO. 7657");
	if (choice==11)
	printf("YOU HAVE SELECTED  MAHINDRA SCORPIO MODEL NO.7103");
	}
}
printf("                                             Enter month:");
scanf("%s",&month);
printf("                                             Enter start date:");
scanf("%d",&startdate);
printf("                                             Enter end date:");
scanf("%d", &enddate);
printf("                                             Enter pickup time:");
scanf("%f", &time);
printf("                          \n\n\n\n\n         YOU HAVE SUCCESSFULLY BOOKED YOUR CAR!!!\n");
if (choice==3){

printf("   -------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("                             NAME = %s\n", name);
printf("                              AGE= %d\n", age);
printf("                              STARTDATE = %d\n",startdate);
printf("                              ENDDATE  = %d\n", enddate);
printf("                              CAR TYPE:NINJA(KAWASAKI) MODEL NO.87586.\n");
printf("------------------------------------------------------------------------------------------------------------------------\n");
}
if (choice==4)
{
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                         NAME = %s\n", name);
	printf("                          AGE= %d\n", age);
	printf("                          STARTDATE = %d\n",startdate);
	printf("                          ENDDATE  = %d\n", enddate);
	printf("                          CAR TYPE:KATANA(SUZUKI) MODEL NO.4334\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
if (choice==5)
{
	printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                         NAME = %s\n", name);
	printf("                          AGE= %d\n", age);
	printf("                          STARTDATE = %d\n",startdate);
	printf("                          ENDDATE  = %d\n", enddate);
	printf("                          CAR TYPE:BULLET(ROYAL ENFIELD)  MODEL NO.67897\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
}
if (choice==8)
{
	printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                         NAME = %s\n", name);
	printf("                          AGE= %d\n", age);
	printf("                          STARTDATE = %d\n",startdate);
	printf("                          ENDDATE  = %d\n", enddate);
	printf("                          CAR TYPE:MARUTISUZUKI ALTO  MODEL NO. 12346\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
if (choice==9)
{
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                         NAME = %s\n", name);
	printf("                           AGE= %d\n", age);
	printf("                           STARTDATE = %d\n",startdate);
	printf("                           ENDDATE  = %d\n", enddate);
	printf("                           CAR TYPE:MARUTI SUZUKI SWIFT  MODEL NO.68689\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
if (choice==10)
{
	printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                         NAME = %s\n", name);
	printf("                          AGE= %d\n", age);
	printf("                          STARTDATE = %d\n",startdate);
	printf("                          ENDDATE  = %d\n", enddate);
	printf("                          CAR TYPE:CHEVROLET TAVERA  MODEL NO. 7657\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
}
if (choice==11)
{
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                          NAME = %s\n", name);
	printf("                           AGE= %d\n", age);
	printf("                           STARTDATE = %d\n",startdate);
	printf("                           ENDDATE  = %d\n", enddate);
	printf("                           CAR TYPE:MAHINDRA SCORPIO MODEL NO.7103\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
printf("YOUR LOGINID: 567843\n");
printf("  YOUR PASSWORD:abc@1234\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n                  FOR FURTHER PAYMENT DETAILS LOGIN WITH UR LOGIN ID AND PASSWORD.\n\n");
printf("                                                         THANK YOU!!");
	return 0;
}

