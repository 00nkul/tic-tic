#include<stdio.h>
#include<conio.h>
void check(char ,char);
int count;


char arr[9]={'1','2','3','4','5','6','7','8','9'};

void display(){

    printf("welcome to the tik tak toe game........\n");
    printf("Player 1 choice ==[x] \nPlayer 2 Choice==[0]\n");


    printf("\t\t\t\t   %c  |  %c  |  %c  \n",arr[0],arr[1],arr[2]);
    printf("\t\t\t\t---------------------\n");
    printf("\t\t\t\t   %c  |  %c  |  %c  \n",arr[3],arr[4],arr[5]);
    printf("\t\t\t\t---------------------\n");
    printf("\t\t\t\t   %c  |  %c  |  %c  \n",arr[6],arr[7],arr[8]);


}

void play(){
    char p,s;
    
    printf("Enter position  and symbol for the player \n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    check(p,s);
    count++;
}

void check(char p1,char s1){
    int i;
    for(i=0;i<9;i++){
        if (arr[i]==p1)
        {
            arr[i]=s1;
        }
    }
}

int winner(){
    if( (arr[0]=='x'&&arr[1]=='x'&&arr[2]=='x') || (arr[0]=='x'&&arr[3]=='x'&&arr[6]=='x') || (arr[0]=='x'&&arr[4]=='x'&&arr[8]=='x'))
        return(1);
    else if ((arr[0]=='o'&&arr[1]=='o'&&arr[2]=='o') || (arr[0]=='o'&&arr[3]=='o'&&arr[6]=='o') || (arr[0]=='o'&&arr[4]=='o'&&arr[8]=='o'))
        { return(2);}
    
    else if ((arr[1]=='x'&&arr[4]=='x'&&arr[7]=='x'))
        {return(1);}
    else if ((arr[1]=='o'&&arr[4]=='o'&&arr[7]=='o'))
        {return(2);}
    else if ((arr[2]=='x'&&arr[5]=='x'&&arr[8]=='x'))
        {return(1);}
    else if ((arr[2]=='o'&&arr[5]=='o'&&arr[8]=='o'))
        {return(2);}
    else if ((arr[3]=='x'&&arr[4]=='x'&&arr[5]=='x'))
        {return(1);}
    else if ((arr[3]=='o'&&arr[4]=='o'&&arr[5]=='o'))
        {return(2);}
    else if ((arr[2]=='x'&&arr[4]=='x'&&arr[6]=='x'))
        {return(1);}
    else if ((arr[2]=='o'&&arr[4]=='o'&&arr[6]=='o'))
        {return(2);}
    else if ((arr[6]=='x'&&arr[7]=='x'&&arr[8]=='x'))
        {return(1);}
    else if ((arr[6]=='o'&&arr[7]=='o'&&arr[8]=='o'))
        {return(2);}
    return(3);
}

void main(){
    int w;
    int pl;
    char ch;
    labell:
    display();
    
    printf("Enter who will start the game pLayer 1 oR pLayer 2\n");
    scanf("%d",&pl);
    play();
    label:
    system("cls");
    display();
    play();
    w=winner();
    system("cls");
    display();
    if (count<9)
    {

        if (w==1){
            printf("PLayer 1 wOn ");
            count=0;
        }
        else if (w==2)
        {
            printf("player 2 wOn ");
            count=0;
        }
        else 
        {
            goto label;
        }
    
    }
    else
    {
        printf(" Game DRAW!!!!\n");
        count=0;

    }
    
    printf("dO yOU WaT tO cOnTINue tHe gAme (y/n)??");
    fflush(stdin);
    scanf("%c",&ch);
    if (ch=='y'||ch=='Y')   
        {
            arr[0]='1';
            arr[1]='2';
            arr[2]='3';
            arr[3]='4';
            arr[4]='5';
            arr[5]='6';
            arr[6]='7';
            arr[7]='8';
            arr[8]='9';
            goto labell;
        }
    else 
        printf("press anY keY to ExiT ");
}