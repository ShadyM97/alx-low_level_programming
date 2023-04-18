#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - dog registeration
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the dog's owner
  *
  * Description: Dog Structure
  */
typedef struct dog
{
	char *name;
	float age;
	char* owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* !DOG_H */
