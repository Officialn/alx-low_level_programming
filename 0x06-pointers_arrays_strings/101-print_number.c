cat > main.h
                                                                                                           
#ifndef MAIN_H                                                                                                                     
#define MAIN_H                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * File: main.h                                                                                                                    
 * Auth: sam tech(Samuel birhanu)                                                                                                             
 * Desc: Header file containing prototypes for all functions                                                                            
 *       used in the 0x06. C - More pointers, arrays and strings directory.
 */                                                                                                                                     
                                                                                                                                        
int _putchar(char c);                                                                                                                   
char *_strcat(char *dest, char *src);                                                                                                   
char *_strncat(char *dest, char *src, int n);                                                                                           
char *_strncpy(char *dest, char *src, int n);                                                                                           
int _strcmp(char *s1, char *s2);                                                                                                        
void reverse_array(int *a, int n);                                                                                                      
char *string_toupper(char *);                                                                                                           
char *cap_string(char *);                                                                                                               
char *leet(char *);                                                                                                                     
char *rot13(char *);                                                                                                                    
void print_number(int n);                                                                                                               
char *infinite_add(char *n1, char *n2, char *r, int size_r);                                                                            
void print_buffer(char *b, int size);                                                                                                   
                                                                                                                                        
#endif

















cat > _putchar.c

#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - writes the character c to stdout                                                                                          
 * @c: The character to print                                                                                                           
 *                                                                                                                                      
 * Return: On success 1.                                                                                                                
 * On error, -1 is returned, and errno is set appropriately.                                                                            
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}                              





























#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * strcat - Concatenates the string pointed to by @src, including the terminat                                                       
 *          null byte, to the end of the string pointed to by @dest.                                                                 
 * @dest: A pointer to the string to be concatenated upon.                                                                           
 * @src: The source string to be appended to @dest.                                                                                  
 *                                                                                                                                   
 * Return: A pointer to the destination string @dest.                                                                                
 */                                                                                                                                  
char *strcat(char *dest, const char *src)                                                                                            
{                                                                                                                                    
        int index = 0, dest_len = 0;                                                                                                 
                                                                                                                                     
        while (dest[index++])                                                                                                        
                dest_len++;                                                                                                          
                                                                                                                                     
        for (index = 0; src[index]; index++)                                                                                         
                dest[dest_len++] = src[index];                                                                                       
                                                                                                                                     
        return (dest);                                                                                                               
}






















#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strncat - Concatenates two strings using at most                                                                                 
 *            an inputted number of bytes from src.                                                                                  
 * @dest: The string to be appended upon.                                                                                            
 * @src: The string to be appended to dest.                                                                                          
 * @n: The number of bytes from src to be appended to dest.                                                                          
 *                                                                                                                                   
 * Return: A pointer to the resulting string dest.                                                                                   
 */                                                                                                                                  
char *_strncat(char *dest, char *src, int n)                                                                                         
{                                                                                                                                    
        int index = 0, dest_len = 0;                                                                                                 
                                                                                                                                     
        while (dest[index++])                                                                                                        
                dest_len++;                                                                                                          
                                                                                                                                     
        for (index = 0; src[index] && index < n; index++)                                                                            
                dest[dest_len++] = src[index];                                                                                       
                                                                                                                                     
        return (dest);                                                                                                               
}





















#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strncpy - Copies at most an inputted number                                                                                      
 *            of bytes from string src into dest.                                                                                    
 * @dest: The buffer storing the string copy.                                                                                        
 * @src: The source string.                                                                                                          
 * @n: The maximum number of bytes to copied from src.                                                                               
 *                                                                                                                                   
 * Return: A pointer to the resulting string dest.                                                                                   
 */                                                                                                                                  
char *_strncpy(char *dest, char *src, int n)                                                                                         
{                                                                                                                                    
        int index = 0, src_len = 0;                                                                                                  
                                                                                                                                     
        while (src[index++])                                                                                                         
                src_len++;                                                                                                           
                                                                                                                                     
        for (index = 0; src[index] && index < n; index++)                                                                            
                dest[index] = src[index];                                                                                            
                                                                                                                                     
        for (index = src_len; index < n; index++)                                                                                    
                dest[index] = '\0';                                                                                                  
                                                                                                                                     
        return (dest);                                                                                                               
}


















