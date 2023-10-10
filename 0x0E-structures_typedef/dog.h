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

#endif

