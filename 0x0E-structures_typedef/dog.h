#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - initializes a variable of type struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
