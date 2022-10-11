#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @names: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;
/* Additional function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
