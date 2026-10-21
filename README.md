*This project has been created as part of the 42 curriculum by ahossein.*

# libft

> My first C library: the standard functions every C programmer relies on, rebuilt from scratch, plus a toolkit for linked lists.

---

## Description

**libft** is the first project of the 42 common core. The goal is simple to state and demanding to do: re-implement a set of functions from the C standard library, add a few useful extras, and package everything into a static library, `libft.a`, that can be reused in every later 42 project.

Writing these functions by hand means understanding what usually stays hidden: how strings are laid out in memory, how bytes are compared, how memory is allocated and released, and why a single byte read too far can crash a program.

The project has three parts:

| Part | Content |
|---|---|
| **Part 1: libc functions** | rewrites of standard functions such as `strlen`, `memcpy`, `strncmp` or `atoi`, with the same behavior as the originals |
| **Part 2: additional functions** | functions that are not in libc (or not in this form) but are very useful: splitting strings, joining them, converting numbers to text, writing to file descriptors |
| **Part 3: linked lists** | a small toolkit to create, walk through, transform and free singly linked lists |

---

## The library

All prototypes are declared in `libft.h`. Every function is prefixed with `ft_`.

### Part 1: libc functions

**Character checks and conversion**

| Function | What it does |
|---|---|
| `ft_isalpha` | checks for a letter (`A` to `Z`, `a` to `z`) |
| `ft_isdigit` | checks for a digit (`0` to `9`) |
| `ft_isalnum` | checks for a letter or a digit |
| `ft_isascii` | checks for a value from 0 to 127 |
| `ft_isprint` | checks for a printable character (32 to 126) |
| `ft_toupper` | converts a lowercase letter to uppercase |
| `ft_tolower` | converts an uppercase letter to lowercase |

**Strings**

| Function | What it does |
|---|---|
| `ft_strlen` | returns the length of a string |
| `ft_strchr` | returns the address of the first occurrence of a character |
| `ft_strrchr` | returns the address of the last occurrence of a character |
| `ft_strncmp` | compares two strings over at most `n` bytes |
| `ft_strnstr` | finds a substring within the first `len` bytes of a string |
| `ft_strlcpy` | copies a string into a buffer of a given size, always null-terminated |
| `ft_strlcat` | appends a string to a buffer of a given size, always null-terminated |

**Memory**

| Function | What it does |
|---|---|
| `ft_memset` | fills `n` bytes with a value |
| `ft_bzero` | sets `n` bytes to zero |
| `ft_memcpy` | copies `n` bytes from one area to another |
| `ft_memmove` | copies `n` bytes, correctly even when the two areas overlap |
| `ft_memchr` | finds a byte in a memory area |
| `ft_memcmp` | compares two memory areas byte by byte |

**Conversion and allocation**

| Function | What it does |
|---|---|
| `ft_atoi` | converts a string to an `int` |
| `ft_calloc` | allocates memory for an array and sets it to zero |
| `ft_strdup` | allocates a copy of a string |

### Part 2: additional functions

| Function | What it does |
|---|---|
| `ft_substr` | returns a new string: a part of `s`, starting at `start`, at most `len` characters |
| `ft_strjoin` | returns a new string: `s1` followed by `s2` |
| `ft_strtrim` | returns a copy of `s1` without the characters of `set` at its start and end |
| `ft_split` | splits a string by a delimiter character into a NULL-terminated array of strings |
| `ft_itoa` | converts an `int` to a new string |
| `ft_strmapi` | returns a new string made by applying a function to each character |
| `ft_striteri` | applies a function to each character of a string, in place |
| `ft_putchar_fd` | writes a character to a file descriptor |
| `ft_putstr_fd` | writes a string to a file descriptor |
| `ft_putendl_fd` | writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | writes an integer to a file descriptor |

### Part 3: linked lists

Each element of a list (a **node**) is one `malloc`'d block holding the address of its data and the address of the next node:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

```
my_list ──> [ content | next ] ──> [ content | next ] ──> [ content | next ] ──> NULL
```

