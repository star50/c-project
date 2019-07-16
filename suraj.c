#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int total(int);
void bake(int);
void cake(int);
void main1(int);
void bev(int);
void snacks(int);
void spcl(int);
int return1(int);

int main()
  { 
  int a;
  printf("\n\n\t\t\t\t  MR. BAKER'S\n\n");
  printf("\t\t\tLOVELY PROFESSIONAL UNIVERSITY\n\t\t\t   phagwara,PUNJAB (144111)\n\n");
  printf("\t\t\t  contact us - +91-9876543210\n\t\t\t E-mail: mrbakers@retail.co.in \n\t\t\t website: www.mrbakers.retail.org\n\n\n");

  main1(a);
  }

  void main1(int u)                                                      //authorised user login
  {
  int user,pass,x;
  printf("   OWNER  LOGIN \n enter username:__ ");
  scanf("%d",&user);
  printf("\n enter password:__ ");
  scanf("%d",&pass);

  if(user==11709998&&pass==865125)
  {
  printf("\t\t\t\t ** WELCOME TO  MR. BAKER'S **");
  printf("\n\n");

  bake(x);                                                             //function call for the main menu of the bakery
  }

  else                                                                //next attemp for login
  { 
  int u;
  printf(" \noops !! wrong user id or password .\n  ** plese try Again !!**  ");
  printf("\n\n");
 
  main1(u);
  }

  }

  void bake(int x)                                                   //function for the main menu of the bakery
  {  
  FILE *fp;
  int choice,ret,ret1;
 
  printf("\n\n\t\t\tITEMS  AVAILABLE \n ");
  printf("1 . CAKES & PASTRIES \n 2 . BEVRAGES \n 3 . SNACKS & CHOCOLATES \n 4 . MR. BAKER'S SPECIAL \n 5 . QUICK BILL FOR MANY ITEMS ");
  printf("\n ENTER CHOICE:__");
  scanf("%d",&choice);
    
  switch(choice)                                                     //choice for items available
  {
    case 1:                                                         //cakes and pastries section
    	{	
		int cak;
		printf("\t\t\t CAKES & PASTRIES \n");
		cake(cak);                
        break;
        }
       
    case 2:                                                        //bevrages section
    	{
		int bevr;
		printf("\t\t\t BEVRAGES \n");
		bev(bevr);
    	break;
    	}
    	
	case 3:                                                       //snacks & chocolates section
		{ 
		int snack;
		printf("\t\t\t SNACKS & CHOCOLATES \n");
		snacks(snack);
		break;
	    }
	case 4:                                                      //mr. special section
	    {
	    int spl;
		printf("\t\t\t MR. BAKER'S SPECIAL \n");
		spcl(spl);
		break;
			
		}			
	case 5:                                                       //choice for quick billing for several items
		{
		int cake,bdrinks,sdrinks,snacks,chocolate,spicy,gift;
	    char c[20],d[20];	
		
		printf("\n \t\t\t CAKE FLAVOURS AVAILABLE  \n 1. STRAWBERRY \n 2. VANILA \n 3. CHOCOLATE");
		printf("\n\n ENTER NUMBER OF CAKES              --- rs 350 per cake \n_");
		scanf("%d",&cake);
		
		printf("\n \t\t\t FAMILY PACK SOFT DRINKS \n 1. COCA COLA \n 2. THUMBS UP \n 3. MAZZA \n 4. SPRITE \n 5. PEPSI ");
		printf("\n\n ENTER NUMBERS OF SOFT DRINKS            --- rs 90 per bottel \n_");
		scanf("%d",&bdrinks);
		
		printf("\n \t\t\t SMALL PACK SOFT DRINKS \n 1. COCA COLA \n 2. THUMBS UP \n 3. MAZZA \n 4. SPRITE \n 5. PEPSI ");
		printf("\n\n ENTER NUMBERS OF SOFT DRINKS            --- rs 35 per bottel \n_");
		scanf("%d",&sdrinks);
		
		printf("\n \t\t\t SNACKS 25  ZONE \n ITEMS AVAILABLE \n 1. GOOD DAY \n 2. HIDE & SICK \n 3. BOURBONE \n 4. PARLE-G \n 5. DARK FANTASY ");
		printf(" ENTER NUMBER OF PACKETS               --- rs 25 per packet \n_");
		scanf("%d",&snacks);
		
		printf("\n \t\t\t CHOCOLATES @ 10 \n 1. DAIRY MILK \n 2. KIT KAT \n 3. MUNCH \n 4. PERK \n 5. SNIKKERS \n 6. BAR ONE  ");
		printf("\n\n ENTER NUMBER OF CHOCOLATES                 --- rs 10 per bar \n_");
		scanf("%d",&chocolate);
		
		printf("\n \t\t\t MR. BAKER'S SPICY \n 1. MR. BAKER'S BHUJIA \n 2. MR. BAKER'S AALO BHUJIA \n 3. MR. BAKER'S SPICY TADKA \n 4. MR. BAKER'S MIX PUNJABI \n 5. MR. BAKER'S MIX GUJRAATI \n 6. MR. BAKER'S SPICY MOONG");
		printf("\n\n ENTER NUMBER OF PACKETS         --- rs 20 per packet \n_");
		scanf("%d",&spicy);
		
		printf("\n \t\t\t ADD MR. BAKER'S SPECIAL GIFT PACK");
		printf("\n ENTER NUMBER OF GIFT PACKS               --FREE  \n_");
		scanf("%d",&gift);
		
        printf("\n\n\t\t ** CUSTOMER DETAILS **");                       //customers detail section for case 5 only
        printf("\n\n\t\t    NAME OF CUSTOMER : _");
        fflush(stdin);
        gets(c);
        printf("\n\n\t\t   CONTACT NUMBER : _");
        gets(d);
        
       
		fp=fopen("bbs.txt","a");
		
		printf("\n\n\t\t\t\t\t\t    INVOICE \n\n");                     // invoice print section
		printf("\t\t\t\t\t\t  MR. BAKER'S\n\n");
        printf("\t\t\t\t\tLOVELY PROFESSIONAL UNIVERSITY\n\t\t\t\t\t   phagwara,PUNJAB (144111)\n\n");
        printf("\t\t\t\t\t  contact us - +91-9876543210\n\t\t\t\t\t E-mail: mrbakers@retail.co.in \n\t\t\t\t\t website: www.mrbakers.retail.org\n\n\n");
       
	    SYSTEMTIME a;
	    GetSystemTime(&a);                                            // code for date printing
     	printf("\n  DATE : %d/%d/%d \n",a.wDay,a.wMonth,a.wYear);
     	if(a.wMinute<30)
        printf("\n  TIME : %d:%d:%d  \n",a.wHour+5,a.wMinute+30,a.wSecond);
        else
        printf("\n  TIME : %d:%d:%d  \n",a.wHour+6,a.wMinute-30,a.wSecond);

       
	    printf("\n  S No.     ITEM NAME      NUMBER OF ITEMS \t     PRICE PER ITEM \t\t TOTAL PRICE \n\n");
        printf("\n   1.    CAKE               \t  %d   \t\t\t  rs 350.00   \t\t rs %d.00 ",cake,cake*350);
        printf("\n   2.    SOFT DRINKS(F.P)   \t  %d   \t\t\t  rs 90.00    \t\t rs %d.00 ",bdrinks,bdrinks*90);
        printf("\n   3.    SOFT DRINKS(S.P)   \t  %d   \t\t\t  rs 35.00    \t\t rs %d.00",sdrinks,sdrinks*35);
        printf("\n   4.    SNACKS             \t  %d   \t\t\t  rs 25.00    \t\t rs %d.00 ",snacks,snacks*25);
        printf("\n   5.    CHOCOLATE          \t  %d   \t\t\t  rs 10.00    \t\t rs %d.00 ",chocolate,chocolate*10);
        printf("\n   6.    MR.BAKER'S SPICY   \t  %d   \t\t\t  rs 20.00    \t\t rs %d.00 ",spicy,spicy*20);
        printf("\n   7.    GIFT               \t  %d   \t\t\t  FREE        \t\t rs %d.00 ",gift,gift*0);
        printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",cake*350+bdrinks*90+sdrinks*35+snacks*25+chocolate*10+spicy*20);
        
        printf("\n\n\t\t   CUSTOMER DETAILS \n\n\t NAME : ** %s **\n\t CONTACT NO. : ** %s **  ",c,d);
        printf("\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
        printf("\n\n\n\n\n");
        fclose(fp);
        ret1=return1(ret);                                           // new bill and logout section
	    bake(x);
		break;	
		}
						
		default :
		{
		int go;	
		printf(" \t\t opps!!! , WRONG SELECTION .\n\n");
		bake(go);
		break;	
	    }
	    
    }
    }
 
  void cake( int cak)                                              //cake function
  {   
  int choice1,choc,straw,van,c1,c2,c3,ac,x,ret1,ret;

  printf("\n  FLAVOURS AVAILABLE   ( rs 350 each ) \n");
  printf("\n 1. CHOCOLATE CAKE \n 2. STRAWBERRY CAKE \n 3. VANILLA CAKE \n 4. BACK TO MAIN MENU ");
  printf("\nENTER CHOICE :_ ");
  scanf("%d",&choice1);
	
  switch(choice1)
   {
	case 1:
		{  
		printf("\nENTER THE NUMBER OF CHOCOLATE CAKE : ");
		scanf("%d",&choc);
		c2=total(c1);
		printf("\n   1.    CHOCOLATE CAKE     \t  %d   \t\t\t  rs 350.00   \t\t rs %d.00 ",choc,choc*350);
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",choc*350);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
		break;
		}
		
	case 2:
		{
		printf("\nENTER THE NUMBER OF STRAWBERRY CAKE : ");
		scanf("%d",&straw);
		c2=total(c1);
		printf("\n   1.    STRAWBERRY CAKE     \t  %d   \t\t\t  rs 350.00   \t\t rs %d.00 ",straw,straw*350);
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",straw*350);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
		break;
		}
		
	case 3:	
		{ 
		printf("\nENTER THE NUMBER OF VANILLA CAKE : ");
		scanf("%d",&van);
		c2=total(c1);
		printf("\n   1.    VANILLA CAKE        \t  %d   \t\t\t  rs 350.00   \t\t rs %d.00 ",van,van*350);
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",van*350);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
		break;
		}
		
	case 4:
		{ 
		bake(x); 
		break;		
		}	
		
	default : 
	    {
		printf(" WRONG CHOICE \n **  TRY  AGAIN  **");
        cake(ac);
		}
		break;
   }
   }

  void bev(int x)                                                      //bevrages function
  {
  int choice,b,price,c1,c2,bottel,ret1,ret;
  printf("\n  AVAILABLE BEVRAGES  \n");
  printf("\n 1. COCA-COLA       2. THUMS UP       3. MAZZA        4. SPRITE                        5. GO TO MAIN MENU  ");
  printf("\n\n     small             small              small           small     - rs 20");  
  printf("\n     medium            medium             medium          medium    - rs 35"); 
  printf("\n     large             large              large           large     - rs 90");     
  printf("\nENTER CHOICE :_ ");
  scanf("%d",&choice);
	
  switch(choice)
  {
	case 1:
	    {
	    printf("\n  PRICE LIST  ");
		printf("\n\n for small  - rs 20 \n for medium - rs 35 \n for large  - rs 90");
		printf("\n\n ENTER PRICE  :  _");
		scanf("%d",&price);
		if(price==20||price==35||price==90)
		{
		printf("\n\n ENTER NUMBER OF BOTTELS : ");
		scanf("%d",&bottel);
		c2=total(c1);
		if(price==20)
		printf("\n   1.    COCA-COLA (s)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==35)
		printf("\n   1.    COCA-COLA (m)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==90)
		printf("\n   1.    COCA-COLA (l)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		 
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",price*bottel);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
	    break;
	    }
	    else
		{
		printf("\n\n INVALID INPUT ** TRY AGAIN !!**\n\n");
	    bev(b);
		}	
		}
		
	case 2:
		{
		printf("\n  PRICE LIST  ");
		printf("\n\n for small  - rs 20 \n for medium - rs 35 \n for large  - rs 90");
		printf("\n\n ENTER PRICE  :  _");
		scanf("%d",&price);
		if(price==20||price==35||price==90)
		{
		printf("\n\n ENTER NUMBER OF BOTTELS : ");
		scanf("%d",&bottel);
		c2=total(c1);
		if(price==20)
		printf("\n   1.    THUMS UP (s)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==35)
		printf("\n   1.    THUMS UP (m)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==90)
		printf("\n   1.    THUMS UP (l)       \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
			 
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",price*bottel);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
		break;
	    }
	    else
		{
		printf("\n\n INVALID INPUT ** TRY AGAIN !!**\n\n");
	    bev(b);
		}	
		}
		
	case 3:
	    {
		printf("\n  PRICE LIST  ");
		printf("\n\n for small  - rs 20 \n for medium - rs 35 \n for large  - rs 90");
		printf("\n\n ENTER PRICE  :  _");
		scanf("%d",&price);
		if(price==20||price==35||price==90)
		{
		printf("\n\n ENTER NUMBER OF BOTTELS : ");
	    scanf("%d",&bottel);
		c2=total(c1);
		if(price==20)
		printf("\n   1.    MAZZA  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==35)
		printf("\n   1.    MAZZA  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==90)
		printf("\n   1.    MAZZA  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
			 
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",price*bottel);
		printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
		printf("\n\n\n\n\n");
		ret1=return1(ret);
	    bake(x);
		break;
	    }
		else
		{
		printf("\n\n INVALID INPUT ** TRY AGAIN !!**\n\n");
	    bev(b);
		}	
		}
			
		
	case 4:
	    {
		printf("\n  PRICE LIST  ");
		printf("\n\n for small  - rs 20 \n for medium - rs 35 \n for large  - rs 90");
		printf("\n\n ENTER PRICE  :  _");
		scanf("%d",&price);
		if(price==20||price==35||price==90)
		{
		printf("\n\n ENTER NUMBER OF BOTTELS : ");
		scanf("%d",&bottel);
		c2=total(c1);
		if(price==20)
		printf("\n   1.    SPRITE  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==35)
		printf("\n   1.    SPRITE  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
		if(price==90)
		printf("\n   1.    SPRITE  (s)         \t  %d   \t\t\t  rs %d.00   \t\t rs %d.00 ",bottel,price,price*bottel);
			 
		printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",price*bottel);
	    printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	    printf("\n\n\n\n\n");
	    ret1=return1(ret);
	    bake(x);
		break;
		}
		else
		{
		printf("\n\n INVALID INPUT ** TRY AGAIN !!**\n\n");
	    bev(b);
		}	
		}	
		
	case 5:
	    {
		bake(x);
	    break;
		}
		
	default :
		{ 
		printf("\n\n  **  WRONG  CHOICE **  \n\n  ** TRY AGAIN  ** \n\n");
		bev(b);
		break;
		}	
  }
  }


  void snacks(int x)                                              // snacks function
  {
  int choice,c1,c2,ret1,ret;
  printf(" \n RS 20 CORNER \n");
  printf("\n 1. KIT KAT \n 2. DAIRY MILK \n  ");
  printf("\n RS 30 corner \n");
  printf("\n 3. HIDE & SICK \n 4. BOURBON \n\t\t\t\t\t\t\t\t\t\t\t 5. GO TO MAIN MENU ");
  printf("\n\nENTER CHOICE : _");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
       { 
	   int a;
       printf("\nENTER NUMBER OF KIT KAT : _");
       scanf("%d",&a);
       c2=total(c1); 
       printf("\n   1.        KIT KAT         \t  %d   \t\t\t  rs 20.00   \t\t rs %d.00 ",a,a*20);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",a*20);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
	   }	
	   
    case 2:
  	   {
  	   int b;
       printf("\nENTER NUMBER OF DAIRY MILK : _");
       scanf("%d",&b);
       c2=total(c1); 
       printf("\n   1.        DAIRY MILK     \t  %d   \t\t\t  rs 20.00   \t\t rs %d.00 ",b,b*20);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",b*20);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
	   }
	   
  	case 3:
  	   {
  	   int c;
       printf("\nENTER NUMBER OF HIDE & SICK : _");
       scanf("%d",&c);
       c2=total(c1); 
       printf("\n   1.       HIDE & SICK     \t  %d   \t\t\t  rs 30.00   \t\t rs %d.00 ",c,c*30);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",c*30);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
       }
       
    case 4:
	   {
  	   int d;
       printf("\nENTER NUMBER OF BOURBON : _");
       scanf("%d",&d);
       c2=total(c1); 
       printf("\n   1.       BOURBON         \t  %d   \t\t\t  rs 30.00   \t\t rs %d.00 ",d,d*30);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",d*30);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
       }
       
	case 5:
	   {
	   bake(x);
	   break;
	   }
	   
	default :
	   {
	   int l;
	   printf("\n\n  **  WRONG  CHOICE **  \n\n  ** TRY AGAIN  ** \n\n");
	   snacks(l);
	   break;
       }
  }
  }
  
  void spcl(int x)                                               // mr. baker's special function
  {
  int choice,a,b,c,d,e,c2,c1,ret1,ret;
  printf("\n\t\t\t ITEMS AVAILABLE \n");
  printf("\n 1. MR. BAKER'S MIX PUNJABI \n 2. MR. BAKER'S MIX GUJRATI \n 3. MR. BAKER'S MIX TADKA \n 4. MR. BAKER'S INDIAN MIX \n 5. RETURN TO MAIN MENU");
  printf("\n\n ENTER YOUR CHOICE : _");
  scanf("%d",&choice);
  switch(choice)
  {
  	case 1:
  	   {
  	   printf(" ENTER THE NO. OF PACKETS : _");
	   scanf("%d",&a);	
	   c2=total(c1);
	   printf("\n   1.      MIX PUNJABI  \t  %d     \t\t  rs 30.00     \t\t rs %d.00 ",a,a*50);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",a*50);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
	   }
	   
	case 2:
       {
       printf(" ENTER THE NO. OF PACKETS : _");
	   scanf("%d",&b);	
	   c2=total(c1);
	   printf("\n   1.      MIX GUJRATI  \t  %d     \t\t  rs 30.00     \t\t rs %d.00 ",b,b*50);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",b*50);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
       }
       
    case 3:
       {
       printf(" ENTER THE NO. OF PACKETS : _");
	   scanf("%d",&c);	
	   c2=total(c1);
	   printf("\n   1.      MIX TADKA    \t  %d     \t\t  rs 30.00     \t\t rs %d.00 ",c,c*50);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",c*50);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
      }
      
    case 4:
       {
       printf(" ENTER THE NO. OF PACKETS : _");
	   scanf("%d",&d);	
	   c2=total(c1);
	   printf("\n   1.      INDIAN MIX   \t  %d     \t\t  rs 30.00     \t\t rs %d.00 ",d,d*50);
       printf("\n\n\t\t\t\t\t\t\t\t\t TOTAL = rs %d.00 ",d*50);
	   printf("\n\n\t\t\t\t\t\t\t APPROVED BY : *shashank dubey*");
	   printf("\n\n\n\n\n");
	   ret1=return1(ret);
	   bake(x);
	   break;
      }
      
    case 5:
      {
      bake(x);
	  break;
      }
      
    default :
      {
      printf("\n\n  **  WRONG  CHOICE **  \n\n  ** TRY AGAIN  ** \n\n");
	  spcl(e);
	  break;
      }
  }
  	
  }
  
  int return1(int c)                                              //logout and new bill function
  {
  int choice,d,a,x;
  printf("\n\n PRESS 1 FOR NEW BILL \t\t\t\t\t\t PRESS  2 FOR LOGOUT ");
  printf("\n ENTER YOUR TURN \n : _");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  	{
  	return(x);
	break;	
    }
  
  case 2:
  	{
  	printf("\n\n ** YOU ARE SUCESSFULLY LOGGED OUT **");
  	printf("\n\n ** PLESE LOGIN AGAIN **");
  	printf("\n\n\n");
  	main1(d);
  	break;
    }
    
  default :
    {
    printf("\n WRONG INPUT \n\n ** PLESE TRY AGAIN **");
    printf("\n\n");
    return1(a);
    break;
	}
  }
  }
  
  int total(int x)                                               //billing total function for all case except 5
  {     
  char c[20],d[10];
  
  printf("\n\n\t\t ** CUSTOMER DETAILS **");
  printf("\n\n\t\t    NAME OF CUSTOMER : _");
  fflush(stdin);
  gets(c);
  printf("\n\n\t\t    CONTACT NUMBER : _");
  gets(d);
	
  printf("\n\n\t\t\t\t\t\t    INVOICE \n\n");
  printf("\t\t\t\t\t\t  MR. BAKER'S\n\n");
  printf("\t\t\t\t\tLOVELY PROFESSIONAL UNIVERSITY\n\t\t\t\t\t   phagwara,PUNJAB (144111)\n\n");
  printf("\t\t\t\t\t  contact us - +91-9876543210\n\t\t\t\t\t E-mail: mrbakers@retail.co.in \n\t\t\t\t\t website: www.mrbakers.retail.org\n\n\n");
  printf("\n\n\t   CUSTOMER DETAILS \n\n\t NAME : ** %s **\n\t CONTACT NO. : ** %s **  ",c,d);
  SYSTEMTIME a;
  GetSystemTime(&a);                                            // code for date printing
  printf("\n\n  DATE : %d/%d/%d \n",a.wDay,a.wMonth,a.wYear);
  if(a.wMinute<30)
  printf("\n  TIME : %d:%d:%d  \n",a.wHour+5,a.wMinute+30,a.wSecond);
  else
  printf("\n  TIME : %d:%d:%d  \n",a.wHour+6,a.wMinute-30,a.wSecond);

        
  printf("\n\n  S No.     ITEM NAME      NUMBER OF ITEMS \t     PRICE PER ITEM \t\t TOTAL PRICE \n\n");
  return x;
  }
















