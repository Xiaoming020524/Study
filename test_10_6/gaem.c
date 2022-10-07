#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]=set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() %row + 1;
		int y = rand() %col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//展开功能
void Develop(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int count = get_mine_count(mine, x, y);
		if (count > 0)
		{
			show[x][y] = count + '0';
		}
		else if (count == 0)
		{
			show[x][y] = ' ';
			if (show[x - 1][y + 1] == '*' && mine[x - 1][y + 1] == '0')
			{
				show[x - 1][y + 1] = ' ';
				Develop(mine, show, ROW, COL, x - 1, y + 1);
			}
			if (show[x - 1][y] == '*' && mine[x - 1][y] == '0')
			{
				show[x - 1][y] = ' ';
				Develop(mine, show, ROW, COL, x - 1, y);
			}
			if (show[x - 1][y - 1] == '*' && mine[x - 1][y - 1] == '0')
			{
				show[x - 1][y - 1] = ' ';
				Develop(mine, show, ROW, COL, x - 1, y - 1);
			}
			if (show[x][y + 1] == '*' && mine[x][y + 1] == '0')
			{
				show[x][y + 1] = ' ';
				Develop(mine, show, ROW, COL, x, y + 1);
			}
			if (show[x][y + 1] == '*' && mine[x][y - 1] == '0')
			{
				show[x][y - 1] = ' ';
				Develop(mine, show, ROW, COL, x, y - 1);
			}
			if (show[x + 1][y - 1] == '*' && mine[x + 1][y - 1] == '0')
			{
				show[x + 1][y - 1] = ' ';
				Develop(mine, show, ROW, COL, x + 1, y - 1);
			}
			if (show[x + 1][y] == '*' && mine[x + 1][y] == '0')
			{
				show[x + 1][y] = ' ';
				Develop(mine, show, ROW, COL, x + 1, y);
			}
			if (show[x + 1][y + 1] == '*' && mine[x + 1][y + 1] == '0')
			{
				show[x + 1][y + 1] = ' ';
				Develop(mine, show, ROW, COL, x + 1, y + 1);
			}
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	DisplayBoard(mine, ROW, COL);

	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标：");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else if(mine[x][y] == '0')
			{
				Develop(mine, show, ROW, COL, x, y);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}