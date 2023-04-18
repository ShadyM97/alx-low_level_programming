#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog registeration
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the dog's owner
  *
  * Description: dog structure
  */
typedef struct dog
{
	char *name;
	float age;
	char* owner;
} dog_t;
#endif /* !DOG_H */
