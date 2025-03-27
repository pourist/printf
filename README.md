# printf

## About the project

This project is a custom implementation of the standard `printf` function in C.  
It handles formatted output conversion and demonstrates usage of variadic functions, string parsing, and low-level memory handling.

---

## Usage

```bash
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```

To test the library with your own `main.c`:

```bash
make test
./test
```

---

## Makefile rules

| Command     | Description              |
|-------------|--------------------------|
| `make`      | Compiles the library     |
| `make test` | Compiles with main.c     |
| `make clean`| Removes object files     |
| `make fclean`| Removes all binaries    |
| `make re`   | Rebuilds everything      |

---

## Supported conversions

- `%c` → character  
- `%s` → string  
- `%p` → pointer (hex)  
- `%d` / `%i` → integer  
- `%u` → unsigned integer  
- `%x` / `%X` → hexadecimal  
- `%%` → percent symbol

---

## 📁 Project structure

```
.
├── include/              # Header files
├── Libft/                # Libft used internally
├── src/                  # ft_printf source files
├── Makefile
└── README.md
```

---

## 🧑‍💻 Author

[Pouriya Pourbahrami](https://github.com/pourist)
```