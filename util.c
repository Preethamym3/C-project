#include <stdio.h>
#include "constants.h"
#include "types.h"


code encode(char c)		// The type code, which is used in this
{				// procedure is defined in "types.h".
				// This procedure takes a char value and
   switch(c)			// returns a code value which is used in
   {				// the fcalc.c and bcalc.c files.
      case '+':			// For ease of understanding, "constants.h"
         return (ADD);		// predefines ADD to be 1 (the code for
      case '-':			// addition) and SUB to be 2 etc.
         return (SUB);
      case '*':
         return (MUL);
      case '/':
         return (DIV);

      case 's':
         return (SIN);
      case 'c':
         return (COS);
      case '~':
         return (NEG);

      case '!':
         return (NOT);
      case '&':
         return (AND);
      case '|':
         return (OR);

      default:
         return (UNK);

   }
}
