#include <stdio.h>
#include <stdlib.h>
#include<time.h>


static float am=0;
static float am1=0,am2=0,am3=0,am4=0;

//truck
int li[100];
static int z = 0;
int ran[100];
static int count = 0;
int ranh;
static int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0;


//car
int li1[100];
static int z1 = 0;
int ran1[100];
int ranh1;
static int count1 = 0;
static int t11=0,t21=0,t31=0,t41=0,t51=0,t61=0;

//cng
int li2[100];
static int z2 = 0;
int ran2[100];
static int count2 = 0;
int ranh2;
static int t12=0,t22=0,t32=0,t42=0,t52=0,t62=0;


//truck
int li3[100];
static int z3 = 0;
int ran3[100];
static int count3 = 0;
int ranh3;
static int t13=0,t23=0,t33=0,t43=0,t53=0,t63=0;




int main()
{
     printf("************************************Welcome To Parking Management*********************************\n");
    char c[10],g[]="Mahi",m[]="1234";

    printf("Enter the user name: \n");
    gets(c);
    int i;
     char ch1, password[10];
     printf("Enter your password: \n");
     for(i=0; i<10; i++)
     {
             ch1=getch();
             password[i]=ch1;

             if(ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
             if(ch1 == 13)
                   break;
      }
      password[i]='\0';

   if (strcmp(c,g) == 0)
   {
   if(strcmp(password,m) == 0){
      system("cls");
      jc();
   }
   else{
    printf("wrong password");

   }
   }
   else{
      printf("please check your email");}
    return 0;
}



   int jc()
   {
    printf("1.Enter Vehicle \n");
    printf("2.Check Out \n");
    printf("3.vehicle List  \n");
    printf("4.Total Income  \n");
    int num;
    scanf("%d",&num);
    system("cls");
        switch (num) {
            case 1:
                type();
                break;
            case 2:
                check();
                break;
            case 3:
                list();
                break;
            case 4:
                amount();
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
   }

int type()
{
    int typ;
    printf("Enter Vehicle Type Number (1.Truck/2.Car/3.Cng/4.Bike): \n");
    scanf("%d",&typ);

    switch (typ) {
            case 1:
                truck();

                break;
            case 2:
                car();
                break;
            case 3:
                cng();
                break;
            case 4:
                bike();
                break;

            default:
                printf("Wrong Type Number");
                break;
        }


}


//truck entry
    int truck()
    {
        //license number entry
        printf("Enter truck's license number:\n");
        scanf("%d",&li[z]);

        //random number generate
        srand(time(0));
        ranh = rand();
        ran[z]= ranh;


        //count total truck
        count++;


        //ENTRY TIME
        time_t t;
        t = time(NULL);
        struct tm tm;
	    tm = *localtime(&t);

        t1=tm.tm_hour;
        t2=tm.tm_min;


        printf("Your license number is: %d \n", li[z]);
        printf("Your Password is: %d \n", ranh);
        printf("Total Truck: %d \n",count);
        printf("Hour: %d \n",t1);
        printf("Minute: %d \n",t2);
        z++;




        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }



   ///car entry

    int car()
    {
        //license number entry
        printf("Enter car's license number:\n");
        scanf("%d",&li1[z1]);

        //random number generate
        srand(time(0));
        ranh1 = rand();
        ran1[z1]= ranh1;


        //count total truck
        count1++;


        //ENTRY TIME
        time_t t;
        t = time(NULL);
        struct tm tm;
	    tm = *localtime(&t);

        t11=tm.tm_hour;
        t21=tm.tm_min;


        printf("Your license number is: %d \n", li1[z1]);
        printf("Your Password is: %d \n", ranh1);
        printf("Total car: %d \n",count1);
        printf("Hour: %d \n",t11);
        printf("Minute: %d \n",t21);
        z1++;




        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }



     //cng entry
    int cng()
    {
        //license number entry
        printf("Enter cng's license number:\n");
        scanf("%d",&li2[z2]);

        //random number generate
        srand(time(0));
        ranh2 = rand();
        ran2[z2]= ranh2;


        //count total truck
        count2++;


        //ENTRY TIME
        time_t t;
        t = time(NULL);
        struct tm tm;
	    tm = *localtime(&t);

        t12=tm.tm_hour;
        t22=tm.tm_min;


        printf("Your license number is: %d \n", li2[z2]);
        printf("Your Password is: %d \n", ranh2);
        printf("Total cng: %d \n",count2);
        printf("Hour: %d \n",t12);
        printf("Minute: %d \n",t22);
        z2++;




        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }



     //bike entry
    int bike()
    {
        //license number entry
        printf("Enter bike's license number:\n");
        scanf("%d",&li3[z3]);

        //random number generate
        srand(time(0));
        ranh3 = rand();
        ran3[z3]= ranh3;


        //count total truck
        count3++;


        //ENTRY TIME
        time_t t;
        t = time(NULL);
        struct tm tm;
	    tm = *localtime(&t);

        t13=tm.tm_hour;
        t23=tm.tm_min;


        printf("Your license number is: %d \n", li3[z3]);
        printf("Your Password is: %d \n", ranh3);
        printf("Total Bike: %d \n",count3);
        printf("Hour: %d \n",t13);
        printf("Minute: %d \n",t23);
        z3++;




        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }






//For all type of vehicles
     int check()
     {
         int ve;
         printf("Which type of vehicle you want to checkout(1.Truck/2.Car/3.Cng/4.Bike)? \n");
         printf("Enter number the type of vehicle: \n");
         scanf("%d",&ve);
         system("cls");

        switch (ve) {
            case 1:
                checkout();
                break;
            case 2:
                checkout1();
                break;
            case 3:
                checkout2();
                break;
            case 4:
                checkout3();
                break;


            default:
                printf("Invalid");
                break;
        }
        return 0;
     }









//truck checkout
     int checkout()
     {
         int a;
         int q;
         printf("Enter your truck license's number: \n");
         scanf("%d",&a);
         for(int i=0;i<=z;i++)
         {
             if(li[i]==a)
             {
                      printf("Enter your password: \n");
                         scanf("%d",&q);
                         if(ran[i]==q)
                         {
                             //exit TIME
                             time_t t;
                             t = time(NULL);
                             struct tm tm;
	                         tm = *localtime(&t);

                             t3=tm.tm_hour;
                             t4=tm.tm_min;
                             t5=t3;
                             t6=t4;

                             printf("Exit time: \n");
                             printf("hour:%d \n",t5);
                             printf("minute:%d \n",t6);

                             t3=t3-t1;
                             t4=t4-t2;

                             printf("Total stay time: \n");
                             printf("Hour: %d \n",t3);
                             printf("Minute: %d \n",t4);

                             int h1;
                             if(t3!=0)
                             {
                                 t3=t3*60;
                                 h1=t3;
                                 t4=h1+t4;
                             }

                             float k=t4*.83;
                             printf("amount: %.2f \n",k);
                             am=am+k;
                             am1=k;
                             count--;
                             break;
                         }
                         else{
                            printf("Wrong Password \n");
                            break;
                         }

            }


             else{
                printf("Wrong license Number \n");
                break;
             }

         }

        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }



  ///car checkout
    int checkout1()
     {
         int a;
         int q;
         printf("Enter your car license's number: \n");
         scanf("%d",&a);
         for(int i=0;i<=z1;i++)
         {
             if(li1[i]==a)
             {
                      printf("Enter your password: \n");
                         scanf("%d",&q);
                         if(ran1[i]==q)
                         {
                             //exit TIME
                             time_t t;
                             t = time(NULL);
                             struct tm tm;
	                         tm = *localtime(&t);

                             t31=tm.tm_hour;
                             t41=tm.tm_min;
                             t51=t31;
                             t61=t41;

                             printf("Exit time: \n");
                             printf("hour:%d \n",t51);
                             printf("minute:%d \n",t61);

                             t31=t31-t11;
                             t41=t41-t21;

                             printf("Total stay time: \n");
                             printf("Hour: %d \n",t31);
                             printf("Minute: %d \n",t41);

                             int h1;
                             if(t31!=0)
                             {
                                 t31=t31*60;
                                 h1=t31;
                                 t41=h1+t41;
                             }

                             float k1=t41*0.5;
                             printf("amount: %.2f \n",k1);
                             am=am+k1;
                             am2=k1;
                             count1--;
                             break;
                         }
                         else{
                            printf("Wrong Password \n");
                            break;
                         }

            }


             else{
                printf("Wrong license Number \n");
                break;
             }

         }

        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }

//cng checkout
     int checkout2()
     {
         int a;
         int q;
         printf("Enter your cng license's number: \n");
         scanf("%d",&a);
         for(int i=0;i<=z2;i++)
         {
             if(li2[i]==a)
             {
                      printf("Enter your password: \n");
                         scanf("%d",&q);
                         if(ran2[i]==q)
                         {
                             //exit TIME
                             time_t t;
                             t = time(NULL);
                             struct tm tm;
	                         tm = *localtime(&t);

                             t32=tm.tm_hour;
                             t42=tm.tm_min;
                             t52=t32;
                             t62=t42;

                             printf("Exit time: \n");
                             printf("hour:%d \n",t52);
                             printf("minute:%d \n",t62);

                             t32=t32-t12;
                             t42=t42-t22;

                             printf("Total stay time: \n");
                             printf("Hour: %d \n",t32);
                             printf("Minute: %d \n",t42);

                             int h1;
                             if(t32!=0)
                             {
                                 t32=t32*60;
                                 h1=t32;
                                 t42=h1+t42;
                             }

                             float k2=t42*0.42;
                             printf("amount: %.2f \n",k2);
                             am=am+k2;
                             am3=k2;
                             count2--;
                             break;
                         }
                         else{
                            printf("Wrong Password \n");
                            break;
                         }

            }


             else{
                printf("Wrong license Number \n");
                break;
             }

         }

        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }



  //bike checkout
     int checkout3()
     {
         int a;
         int q;
         printf("Enter your bike license's number: \n");
         scanf("%d",&a);
         for(int i=0;i<=z3;i++)
         {
             if(li3[i]==a)
             {
                      printf("Enter your password: \n");
                         scanf("%d",&q);
                         if(ran3[i]==q)
                         {
                             //exit TIME
                             time_t t;
                             t = time(NULL);
                             struct tm tm;
	                         tm = *localtime(&t);

                             t33=tm.tm_hour;
                             t43=tm.tm_min;
                             t53=t33;
                             t63=t43;

                             printf("Exit time: \n");
                             printf("hour:%d \n",t53);
                             printf("minute:%d \n",t63);

                             t33=t33-t13;
                             t43=t43-t23;

                             printf("Total stay time: \n");
                             printf("Hour: %d \n",t33);
                             printf("Minute: %d \n",t43);

                             int h1;
                             if(t33!=0)
                             {
                                 t33=t33*60;
                                 h1=t33;
                                 t43=h1+t43;
                             }

                             float k3=t43*0.33;
                             printf("amount: %.2f \n",k3);
                             am=am+k3;
                             am4=k3;
                             count3--;
                             break;
                         }
                         else{
                            printf("Wrong Password \n");
                            break;
                         }

            }


             else{
                printf("Wrong license Number \n");
                break;
             }

         }

        printf("Press any key to back.......");
        getch();
        system("cls");
        jc();


     }




//All vehicle list

int list()
{
    store();
    store1();
    store2();
    store3();
    show();



}

//truck
int show()
{
    FILE * fPtr;

    char ch;
    fPtr = fopen("truck.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("List of trucks: \n\n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);
    show1();
    printf("Press any key to back.......");
        getch();
        system("cls");
        jc();
}



//car
int show1()
{
    FILE * fPtr;

    char ch;
    fPtr = fopen("car.txt", "r");

    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("\n\nList of Cars: \n\n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);
    show2();
    printf("Press any key to back.......");
        getch();
        system("cls");
        jc();
}



//cng
int show2()
{
    FILE * fPtr;

    char ch;
    fPtr = fopen("cng.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("\n\nList of Cngs: \n\n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);
    show3();
    printf("Press any key to back.......");
        getch();
        system("cls");
        jc();
}


//bike
int show3()
{
    FILE * fPtr;

    char ch;
    fPtr = fopen("bike.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("\n\nList of bikes: \n\n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);
    printf("\n\n\n\n");
    printf("Press any key to back.......");
        getch();
        system("cls");
        jc();
}






//truck store

int store()
{
    FILE *fptr;
   fptr = fopen("truck.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr, "SerialNo\tEntryTime\tLicenseNumber\tPassword\tExit Time \n");

  for(int i=0;i<count;i++)
  {

     fprintf(fptr, "%d\t\t", i+1);
     fprintf(fptr, "%d:%d\t\t\t", t1, t2);

     fprintf(fptr,"%d\t",li[i]);
     fprintf(fptr,"%d\t\t",ran[i]);
     fprintf(fptr, "%d:%d\t", t5, t6);
     fprintf(fptr, "\n");

  }
fclose(fptr);
   return 0;
}





//cng store

int store2()
{
    FILE *fptr;
   fptr = fopen("cng.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr, "SerialNo\tEntryTime\tLicenseNumber\tPassword\tExit Time \n");

  for(int i=0;i<count2;i++)
  {

     fprintf(fptr, "%d\t\t", i+1);
     fprintf(fptr, "%d:%d\t\t\t", t12, t22);

     fprintf(fptr,"%d\t",li2[i]);
     fprintf(fptr,"%d\t\t",ran2[i]);
     fprintf(fptr, "%d:%d\t", t52, t62);
     fprintf(fptr, "\n");

  }
fclose(fptr);
   return 0;
}


//car store

int store1()
{
    FILE *fptr;
   fptr = fopen("car.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr, "SerialNo\tEntryTime\tLicenseNumber\tPassword\tExit Time \n");

  for(int i=0;i<count1;i++)
  {

     fprintf(fptr, "%d\t\t", i+1);
     fprintf(fptr, "%d:%d\t\t\t", t11, t21);

     fprintf(fptr,"%d\t",li1[i]);
     fprintf(fptr,"%d\t\t",ran1[i]);
     fprintf(fptr, "%d:%d\t", t51, t61);
     fprintf(fptr, "\n");

  }
fclose(fptr);
   return 0;
}


//bike store

int store3()
{
    FILE *fptr;
   fptr = fopen("bike.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr, "SerialNo\tEntryTime\tLicenseNumber\tPassword\tExit Time \n");

  for(int i=0;i<count3;i++)
  {

     fprintf(fptr, "%d\t\t", i+1);
     fprintf(fptr, "%d:%d\t\t\t", t13, t23);

     fprintf(fptr,"%d\t",li3[i]);
     fprintf(fptr,"%d\t\t",ran3[i]);
     fprintf(fptr, "%d:%d\t", t53, t63);
     fprintf(fptr, "\n");

  }
fclose(fptr);
   return 0;
}









int amount()
{

  printf("\n\n********************************Total Income**********************************\n\n\n\n");
    printf("Total income from truck: %.2f/= \n",am1);
    printf("Total income from Car  : %.2f/= \n",am2);
    printf("Total income from Cng  : %.2f/= \n",am3);
    printf("Total income from Bike : %.2f/= \n",am4);
    printf("-------------------------------- \n");
    printf("       Total amount    : %.2f/= \n\n",am);


printf("Press any key to back.......");
        getch();
        system("cls");
        jc();
}
