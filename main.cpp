/*  Text Based RPG (TBRPG) Prototype Alpha 1.0    */

#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<dos.h>
#include<unistd.h>
#include<windows.h>

/* Classes defined below */

using namespace std;

class hero
{public:
 float health;
 float xp;
 float attacklvl;
 float defencelvl;
 float accuracy;
 }hero;

 class nimblefoot
 {public:
  float health;
  float xpgive;
  float attacklvl;
  float defencelvl;
  float accuracy;
  }nimble;

  class medusa
  {public:
  float health;
  float xpgive;
  float attacklvl;
  float defencelvl;
  float accuracy;
  }medusa;

/* Functions defined below */

 void initvalhero()
 { hero.health=50;
   hero.xp=10;
   hero.attacklvl=1;
   hero.defencelvl=1;
   hero.accuracy=1;
   }

   void initvalmedusa()
   { medusa.health=50;
   medusa.xpgive=50;
   medusa.attacklvl=2;
   medusa.defencelvl=2;
   medusa.accuracy=0.50;
   }

 void fightmedusa()
 { int isecret;
   int isecret2;
   initvalmedusa();
   initvalhero();

   for( (medusa.health)||(hero.health);(medusa.health>0)||(hero.health>0) ; )
   {
     cout<<"Enter move to use:";
     cout<<" 1.Slash          2.Stab \n";
     cout<<" 3.Lunge          4.Block\n";
     getch();

     srand(time(NULL));
     isecret=rand()%10+1	;
     cout<<"\n You attacked Medusa.";
      Sleep(500);
      medusa.health=(medusa.health)-(isecret);
     Sleep(500);
    cout<<"\n You hit Medusa for "<<isecret*hero.attacklvl<<" damage.";
     Sleep(1000);
    cout<<"\n Medusa attacked you.";
    isecret2=rand()%40+1;
    hero.health=(hero.health)-(isecret2);
     Sleep(500);
     cout<<"\n You hit Medusa for "<<isecret2<<" damage.";
     }
     if(medusa.health<=0)
     cout<<"\n Medusa has been neutralised.";
     else

     cout<<"\n YOU WIN!";
     }

 class arsenal
 { float brsword;
   float irsword;
   float stsword;
   float misword;
   float adsword;
   float rusword;
   }arsenal;


 /* Main function begins */

int main()
 {
 int get;
 initvalhero();


/* Title */


 cout<<"    @@@       @@@   @@@@@@@@@@@@  @@@@@@@@          @@@@@@@@     @@      @@  \n ";
 cout<<"   @@@@     @@@@   @@@@@@@@@@@   @@@@@@@@@@      @@@@@@@@@@@    @@      @@  \n ";
 cout<<"   @@@@@@  @@@@@   @@@           @@@      @@    @@@@            @@      @@  \n ";
 cout<<"   @@@@@@@@@@@@@   @@@@@@@@@     @@@      @@    @@@             @@      @@  \n ";
 cout<<"   @@@  @@@@ @@@   @@@@@@@@@     @@@@@@@@@@    @@@              @@@@@@@@@@  \n ";
 cout<<"   @@@       @@@   @@@           @@@@@@@@@@    @@@               @@@@@@@@@  \n ";
 cout<<"   @@@       @@@   @@@           @@@     @@@    @@@                    @@@  \n ";
 cout<<"   @@@       @@@   @@@@@@@@@@@@  @@@      @@@   @@@@@@@@@@@@           @@   \n ";
 cout<<"   @@@       @@@   @@@@@@@@@@@@  @@@      @@@     @@@@@@@@@           @@    \n ";


 Sleep(300);
 cout<<"\n \n \n \n \t \t \t Press any key to begin: \n";
 getch();

system("cls");
 cout<<"\n \n \n \n \t \t \t A wild enemy appeared! \n";
 Sleep(1000);
 cout<<"\n \n \n \n \t \t \t What do you want to do?\n";
 cout<<"\n \n \n \n \t \t \t 1.Fight           2.Inventory \n";
 cout<<" \n \n \t \t \t  3.Arsenal       4.Run \n \n ";
 cin>>get;

 switch(get)
 { case 1: fightmedusa();
   break;

   case 2:
   break;

   case 3:
   break;

   case 4:
   break;

  default:
  cout<<"Incorrect option. \n";

 }

getch();
return 0;
}
