#include<bits/stdc++.h>
void board();
void printboard();
int check_mark();
  char arr[]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
board();
return 0;
}
void board()
{
  int status=-1;
  int player=1;
 int input;
 printboard();
  while(status==-1)
  {  
    player=(player%2==0)?2:1;
    char mark=(player==1)?'X':'O';
    printf("Please Enter the input for player %d\n",player);
  scanf("%d",&input); 
  if(input<1||input>9)
  {
 printf("Invalid Choice\n");
  }
 
  arr[input]=mark;
printboard();
int result=check_mark();
if(result==1)
{
printf("Player %d Won The Game\n",player);
return;
}
else if(result==0)
{
printf("Draw the Match\n");
return;
}

player++;
  }




}
void printboard()
{
printf("____|  %c | %c | %c |____\n",arr[1],arr[2],arr[3]);
printf("____|  %c | %c | %c |____\n",arr[4],arr[5],arr[6]);
printf("____|  %c | %c | %c |____\n",arr[7],arr[8],arr[9]);
}
int check_mark()
{
   if(arr[1]==arr[2] && arr[2]==arr[3]){
        return 1;
    }
    if(arr[1]==arr[4] && arr[4]==arr[7]){
        return 1;
    }
    if(arr[7]==arr[8] && arr[8]==arr[9]){
        return 1;
    }
    if(arr[3]==arr[6] && arr[6]==arr[9]){
        return 1;
    }
    if(arr[1]==arr[5] &&arr[5]==arr[9]){
        return 1;
    }
    if(arr[3]==arr[5] && arr[5]==arr[7]){
        return 1;
    }
    if(arr[2]==arr[5] &&arr[5]==arr[8]){
        return 1;
    }
    if(arr[4]==arr[5] && arr[5]==arr[6]){
        return 1;
    }
    int count=0;
    for (int i = 0; i < 9; i++)
    {
        if(arr[i]=='X'||arr[i]=='O')
       count++;
    }
    if(count==9)
    return 0;
    return -1;

}