#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strcmp - Compares pointers to two strings.                                                                                       
 * @s1: A pointer to the first string to be compared.                                                                                
 * @s2: A pointer to the second string to be compared.                                                                               
 *                                                                                                                                   
 * Return: If str1 < str2, the negative difference of the first unmatched char                                                       
 *         If str1 == str2, 0.                                                                                                       
 *         If str1 > str2, the positive difference of the first unmatched char                                                       
 */                                                                                                                                  
int _strcmp(char *s1, char *s2)                                                                                                      
{                                                                                                                                    
        while (*s1 && *s2 && *s1 == *s2)                                                                                             
        {                                                                                                                            
                s1++;                                                                                                                
                s2++;                                                                                                                
        }                                                                                                                            
                                                                                                                                     
        return (*s1 - *s2);                                                                                                          
}























#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * reverse_array - Reverses the content of an array of integers.                                                                     
 * @a: The array of integers to be reversed.                                                                                         
 * @n: The number of elements in the array.                                                                                          
 */                                                                                                                                  
void reverse_array(int *a, int n)                                                                                                    
{                                                                                                                                    
        int tmp, index;                                                                                                              
                                                                                                                                     
        for (index = n - 1; index >= n / 2; index--)                                                                                 
        {                                                                                                                            
                tmp = a[n - 1 - index];                                                                                              
                a[n - 1 - index] = a[index];                                                                                         
                a[index] = tmp;                                                                                                      
        }                                                                                                                            
}


























#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * string_toupper - Changes all lowercase letters                                                                                    
 *                  of a string to uppercase.                                                                                        
 * @str: The string to be changed.                                                                                                   
 *                                                                                                                                   
 * Return: A pointer to the changed string.                                                                                          
 */                                                                                                                                  
char *string_toupper(char *str)                                                                                                      
{                                                                                                                                    
        int index = 0;                                                                                                               
                                                                                                                                     
        while (str[index])                                                                                                           
        {                                                                                                                            
                if (str[index] >= 'a' && str[index] <= 'z')                                                                          
                        str[index] -= 32;                                                                                            
                                                                                                                                     
                index++;                                                                                                             
        }                                                                                                                            
                                                                                                                                     
        return (str);                                                                                                                
}





















#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * cap_string - Capitalizes all words of a string.                                                                                    
 * @str: The string to be capitalized.                                                                                                
 *                                                                                                                                    
 * Return: A pointer to the changed string.                                                                                           
 */                                                                                                                                   
char *cap_string(char *str)                                                                                                           
{                                                                                                                                     
        int index = 0;                                                                                                                
                                                                                                                                      
        while (str[index])                                                                                                            
        {                                                                                                                             
                while (!(str[index] >= 'a' && str[index] <= 'z'))                                                                     
                        index++;                                                                                                      
                                                                                                                                      
                if (str[index - 1] == ' ' ||                                                                                          
                    str[index - 1] == '\t' ||                                                                                         
                    str[index - 1] == '\n' ||                                                                                         
                    str[index - 1] == ',' ||                                                                                          
                    str[index - 1] == ';' ||                                                                                          
                    str[index - 1] == '.' ||                                                                                          
                    str[index - 1] == '!' ||                                                                                          
                    str[index - 1] == '?' ||                                                                                          
                    str[index - 1] == '"' ||                                                                                          
                    str[index - 1] == '(' ||                                                                                          
                    str[index - 1] == ')' ||                                                                                          
                    str[index - 1] == '{' ||                                                                                          
                    str[index - 1] == '}' ||                                                                                          
                    index == 0)                                                                                                       
                        str[index] -= 32;                                                                                             
                                                                                                                                      
                index++;                                                                                                              
        }                                                                                                                             
                                                                                                                                      
        return (str);                                                                                                                 
}






#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * leet - Encodes a string to 1337.                                                                                                   
 * @str: The string to be encoded.                                                                                                    
 *                                                                                                                                    
 * Return: A pointer to the encoded string.                                                                                           
 */                                                                                                                                   
