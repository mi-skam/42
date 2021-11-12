#include <stdio.h>

char *ft_strrev(char *str)
{
  char placeholder;
  
  int counter = 0;
  int strLength = 0;
   
  // determine string length
  for (int i=0; str[i] != '\0'; i++) {
    strLength++; 
  }
  strLength--;
  
  // swap characters
  while(counter < strLength)
    {   
        printf("str: %s, strLength: %d, counter: %d, placeholder: %c\n", str, strLength, counter, placeholder);
        placeholder = str[strLength];
        str[strLength] = str[counter];
        str[counter] = placeholder;
        counter++;
        strLength--;
    }
  return (str);
}

int main(void)
{
    char strg[60]; 
    printf("Please insert the string you wish to get reversed: ");
    scanf("%s", strg); 
    (ft_strrev)(strg);
    printf("%s", strg);
    return 0;
}