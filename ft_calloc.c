#include "libft.h"
#include <stdlib.h>

void	*ft_calloc (size_t n, size_t size)
{
//	size_t	sizeTotal = n * size;
	size_t	i = 0;
	void	*alloc = malloc(n * size);

	while (i < n + size)
	{
		((char *)alloc)[i++] = 0;
	}
	return (alloc);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void) {

 // Structure of student
  struct student {
    char rollNumber[3];
    char name[64];
  };

  // Pointer variables of struct student type
  struct student *sptr;
  struct student *tmp;

  // variables
  int i = 0;
  int numberOfStudents = 3;

  // Using calloc function to allocate the memory
  sptr = (struct student *) ft_calloc (numberOfStudents, sizeof(struct student));

  // For loop to enter the student details
  for(i = 0, tmp = sptr; i < numberOfStudents; i++, tmp++) {
    printf("Enter detail of student #%d\n", (i+1));
    printf("Enter Roll Number: ");
    scanf("%s", tmp->rollNumber);
    printf("Enter Name: ");
    scanf("%s", tmp->name);
  }

  // For loop to display the student details
  printf("\n\nFollowing are the student details:\n");
  for(i = 0, tmp = sptr; i < numberOfStudents; i++, tmp++) {
    printf("Detail of student #%d\n", (i+1));
    printf("Roll Number: %s\n", tmp->rollNumber);
    printf("Name: %s\n", tmp->name);
  }

  // Freeing up the allocated memory.
  free(sptr);

  return 0;
}*/