| Function | What it does |
|---|---|
| `ft_lstnew` | creates a new node holding `content`, with `next` set to NULL |
| `ft_lstadd_front` | adds a node at the beginning of a list |
| `ft_lstadd_back` | adds a node at the end of a list |
| `ft_lstsize` | counts the nodes of a list |
| `ft_lstlast` | returns the last node of a list |
| `ft_lstdelone` | frees one node and its content (using a `del` function) |
| `ft_lstclear` | frees every node of a list and sets the list pointer to NULL |
| `ft_lstiter` | applies a function to the content of every node |
| `ft_lstmap` | builds a new list by applying a function to every content; on allocation failure, everything created so far is freed |

### Design notes

- **Only `malloc`, `free` and `write`** are used from outside the library, as required by the subject.
- **Allocation failures are handled:** functions that allocate memory return NULL when `malloc` fails.
- **Bytes are compared as `unsigned char`** in functions such as `ft_strncmp`, like the real libc. This keeps results identical on every machine, whether plain `char` is signed or not.
- **List contents are never copied:** a node stores the address it was given. Freeing contents is left to the caller's `del` function, because only the caller knows how that data was allocated.
- **`t_list **` where the start can change:** functions such as `ft_lstadd_front` and `ft_lstclear` receive the address of the caller's list pointer, so they can update it.
- Compiled with `-Wall -Wextra -Werror`, written according to the 42 Norm.

---

## Instructions

### Requirements

- A Unix-like system (Linux or macOS)
- `cc` and `make`

### Build

```bash
git clone <repository-url> libft
cd libft
make
```

This creates `libft.a` at the root of the repository, containing every function from parts 1, 2 and 3.

| Command | Effect |
|---|---|
| `make` | compiles every source file and creates `libft.a` |
| `make clean` | removes the object files (`.o`) |
| `make fclean` | removes the object files and `libft.a` |
| `make re` | rebuilds everything from scratch |

### Use it in your own program

```c
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("libft is my first library", ' ');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putnbr_fd(i, 1);
		ft_putstr_fd(": ", 1);
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
```

Compile it with the library and run it:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
./demo
```

```
0: libft
1: is
2: my
3: first
4: library
```

`-L.` tells the linker to look for libraries in the current folder, and `-lft` selects `libft.a`.

### Testing

The library was tested with [francinette](https://github.com/xicodomingues/francinette), which runs norminette, checks the Makefile, and runs several community testers. Run it from the root of the repository:

```bash
francinette
```

---

## Resources

### References

- [Linux man pages](https://man7.org/linux/man-pages/): reference behavior of every libc function (`man 3 strlen`, `man 3 memmove`, ...)
- [cppreference: C standard library](https://en.cppreference.com/w/c): precise descriptions of the standard functions and of types like `size_t`
- [GNU Make manual](https://www.gnu.org/software/make/manual/): rules, variables and automatic variables
- [42 cursus guide: Makefiles](https://42-cursus.gitbook.io/guide/useful-tools/makefiles): Makefile conventions used at 42
- Testers: [libftTester](https://github.com/Tripouille/libftTester), [libft-unit-test](https://github.com/alelievr/libft-unit-test), [libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)

### AI usage

AI (Claude, by Anthropic) was used only as a learning assistant during this project:

- **Understanding concepts:** structs and `typedef`, pointers and pointers to pointers, how linked lists are laid out in memory, function pointers, signed and unsigned `char`. Explanations were given as memory diagrams and step-by-step traces with addresses.
- **Linked list functions:** explaining what each function must do, then reviewing my versions and pointing out bugs such as reading memory after `free` in `ft_lstclear` or a missing empty-list case in `ft_lstadd_back`. Some corrected lines were suggested after review; I traced and understood each of them before using them.
- **Debugging Part 1 functions:** reviewing `ft_strrchr`, `ft_strncmp` and `ft_strnstr`, explaining why they failed (off-by-one return address, signed comparison of bytes, wrong comparison length) and letting me write the fix myself first.
- **Makefile:** explaining what a shell, `make` and a Makefile are, then building the Makefile step by step.
- **Testing:** explaining francinette's output and what each tester checks.

All code in this repository was learned, written, tested and verified by me.