char *leet(char *str)                                                                                                                 
{                                                                                                                                     
        int indx1 = 0, indx2;                                                                                                         
        char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};                                                                      
                                                                                                                                      
        while (str[indx1])                                                                                                            
        {                                                                                                                             
                for (indx2 = 0; indx2 <= 7; indx2++)                                                                                  
                {                                                                                                                     
                        if (str[indx1] == leet[indx2] ||                                                                              
                            str[indx1] - 32 == leet[indx2])                                                                           
                                str[indx1] = indx2 + '0';                                                                             
                }                                                                                                                     
                                                                                                                                      
                indx1++;                                                                                                              
        }                                                                                                                             
                                                                                                                                      
        return (str);                                                                                                                 
}

















#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * rot13 - Encodes a string using rot13.                                                                                                    
 *                                                                                                                                    
 * Return: A pointer to the encoded string.                                                                                           
 */
char *rot13(char *str)                                                                                                                
{                                                                                                                                     
        int indx1 = 0, indx2;                                                                                                         
        char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',                                                                            
                             'G', 'H', 'I', 'J', 'K', 'L',                                                                            
                             'M', 'N', 'O', 'P', 'Q', 'R',                                                                            
                             'S', 'T', 'U', 'V', 'W', 'X',                                                                            
                             'Y', 'Z', 'a', 'b', 'c', 'd',                                                                            
                             'e', 'f', 'g', 'h', 'i', 'j',                                                                            
                             'k', 'l', 'm', 'n', 'o', 'p',                                                                            
                             'q', 'r', 's', 't', 'u', 'v',                                                                            
                             'w', 'x', 'y', 'z'};                                                                                     
        char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',                                                                            
                             'T', 'U', 'V', 'W', 'X', 'Y',                                                                            
                             'Z', 'A', 'B', 'C', 'D', 'E',                                                                            
                             'F', 'G', 'H', 'I', 'J', 'K',                                                                            
                             'L', 'M', 'n', 'o', 'p', 'q',                                                                            
                             'r', 's', 't', 'u', 'v', 'w',                                                                            
                             'x', 'y', 'z', 'a', 'b', 'c',                                                                            
                             'd', 'e', 'f', 'g', 'h', 'i',                                                                            
                             'j', 'k', 'l', 'm'};                                                                                     
                                                                                                                                      
        while (str[indx1])                                                                                                            
        {                                                                                                                             
                for (indx2 = 0; indx2 < 52; indx2++)                                                                                  
                {                                                                                                                     
                        if (str[indx1] == alphabet[indx2])                                                                            
                        {                                                                                                             
                                str[indx1] = rot13key[indx2];                                                                         
                                break;                                                                                                
                        }                                                                                                             
                }                                                                                                                     
                                                                                                                                      
                indx1++;                                                                                                              
        }                                                                                                                             
                                                                                                                                      
        return (str);                                                                                                                 
}




#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * print_number - Prints an integer.                                                                                                  
 * @n: The integer to be printed.                                                                                                     
 */                                                                                                                                   
void print_number(int n)                                                                                                              
{                                                                                                                                     
        unsigned int num = n;                                                                                                         
                                                                                                                                      
        if (n < 0)                                                                                                                    
        {                                                                                                                             
                _putchar('-');                                                                                                        
                num = -num;                                                                                                           
        }                                                                                                                             
                                                                                                                                      
        if ((num / 10) > 0)                                                                                                           
                print_number(num / 10);                                                                                               
                                                                                                                                      
        _putchar((num % 10) + '0');                                                                                                   
}























#include <stdio.h>                                                                                                                    
                                                                                                                                      
int main(void)                                                                                                                        
{                                                                                                                                     
        int n;                                                                                                                        
        int a[5];                                                                                                                     
        int *p;                                                                                                                       
                                                                                                                                      
        a[2] = 1024;                                                                                                                  
        p = &n;                                                                                                                       
/*                                                                                                                                    
 * write your line of code here...                                                                                                    
 * Remember:                                                                                                                          
 * main - magic                                                                                                                       
 * - you are not allowed to use a                                                                                                     
 *   - you are not allowed to modify p                                                                                                
 *   - only one statement                                                                                                             
 *   - you are not allowed to code anything else than this line of code                                                               
 */                                                                                                                                   
        *(p + 5) = 98;                                                                                                                
/* ...so that this prints 98\n */                                                                                                     
        printf("a[2] = %d\n", a[2]);                                                                                                  
        return (0);                                                                                                                   
}




















        #include "main.h"                                                                                                                       
                                                                                                                                        
