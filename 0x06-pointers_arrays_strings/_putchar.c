#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - Writes When the Character of the letter a to the stdout                                                                                          
 * @a: The Character to Print                                                                                                           
 *                                                                                                                                      
 * Return: On the Success 1.                                                                                                                
 * On error, -1 Number is returned, and errno is set Appropriately.                                                                            
 */                                                                                                                                     
int _putchar(char a)                                                                                                                    
{                                                                                                                                       
        return (write(1, &a, 1));                                                                                                       
}
