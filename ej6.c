#include <stdio.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	printf("\nIngrese una cadena:  ");
  	gets(str);
  	
  	while(str[len] != NULL){
        len++;
    }
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\nLa letra que mas se repite es: %c ", result);
	
  	return 0;
}