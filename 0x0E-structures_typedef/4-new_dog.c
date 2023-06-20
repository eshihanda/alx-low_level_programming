#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: pointer to the new dog otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, len1 = 0, len2 = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name =  malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}


