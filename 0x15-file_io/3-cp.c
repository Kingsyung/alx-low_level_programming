0x15-file_io
README


## [C - File I/O](0x15-file_io) :file_folder:


## [Tests](./tests) Tests Folder




## [Main.h](./main.h) This Directory contains all the prototypes.


| File                      | Prototype                                                            |

| ------------------------- | -------------------------------------------------------------------- |

| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |

| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |

| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |


## Tasks :page_with_curl:


* `0. Tread lightly, she is near`

  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and

  prints it to the `POSIX` standard output.

  * The parameter `letters` is the number of letters the function should read and print.

  * If the file is `NULL` or cannot be opened or read - returns `0`.

  * If the `write` call fails or does not write the expected number of bytes - returns `0`.

  * Otherwise - returns the actual number of bytes the function can read and print.


* `1. Under the snow`

  * [1-create_file.c](./1-create_file.c): C function that creates a file.

  * The paramter `filename` is the name of the file to create.

  * The parameter `text_content` is a null-terminated string to write to the file.

  * If `text_content` is `NULL`, the function creates an empty file.

  * The created file has the permissions `rw-------`.

  * If the file already exists, the existing permissions are not changed.

  * Existing files are truncated.

  * If `filename` is `NULL` or the funciton fails - returns `-1`.

  * Otherwise - returns `1` on success.


* `2. Speak gently, she can hear`

  * [2-append_text_to_file.c](./2-append_text_to_file.c): C function that appends text at

  the end of a file.

  * The parameter `filename` is the name of the file.

  * The parameter `text_content` is a null-terminated string to append to the file.

  * The function does not create the file if it does not exist.

  * If `text_content` is `NULL`, nothing is added to the file.

  * If the function fails or `filename` is `NULL` - returns `-1`.

  * If the file does not exist or the user lacks write permissions on the file - returns `-1`.

  * Otherwise - returns `1`.


* `3. cp`

  * [3-cp.c](./3-cp.c): C program that copies the contents of a file to another file.

  * Usage: `cp file_from file_to`

  * If `file_to` already exists, it is truncated.

  * The created file has the permissions `rw-rw-r--`.

  * If the file already exists, the existing permissions are not changed.

  * If the number of arguments is incorrect, the function prints `Usage: cp file_from

  file_to`, followed by a new line on the `POSIX` standard error and exits with code `97`.

  * If `file_from` does not exist or the user lacks read permissions on it,

  the function prints `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new

  line and exits with code `98`.

    * Where `NAME_OF_THE_FILE` is the first argument passed to the program.

  * If files cannot be created or if `write` to `file_to` fails, the function prints

  `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line and exits with code `99`.

    * Where `NAME_OF_THE_FILE` is the second argument passed to the program.

  * If the user cannot close a file descriptor, the function prints `Error:

  Can't close fd FD_VALUE`, followed by a new line on the `POSIX` standard

  error and exits with code `100`.

    * Where `FD_VALUE` is the value of the file descriptor.


* `4. elf`

  * [100-elf_header.c](./100-elf_header.c): C program that displays the information contained

  in the `ELF` header at the start of an `ELF` file.

  * Usage `elf_header elf_filename`

  * Displayed information:

    * Magic

    * Class

    * Data

    * Version

    * OS/ABI

    * ABI Version

    * Type

    * Entry point address

  * Format is identical to `readelf -h` (version `2.26.1`).

  * If an error occurs or the file is not an `ELF` file, the function displays a

  corresponding error message to `stderr` and exits with a status value of `98`.







===================================


MAIN.H


#ifndef MAIN_H

#define MAIN_H


#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


#endif








===================================


0-read_textfile.c


#include "main.h"

#include <stdlib.h>


/**

 * read_textfile- Read text file print to STDOUT.

 * @filename: text file being read

 * @letters: number of letters to be read

 * Return: w- actual number of bytes read and printed

 *        0 when function fails or filename is NULL.

 */

ssize_t read_textfile(const char *filename, size_t letters)

