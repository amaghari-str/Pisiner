
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)// lst[i].next
	{
		lst = lst->next;// nothing
		i++;
	}
	return (i);
}
