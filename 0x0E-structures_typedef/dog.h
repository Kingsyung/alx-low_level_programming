#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: gives the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner of the dog
 *
 * Description: This defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Additional function prototypes */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
