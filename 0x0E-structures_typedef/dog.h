#ifndef DOG_H
#define DOG_H
/**
 * struct dog-struct dog
 * @name:name
 * @owner:name
 * @age:age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