char *add_strings(char *n1, char *n2, char *r, int r_index);                                                                            
char *infinite_add(char *n1, char *n2, char *r, int size_r);                                                                            
                                                                                                                                        
/**                                                                                                                                     
 * add_strings - Adds the numbers stored in two strings.                                                                                
 * @n1: The string containing the first number to be added.                                                                             
 * @n2: The string containing the second number to be added.                                                                            
 * @r: The buffer to store the result.                                                                                                  
 * @r_index: The current index of the buffer.                                                                                           
 *                                                                                                                                      
 * Return: If r can store the sum - a pointer to the result.                                                                            
 *         If r cannot store the sum - 0.                                                                                               
 */                                                                                                                                     
char *add_strings(char *n1, char *n2, char *r, int r_index)                                                                             
{                                                                                                                                       
        int num, tens = 0;                                                                                                                                
        
        for (; *n1 && *n2; n1--, n2--, r_index--)                                                                                       
        {                                                                                                                               
                num = (*n1 - '0') + (*n2 - '0');                                                                                        
                num += tens;                                                                                                            
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        for (; *n1; n1--, r_index--)                                                                                                    
        {                                                                                                                               
                num = (*n1 - '0') + tens;                                                                                               
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        for (; *n2; n2--, r_index--)                                                                                                    
        {                                                                                                                               
                num = (*n2 - '0') + tens;                                                                                               
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        if (tens && r_index >= 0)                                                                                                       
        {                                                                                                                               
                *(r + r_index) = (tens % 10) + '0';                                                                                     
                return (r + r_index);                                                                                                   
        }                                                                                                                               
                                                                                                                                        
        else if (tens && r_index < 0)                                                                                                   
                return (0);                                                                                                             
                                                                                                                                        
        return (r + r_index + 1);                                                                                                       
}

#include "main.h"                                                                                                                       
#include <stdio.h>                                                                                                                      
                                                                                                                                        
/**                                                                                                                                     
 * print_buffer - Prints a buffer 10 bytes at a time, starting with                                                                     
 *                the byte position, then showing the hex content,                                                                      
 *                then displaying printable charcaters.                                                                                 
 * @b: The buffer to be printed.                                                                                                        
 * @size: The number of bytes to be printed from the buffer.                                                                            
 */                                                                                                                                     
void print_buffer(char *b, int size)                                                                                                    
{                                                                                                                                       
        int byte, index;
        
        for (byte = 0; byte < size; byte += 10)                                                                                         
        {                                                                                                                               
                printf("%08x: ", byte);                                                                                                 
                                                                                                                                        
                for (index = 0; index < 10; index++)                                                                                    
                {                                                                                                                       
                        if ((index + byte) >= size)                                                                                     
                                printf("  ");                                                                                           
                                                                                                                                        
                        else                                                                                                            
                                printf("%02x", *(b + index + byte));                                                                    
                                                                                                                                        
                        if ((index % 2) != 0 && index != 0)                                                                             
                                printf(" ");                                                                                            
                }                                                                                                                       
                                                                                                                                        
                for (index = 0; index < 10; index++)                                                                                    
                {                                                                                                                       
                        if ((index + byte) >= size)                                                                                     
                                break;                                                                                                  
                                                                                                                                        
                        else if (*(b + index + byte) >= 31 &&                                                                           
                                 *(b + index + byte) <= 126)                                                                            
                                printf("%c", *(b + index + byte));                                                                      
                                                                                                                                        
                        else                                                                                                            
                                printf(".");                                                                                            
                }                                                                                                                       
                                                                                                                                        
                if (byte >= size)                                                                                                       
                        continue;                                                                                                       
                                                                                                                                        
                printf("\n");                                                                                                           
        }                                                                                                                               
                                                                                                                                        
        if (size <= 0)                                                                                                                  
                printf("\n");                                                                                                           
}


























