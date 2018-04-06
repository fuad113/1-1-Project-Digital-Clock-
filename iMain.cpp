# include "iGraphics.h"

#include <stdio.h>
#include <time.h>

void gettime(int t[]) {
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}





int u=10,v=88,w=4,x=60;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw() {
	//place your drawing codes here
	iClear();
	iSetColor(102,255,255);
	//iFilledCircle(x, y, r);
  int n1,n2,n3,n4,n5,n6;

  //coding for the hour
	int t[3] = {};
    gettime(t);
    printf("%d %d %d\n", t[0], t[1], t[2]); // hour, minute, second

    n1=t[0]/10;

     if(n1==0) {
	iFilledRectangle(u,v+2,w,x-2);      //2
	iFilledRectangle(u,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x,v+x+2,w,x-2);  //6
	iFilledRectangle(u+4,v,x-4,w); //1
	iFilledRectangle(u+x,v+2,w,x-2);//3
     }

     if(n1==1)
     {
         //iFilledRectangle(u,v+2,w,x-2);      //2
	//iFilledRectangle(u,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2,v,x-2,w); //1
	iFilledRectangle(u+x,v+2,w,x-2);//3
     }
     if(n1==2)
     {
         iFilledRectangle(u,v+2,w,x-2);      //2
	//iFilledRectangle(u,v+x+2,w,x-2); //5
	iFilledRectangle(u+2,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2,v,x-2,w); //1
	//iFilledRectangle(u+x,v+2,w,x-2);//3
     }
     n2=t[0]%10;
     if(n2==0){
	iFilledRectangle(u+70,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+65,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==1)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	//iFilledRectangle(u+65,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+65,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+65,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+65,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==2)
     {
    iFilledRectangle(u+70,v+2,w,x-2);      //2
	//iFilledRectangle(u+65,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	//iFilledRectangle(u+x+65,v+2,w,x-2);//3
     }
     if(n2==3)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	//iFilledRectangle(u+65,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==4)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+65,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+65,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==5)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+65,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==6)
     {
    iFilledRectangle(u+70,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+65,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==7)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	//iFilledRectangle(u+65,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+65,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+65,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==8)
     {
    iFilledRectangle(u+70,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
     if(n2==9)
     {
    //iFilledRectangle(u+65,v+2,w,x-2);      //2
	iFilledRectangle(u+70,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+70,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+70,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+70,v+x+2,w,x-2);  //6
    iFilledRectangle(u+2+70,v,x-2,w); //1
	iFilledRectangle(u+x+70,v+2,w,x-2);//3
     }
 //it is the divider between hour and minutes
   if((t[2]%2)==0)
   {
      iSetColor(255,0,0);
     iFilledRectangle(150,2*v,4,5);
     iFilledRectangle(150,v+30,4,5);
   }
     //coding for the minutes
     iSetColor(51,255,51);
     n3=t[1]/10;
     if(n3==0){
    iFilledRectangle(u+150,v+2,w,x-2);      //2
	iFilledRectangle(u+150,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2);//3
     }
     if(n3==1)
     {
    //iFilledRectangle(u+150,v+2,w,x-2);      //2
	//iFilledRectangle(u+150,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2); //3
     }
     if(n3==2)
     {
    iFilledRectangle(u+150,v+2,w,x-2);      //2
	//iFilledRectangle(u+150,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+150,v,x-2,w); //1
	//iFilledRectangle(u+x+150,v+2,w,x-2); //3
     }
     if(n3==3)
     {
    //iFilledRectangle(u+150,v+2,w,x-2);      //2
	//iFilledRectangle(u+150,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2); //3
     }
    if(n3==4)
    {
    //iFilledRectangle(u+150,v+2,w,x-2);      //2
	iFilledRectangle(u+150,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2);//3
    }
    if(n3==5)
    {
    //iFilledRectangle(u+150,v+2,w,x-2);      //2
	iFilledRectangle(u+150,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2); //3
    }
    if(n3==6)
    {
    iFilledRectangle(u+150,v+2,w,x-2);      //2
	iFilledRectangle(u+150,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+150,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+150,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+150,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+150,v,x-2,w); //1
	iFilledRectangle(u+x+150,v+2,w,x-2); //3
    }

    n4=t[1]%10;
    if(n4==0)
    {
    iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
    }
    if(n4==1)
    {
    //iFilledRectangle(u+220,v+2,w,x-2);      //2
	//iFilledRectangle(u+220,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
    }
     if(n4==2)
     {
    iFilledRectangle(u+220,v+2,w,x-2);      //2
	//iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	//iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==3)
     {
    //iFilledRectangle(u+220,v+2,w,x-2);      //2
	//iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==4)
     {
    // iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==5)
     {
    //iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }

     if(n4==6)
     {
    iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==7)
     {
    //iFilledRectangle(u+220,v+2,w,x-2);      //2
	//iFilledRectangle(u+220,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==8)
     {
    iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     if(n4==9)
     {
    // iFilledRectangle(u+220,v+2,w,x-2);      //2
	iFilledRectangle(u+220,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+220,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+220,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+220,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+220,v,x-2,w); //1
	iFilledRectangle(u+x+220,v+2,w,x-2);//3
     }
     //this is the divider between minutes and seconds
    if((t[2]%2)==0)
    {
    iSetColor(255,0,0);
	iFilledRectangle(300,2*v,4,5);
	iFilledRectangle(300,v+30,4,5);
    }

	//coding for seconds
     iSetColor(255,255,51);
	n5=t[2]/10;

	if(n5==0)
    {
	iFilledRectangle(u+300,v+2,w,x-2);      //2
	iFilledRectangle(u+300,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
    }
   if(n5==1)
   {
    //iFilledRectangle(u+300,v+2,w,x-2);      //2
	//iFilledRectangle(u+300,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
   }
    if(n5==2)
    {
    iFilledRectangle(u+300,v+2,w,x-2);      //2
	//iFilledRectangle(u+300,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+300,v,x-2,w); //1
	//iFilledRectangle(u+x+300,v+2,w,x-2);//3
    }
    if(n5==3)
    {
    //iFilledRectangle(u+300,v+2,w,x-2);      //2
	//iFilledRectangle(u+300,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
    }
    if(n5==4)
    {
    //iFilledRectangle(u+300,v+2,w,x-2);      //2
	iFilledRectangle(u+300,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
    }
    if(n5==5)
    {
    //iFilledRectangle(u+300,v+2,w,x-2);      //2
	iFilledRectangle(u+300,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
    }
     if(n5==6)
     {
    iFilledRectangle(u+300,v+2,w,x-2);      //2
	iFilledRectangle(u+300,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+300,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+300,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+300,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+300,v,x-2,w); //1
	iFilledRectangle(u+x+300,v+2,w,x-2);//3
     }

    n6=t[2]%10;

    if(n6==0)
    {
    iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
    if(n6==1)
    {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	//iFilledRectangle(u+370,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
    if(n6==2)
    {
    iFilledRectangle(u+370,v+2,w,x-2);      //2
	//iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	//iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
    if(n6==3)
    {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	//iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
    if(n6==4)
    {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	//iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
    if(n6==5)
    {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }
   if(n6==6)
   {
    iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	//iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
   }
   if(n6==7)
   {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	//iFilledRectangle(u+370,v+x+2,w,x-2); //5
	//iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	//iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
   }
   if(n6==8)
   {
    iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
   }
    if(n6==9)
    {
    //iFilledRectangle(u+370,v+2,w,x-2);      //2
	iFilledRectangle(u+370,v+x+2,w,x-2); //5
	iFilledRectangle(u+2+370,v+x,x-2,w);  //4         //here x,y -these are the co ordinated of the initial point
	iFilledRectangle(u+2+370,v+x+x+1,x-2,w); //7       // nd w,x these are the width and length of the rectangle
	iFilledRectangle(u+x+370,v+x+2,w,x-2);  //6
	iFilledRectangle(u+2+370,v,x-2,w); //1
	iFilledRectangle(u+x+370,v+2,w,x-2);//3
    }

 	//iSetColor(30, 0, 0);
	//iText(40, 40, "DIGITAL CLOCK");

}
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
 void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
/* void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}  */

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
 void iKeyboard(unsigned char key) {
	if (key == '') {
		exit(0);
	}
	//place your codes for other keys here

 }
/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
 void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(500, 500, "Digital Clock");
	return 0;
}
