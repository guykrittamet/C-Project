#include<stdio.h>
#include"windows.h"
#include"conio.h"
#include"stdlib.h"
#include"time.h"
#include"conio.h"

void rps()
{
    system("cls");

    srand(time(NULL));
    int player,computer,win=0,lose=0;
    while(1){
    computer = rand()%3+1;
    printf("%d",computer);
    printf("choose 1.rock 2.paper 3.scissors 0.back to main \n");
    while(1){
    scanf("%d",&player);
    if(player==1||player==2||player==3)
        break;
    else if(player==0)
        main();
    else
        printf("please enter 1 2 3\n");}

    if(player==computer)
        printf("tie\n");
    else if((player== 1 && computer== 3)||(player== 2 && computer== 1)||(player== 3 && computer== 1)){
        printf("you win\n");
        win++;
        }
    else{
        printf("you lose\n");
        lose++;
        }
    if(win==3){
            system("cls");
          printf("you win this game");
           printf("\n\nPress enter to main\n");
    char enter = 0;
    while (enter != '\r' && enter != '\n')
    {
        enter = getchar();
        getch();

    }main();}
    else if(lose==3){
            system("cls");
        printf("you lose this game");
           printf("\n\nPress enter to main\n");
           getch();
    char enter = 0;
    while (enter != '\r' && enter != '\n')
    {
        enter = getchar();

    }main();}

    }

}