{

        char *buf;

        ssize_t fd;

        ssize_t w;

        ssize_t t;


        fd = open(filename, O_RDONLY);

        if (fd == -1)

                return (0);

        buf = malloc(sizeof(char) * letters);

        t = read(fd, buf, letters);

        w = write(STDOUT_FILENO, buf, t);


        free(buf);

        close(fd);

        return (w);

}




===================================


1-create_file.c


#include "main.h"


/**

 * create_file - Creates a file.

 * @filename: A pointer to the name of the file to create.

 * @text_content: A pointer to a string to write to the file.

 *

 * Return: If the function fails - -1.

 *         Otherwise - 1.

 */

int create_file(const char *filename, char *text_content)

{

        int fd, w, len = 0;


        if (filename == NULL)

                return (-1);


        if (text_content != NULL)

        {

                for (len = 0; text_content[len];)

                        len++;

        }


        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

        w = write(fd, text_content, len);


        if (fd == -1 || w == -1)

                return (-1);


        close(fd);


        return (1);

}



===================================


2-append_text_to_file.c


#include "main.h"


/**

 * append_text_to_file - Appends text at the end of a file.

 * @filename: A pointer to the name of the file.

 * @text_content: The string to add to the end of the file.

 *

 * Return: If the function fails or filename is NULL - -1.

 *         If the file does not exist the user lacks write permissions - -1.

 *         Otherwise - 1.

 */

int append_text_to_file(const char *filename, char *text_content)

{

        int o, w, len = 0;


        if (filename == NULL)

                return (-1);


        if (text_content != NULL)

        {

                for (len = 0; text_content[len];)

                        len++;

        }


        o = open(filename, O_WRONLY | O_APPEND);

        w = write(o, text_content, len);


        if (o == -1 || w == -1)

                return (-1);


        close(o);


        return (1);

}




===================================


3-cp.c


#include "main.h"

#include <stdio.h>

#include <stdlib.h>


char *create_buffer(char *file);

void close_file(int fd);


/**

 * create_buffer - Allocates 1024 bytes for a buffer.

 * @file: The name of the file buffer is storing chars for.

 *

 * Return: A pointer to the newly-allocated buffer.

 */

char *create_buffer(char *file)

{

        char *buffer;


        buffer = malloc(sizeof(char) * 1024);


        if (buffer == NULL)

        {

                dprintf(STDERR_FILENO,

                        "Error: Can't write to %s\n", file);

                exit(99);

        }


        return (buffer);

}


/**

 * close_file - Closes file descriptors.

 * @fd: The file descriptor to be closed.

 */

void close_file(int fd)

{

        int c;


        c = close(fd);


        if (c == -1)

        {

                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

                exit(100);

        }

}


/**

 * main - Copies the contents of a file to another file.

 * @argc: The number of arguments supplied to the program.

 * @argv: An array of pointers to the arguments.

 *

 * Return: 0 on success.

 *

 * Description: If the argument count is incorrect - exit code 97.

 *              If file_from does not exist or cannot be read - exit code 98.

 *              If file_to cannot be created or written to - exit code 99.

 *              If file_to or file_from cannot be closed - exit code 100.

 */

int main(int argc, char *argv[])

{

        int from, to, r, w;

        char *buffer;


        if (argc != 3)

        {

                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

                exit(97);

        }


        buffer = create_buffer(argv[2]);

        from = open(argv[1], O_RDONLY);

        r = read(from, buffer, 1024);

        to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


        do {

                if (from == -1 || r == -1)

                {

                        dprintf(STDERR_FILENO,

                                "Error: Can't read from file %s\n", argv[1]);

                        free(buffer);

                        exit(98);

                }


                w = write(to, buffer, r);

                if (to == -1 || w == -1)

                {

                        dprintf(STDERR_FILENO,

                                "Error: Can't write to %s\n", argv[2]);

                        free(buffer);

                        exit(99);

                }


                r = read(from, buffer, 1024);

                to = open(argv[2], O_WRONLY | O_APPEND);


        } while (r > 0);


        free(buffer);

        close_file(from);

        close_file(to);


        return (0);

}

