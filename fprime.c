#include <stdio.h>
#include <stdlib.h>

int is_prime(nb)
{
        if (nb == 1)
                return (0);
        if (nb == 2)
                return (1);
        else if(nb % 2 == 1)
                return (1);
        else
                return (0);
}

int  main(int argc, char **argv)
{
        int nb;
        int i = 0;
        if (argc == 2)
        {
                nb = atoi(argv[1]);
                if (nb == 1)
                {
                        printf("1\n");
                        return (0);
                }
                while(i <= nb)
                {
                       // printf("i = %d\n", i);
                        if (is_prime(i))
                        {
                                if (nb % i == 0)
                                {
                                        printf("%d", i);
                                        nb = nb / i;
                                        if (i < nb)
                                                printf("*");
                                        i = -1;
                                }
                        }
                        i++;
                }

        }       
        printf("\n");
}

// int	main(int argc, char *argv[])
// {
// 	int	i;
// 	int	number;

// 	if (argc == 2)
// 	{
// 		i = 1;
// 		number = atoi(argv[1]);
// 		if (number == 1)
// 			printf("1");
// 		while (number >= ++i)
// 		{
// 			if (number % i == 0)
// 			{
// 				printf("%d", i);
// 				if (number == i)
// 					break ;
// 				printf("*");
// 				number /= i;
// 				i = 1;
// 			}
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }
