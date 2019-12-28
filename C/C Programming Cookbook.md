# C: C Programming Cookbook

- [Working with Arrays](#working-with-arrays)
	- [Inserting an element in an array](#inserting-an-element-in-an-array)
	- [Multiplying two matrices](#multiplying-two-matrices)
	- [Finding the common elements in two arrays](#finding-the-common-elements-in-two-arrays)
	- [Finding the difference between two sets or arrays](#finding-the-difference-between-two-sets-or-arrays)
	- [Finding the unique elements in an array](#finding-the-unique-elements-in-an-array)
	- [Finding whether a matrix is sparse](#finding-whether-a-matrix-is-sparse)
	- [Merging two sorted arrays into a single array](#merging-two-sorted-arrays-into-a-single-array)
- [Managing Strings](#managing-strings)
	- [Determining whether the string is a palindrome&#xA0;](#determining-whether-the-string-is-a-palindromexa0)
	- [Finding the occurrence of the first repetitive character in a string](#finding-the-occurrence-of-the-first-repetitive-character-in-a-string)
	- [Displaying the count of each character in a string](#displaying-the-count-of-each-character-in-a-string)
	- [Counting vowels and consonants in a sentence](#counting-vowels-and-consonants-in-a-sentence)
	- [Converting the vowels in a sentence to uppercase](#converting-the-vowels-in-a-sentence-to-uppercase)
- [Exploring Functions](#exploring-functions)
	- [What is a stack?](#what-is-a-stack)
	- [Finding whether a number is an Armstrong number](#finding-whether-a-number-is-an-armstrong-number)
	- [Returning maximum and minimum values in an array](#returning-maximum-and-minimum-values-in-an-array)
	- [Finding the greatest common divisor using recursion](#finding-the-greatest-common-divisor-using-recursion)
	- [Converting a binary number into a hexadecimal number](#converting-a-binary-number-into-a-hexadecimal-number)
	- [Finding whether a number is a palindrome&#xA0;](#finding-whether-a-number-is-a-palindromexa0)
- [Deep Dive into Pointers](#deep-dive-into-pointers)
	- [What is a pointer?](#what-is-a-pointer)
	- [Reversing a string using pointers](#reversing-a-string-using-pointers)
	- [Finding the largest value in an array using pointers](#finding-the-largest-value-in-an-array-using-pointers)
	- [Sorting a singly linked list](#sorting-a-singly-linked-list)
	- [Finding the transpose of a matrix using pointers](#finding-the-transpose-of-a-matrix-using-pointers)
	- [Accessing a structure using a pointer](#accessing-a-structure-using-a-pointer)
- [File Handling](#file-handling)
	- [Functions used in file handling](#functions-used-in-file-handling)
	- [Reading a text file and converting all characters after the period into uppercase](#reading-a-text-file-and-converting-all-characters-after-the-period-into-uppercase)
	- [Displaying the contents of a random file in reverse order](#displaying-the-contents-of-a-random-file-in-reverse-order)
	- [Counting the number of vowels in a file](#counting-the-number-of-vowels-in-a-file)
	- [Replacing a word in a file with another word](#replacing-a-word-in-a-file-with-another-word)
	- [Encrypting a file](#encrypting-a-file)
- [Implementing Concurrency](#implementing-concurrency)
	- [What are processes and threads?](#what-are-processes-and-threads)
	- [Performing a task with a single thread](#performing-a-task-with-a-single-thread)
	- [Performing multiple tasks with multiple threads](#performing-multiple-tasks-with-multiple-threads)
	- [Using&#xA0;mutex to share data between two threads](#usingxa0mutex-to-share-data-between-two-threads)
	- [Understanding how a deadlock is created](#understanding-how-a-deadlock-is-created)
	- [Avoiding a deadlock](#avoiding-a-deadlock)
- [Networking and Interprocess Communication](#networking-and-interprocess-communication)
	- [Communicating between processes using pipes](#communicating-between-processes-using-pipes)
	- [Communicating between processes using FIFO](#communicating-between-processes-using-fifo)
	- [Communicating between the client and server using socket programming](#communicating-between-the-client-and-server-using-socket-programming)
	- [Communicating between processes using a&#xA0;UDP socket](#communicating-between-processes-using-axa0udp-socket)
	- [Passing a message from one process to another using the message queue](#passing-a-message-from-one-process-to-another-using-the-message-queue)
	- [Communicating between processes using shared memory](#communicating-between-processes-using-shared-memory)
- [Using MySQL Database](#using-mysql-database)
	- [Functions in MySQL](#functions-in-mysql)
	- [Creating a MySQL database and tables](#creating-a-mysql-database-and-tables)
	- [Displaying all the built-in tables in a default mysql database](#displaying-all-the-built-in-tables-in-a-default-mysql-database)
	- [Storing information in MySQL database](#storing-information-in-mysql-database)
	- [Searching for the desired information in the database](#searching-for-the-desired-information-in-the-database)
	- [ Updating information in the database](#updating-information-in-the-database)
	- [Deleting data from the database using C](#deleting-data-from-the-database-using-c)
- [Appendix A](#appendix-a)
	- [Creating a sequential file and entering some data into it](#creating-a-sequential-file-and-entering-some-data-into-it)
	- [Reading content from a sequential file and displaying it onscreen](#reading-content-from-a-sequential-file-and-displaying-it-onscreen)
	- [Creating a random file and entering some data into it](#creating-a-random-file-and-entering-some-data-into-it)
	- [Reading content from a random file and displaying it onscreen](#reading-content-from-a-random-file-and-displaying-it-onscreen)
	- [Decrypting the contents of an encrypted file](#decrypting-the-contents-of-an-encrypted-file)

## Working with Arrays

### Inserting an element in an array

```c
#include<stdio.h>
#define max 100
void main()
{
	int p[max], n,i,k,j;

	printf("Enter length of array:");
	scanf("%d",&n);
	printf("Enter %d elements of array\n",n);
	for(i=0;i<=n-1;i++ )
		scanf("%d",&p[i]);
	printf("\nThe array is:\n");
	for(i = 0;i<=n-1;i++)
		printf("%d\n",p[i]);
	printf("\nEnter position where to insert:");
	scanf("%d",&k);
	k--;

/*The position is always one value higher than subscript so it is decremented by one*/
	for(j=n-1;j>=k;j--)
		p[j+1]=p[j];

/* Shifting all the elements of the array one position down from the location where to insert */
	printf("\nEnter the value to insert:");
	scanf("%d",&p[k]);
	printf("\nArray after insertion of element: \n");
	for(i=0;i<=n;i++)
		printf("%d\n",p[i]);
}
```

### Multiplying two matrices

```c
#include <stdio.h>

int main()
{
  int matA[2][3], matB[3][4], matR[2][4];
  int i,j,k;

  printf("Enter elements of first matrix of order 2 x 3 \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&matA[i][j]);
    }
  }
  printf("Enter elements of second matrix of order 3 x 4 \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      scanf("%d",&matB[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<4;j++)
    {
      matR[i][j]=0;
      for(k=0;k<3;k++)
      {
        matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
      }
    }
  }
  printf("\nFirst Matrix is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",matA[i][j]);
    }
    printf("\n");
  }
  printf("\nSecond Matrix is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d\t",matB[i][j]);
    }
    printf("\n");
  }
  printf("\nMatrix multiplication is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d\t",matR[i][j]);
    }
    printf("\n");
  }
  return 0;
}
```

### Finding the common elements in two arrays

```c
#include<stdio.h>
#define max 100

int ifexists(int z[], int u, int v)
{
	int i;
	if (u==0) return 0;
		for (i=0; i<=u;i++)
			if (z[i]==v) return (1);
	return (0);
}

void main()
{
	int p[max], q[max], r[max];
	int m,n;
	int i,j,k;
	k=0;
	printf("Enter length of first array:");
	scanf("%d",&m);
	printf("Enter %d elements of first array\n",m);
	for(i=0;i<m;i++ )
		scanf("%d",&p[i]);
	printf("\nEnter length of second array:");
	scanf("%d",&n);
	printf("Enter %d elements of second array\n",n);
	for(i=0;i<n;i++ )
		scanf("%d",&q[i]);
	k=0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (p[i]==q[j])
			{
				if(!ifexists(r,k,p[i]))
				{
					r[k]=p[i];
					k++;
				}
			}
		}
	}
	if(k>0)
	{
	printf("\nThe common elements in the two array are:\n");

	for(i = 0;i<k;i++)
		printf("%d\n",r[i]);
	}
	else
		printf("There are no common elements in two arrays\n");
}
```

### Finding the difference between two sets or arrays

```c
#include<stdio.h>
#define max 100

int ifexists(int z[], int u, int v)
{
	int i;
	if (u==0) return 0;
		for (i=0; i<=u;i++)
			if (z[i]==v) return (1);
	return (0);
}

void main()
{
	int p[max], q[max], r[max];
	int m,n;
	int i,j,k;
	k=0;
	printf("Enter length of first array:");
	scanf("%d",&m);
	printf("Enter %d elements of first array\n",m);
	for(i=0;i<m;i++ )
		scanf("%d",&p[i]);
	printf("\nEnter length of second array:");
	scanf("%d",&n);
	printf("Enter %d elements of second array\n",n);
	for(i=0;i<n;i++ )
		scanf("%d",&q[i]);
	k=0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (p[i]==q[j])
			{
				break;
			}
		}
		if(j==n)
		{
			if(!ifexists(r,k,p[i]))
			{
				r[k]=p[i];
				k++;
			}
		}

	}
	printf("\nThe difference of the two array is:\n");
	for(i = 0;i<k;i++)
		printf("%d\n",r[i]);
}
```

### Finding the unique elements in an array

```c
#include<stdio.h>
#define max 100

int ifexists(int z[], int u, int v)
{
	int i;
	for (i=0; i<u;i++)
		if (z[i]==v) return (1);
	return (0);
}

void main()
{
	int p[max], q[max];
	int m;
	int i,k;
	k=0;
	printf("Enter length of the array:");
	scanf("%d",&m);
	printf("Enter %d elements of th array\n",m);
	for(i=0;i<m;i++ )
		scanf("%d",&p[i]);
	q[0]=p[0];
	k=1;
	for (i=1;i<m;i++)
	{
		if(!ifexists(q,k,p[i]))
		{
			q[k]=p[i];
			k++;
		}
	}
	printf("\nThe unique elements in the array are:\n");

	for(i = 0;i<k;i++)
		printf("%d\n",q[i]);
}
```

### Finding whether a matrix is sparse

```c
#include <stdio.h>
#define max 100
/*A sparse martix is matrix which  has more zero elements than nonzero elements */
void main ()
{
	static int arr[max][max];
	int i,j,r,c;
	int ctr=0;
     	printf("How many rows and columns are in this matrix ? ");
     	scanf("%d %d", &r, &c);
	 printf("Enter elements in the matrix :\n");
       	for(i=0;i<r;i++)
        	{
            		for(j=0;j<c;j++)
            		{
	           		scanf("%d",&arr[i][j]);
			if (arr[i][j]==0)
				++ctr;
            		}
        	}
	if (ctr>((r*c)/2))
		printf ("The given matrix is a sparse matrix. \n");
	else
		printf ("The given matrix is not a sparse matrix.\n");
	printf ("There are %d number of zeros in the matrix.\n\n",ctr);
}
```

### Merging two sorted arrays into a single array

```c
#include<stdio.h>
#define max 100

void main()
{
	int p[max], q[max], r[max];
	int m,n;
	int i,j,k;
	printf("Enter length of first array:");
	scanf("%d",&m);
	printf("Enter %d elements of first array in sorted order \n",m);
	for(i=0;i<m;i++ )
		scanf("%d",&p[i]);
	printf("\nEnter length of second array:");
	scanf("%d",&n);
	printf("Enter %d elements of second array in sorted order\n",n);
	for(i=0;i<n;i++ )
		scanf("%d",&q[i]);
	i=j=k=0;
	while ((i<m) && (j <n))
	{
		if(p[i] < q[j])
		{
			r[k]=p[i];
			i++;
			k++;

		}
		else
		{
			if(q[j]< p[i])
			{
				r[k]=q[j];
				k++;
				j++;
			}
			else
			{
				r[k]=p[i];
				k++;
				i++;
				r[k]=q[j];
				k++;
				j++;
			}
		}
	}
	while(i<m)
	{
		r[k]=p[i];
		k++;
		i++;
	}
	while(j<n)
	{
		r[k]=q[j];
		k++;
		j++;
	}

	printf("\nThe combined sorted array is:\n");
	for(i = 0;i<k;i++)
		printf("%d\n",r[i]);
}
```

## Managing Strings

### Determining whether the string is a palindrome&#xA0;

```c
#include<stdio.h>
# include<string.h>

void main()
{
	char str[80],rev[80];
	int n,i,x;
	printf("Enter a string: ");
	scanf("%s",str);
	n=strlen(str);
	x=0;
	for(i=n-1;i >=0;  i--)
	{
		rev[x]=str[i];
		x++;
	}
	rev[x]='\0';
	if(strcmp(str,rev)==0)
		printf("The %s is palendrome",str);
	else
		printf("The %s is not palendrome",str);
}

```

### Finding the occurrence of the first repetitive character in a string

```c
#include<stdio.h>
# include<string.h>

int ifexists(char u, char z[],  int v)
{
	int i;
	for (i=0; i<v;i++)
		if (z[i]==u) return (1);
	return (0);
}

void main()
{
	char str1[80],str2[80];
	int n,i,x;
	printf("Enter a string: ");
	scanf("%s",str1);
	n=strlen(str1);
	str2[0]=str1[0];
	x=1;
	for(i=1;i < n;  i++)
	{
		if(ifexists(str1[i], str2, x))
		{
			printf("The first repetitive character in %s is %c", str1, str1[i]);
			break;
		}
		else
		{
			str2[x]=str1[i];
			x++;
		}
	}
	if(i==n)
		printf("There is no repetitve character in the string %s", str1);
}
```

### Displaying the count of each character in a string

```c

#include<stdio.h>
# include<string.h>

int ifexists(char u, char p[],  int v, int q[])
{
	int i;
	for (i=0; i<=v;i++)
	{
		if (p[i]==u)
		{
		q[i]++;
		return (1);
		}
	}
	if(i>v) return (0);
}

void main()
{
	char str[80],chr[80];
	int n,i,x,count[80];
	printf("Enter a string: ");
	scanf("%s",str);
	n=strlen(str);
	chr[0]=str[0];
	count[0]=1;
	x=0;
	for(i=1;i < n;  i++)
	{
		if(!ifexists(str[i], chr, x, count))
		{
			x++;
			chr[x]=str[i];
			count[x]=1;
		}
	}
	printf("The count of each character in the string %s is \n", str);
	for (i=0;i<=x;i++)
		printf("%c\t%d\n",chr[i],count[i]);
}
```

### Counting vowels and consonants in a sentence

```c#

include <stdio.h>
void main()
{
    char str[255];
    int  ctrV,ctrC,i;
   printf("Enter a sentence: ");
   gets(str);
    ctrV=ctrC=i=0;
    while(str[i]!='\0')
    {
	if((str[i] >=65 && str[i]<=90) || (str[i] >=97 && str[i]<=122))
	{
	        if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            		ctrV++;
        	       else
            		ctrC++;
	}
       	i++;
    }
    printf("Number of vowels are : %d\nNumber of consonants are : %d\n",ctrV,ctrC);
}
```

### Converting the vowels in a sentence to uppercase

```c
#include <stdio.h>
void main()
{
    char str[255];
    int  i;
   printf("Enter a sentence: ");
   gets(str);
   i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            str[i]=str[i]-32;
        i++;
    }
    printf("The sentence after converting vowels into upper case is:\n");
    puts(str);
}
```

## Exploring Functions

### What is a stack?

### Finding whether a number is an Armstrong number

```c
/* Finding whether the entered number is an armstrong number or not */

# include <stdio.h>
# include <math.h>

#define max 10

int top=-1;
int stack[max];

void push(int);
int pop();
int findarmstrong(int );

void main()
{
  	int n;
  	printf("Enter a number ");
  	scanf("%d",&n);
	if (findarmstrong(n))
		printf("%d is an armstrong number",n);
	else printf("%d is not an armstrong number", n);
}

int findarmstrong(int numb)
{
  	int j, remainder, temp,count,value;
	temp=numb;
	count=0;
  	while(numb >0)
  	{
     		remainder=numb%10;
     		push(remainder);
		count++;
     		numb=numb/10;
  	}
	numb=temp;
	value=0;
  	while(top >=0)
  	{
     		j=pop();
		value=value+pow(j,count);
  	}
	if(value==numb)return 1;
	else return 0;
}

void push(int m)
{
  	top++;
  	stack[top]=m;
}

int pop()
{
  	int j;
  	if(top==-1)return(top);
  	else
  	{
    		j=stack[top];
    		top--;
    		return(j);
  	}
}
```

### Returning maximum and minimum values in an array

```c
/* Find out maximum and minimum  of some values using function returning an array */

# include <stdio.h>

#define max 10

int *maxmin(int ar[], int v);

void main()
{
  	int  arr[max];
	int n,i, *p;
  	printf("How many values? ");
  	scanf("%d",&n);
  	printf("Enter %d values\n", n);
  	for(i=0;i<n;i++)
    		scanf("%d",&arr[i]);
  	p=maxmin(arr,n);
	printf("Minimum value is %d\n",*p++);
	printf("Maximum value is %d\n",*p);
}

int *maxmin(int ar[], int v)
{
 	int i;
	static int mm[2];
	mm[0]=ar[0];
	mm[1]=ar[0];
	for (i=1;i<v;i++)
	{
		if(mm[0] > ar[i])
    			mm[0]=ar[i];
		if(mm[1]< ar[i])
  			mm[1]= ar[i];
	}
	return mm;
}
```

### Finding the greatest common divisor using recursion

```c
#include <stdio.h>
int gcd(int p, int q);

void main()
{
	int u,v,g;
	printf("Enter two numbers: ");
	scanf("%d %d",&u,&v);
	g=gcd(u,v);
	printf("Greatest Common Divisor of %d and %d is %d",u,v,g);
}

int gcd(int a, int b)
{
	int m;
	m=a%b;
	if(m==0)
		return(b);
	else
		gcd(b,m);
}

```

### Converting a binary number into a hexadecimal number

```c
/* Converting binary to hexa */

# include <stdio.h>
#include  <math.h>

#define max 10

int top=-1;
int stack[max];

void push();
int pop();
char prnhexa(int);
int intodecimal(int);
void intohexa(int, int);

void main()
{
  	int b,d;
  	printf("Enter a number in binary number ");
  	scanf("%d",&b);
                  d=intodecimal(b);
   	printf("The decimal of binary number %d is %d\n", b, d);
	intohexa(b,d);
}

int intodecimal(int bin)
{
	int deci, remainder,exp,j;
  	while(bin >0)
  	{
     		remainder=bin%10;
     		push(remainder);
     		bin=bin/10;
  	}
    	deci=0;
  	exp=top;
  	while(top >=0)
  	{
     		j=pop();
     		deci=deci+j*pow(2,exp);
     		exp--;
   	}
	return (deci);
}

void intohexa(int bin, int deci)
{
	int remainder,j;
   	while(deci >0)
  	{
     		remainder=deci%16;
     		push(remainder);
     		deci=deci/16;
  	}
	printf("The hexa decimal format of binary number %d is ",bin);
  	while(top >=0)
  	{
     		j=pop();
		if(j<10)printf("%d",j);
		else printf("%c",prnhexa(j));
   	}
}

void push(int m)
{
  	top++;
  	stack[top]=m;
}

int pop()
{
  	int j;
  	if(top==-1)return(top);
	j=stack[top];
    	top--;
    	return(j);
}

char prnhexa(int v)
{
	switch(v)
	{
		case 10: return ('A');
			break;
		case 11: return ('B');
			break;
		case 12: return ('C');
			break;
		case 13: return ('D');
			break;
		case 14: return ('E');
			break;
		case 15: return ('F');
			break;
	}
}
```

### Finding whether a number is a palindrome&#xA0;

```c
/* Find out whether the entered number is palindrome or not */

# include <stdio.h>
#include <math.h>

#define max 10

int top=-1;
int stack[max];

void push();
int pop();
int findpalindrome(int);

void main()
{
  	int n;
  	printf("Enter a number ");
  	scanf("%d",&n);
  	if(findpalindrome(n))
     		printf("%d is a palindrome number",n);
  	else
     		printf("%d is not a palindrome number", n);
}

int findpalindrome(int numb)
{
  	int j, value, remainder, temp,count;
	temp=numb;
  	while(numb >0)
  	{
     		remainder=numb%10;
     		push(remainder);
     		numb=numb/10;
  	}
  	numb=temp;
  	count=0;
  	value=0;
  	while(top >=0)
  	{
     		j=pop();
    		value=value+j*pow(10,count);
     		count++;
  	}
  	if(numb==value) return (1);
  	else return (0);
}

void push(int m)
{
  	top++;
  	stack[top]=m;
}

int pop()
{
  	int j;
  	if(top==-1)return(top);
  	else
  	{
    		j=stack[top];
    		top--;
    		return(j);
  	}
}

```

## Deep Dive into Pointers

### What is a pointer?

### Reversing a string using pointers

```c
#include <stdio.h>

void main()
{
	char str[255], *ptr1, *ptr2, temp ;
	int n,m;
	printf("Enter a string: ");
	scanf("%s", str);
	ptr1=str;
	n=1;
	while(*ptr1 !='\0')
	{
		ptr1++;
		n++;
	}
	ptr1--;
	ptr2=str;
	m=1;
	while(m<=n/2)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1--;
		ptr2++;;
		m++;
	}
	printf("Reverse string is %s", str);
}
```

### Finding the largest value in an array using pointers

```c
#include <stdio.h>

#define max 100

void main()
{
	int p[max], i,n, *ptr, *mx;

	printf("How many elements are there? ");
	scanf("%d", &n);
	printf("Enter %d elements \n", n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	mx=p;
	ptr=p;
	for(i=1;i<n;i++)
	{
		if (*mx < *ptr)
		{
			mx=ptr;
		}
		ptr++;
	}
	printf("Largest value is %d\n", *mx);
}

```

### Sorting a singly linked list

```c
/* Sort the linked list by bubble sort */

#include<stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

void main()
{
	struct node *temp1,*temp2, *t,*newNode, *startList;
	int n,k,i,j;
	startList=NULL;
	printf("How many elements are there in the linked list ?");
	scanf("%d",&n);

	printf("Enter elements in the linked list\n");
	for(i=1;i<=n;i++)
	{
    		if(startList==NULL)
    		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			startList = newNode;
			temp1=startList;
		}
		else
		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			temp1->next = newNode;
			temp1=newNode;
		}
	}
	for(i=n-2;i>=0;i--)
	{
		temp1=startList;
		temp2=temp1->next;
		for(j=0;j<=i;j++)
		{
			if(temp1->data > temp2->data)
			{
				k=temp1->data;
				temp1->data=temp2->data;
				temp2->data=k;
			}
			temp1=temp2;
			temp2=temp2->next;
		}
	}
	printf("Sorted order is: \n");
	t=startList;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
}

```

### Finding the transpose of a matrix using pointers

```c
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[10][10],  r, c, i, j, *ptr,m;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    ptr = (int *)malloc(r * c * sizeof(int));
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            scanf("%d", &m);
             *(ptr+ i*c + j)=m;
        }
    }
    printf("\nMatrix using pointer is: \n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
           printf("%d\t",   *(ptr +i*c + j));
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
    {
        for(j=0; j<r; ++j)
        {
             printf("%d\t",*(ptr +j*c + i));
        }
        printf("\n");
   }
}
```

### Accessing a structure using a pointer

```c
#include <stdio.h>
#include <stdlib.h>

struct cart
{
	int orderno;
    	char emailaddress[30];
    	char password[30];
};

void main()
{
    	struct cart mycart;
    	struct cart *ptrcart, *ptrcust;
    	ptrcart = &mycart;
	printf("Enter order number: ");
	scanf("%d",&mycart.orderno);
	printf("Enter email address: ");
	scanf("%s",mycart.emailaddress);
	printf("Enter password: ");
	scanf("%s",mycart.password);
	printf("\nDetails of the customer are as follows:\n");
    	printf("Order number : %d\n", ptrcart->orderno);
    	printf("Email address : %s\n", ptrcart->emailaddress);
    	printf("Password : %s\n", ptrcart->password);
	printf("\nEnter new email address: ");
	scanf("%s",ptrcart->emailaddress);
	printf("Enter new password: ");
	scanf("%s",ptrcart->password);
	printf("\nModified customer's information is:\n");
	printf("Order number: %d\n", mycart.orderno);
	printf("Email address: %s\n", mycart.emailaddress);
	printf("Password: %s\n", mycart.password);
	ptrcust=(struct cart *)malloc(sizeof(struct cart));
	printf("\nEnter information of another customer:\n");
	printf("Enter order number: ");
	scanf("%d",&ptrcust->orderno);
	printf("Enter email address: ");
	scanf("%s",ptrcust->emailaddress);
	printf("Enter password: ");
	scanf("%s",ptrcust->password);
	printf("\nDetails of the second customer are as follows:\n");
    	printf("Order number : %d\n", ptrcust->orderno);
    	printf("Email address : %s\n", ptrcust->emailaddress);
    	printf("Password : %s\n", ptrcust->password);
}
```

## File Handling

### Functions used in file handling

### Reading a text file and converting all characters after the period into uppercase

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 255

void main (int argc, char* argv[])
{
   	FILE *fp;
  	char buffer[BUFFSIZE];
  	int i,n;

  	fp = fopen (argv [1],"r");
  	if (fp == NULL) {
    		printf("%s file does not exist\n", argv[1]);
    		exit(1);
  	}
  	while (!feof(fp))
  	{
    		fgets(buffer, BUFFSIZE, fp);
		n=strlen(buffer);
    		for(i=0;i<n;i++)
		{
			if(buffer[i]=='.')
			{
				i++;
				while(buffer[i]==' ')
				{
					i++;
				}
				if(buffer[i] >=97 && buffer[i] <=122)
				{
					buffer[i]=buffer[i]-32;
				}
			}
		}
    		puts(buffer);
 	 }
  	fclose(fp);
}

```

### Displaying the contents of a random file in reverse order

```c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

 struct data{
    char str[ 255 ];
};

void main (int argc, char* argv[])
{

   	FILE *fp;
 	struct data line;
	int n,nol,i;
  	fp = fopen (argv[1], "rb");
  	if (fp == NULL) {
     		perror ("An error occurred in opening the file\n");
    		exit(1);
  	}
 	fseek(fp, 0L, SEEK_END);
   	n = ftell(fp);
	nol=n/sizeof(struct data);
	printf("The content of random file in reverse order is :\n");
    	for (i=1;i<=nol;i++)
    	{
		fseek(fp, -sizeof(struct data)*i, SEEK_END);
		fread(&line,sizeof(struct data),1,fp);
		puts(line.str);
	}
  	fclose(fp);
}

```

### Counting the number of vowels in a file

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 255

void main (int argc, char* argv[])
{
   	FILE *fp;
  	char buffer[BUFFSIZE];
  	int n, i, count=0;

  	fp = fopen (argv [1],"r");
  	if (fp == NULL) {
    		printf("%s file does not exist\n", argv[1]);
    		exit(1);
  	}
	printf("The file content is :\n");
  	while (!feof(fp))
  	{
    		fgets(buffer, BUFFSIZE, fp);
    		puts(buffer);
		n=strlen(buffer);
		for(i=0;i<n;i++)
		{
			if(buffer[i]=='a' || buffer[i]=='e' || buffer[i]=='i' || buffer[i]=='o' || buffer[i]=='u' || buffer[i]=='A' || buffer[i]=='E' || buffer[i]=='I' || buffer[i]=='O' || buffer[i]=='U') count++;
		}
  	}
	printf("The number of vowels are %d\n",count);
  	fclose(fp);
}

```

### Replacing a word in a file with another word

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main (int argc, char* argv[])
{
   	FILE *fp;
  	char line[255], nline[300], str1[80], str2[80];
  	int i,ll, ls1,ls2, x,k, w, oldi;

  	fp = fopen (argv [1],"r");
  	if (fp == NULL) {
    		printf("%s file does not exist\n", argv[1]);
    		exit(1);
  	}
	printf("Enter a string to be replaced: ");
	scanf("%s", str1);
	printf("Enter the new string ");
	scanf("%s", str2);
	ls1=strlen(str1);
	ls2=strlen(str2);
	x=0;
  	while (!feof(fp))
  	{
    		fgets(line, 255, fp);
		ll=strlen(line);

    		for(i=0;i<ll;i++)
		{
			w=0;
			if(line[i]==str1[w])
			{
				oldi=i;
				while(w<ls1)
				{
					if(line[i] != str1[w])
						break;
					else
					{
						i++;
						w++;
					}
				}
				if(w==ls1)
				{

					i=oldi;
					for (k=0;k<ls2;k++)
					{
						nline[x]=str2[k];
						x++;
					}
					i=i+ls1-1;
				}
				else
				{
					i=oldi;
					nline[x]=line[i];
					x++;
				}

			}
			else
			{
				nline[x]=line[i];
				x++;
			}

		}
		nline[x]='\0';
    		puts(nline);
 	 }
  	fclose(fp);
}

```

### Encrypting a file

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 255

void main (int argc, char* argv[])
{
   	FILE *fp,*fq;
   	int  i,n;
  	char buffer[BUFFSIZE];

   	/* Open the source file in read mode */
 	fp = fopen (argv [1],"r");
  	if (fp == NULL) {
    		printf("%s file does not exist\n", argv[1]);
    		exit(1);
  	}

   	/* Create the destination file.  */
	fq = fopen (argv[2], "w");
  	if (fq == NULL) {
     		perror ("An error occurred in creating the file\n");
    		exit(1);
  	}
  	while (!feof(fp))
  	{
    		fgets(buffer, BUFFSIZE, fp);
    		n=strlen(buffer);
    		for(i=0;i<n;i++)
			buffer[i]=buffer[i]-45;
	      	fputs(buffer,fq);
  	}
   	fclose (fp);
   	fclose (fq);
}

```

## Implementing Concurrency

### What are processes and threads?

### Performing a task with a single thread

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *runThread(void *arg)
{
	int i;
    	printf("Running Thread \n");
	for(i=1;i<=5;i++) printf("%d\n",i);
    	return NULL;
}

int main()
{
    	pthread_t tid;
    	printf("In main function\n");
    	pthread_create(&tid, NULL, runThread, NULL);
    	pthread_join(tid, NULL);
    	printf("Thread over\n");
	return 0;
}
```

### Performing multiple tasks with multiple threads

```c
#include<pthread.h>
#include<stdio.h>

void *runThread1(void *arg){
	int i;
    	printf("Running Thread 1\n");
	for(i=1;i<=5;i++)
		printf("Thread 1 - %d\n",i);
}

void *runThread2(void *arg){
	int i;
    	printf("Running Thread 2\n");
	for(i=1;i<=5;i++)
		printf("Thread 2 - %d\n",i);
}

int main(){
	pthread_t tid1, tid2;
	pthread_create(&tid1,NULL,runThread1,NULL);
	pthread_create(&tid2,NULL,runThread2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
    	printf("Both threads are over\n");
	return 0;
}

```

### Using&#xA0;mutex to share data between two threads

```c
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_t tid1,tid2;
pthread_mutex_t lock;

void* runThread(void *arg)
{
	pthread_mutex_lock(&lock);
    	pthread_t id = pthread_self();
 	if(pthread_equal(id,tid1))
        		printf("First thread is running\n");
	else
 		printf("Second thread is running\n");
   	printf("Processing the common resource\n");
   	sleep(5);
   	if(pthread_equal(id,tid1))
        		printf("First thread is over\n\n");
	else
 		printf("Second thread is over\n\n");
    	pthread_mutex_unlock(&lock);
    	return NULL;
}

int main(void)
{
    	if (pthread_mutex_init(&lock, NULL) != 0)
        		printf("\n mutex init has failed\n");
         	pthread_create(&tid1, NULL, &runThread, NULL);
        	pthread_create(&tid2, NULL, &runThread, NULL);
    	pthread_join(tid1, NULL);
    	pthread_join(tid2, NULL);
    	pthread_mutex_destroy(&lock);
	return 0;
}
```

### Understanding how a deadlock is created

```c
#include <stdio.h>
#include <pthread.h>
#include<unistd.h>
#include <stdlib.h>

#define max 10
pthread_mutex_t pop_mutex;
pthread_mutex_t push_mutex;
int stack[max];
int top=-1;

void * push(void *arg) {
	int n;
	pthread_mutex_lock(&push_mutex);
	pthread_mutex_lock(&pop_mutex);
	printf("Enter the value to push: ");
	scanf("%d",&n);
	top++;
	stack[top]=n;
	pthread_mutex_unlock(&pop_mutex);
	pthread_mutex_unlock(&push_mutex);
	printf("Value is pushed to stack \n");
}

void * pop(void *arg) {
	int k;
	pthread_mutex_lock(&pop_mutex);
	pthread_mutex_lock(&push_mutex);
	k=stack[top];
	top--;
	printf("Value popped is %d \n",k);
	pthread_mutex_unlock(&push_mutex);
	pthread_mutex_unlock(&pop_mutex);
}

int main() {
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,&push,NULL);
	pthread_create(&tid2,NULL,&pop,NULL);
	printf("Both threads are created\n");
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
}
```

### Avoiding a deadlock

```c
#include <stdio.h>
#include <pthread.h>
#include<unistd.h>
#include <stdlib.h>

#define max 10
pthread_mutex_t pop_mutex;
pthread_mutex_t push_mutex;
int stack[max];
int top=-1;

void * push(void *arg) {
	int n;
	pthread_mutex_lock(&push_mutex);
	sleep(2);
	pthread_mutex_lock(&pop_mutex);
	printf("Enter the value to push: ");
	scanf("%d",&n);
	top++;
	stack[top]=n;
	pthread_mutex_unlock(&pop_mutex);
	pthread_mutex_unlock(&push_mutex);
	printf("Value is pushed to stack \n");
}

void * pop(void *arg) {
	int k;
	pthread_mutex_lock(&push_mutex);
	sleep(5);
	pthread_mutex_lock(&pop_mutex);
	k=stack[top];
	top--;
	printf("Value popped from stack is %d \n",k);
	pthread_mutex_unlock(&pop_mutex);
	pthread_mutex_unlock(&push_mutex);
}

int main() {
	int result;
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,&push,NULL);
	pthread_create(&tid2,NULL,&pop,NULL);
	printf("Both threads are created\n");
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
}
```

## Networking and Interprocess Communication

### Communicating between processes using pipes

```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define max 50

int main()
{
	char str[max];
    	int pp[2];

    	if (pipe(pp) < 0)
        		exit(1);
   	printf("Enter first message to write into pipe: ");
	gets(str);
    	write(pp[1], str, max);
   	printf("Enter second message to write into pipe: ");
	gets(str);
    	write(pp[1], str, max);
  	printf("Messages read from the pipe are as follows:\n");
        	read(pp[0], str, max);
        	printf("%s\n", str);
        	read(pp[0], str, max);
        	printf("%s\n", str);
    	return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define max  50

int main()
{
            char wstr[max];
            char rstr[max];
            int pp[2];
            pid_t p;
            if(pipe(pp) < 0)
            {
                        perror("pipe");
            }
            p = fork();
            if(p >= 0)
            {
                        if(p == 0)
                        {
                                     printf ("Enter the string : ");
		gets(wstr);
                                    write (pp[1] , wstr , strlen(wstr));
                                    exit(0);
                        }
                        else
                        {
                                    read (pp[0] , rstr , sizeof(rstr));
                                    printf("Entered message : %s\n " , rstr);
                                    exit(0);
                        }
            }
            else
            {
                        perror("fork");
                        exit(2);
            }
            return 0;
}

```

### Communicating between processes using FIFO

```c
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fw;
    char str[255];
    mkfifo("FIFOPipe", 0666);
    fw = open("FIFOPipe", O_WRONLY);
    printf("Enter text: ");
    gets(str);
    write(fw,str, sizeof(str));
    close(fw);
    return 0;
}
```

```c
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUFFSIZE 255

int main()
{
    int fr;
    char str[BUFFSIZE];

    fr = open("FIFOPipe", O_RDONLY);
    read(fr, str, BUFFSIZE);
    printf("Read from the FIFO Pipe: %s\n", str);
    close(fr);
    return 0;
}
```

### Communicating between the client and server using socket programming

```c
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>

int main(){
	int serverSocket, toSend;
  	char str[255];
  	struct sockaddr_in server_Address;

  	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  	server_Address.sin_family = AF_INET;
  	server_Address.sin_port = htons(2000);
  	server_Address.sin_addr.s_addr  = inet_addr("127.0.0.1");
  	memset(server_Address.sin_zero, '\0', sizeof server_Address.sin_zero);
  	bind(serverSocket, (struct sockaddr *) &server_Address, sizeof(server_Address));
  	if(listen(serverSocket,5)==-1)
	{
      		printf("Not able to listen\n");
      		return -1;
	}
   	printf("Enter text to send to the client: ");
   	gets(str);
	toSend = accept(serverSocket, (struct sockaddr *) NULL, NULL);
  	send(toSend,str, strlen(str),0);
	return 0;
}

```

```c
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>

int main(){
  	int clientSocket;
  	char str[255];
  	struct sockaddr_in client_Address;
  	socklen_t address_size;

  	clientSocket = socket(PF_INET, SOCK_STREAM, 0);
    	client_Address.sin_family = AF_INET;
  	client_Address.sin_port = htons(2000);
  	client_Address.sin_addr.s_addr = inet_addr("127.0.0.1");
  	memset(client_Address.sin_zero, '\0', sizeof client_Address.sin_zero);
  	address_size = sizeof client_Address;
  	connect(clientSocket, (struct sockaddr *) &client_Address, address_size);
  	recv(clientSocket, str, 255, 0);
  	printf("Data received froms server: %s",str);
  	return 0;
}

```

### Communicating between processes using a&#xA0;UDP socket

```c
#include <stdio.h>
#include <strings.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include<netinet/in.h>
#include <stdlib.h>

int main()
{
    	char msgReceived[255];
	char msgforclient[255];
    	int UDPSocket, len;
    	struct sockaddr_in server_Address, client_Address;
    	bzero(&server_Address, sizeof(server_Address));
	printf("Waiting for the message from the client\n");
        	if ( (UDPSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        		perror("Socket could not be created");
        		exit(1);
    	}
    	server_Address.sin_addr.s_addr = htonl(INADDR_ANY);
    	server_Address.sin_port = htons(2000);
    	server_Address.sin_family = AF_INET;
    	if ( bind(UDPSocket, (const struct sockaddr *)&server_Address, sizeof(server_Address)) < 0 )
    	{
        		perror("Binding could not be done");
        		exit(1);
    	}
    	len = sizeof(client_Address);
    	int n = recvfrom(UDPSocket, msgReceived, sizeof(msgReceived),  0, (struct sockaddr*)&client_Address,&len);
    	msgReceived[n] = '\0';
	printf("Message received from the client: ");
    	puts(msgReceived);
             	printf("Enter the reply to be sent to the client: ");
	gets(msgforclient);
    	sendto(UDPSocket, msgforclient, 255, 0, (struct sockaddr*)&client_Address, sizeof(client_Address));
	printf("Reply to the client sent \n");
}
```

```c
#include <stdio.h>
#include <strings.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include<netinet/in.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    	char msgReceived[255];
	char msgforserver[255];
    	int UDPSocket, n;
    	struct sockaddr_in client_Address;
             	printf("Enter the message to send to the server: ");
	gets(msgforserver);
    	bzero(&client_Address, sizeof(client_Address));
    	client_Address.sin_addr.s_addr = INADDR_ANY;
    	client_Address.sin_port = htons(2000);
    	client_Address.sin_family = AF_INET;
     	if ( (UDPSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        		perror("Socket could not be created");
        		exit(1);
    	}

    	if(connect(UDPSocket, (struct sockaddr *)&client_Address, sizeof(client_Address)) < 0)
    	{
        		printf("\n Error : Connect Failed \n");
        		exit(0);
    	}
    	sendto(UDPSocket, msgforserver, 255, 0, (struct sockaddr*)NULL, sizeof(client_Address));
	printf("Message to the server sent. \n");
    	recvfrom(UDPSocket, msgReceived, sizeof(msgReceived), 0, (struct sockaddr*)NULL, NULL);
      	printf("Received from the server: ");
    	puts(msgReceived);
    	close(UDPSocket);
}
```

### Passing a message from one process to another using the message queue

```c
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MSGSIZE     255

struct msgstruc {
    long mtype;
    char mesg[MSGSIZE];
};

int main()
{
    	int msqid, msglen;
    	key_t key;
	struct msgstruc msgbuf;
   	system("touch messagefile");
	if ((key = ftok("messagefile", 'a')) == -1) {
      		perror("ftok");
      		exit(1);
   	}
  	if ((msqid = msgget(key, 0666 | IPC_CREAT)) == -1) {
      		perror("msgget");
      		exit(1);
   	}
    	msgbuf.mtype = 1;
    	printf("Enter a message to add to message queue : ");
    	scanf("%s",msgbuf.mesg);
 	msglen = strlen(msgbuf.mesg);
 	if (msgsnd(msqid, &msgbuf, msglen, IPC_NOWAIT) < 0)
   		perror("msgsnd");
    	printf("The message sent is %s\n", msgbuf.mesg);
	return 0;
}
```

```c
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#define MSGSIZE     255

struct msgstruc {
    	long mtype;
    	char mesg[MSGSIZE];
};

int main()
{
    	int msqid;
    	key_t key;
	struct msgstruc rcvbuffer;

	if ((key = ftok("messagefile", 'a')) == -1) {
      		perror("ftok");
      		exit(1);
   	}
    	if ((msqid = msgget(key, 0666)) < 0)
	{
      		perror("msgget");
      		exit(1);
	}
    	if (msgrcv(msqid, &rcvbuffer, MSGSIZE, 1, 0) < 0)
  	{
      		perror("msgrcv");
      		exit(1);
	}
    	printf("The message received is %s\n", rcvbuffer.mesg);
	return 0;
}
```

### Communicating between processes using shared memory

```c
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str;
  	int shmid;

    	key_t key = ftok("sharedmem",'a');
    	if ((shmid = shmget(key, 1024,0666|IPC_CREAT)) < 0) {
        		perror("shmget");
        		exit(1);
    	}
      	if ((str = shmat(shmid, NULL, 0)) == (char *) -1) {
        		perror("shmat");
        		exit(1);
    	}
    	printf("Enter the string to be written in memory : ");
    	gets(str);
      	printf("String written in memory: %s\n",str);
    	shmdt(str);
	return 0;
}
```

```c
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int shmid;
	char * str;

	key_t key = ftok("sharedmem",'a');
      	if ((shmid = shmget(key, 1024,0666|IPC_CREAT)) < 0) {
        		perror("shmget");
        		exit(1);
    	}
      	if ((str = shmat(shmid, NULL, 0)) == (char *) -1) {
        		perror("shmat");
        		exit(1);
    	}
    	printf("Data read from memory: %s\n",str);
          	shmdt(str);
    	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}
```

## Using MySQL Database

### Functions in MySQL

### Creating a MySQL database and tables

### Displaying all the built-in tables in a default mysql database

```c
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

 void main() {
     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_ROW row;
     char *server = "127.0.0.1";
     char *user = "root";
     char *password = "Bintu2018$"; /* replace it with your MySQL root's password */
     char *database = "mysql";
     conn = mysql_init(NULL);
     if (!mysql_real_connect(conn, server,
         user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    if (mysql_query(conn, "show tables")) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }
    res = mysql_use_result(conn);
    printf("MySQL Tables in mysql database:\n");
    while ((row = mysql_fetch_row(res)) != NULL)
        printf("%s \n", row[0]);

    mysql_free_result(res);
    mysql_close(conn);
}
```

### Storing information in MySQL database

```c
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	MYSQL *conn;
     	char *server = "127.0.0.1";
     	char *user = "root";
     	char *password = "Bintu2018$";
     	char *database = "ecommerce";
     	char emailaddress[30], upassword[30],deliveryaddress[255],sqlquery[255];
     	conn = mysql_init(NULL);
     	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        		fprintf(stderr, "%s\n", mysql_error(conn));
        		exit(1);
    	}
    	printf("Enter email address: ");
    	scanf("%s", emailaddress);
    	printf("Enter password: ");
    	scanf("%s", upassword);
    	printf("Enter address of delivery: ");
	getchar();
    	gets(deliveryaddress);
	strcpy(sqlquery,"INSERT INTO users(email_address, password, address_of_delivery)VALUES (\'");
	strcat(sqlquery,emailaddress);
	strcat(sqlquery,"\', \'");
	strcat(sqlquery,upassword);
	strcat(sqlquery,"\', \'");
	strcat(sqlquery,deliveryaddress);
	strcat(sqlquery,"\')");
 	if (mysql_query(conn, sqlquery) != 0)
  	{
    		fprintf(stderr, "Row could not be inserted into users table\n");
        		exit(1);
  	}
	printf("Row is inserted successfully in users table\n");
    	mysql_close(conn);
}
```

### Searching for the desired information in the database

```c
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	MYSQL *conn;
     	MYSQL_RES *resultset;
     	MYSQL_ROW row;
     	char *server = "127.0.0.1";
     	char *user = "root";
     	char *password = "Bintu2018$";
     	char *database = "ecommerce";
     	char emailaddress[30], sqlquery[255];
     	conn = mysql_init(NULL);
     	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        		fprintf(stderr, "%s\n", mysql_error(conn));
        		exit(1);
    	}
    	printf("Enter email address to search: ");
    	scanf("%s", emailaddress);
	strcpy(sqlquery,"SELECT * FROM users where email_address like \'");
	strcat(sqlquery,emailaddress);
	strcat(sqlquery,"\'");
 	if (mysql_query(conn, sqlquery) != 0)
  	{
    		fprintf(stderr, "No row found in the users table with this email address\n");
        		exit(1);
  	}
	printf("The details of the user with this email address are as follows:\n");
   	resultset = mysql_use_result(conn);
    	while ((row = mysql_fetch_row(resultset)) != NULL)
	{
        		printf("Email Address: %s \n", row[0]);
 		printf("Password: %s \n", row[1]);
 		printf("Address of delivery: %s \n", row[2]);
	}
    	mysql_free_result(resultset);
    	mysql_close(conn);
}
```

###  Updating information in the database

```c
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	MYSQL *conn;
     	MYSQL_RES *resultset;
     	MYSQL_ROW row;
     	char *server = "127.0.0.1";
     	char *user = "root";
     	char *password = "Bintu2018$";
     	char *database = "ecommerce";
     	char emailaddress[30], sqlquery[255], upassword[30],deliveryaddress[255];
     	conn = mysql_init(NULL);
     	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        		fprintf(stderr, "%s\n", mysql_error(conn));
        		exit(1);
    	}
    	printf("Enter email address of the user to update: ");
    	scanf("%s", emailaddress);
	strcpy(sqlquery,"SELECT * FROM users where email_address like \'");
	strcat(sqlquery,emailaddress);
	strcat(sqlquery,"\'");
 	if (mysql_query(conn, sqlquery) != 0)
  	{
    		fprintf(stderr, "No row found in the users table with this email address\n");
        		exit(1);
  	}
	resultset = mysql_store_result(conn);
	if(mysql_num_rows(resultset) >0)
	{
		printf("The details of the user with this email address are as follows:\n");
    		while ((row = mysql_fetch_row(resultset)) != NULL)
		{
        			printf("Email Address: %s \n", row[0]);
 			printf("Password: %s \n", row[1]);
 			printf("Address of delivery: %s \n", row[2]);
		}
    		mysql_free_result(resultset);
  		printf("Enter new password: ");
    		scanf("%s", upassword);
    		printf("Enter new address of delivery: ");
		getchar();
    		gets(deliveryaddress);
		strcpy(sqlquery,"UPDATE users set password=\'");
		strcat(sqlquery,upassword);
		strcat(sqlquery,"\', address_of_delivery=\'");
		strcat(sqlquery,deliveryaddress);
		strcat(sqlquery,"\' where email_address like \'");
		strcat(sqlquery,emailaddress);
		strcat(sqlquery,"\'");
		if (mysql_query(conn, sqlquery) != 0)
  		{
    			fprintf(stderr, "The desired row in users table could not be updated\n");
        			exit(1);
  		}
		printf("The information of user is updated successfully in users table\n");
	}
	else
		printf("No user found with this email address\n");
    	mysql_close(conn);
}
```

### Deleting data from the database using C

```c
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	MYSQL *conn;
     	MYSQL_RES *resultset;
     	MYSQL_ROW row;
     	char *server = "127.0.0.1";
     	char *user = "root";
     	char *password = "Bintu2018$";
     	char *database = "ecommerce";
     	char emailaddress[30], sqlquery[255],k[10];
     	conn = mysql_init(NULL);
     	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        		fprintf(stderr, "%s\n", mysql_error(conn));
        		exit(1);
    	}
    	printf("Enter email address of the user to delete: ");
    	scanf("%s", emailaddress);
	strcpy(sqlquery,"SELECT * FROM users where email_address like \'");
	strcat(sqlquery,emailaddress);
	strcat(sqlquery,"\'");
 	if (mysql_query(conn, sqlquery) != 0)
  	{
    		fprintf(stderr, "No row found in the users table with this email address\n");
        		exit(1);
  	}
	resultset = mysql_store_result(conn);
	if(mysql_num_rows(resultset) >0)
	{
		printf("The details of the user with this email address are as follows:\n");
    		while ((row = mysql_fetch_row(resultset)) != NULL)
		{
        			printf("Email Address: %s \n", row[0]);
 			printf("Password: %s \n", row[1]);
 			printf("Address of delivery: %s \n", row[2]);
		}
    		mysql_free_result(resultset);
  		printf("Are you sure you want to delete this record yes/no: ");
    		scanf("%s", k);
		if(strcmp(k,"yes")==0)
		{
			strcpy(sqlquery,"Delete from users where email_address like \'");
			strcat(sqlquery,emailaddress);
			strcat(sqlquery,"\'");
			if (mysql_query(conn, sqlquery) != 0)
  			{
    				fprintf(stderr, "The user account could not be deleted\n");
        				exit(1);
  			}
			printf("The user with the given email address is successfully deleted from the users table\n");
		}
	}
	else
		printf("No user found with this email address\n");
    	mysql_close(conn);
}
```

## Appendix A

### Creating a sequential file and entering some data into it

```c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main (int argc, char* argv[])
{
   char str[255];
   FILE *fp;

  fp = fopen (argv[1], "w");
  if (fp == NULL) {
     perror ("An error occurred in creating the file\n");
    exit(1);
  }
  printf("Enter content for the file\n");
  gets(str);
  while(strcmp(str, "stop") !=0){
      fputs(str,fp);
      gets(str);
  }
  fclose(fp);
}

```

### Reading content from a sequential file and displaying it onscreen

```c
#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 255

void main (int argc, char* argv[])
{
   FILE *fp;
  char buffer[BUFFSIZE];

  fp = fopen (argv [1],"r");
  if (fp == NULL) {
    printf("%s file does not exist\n", argv[1]);
    exit(1);
  }
  while (!feof(fp))
  {
    fgets(buffer, BUFFSIZE, fp);
    puts(buffer);
  }
  fclose(fp);
}

```

### Creating a random file and entering some data into it

```c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

 struct data{
    char str[ 255 ];
    };

void main (int argc, char* argv[])
{
	FILE *fp;
 	struct data line;
  	fp = fopen (argv[1], "wb");
  	if (fp == NULL) {
     		perror ("An error occurred in creating the file\n");
    		exit(1);
  	}
	printf("Enter file content:\n");
	gets(line.str);
  	while(strcmp(line.str, "stop") !=0){
     		fwrite( &line, sizeof(struct data), 1, fp );
		gets(line.str);
	}
  	fclose(fp);
}

```

### Reading content from a random file and displaying it onscreen

```c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

 struct data{
    char str[ 255 ];
};

void main (int argc, char* argv[])
{

   	FILE *fp;
 	struct data line;
	int n,nol,i;
  	fp = fopen (argv[1], "rb");
  	if (fp == NULL) {
     		perror ("An error occurred in opening the file\n");
    		exit(1);
  	}
 	fseek(fp, 0L, SEEK_END);        /* go to end of file */
   	n = ftell(fp);
	nol=n/sizeof(struct data);
	rewind(fp);
	printf("The content in file is :\n");
    	for (i=1;i<=nol;i++)
    	{
		fread(&line,sizeof(struct data),1,fp);
		puts(line.str);
	}
  	fclose(fp);
}

```

### Decrypting the contents of an encrypted file

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 255

void main (int argc, char* argv[])
{
   	FILE *fp,*fq;
   	int  i,n;
  	char buffer[BUFFSIZE];

 	fp = fopen (argv [1],"r");
  	if (fp == NULL) {
    		printf("%s file does not exist\n", argv[1]);
    		exit(1);
  	}

  	fq = fopen (argv[2], "w");
  	if (fq == NULL) {
     		perror ("An error occurred in creating the file\n");
    		exit(1);
  	}
    	while (!feof(fp))
  	{
    		fgets(buffer, BUFFSIZE, fp);
    		n=strlen(buffer);
		for(i=0;i<n;i++)
			buffer[i]=buffer[i]+45;
	      	fputs(buffer,fq);
  	}
    	fclose (fp);
   	fclose (fq);
}

```

