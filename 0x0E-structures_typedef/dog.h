#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a structure that has data about dog
 *@name: the 1st member
 *@age: the 2nd member
 *@owner: the 3rd member
 *
 *Description: it contains basci information of the dog
 *like its name, age and its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *my_dog - type def of the structure dog
 */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
