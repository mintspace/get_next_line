run:
	gcc -Wall -Wextra -Werror get_next_line.c -I libft/includes -L libft/ -lft
	./a.out

debug:
	gcc -Wall -Wextra -Werror -g get_next_line.c -I libft/includes -L libft/ -lft
	lldb ./a.out

clean:
	rm -Rf a.out a.out.dSYM
