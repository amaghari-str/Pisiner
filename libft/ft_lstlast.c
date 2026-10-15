#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}	t_list;

t_list *ft_lstlast(t_list *lst)
{
    int i = 0;
    if (!lst)
        return (NULL);
    while (lst[i].next)
        i++;
    return &lst[i];
}

int	main(void)
{
	t_list	*arr;
	t_list	*res;
	int		i;

	arr = malloc(20 * sizeof(t_list));
	if (!arr)
		return (1);
	i = 0;
	while (i < 20)
	{
		arr[i].value = i;
		arr[i].next = &arr[i + 1];
		i++;
	}
	arr[19].next = NULL;

	/* Тест 1: 20 элементов, последний должен иметь value == 19 */
	res = ft_lstlast(arr);
	if (res == &arr[19] && res->value == 19)
		printf("Test 1 OK: last value = %d\n", res->value);
	else
		printf("Test 1 FAIL\n");

	/* Тест 2: один элемент */
	res = ft_lstlast(&arr[19]);
	if (res == &arr[19])
		printf("Test 2 OK: single element\n");
	else
		printf("Test 2 FAIL\n");

	/* Тест 3: NULL */
	res = ft_lstlast(NULL);
	if (res == NULL)
		printf("Test 3 OK: NULL -> NULL\n");
	else
		printf("Test 3 FAIL\n");

	free(arr);
	return (0);
}
