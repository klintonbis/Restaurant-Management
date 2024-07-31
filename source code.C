#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()

{

  system("cls");
   int code,code1,order,order1,i,n,n1,j,review,quantity,total;
   int count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
  char name;
  struct food

{

    char name[20];
    int price;
    char type[20];
    int amount;


};

    printf("\t\t\t*************************************************************\n");
    printf("\t\t\t***             WELCOME TO THE KNB RESTURENT             ****\n");
    printf("\t\t\t*************************************************************\n");
     printf("\n\n");

    printf("\t\t\tMain Menu\n");

    printf("***********************************\n");


     printf("\t 1. See the food\n");
     printf("\t 2. pay the bill\n");
     printf("\t 3. Rate the management\n");
     printf("\t 0. Stay in main Menu\n");
     printf("\n\nInput your option(0-3) according to number\n");
     printf(" Enter your option: \n") ;
     scanf("%d",&code);
     switch(code)
     {
         system("cls");
         case 1:printf("\t\t Type of food available:\n");
                printf("\t\t---------------------------\n");
                printf("1. Fast Food\n");
                printf("2. Street Food\n");
                printf("3. Sweet type& Desert\n");
                printf("4. liquid beverage\n");
                printf("5. Native Food\n");
                printf("0. Go to main menu\n");
                printf("Enter you option:\n");
                scanf("%d",&code1);



                switch (code1)
                {
                case 1:


 printf("Available fast food item with price & type:\n\n");
 printf("---------------------------------------------------\n");

   struct food f1,f2,f3,f4,f5;
   strcpy(f1.name,"Burger");
  f1.price=70;
  strcpy(f1.type,"chicken");

   printf("\t\t\t 1.Name:%s\n",f1.name);
  printf("\t\t\tPrice:%d\n",f1.price);
  printf("\t\t\tType:%s\n",f1.type);

  printf("\n");
   strcpy(f2.name,"Sendwitch");
  f2.price=30;
  strcpy(f2.type,"Egg");
   printf("\t\t\t 2.Name:%s\n",f2.name);
  printf("\t\t\tPrice:%d\n",f2.price);
  printf("\t\t\tType:%s\n",f2.type);
  printf("\n");
    strcpy(f3.name,"Noodeles");
  f3.price=30;
  strcpy(f3.type,"Egg");
   printf("\t\t\t 3.Name:%s\n",f3.name);
  printf("\t\t\tPrice:%d\n",f3.price);
  printf("\t\t\tType:%s\n",f3.type);
  printf("\n");
  strcpy(f4.name,"Fried Rice");
  f4.price=120;
  strcpy(f4.type,"Egg&vagetable");
   printf("\t\t\t 4.Name:%s\n",f4.name);
  printf("\t\t\tPrice:%d\n",f4.price);
  printf("\t\t\tType:%s\n",f4.type);
  printf("\n");
  strcpy(f4.name,"Pizza");
  f5.price=80;
  strcpy(f5.type,"Butter & Chicken ");
   printf("\t\t\t 5.Name:Pizza%s\n",f5.name);
  printf("\t\t\tPrice:%d\n",f5.price);
  printf("\t\t\tType:%s\n",f5.type);

  printf("How many items do you wanna orderd from first food section:");
  scanf("%d",&n);
  count5+=n;
  for(i=1;i<=n;i++)
  {
    printf("Enter option for order the food:");
  scanf("%d",&order);

  switch(order){
      case 1:printf("You have ordered for burger\n");
           break;
       case 2:printf("You have ordered for Sendwitch\n");
             break;
        case 3:printf("You have ordered for Noddles\n");
               break;
       case 4:printf("You have ordered for Fried Rice\n");
                 break;
        case 5:printf("You have ordered for Pizza\n");
       default:
       printf("You haven't ordered nothing\n");

  }

  }



   case 2:
            printf("Available Street food item with price & type:\n\n");
            printf("----------------------------------------------------\n");

   struct food f01,f02,f03,f04,f05;
   strcpy(f01.name,"Fuchka");
  f01.price=30;
  strcpy(f01.type,"Egg&Sour");

   printf("\t\t\t 1. Name:%s\n",f01.name);
  printf("\t\t\tPrice:%d\n",f01.price);
  printf("\t\t\tType:%s\n",f01.type);
  printf("\n");


  strcpy(f02.name," Chicken Stick");
  f02.price=70;
  strcpy(f02.type,"Chicken &Onion ");

   printf("\t\t\t 2.Name:%s\n",f02.name);
  printf("\t\t\tPrice:%d\n",f02.price);
  printf("\t\t\tType:%s\n",f02.type);
  printf("\n");
   strcpy(f03.name,"Dosa");
  f03.price=20;
  strcpy(f03.type,"Egg");

   printf("\t\t\t 3.Name:%s\n",f03.name);
  printf("\t\t\tPrice:%d\n",f03.price);
  printf("\t\t\tType:%s\n",f03.type);
  printf("\n");
   printf("How many items do you wanna orderd from Street food section:");
  scanf("%d",&n);
  count4+=n;
  for(i=1;i<=n;i++)
  {
    printf("Enter option for order the food:");
  scanf("%d",&order);

  switch(order){
      case 1:printf("You have ordered for Fuchka\n");
            break;
       case 2:printf("You have ordered for Dosa\n");
               break;
        case 3:printf("You have ordered for Chicken Stick\n");
            break;
        default:
            printf("You haven't ordered anything");
  }
  }

 case 3:
            printf("\nAvailable Sweet type & Desert food item with price & type:\n\n");
            printf("---------------------------------------------------------------\n");
   struct food f001,f002,f003,f004,f005;
   strcpy(f001.name," Cake");
  f001.price=120;
  strcpy(f001.type,"Chocolate(half pound)");


   printf("\t\t\t 1.Name:%s\n",f001.name);
  printf("\t\t\tPrice:%d\n",f001.price);
  printf("\t\t\tType:%s\n",f001.type);

  printf("\n");


  strcpy(f002.name,"Ice Cream");
  f002.price=200;
  strcpy(f002.type,"Strawbery(400 ml) ");

   printf("\t\t\t 2.Name:%s\n",f002.name);
  printf("\t\t\tPrice:%d\n",f002.price);
  printf("\t\t\tType:%s\n",f002.type);
  printf("\n");
   strcpy(f003.name,"Choklate");
  f003.price=80;
  strcpy(f003.type,"Milky Dairy");


   printf("\t\t\t 3.Name:%s\n",f003.name);
  printf("\t\t\tPrice:%d\n",f003.price);
  printf("\t\t\tType:%s\n",f003.type);
  printf("\n");

  strcpy(f004.name,"Cake");
  f004.price=150;
  strcpy(f004.type,"half pound");

   printf("\t\t\t 4. Name:%s\n",f004.name);
  printf("\t\t\tPrice:%d\n",f004.price);
  printf("\t\t\tType:%s\n",f004.type);
  printf("\n");
   strcpy(f005.name,"Doi");
  f005.price=150;
  strcpy(f005.type,"PER BOX");

   printf("\t\t\t 5.Name:%s\n",f005.name);
  printf("\t\t\tPrice:%d\n",f005.price);
  printf("\t\t\tType:%s\n",f005.type);
  printf("\n");
   printf("How many items do you wanna ordered from Sweet&Dessert food section:");
  scanf("%d",&n);
  count3+=n;
  for(i=1;i<=n;i++)
  {
    printf("Enter option for order the food:");
  scanf("%d",&order);

  switch(order){
      case 1:printf("You have ordered for Cake\n");
           break;
       case 2:printf("You have ordered for Ice Cream\n");
             break;
        case 3:printf("You have ordered for Choclate\n");
               break;
       case 4:printf("You have ordered for Cake\n");
                 break;
        case 5:printf("You have ordered for Doi\n");
       default:
       printf("You haven't ordered nothing\n");

  }

  }

   case 4:
            printf("\nAvailable Water &Baverage food item with price & type:\n\n");
            printf("-----------------------------------------------------------\n");
   struct food f0001,f0002,f0003,f0004;
   strcpy(f0001.name," Water");
  f0001.price=25;
  strcpy(f0001.type,"Normal(500 ml)");


   printf("\t\t\tName:%s\n",f0001.name);
  printf("\t\t\tPrice:%d\n",f0001.price);
  printf("\t\t\tType:%s\n",f0001.type);

  printf("\n");


  strcpy(f0002.name,"Coca Cola");
  f0002.price=50;
  strcpy(f0002.type,"Cane(300 ml) ");

   printf("\t\t\tName:%s\n",f0002.name);
  printf("\t\t\tPrice:%d\n",f0002.price);
  printf("\t\t\tType:%s\n",f0002.type);
  printf("\n");
   strcpy(f0003.name,"Juice");
  f0003.price=30;
  strcpy(f0003.type,"Lemon(1 cup");


   printf("\t\t\tName:%s\n",f0003.name);
  printf("\t\t\tPrice:%d\n",f0003.price);
  printf("\t\t\tType:%s\n",f0003.type);
  printf("\n");

  strcpy(f0004.name,"Fanta");
  f0004.price=40;
  strcpy(f0004.type,"Orange(600 ml");

   printf("\t\t\tName:%s\n",f0004.name);
  printf("\t\t\tPrice:%d\n",f0004.price);
  printf("\t\t\tType:%s\n",f0004.type);
  printf("\n");
   printf("How many items do you wanna orderd from liquid&Beverage food section:");
  scanf("%d",&n);
  count2+=n;
  for(i=1;i<=n;i++)
  {
    printf("Enter option for order the food:");
  scanf("%d",&order);

  switch(order){
      case 1:printf("You have ordered for Water\n");
            break;
       case 2:printf("You have ordered for Coca Cola\n");
               break;
        case 3:printf("You have ordered for Juice\n");
            break;
        case 4:printf("You have ordered for Fanta");
        default:
           printf("You haven't ordered anything\n");
  }
  }
  case 5:
            printf("\nAvailable Native food item with price & type:\n\n");
            printf("-----------------------------------------------------------\n");
   struct food f0011,f0022,f0033,f0044;
   strcpy(f0011.name," Rice & Curry");
  f0011.price=120;
  strcpy(f0011.type,"rice:Normal Curry(Chicken&Fish");


   printf("\t\t\t 1.Name:%s\n",f0011.name);
  printf("\t\t\tPrice:%d\n",f0011.price);
  printf("\t\t\tType:%s\n",f0011.type);

  printf("\n");


  strcpy(f0022.name,"Biriyani");
  f0022.price=180;
  strcpy(f0022.type,"Chicken(full plate ");

   printf("\t\t\t 2.Name:%s\n",f0022.name);
  printf("\t\t\tPrice:%d\n",f0022.price);
  printf("\t\t\tType:%s\n",f0022.type);
  printf("\n");
   strcpy(f0033.name,"Bhuna Khichuri");
  f0033.price=60;
  strcpy(f0033.type,"Egg(Full plate");


   printf("\t\t\tName 3:%s\n",f0033.name);
  printf("\t\t\tPrice:%d\n",f0033.price);
  printf("\t\t\tType:%s\n",f0033.type);
  printf("\n");
   printf("How many items do you wanna orderd from Native food section:");
  scanf("%d",&n);
count1+=n;
  for(i=1;i<=n;i++)
  {
    printf("Enter option for order the food:");
  scanf("%d",&order);

  switch(order){
      case 1:printf("You have ordered for Rice Curry\n");
            break;
       case 2:printf("You have ordered for Biriyani\n");
               break;
        case 3:printf("You have ordered for Bhuna Khichuri\n");
            break;

        default:
           printf("You haven't ordered anything\n");
  }
  }

  count=count1+count2+count3+count4+count5;
   printf("You have ordered :%d items",count);



     }

     }

   switch(code)
   {


   case 2:   printf("Please pay the bill here:\n");
              printf("1.have you ordered for Burger:?\n");
              printf("2.Have you ordered for Sendwitch?:\n");
              printf("3.Have you ordered for Noodles?:\n");
              printf("4.have you ordered for Fried rice?:\n");
              printf("5.have you ordered for Pizza:?\n");
              printf("6.Have you ordered for Fuchka?:\n");
              printf("7.Have you ordered for Chiken Stick?:\n");
              printf("8.have you ordered for Dosa?:\n");
              printf("9.have you ordered for Cake:?\n");
              printf("10.Have you ordered for Ice Cream?:\n");
              printf("11.Have you ordered for Chocolate?:\n");
              printf("12.have you ordered for Cake?:\n");
              printf("13.have you ordered for Doi?:\n");
              printf("14.have you ordered for Water:?\n");
              printf("15.Have you ordered for Coca Cola?:\n");
              printf("16.Have you ordered for Fanta?:\n");
              printf("17.have you ordered for Juice?:\n");
             printf("18.Have you ordered for Rice & curry?:\n");
              printf("19.Have you ordered for Biriyani?:\n");
              printf("20.have you ordered for Bhuna Khichuri?:\n");
             printf("Number of ordered food?:");
             scanf("%d",&n);
            int i,grand_total=0,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0,t10=0,t11=0,t12=0,t13=0,t14=0,t15=0,t16=0,t17=0,t18=0,t19=0,t20=0;
             for(i=0;i<n;i++)
                {
             printf("Enter your option according to ordered for pay the bill:\n");

          scanf("%d",&order);



 switch(order)

            {
    case 1:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t1=70*quantity;
                     printf(" Burger.....................%d Taka\n",t1);
                   break;
             case 2:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t2=30*quantity;
                     printf(" Sendwitch.....................%d Taka\n",t2);
                   break;
            case 3:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t3=30*quantity;
                     printf(" Noodles.....................%d Taka\n",t3);
                     break;
            case 4:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t4=120*quantity;
                     printf(" Fried Rice.....................%d Taka\n",t4);
           break;
            case 5:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t5=120*quantity;
                     printf(" Pizza.....................%d Taka\n",t5);
                     break;
            case 6:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t6=30*quantity;
                     printf(" Fuchka.....................%d Taka\n",t6);
                  break;
             case 7:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t7=30*quantity;
                     printf(" Chicken Stick.....................%d Taka\n",t7);
             break;
            case 8:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t8=20*quantity;
                     printf(" Dosa.....................%d Taka\n",t20);
            break;
            case 9:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t9=120*quantity;
                     printf(" Cake.....................%d Taka\n",t9);
           break;
            case 10:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t10=200*quantity;
                     printf("Ice Cream.....................%d Taka\n",t10);
                     break;

                  break;
             case 11:printf("How many?:\n");
                    scanf("%d",&quantity);
                     t11=80*quantity;
                     printf(" Chocalate.....................%d Taka\n",80*quantity);
             break;
            case 12:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t12=120*quantity;
                     printf(" Cake.....................%d Taka\n",t12);
            break;
            case 13:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t13=150*quantity;
                     printf(" Doi.....................%d Taka\n",150*quantity);
           break;
            case 14:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t14=25*quantity;
                     printf(" Water.....................%d Taka\n",t14);
                     break;
                    case 15:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t15=30*quantity;
                     printf("Coca Cola.....................%d Taka\n",t15);
                     break;
            case 16:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t16=40*quantity;
                     printf("Fanta .....................%d Taka\n",t16);
                  break;
             case 17:printf("How many?:\n");
                     t17=30*quantity;
                    scanf("%d",&quantity);
                     printf(" Juice.....................%d Taka\n",t17);
             break;
            case 18:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t18=120*quantity;
                     printf(" Rice & Curry.....................%d Taka\n",t18);
            break;
            case 19:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t19=180*quantity;
                     printf(" Biriyani.....................%d Taka\n",t19);
            break;
            case 20:printf("How many?:\n");
                    scanf("%d",&quantity);
                      t20=60*quantity;
                     printf(" Bhuna Khichuri.....................%d Taka\n",t20);

            }

             }
          printf("........................................................\n");
           printf("........................................................\n");
grand_total=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12+t13+t14+t15+t16+t17+t18+t19+t20;
     printf("\t\t\nYou have to pay Grand Total: %d Taka\n",grand_total);

   }
 switch(code)
 {
     case 3:printf("1.Excelant.........*******\n");
            printf("2.Satisfactory.......*****\n");
            printf("3.Average............***\n");
            printf("4.Bad.............**\n");
            printf("5.Awful........*\n");


         printf("Give your review\n");
            printf("enter your option:\n");
            scanf("%d",&review);

            switch(review)
            {
                case 1:printf("It was literally excelant\n");
                       printf("Thanks for your review\n!!!");
                       break;
               case 2:printf("It was literally Satisfactory\n");
                       printf("Thanks for your review\n!!!");
                       break;
                case 3:printf("It was Average\n");
                       printf("Thanks for your review\n!!!");
                       break;

               case 4:printf("It was Bad\n");
                       printf("Thanks for your review\n!!!");
                     break;
              case 5:printf("It was Awful\n");
                       printf("Thanks for your review!!!\n");
                       break;
              default:
                printf("Don't wish to rated");


            }

     printf("6.Anything you would like to add for improvment?\n ");
     printf("please! Write this:");
     gets(name);

 }
}

