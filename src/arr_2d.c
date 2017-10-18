#include "arr_2d.h"

void	ft_bzero_2d_arr(int row, int col, int **arr)
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		**ft_create_2d_int_arr(int row, int col)
{
	int **arr;
	int i;

	arr = malloc(row * sizeof(int *));
	i = 0;
	while (i < row)
	{
		arr[i] = malloc(col * sizeof(int));
		if (arr[i] == NULL)
			perror("Failed allocate memory 2d array\n");
		i++;
	}
	arr[row] = NULL;
	return (arr);
}

void	print_int_2d_arr(int row, int col, int **arr)
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			printf("%d ", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
