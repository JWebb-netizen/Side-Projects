#include <stdio.h>

int _dectohex();
int _hextodec();
int _topmenu();

char choice1, choice2;

int main()
{
    while(choice1 != 'q'|| choice2 != 'q')
    {
        _topmenu();
        {
            if(choice1 == 'q'|| choice2 == 'q')
            {
                return(0);
            }
            else if(choice1 == 'd' && choice2 == 'h') /* for converting a decimal to a hex */
            {
                _dectohex();
            }
            else if(choice1 == 'h' && choice2 == 'd') /* for converting a hex to a decimal */
            {
                _hextodec();
            }
        }   
    }
  return(0);
}

int _topmenu()
{
    printf("///// DECIMAL-HEXADECIMAL CONVERTER /////'\n'"
    "Please select the format you are converting from:'\n'"
    "For decimal, press d'\n'"
    "For hexadecimal, press h'\n'"
    "To quit application, press q'\n'"
    "Type slection: ");
    scanf(" %c", &choice1);
    printf("'\n'");

    printf("Please select the format you are converting to:'\n'"
    "For decimal, press d'\n'"
    "For hexadecimal, press h'\n'"
    "To quit application, press q'\n'"
    "Type slection: ");
    scanf(" %c", &choice2);
    printf("'\n'");

  return(0);
}

int _dectohex()
{
char htab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
char temptab[4] = {'0', '0', '0', '0'};
int modulo, v, y;
modulo = 0;
v = 4;
y = 0;

    printf("Input a positive integer to convert (allowed range: 0-65535): ");
    scanf("%d", &y);
      /** hex conversions are done on the remainder of successive divisions of
       *  the decimal. The is achieved by using a loop and the modulo to get
       *  remainders until a number less than 1 is reached
       */
        while(y >= 1)
	      {
	          modulo = y % 16; 
	          /** simply printing the output of htab[modulo] will print the
	           *  the characters in reverse order. For each iteration of the
	           *  while loop, the value is stored in an array, starting at the
	           *  end of the array and filling towards the beginning
	           */
	          temptab[v] = htab[modulo];
	          v--;
	          y = y / 16;
	      }
        /** Once the modulo loop has completed, the temporary array is printed
         *  This should print the hex in the correct order
         */
        for(v = 1; v < 5; v++)
	      {
	          printf("%c", temptab[v]);
	      }
    printf("'\n'"
    "'\n'"
    "'\n'");
    return(0);
}


int _hextodec()
{
char hex[4] = {'0', '0', '0', '0'};
int val[4] = {'0', '0', '0', '0'};
int w, z, sum;

w = 1;
z = 0;
sum = 0;

    printf("Input a hexadecimal to convert (Allowed range 0000-FFFF)'\n'"
    "Enter each character one at a time.'\n'"
    "Four character's must be entered, for values with less than'\n'"
    "four characters, add leading 0's to reach four characters'\n'"
    "eg. 6C -> 006C'\n'"
    "Enter first character: ");
    scanf(" %c", &hex[1]);    /* scanf to save each character of the hex in an array */
    printf("Enter second character: ");
    scanf(" %c", &hex[2]);
    printf("Enter third character: ");
    scanf(" %c", &hex[3]);
    printf("Enter fourth character: ");
    scanf(" %c", &hex[4]);
    
    /** The for loop takes values from the hex[], converts them to integers and
     *  saves the result in the val[] one by on.
     *  The if and else if statements are to convert the letter characters to an
     *  integer. The final else statment converts number characters into integers
     */
    for(z = 1; z < 5; z++)
	  {
	      if(hex[z] == 'A')
		    {
			    val[w] = 10;
	            w++;
		    }
	      else if(hex[z] == 'B')
		    {
		        val[w] = 11;
		        w++;
		    }
	      else if(hex[z] == 'C')
	      {
		        val[w] = 12;
		        w++;
		    }
	      else if(hex[z] == 'D')
		    {
		        val[w] = 13;
		        w++;
		    }
	      else if (hex[z] == 'E')
	      {
		        val[w] = 14;		 
		        w++;
		    }
	      else if(hex[z] == 'F')
		    {
		        val[w] = 15;
		        w++;
		    }  
	      else
	      {
	            val[w] = hex[z] - '0';
	            w++;
	      }
	  }
    sum = (val[1] * 4096) + (val[2] * 256) + (val[3] * 16) + (val[4]);
    printf("%d'\n'", sum);
    printf("'\n'"
    "'\n'");
    return(0);
}