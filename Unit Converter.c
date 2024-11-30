#include<stdio.h>
#include<conio.h>
int main()
{
 int Temperaturechoice,Currencychoice,Masschoice,Timechoice,Lengthchoice;
 char category;
 char choice;
 int k=0;
 float F,C,K,Rupee,Dollar,RMB,Euro,Ounce,Pound,Gram,Day,Min,Sec,Hr;
 float M,CM,KM,Feet;
 float FtoC,CtoF,FtoK,CtoK,KtoF,KtoC;
 float RupeetoDollar,RupeetoRMB,RupeetoEuro,RMBtoEuro,EurotoRupee;
 float DollartoRupee,DollartoRMB,DollartoEuro,RMBtoRupee,RMBtoDollar;
 float EurotoDollar,EurotoRMB;
 float OuncetoGram,OuncetoPound,GramtoOunce,GramtoPound;
 float PoundtoOunce,PoundtoGram;
 float SectoMin,SectoHr,MintoSec,MintoHr,HrtoSec,HrtoMin,DaytoSec,DaytoMin;
 float DaytoHr,SectoDay,MintoDay,HrtoDay;
 float MtoCM,MtoKM,MtoFeet,CMtoM,CMtoKM,CMtoFeet,KMtoFeet,KMtoM,KMtoCM;
 float FeettoCM,FeettoM,FeettoKM;
 //clrscr();
 while (k==0)
 {
  printf("\n\n----- Welcome to Unit Convertor!!! -----\n\n");
  printf("Here is a list of conversion to choose from:\n");
  X:
  printf("Temperatue(T)\n");
  printf("Mass(M)\n");
  printf("Currency(c)\n");
  printf("Time(t)\n");
  printf("Length(L)\n");
  printf("\nPlease enter ur category:");
  fflush(stdin);
  scanf("%s",&category);
  if(category=='T')
  {
   printf("\n\n\n***** Welcome to Temperature Convertor!!! *****\n\n\n");
   x:
   printf("1.Farenhit to Celsius\n");
   printf("2.Celsius to Farenhit\n");
   printf("3.Kelvin to Celsius\n");
   printf("4.Kelvin to Farenhit\n");
   printf("5.Celsius to Kelvin\n");
   printf("6.Farenhit to Kelvin\n");
   scanf("%d",&Temperaturechoice);
   switch(Temperaturechoice)
   {
    case 1:
	  printf("Please enter the temperature in Farenhit:\n");
	  scanf("%f",&F);
	  FtoC=(F-32)*(5.0/9.0f);
	  printf("Temperature in celsius = %f",FtoC);
	  break;
    case 2:
	  printf("Please enter the temperature in Celsius:\n");
	  scanf("%f",&C);
	  CtoF=(((9.0/5.0f)*C)+32);
	  printf("Temperature in farenhit = %f",CtoF);
	  break;
    case 3:
	  printf("Please enter the temperature in Kelvin:\n");
	  scanf("%f",&K);
	  KtoC=K-273.15;
	  printf("Temperature in celsius = %f",KtoC);
	  break;
    case 4:
	  printf("Please enter the temperature in Kelvin:\n");
	  scanf("%f",&K);
	  KtoF=((9.0/5.0f)*(K-273.15)+32);
	  printf("Temperature in farenhit = %f",KtoF);
	  break;
    case 5:
	  printf("Please enter the temperature in Celsius:\n");
	  scanf("%f",&C);
	  CtoK=C+273.15;
	  printf("Temperature in Kelvin = %f",CtoK);
	  break;
    case 6:
	  printf("Please enter the temperature in Farenhit:\n");
	  scanf("%f",&F);
	  FtoK=((5.0/9.0f)*(F-32)+273.15);
	  printf("Temperature in kelvin = %f",FtoK);
	  break;
    default:
	  printf("Enter valid temperaturechoice\n");
          goto x;
    }
   }
   else
   if(category=='M')
   {
    printf("\n\n\n***** Welcome to Mass convertor!!! *****\n\n\n");
    y:
    printf("1.Ounce to Gram\n");
    printf("2.Ounce to Pound\n");
    printf("3.Gram to Ounce\n");
    printf("4.Gram to Pound\n");
    printf("5.Pound to Ounce\n");
    printf("6.Pound to Gram\n");
    scanf("%d",&Masschoice);
    switch(Masschoice)
    {
	case 1 :
	      printf("Please enter the mass in Ounce\n");
	      scanf("%f",&Ounce);
	      OuncetoGram=Ounce*28.3495;
	      printf("Mass in Gram = %f",OuncetoGram);
	      break;
	case 2 :
	      printf("Please enter the mass in Ounce\n");
	      scanf("%f",&Ounce);
	      OuncetoPound=Ounce*0.0625;
	      printf("Mass in Pound = %f",OuncetoPound);
	      break;
	case 3 :
	      printf("Please enter the mass in Gram\n");
	      scanf("%f",&Gram);
	      GramtoOunce=Gram*0.035274;
	      printf("Mass in Ounce = %f",GramtoOunce);
	      break;
	case 4 :
	      printf("Please enter the mass in Gram\n");
	      scanf("%f",&Gram);
	      GramtoPound=Gram*0.00220462;
	      printf("Mass in Pound = %f",GramtoPound);
	      break;
	case 5 :
	      printf("Please enter the mass in Pound\n");
	      scanf("%f",&Pound);
	      PoundtoOunce=Pound*16.0f;
	      printf("Mass in Ounce = %f",PoundtoOunce);
	      break;
	case 6 :
	      printf("Please enter the mass in Pound\n");
	      scanf("%f",&Pound);
	      PoundtoGram=Pound*453.592;
	      printf("Mass in Gram = %f",PoundtoGram);
	      break;
       default :
	     printf("Enter valid masschoice\n");
             scanf("%d",&Masschoice);
             goto y;
     }
    }
    else
     if(category=='c')
     {
      printf("\n\n\n***** Welcome to Currency convertor!!! *****\n\n\n");
      z:
      printf("1.Rupee to Dollar\n");
      printf("2.Rupee to RMB\n");
      printf("3.Rupee to Euro\n");
      printf("4.Dollar to Rupee\n");
      printf("5.Dollar to RMB\n");
      printf("6.Dollar to Euro\n");
      printf("7.RMB to Rupee\n");
      printf("8.RMB to Dollar\n");
      printf("9.RMB to Euro\n");
      printf("10.Euro to Rupee\n");
      printf("11.Euro to RMB\n");
      printf("12.Euro to Dollar\n");
      scanf("%d",&Currencychoice);
      switch(Currencychoice)
      {
         case 1 :
	        printf("Please enter currency in Rupee\n");
	        scanf("%f",&Rupee);
	        RupeetoDollar=Rupee*0.013;
	        printf("Currency in dollar = %f",RupeetoDollar);
	        break;
         case 2 :
	        printf("Please enter currency in Rupee\n");
	        scanf("%f",&Rupee);
	        RupeetoRMB=Rupee*0.085;
	        printf("Currency in RMB = %f",RupeetoRMB);
	        break;
         case 3 :
	        printf("Please enter currency in Rupee\n");
	        scanf("%f",&Rupee);
	        RupeetoEuro=Rupee*0.012;
	        printf("Currency in Euro = %f",RupeetoEuro);
	        break;
         case 4 :
	        printf("Please enter currency in Dollar\n");
	        scanf("%f",&Dollar);
	        DollartoRupee=Dollar*74.84;
	        printf("Currency in Rupee = %f",DollartoRupee);
	        break;
         case 5 :
	        printf("Please enter currency in Dollar\n");
	        scanf("%f",&Dollar);
	        DollartoRMB=Dollar*6.33;
	        printf("Currency in RMB = %f",DollartoRMB);
	        break;
         case 6 :
	        printf("Please enter currency in Dollar\n");
	        scanf("%f",&Dollar);
	        DollartoEuro=Dollar*0.88;
	        printf("Currency in Euro = %f",DollartoEuro);
	        break;
         case 7 :
	        printf("Please enter currency in RMB\n");
	        scanf("%f",&RMB);
	        RMBtoRupee=RMB*11.81;
	        printf("Currency in Rupee = %f",RMBtoRupee);
	        break;
         case 8 :
	        printf("Please enter currency in RMB\n");
                scanf("%f",&RMB);
	        RMBtoDollar=RMB*0.16;
	        printf("Currency in Dollar = %f",RMBtoDollar);
	        break;
         case 9 :
	        printf("Please enter currency in RMB\n");
	        scanf("%f",&RMB);
	        RMBtoEuro=RMB*0.14;
	        printf("Currency in Euro = %f",RMBtoEuro);
	        break;
         case 10 :
	         printf("Please enter currency in Euro\n");
	         scanf("%f",&Euro);
	         EurotoRupee=Euro*85.10;
	         printf("Currency in Rupee = %f",EurotoRupee);
	         break;
         case 11 :
	         printf("Please enter currency in Euro\n");
	         scanf("%f",&Euro);
	         EurotoRMB=Euro*7.20;
	         printf("Currency in RMB = %f",EurotoRMB);
	         break;
         case 12 :
	         printf("Please enter currency in Euro\n");
	         scanf("%f",&Euro);
	         EurotoDollar=Euro*1.14;
	         printf("Currency in Dollar = %f",EurotoDollar);
	         break;
         default :
	         printf("Enter valid currencychoice\n");
                 goto z;
	}
       }
       else
	if(category=='t')
	{
	 printf("\n\n\n***** Welcome to Time convertor!!!! *****\n\n\n");
	 a:
	 printf("1.Sec to Min\n");
	 printf("2.Sec to Hr\n");
	 printf("3.Min to Sec\n");
	 printf("4.Min to Hr\n");
	 printf("5.Hr to Sec\n");
	 printf("6.Hr to Min\n");
	 printf("7.Day to Sec\n");
	 printf("8.Day to Min\n");
	 printf("9.Day to Hr\n");
	 printf("10.Sec to Day\n");
	 printf("11.Min to Day\n");
	 printf("12.Hr to Day\n");
	 scanf("%d",&Timechoice);
	 switch(Timechoice)
	 {
	   case 1 :
		printf("Please enter time in seconds\n");
		scanf("%f",&Sec);
		SectoMin=Sec/60.0f;
		printf("Time in Minutes = %f",SectoMin);
		break;
	   case 2 :
		printf("Please enter time in seconds\n");
		scanf("%f",&Sec);
		SectoHr=Sec/3600.0f;
		printf("Time in hours = %f",SectoHr);
		break;
	   case 3 :
		printf("Please enter time in minutes\n");
		scanf("%f",&Min);
		MintoSec=Min*60.0f;
		printf("Time in seconds = %f",MintoSec);
		break;
	   case 4 :
		printf("Please enter time in minutes\n");
		scanf("%f",&Min);
		MintoHr=Min/60.0f;
		printf("Time in hours = %f",MintoHr);
		break;
	   case 5 :
		printf("Please enter time in hours\n");
		scanf("%f",&Hr);
		HrtoSec=Hr*3600.0f;
		printf("Time in seconds = %f",HrtoSec);
		break;
	   case 6 :
		printf("Please enter time in hours\n");
		scanf("%f",&Hr);
		HrtoMin=Hr*60.0f;
		printf("Time in minutes = %f",HrtoMin);
		break;
	   case 7 :
		printf("Please enter time in days\n");
		scanf("%f",&Day);
		DaytoSec=Day*86400.0f;
		printf("TIme in seconds = %f",DaytoSec);
		break;
	   case 8 :
		printf("Please enter time in days\n");
		scanf("%f",&Day);
		DaytoMin=Day*1440.0f;
		printf("Time in minutes = %f",DaytoMin);
		break;
	   case 9 :
		printf("Please enter time in days\n");
		scanf("%f",&Day);
		DaytoHr=Day*24.0f;
		printf("Time in hour = %f",DaytoHr);
		break;
	   case 10 :
		printf("Please enter time in seconds\n");
		scanf("%f",&Sec);
		SectoDay=Sec/86400.0f;
		printf("Time in days = %f",SectoDay);
		break;
	   case 11 :
		printf("Please enter time in minutes\n");
		scanf("%f",&Min);
		MintoDay=Min/1440.0f;
		printf("Time in days = %f",MintoDay);
		break;
	   case 12 :
		printf("Please enter time in hours\n");
		scanf("%f",&Hr);
		HrtoDay=Hr/24.0f;
		printf("Time in days = %f",HrtoDay);
		break;
	   default :
		printf("Enter valid timechoice\n");
                goto a;
	  }
	 }
	 else
	  if(category=='L')
	   {
	    printf("\n\n\n***** Welcome to Length convertor!!! *****\n\n\n");
            b:
	    printf("1.KM to M\n");
	    printf("2.KM to CM\n");
	    printf("3.KM to Feet\n");
	    printf("4.M to CM\n");
	    printf("5.M to KM\n");
	    printf("6.M to Feet\n");
	    printf("7.CM to M\n");
	    printf("8.CM to Km\n");
	    printf("9.CM to Feet\n");
	    printf("10.Feet to M\n");
	    printf("11.Feet to CM\n");
	    printf("12.Feet to KM\n");
	    scanf("%d",&Lengthchoice);
            switch(Lengthchoice)
	    {
	      case 1 :
		    printf("Please enter length in kilometers\n");
		    scanf("%f",&KM);
		    KMtoM=KM*1000.0f;
		    printf("Length in meters = %f",KMtoM);
		    break;
	      case 2 :
		    printf("Please enter length in kilometers\n");
		    scanf("%f",&KM);
		    KMtoCM=KM*100000.0f;
		    printf("Length in centimeters = %f",KMtoCM);
		    break;
	      case 3 :
		    printf("Please enter length in kilometers\n");
		    scanf("%f",&KM);
		    KMtoFeet=KM*3280.84;
		    printf("Length in feet = %f",KMtoFeet);
		    break;
	      case 4 :
		    printf("Please enter length in meters\n");
		    scanf("%f",&M);
		    MtoCM=M*100.0f;
		    printf("Length in centimeters = %f",MtoCM);
		    break;
	      case 5 :
		    printf("Please enter length in meters\n");
		    scanf("%f",&M);
		    MtoKM=M*0.001;
		    printf("Length in kilometers = %f",MtoKM);
		    break;
	      case 6 :
		    printf("Please enter length in meters\n");
		    scanf("%f",&M);
		    MtoFeet=M*3.28084;
		    printf("Length in feet = %f",MtoFeet);
		    break;
	      case 7 :
		    printf("Please enter length in centimeters\n");
		    scanf("%f",&CM);
		    CMtoM=CM*0.01;
		    printf("Length in meters = %f",CMtoM);
		    break;
	      case 8 :
		    printf("Please enter length in centimeters\n");
		    scanf("%f",&CM);
		    CMtoKM=CM*0.00001;
		    printf("Length in kilometers = %f",CMtoKM);
		    break;
	      case 9 :
		    printf("Please enter length in centimeters\n");
		    scanf("%f",&CM);
		    CMtoFeet=CM*0.0328084;
		    printf("Length in Feet = %f",CMtoFeet);
		    break;
	      case 10 :
		    printf("Please enter length in feet\n");
		    scanf("%f",&Feet);
		    FeettoM=Feet*0.3048;
		    printf("Length in meter = %f",FeettoM);
		    break;
	      case 11 :
		    printf("Please enter length in feet\n");
		    scanf("%f",&Feet);
		    FeettoCM=Feet*30.48;
		    printf("Length in centimeters = %f",FeettoCM);
		    break;
	      case 12 :
		    printf("Please enter length in feet\n");
		    scanf("%f",&Feet);
		    FeettoKM=Feet*0.0003048;
		    printf("Length in kilometers = %f",FeettoKM);
		    break;
	      default :
		    printf("Enter valid lengthchoice\n");
                    goto b;
	     }
	    }
	    else
            {
	      printf("Please enter correct category\n");
	      goto X;
            }
  printf("\n\n\n\n Do you want to use Unit Convertor again?\n");
  printf("Enter ur choice(y/n)\n");
  fflush(stdin);
  scanf("%s",&choice);
  if(choice=='n' || choice=='N')
   k=1;
 }
 printf("\n\nThank you for using unit convertor!!!!!!");
 getch();
}
