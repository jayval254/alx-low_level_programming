#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type declaration for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0 on success
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