void suduku()
{

	int i,j,sudoku[9][9],k=0,l=0,er=0;
	FILE *fp;
	fp = fopen("sudoku.txt","r");
	if(fp==NULL)
	{
		printf("Error");
	}
	for(i=0;i<9;i++)//get sudoku
	{
		for(j=0;j<9;j++)
		{
			fscanf(fp,"%d",&sudoku[i][j]);
		}
	}
	fclose(fp);


		while(1)
	{
	for(i=0;i<9;i++)//check sudoku
	{
		for(j=0;j<9;j++)
		{
			printf("%d ",sudoku[i][j]);
		}
		printf("\n");
	}



system("cls");
	for(i=0,k=0;i<13;i++)//printsudoku
	{
		for(j=0,l=0;j<13;j++)
		{
			if(i%4==0&&j%4==0)
			{
			    system("COLOR f");
				printf("+");
			}
			else if(i%4==0)
			{
				printf("-");
			}
			else if(j%4==0)
			{
				printf("|");
			}
			else
			{
				if(sudoku[k][l]==0)
				{
					printf("#");
				}
				else
				{
					printf("%d",sudoku[k][l]);
				}
				l++;
				if(l%9==0)
		{
			k++;
		}
			}
		}

		printf("\n");
	}


	int value;
	struct position{
		int x,y;
	}pos;


	while(1)
	{
		er=0;
		do{
		printf("Enter value : ");
		scanf("%d",&value);
		if(value>10||value<0)
            printf("Please Enter 1 - 9\n");
        else if(value==0)
            main();
		}while(value>10||value<0);
		printf("Enter position(x y) : ");
		scanf("%d %d",&pos.x,&pos.y);
		//printf("\n%d %d %d",value,pos.x,pos.y);

		for(i=0;i<9;i++)//check
		{
			if(value==sudoku[pos.y-1][i]||value==sudoku[i][pos.x-1]||sudoku[pos.y-1][pos.x-1]!=0)
			{
				printf("Error in row or colum\n");
				er++;
				break;
			}
			//printf("%d %d",sudoku[])
		}

		if(pos.x<=3&&pos.x>=1&&pos.y>=1&&pos.y<=3)
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=6&&pos.x>=4&&pos.y>=1&&pos.y<=3)
		{
			for(i=0;i<3;i++)
			{
				for(j=3;j<6;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=9&&pos.x>=7&&pos.y>=1&&pos.y<=3)
		{
			for(i=0;i<3;i++)
			{
				for(j=6;j<9;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=3&&pos.x>=1&&pos.y>=4&&pos.y<=6)
		{
			for(i=3;i<6;i++)
			{
				for(j=0;j<3;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=6&&pos.x>=4&&pos.y>=4&&pos.y<=6)
		{
			for(i=3;i<6;i++)
			{
				for(j=3;j<6;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=9&&pos.x>=7&&pos.y>=4&&pos.y<=6)
		{
			for(i=3;i<6;i++)
			{
				for(j=6;j<9;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=3&&pos.x>=1&&pos.y>=7&&pos.y<=9)
		{
			for(i=6;i<9;i++)
			{
				for(j=0;j<3;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
					}
				}
			}
		}
		if(pos.x<=6&&pos.x>=4&&pos.y>=7&&pos.y<=9)
		{
			for(i=6;i<9;i++)
			{
				for(j=3;j<6;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(pos.x<=9&&pos.x>=7&&pos.y>=7&&pos.y<=9)
		{
			for(i=6;i<9;i++)
			{
				for(j=6;j<9;j++)
				{
					if(value==sudoku[i][j])
					{
						printf("Error in Block\n");
						er++;
						break;
					}
				}
			}
		}
		if(er==0)
		{
			sudoku[pos.y-1][pos.x-1]=value;
			printf("%d\n",sudoku[pos.y-1][pos.x-1]);
			break;
		}
	}
	}
}

void index2()
{
    int numberofgame;
    printf("**************************************************************\n\n");
    printf("  *************  *************  *           *  *************  \n");
    printf("  *              *           *  * *       * *  *              \n");
    printf("  *              *           *  *  *     *  *  *              \n");
    printf("  *              *           *  *   *   *   *  *              \n");
    printf("  *     *******  *************  *     *     *  *************  \n");
    printf("  *           *  *           *  *           *  *              \n");
    printf("  *           *  *           *  *           *  *              \n");
    printf("  *           *  *           *  *           *  *              \n");
    printf("  *************  *           *  *           *  *************  \n\n");
    printf("                            center                            \n\n");
    printf("**************************************************************\n\n");
    printf("                  Chose your want to play a game\n\n");
    printf("                           1.Suduku\n\n");
    printf("                    2.Rock Paper Scissors\n\n");
    printf("                    Enter number of game : ");
    scanf("%d",&numberofgame);
    switch(numberofgame)
    {
        case 1 : suduku();break;
        case 2 : rps();break;
        default: main();break;
    }



}
void cont_index()
{
    Sleep(40);
    system("cls");
}
void index ()
{
    system("COLOR 9");
    printf("**************************************************************");
    cont_index();
    system("COLOR A");
    printf("\n**************************************************************");
    cont_index();
    system("COLOR B");
    printf("                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR C");
    printf("\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR D");
    printf("  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR E");
    printf("  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR F");
    printf("  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR F");
    printf("  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR E");
    printf("  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR D");
    printf("  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR C");
    printf("  *              *           *  *  *     *  *  *              ");
    printf("\n  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR B");
    printf("  *              *           *  * *       * *  *              ");
    printf("\n  *              *           *  *  *     *  *  *              ");
    printf("\n  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR A");
    printf("  *************  *************  *           *  *************  ");
    printf("\n  *              *           *  * *       * *  *              ");
    printf("\n  *              *           *  *  *     *  *  *              ");
    printf("\n  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR 9");
    printf("\n  *************  *************  *           *  *************  ");
    printf("\n  *              *           *  * *       * *  *              ");
    printf("\n  *              *           *  *  *     *  *  *              ");
    printf("\n  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");
    cont_index();
    system("COLOR A");
    printf("**************************************************************");
    printf("\n\n  *************  *************  *           *  *************  ");
    printf("\n  *              *           *  * *       * *  *              ");
    printf("\n  *              *           *  *  *     *  *  *              ");
    printf("\n  *              *           *  *   *   *   *  *              ");
    printf("\n  *     *******  *************  *     *     *  *************  ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *              ");
    printf("\n  *           *  *           *  *           *  *             ");
    printf("\n  *************  *           *  *           *  *************  ");
    printf("\n\n                            center                            ");
    printf("\n\n**************************************************************");

}


main()
{
    index();
    printf("\n\n                     Press enter to continue\n");
    char enter = 0;
    while (enter != '\r' && enter != '\n')
    {
        enter = getchar();
    }
    system("cls");
    index2();
    suduku();
}
