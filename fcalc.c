#include <stdio.h>
#include <math.h>		// All the necessary .h files are needed in
#include "constants.h"		// every file even though they will all be
#include "types.h"		// compiled together


float fcalc1(float f, code c)
{
   switch(c)
   {
      case COS:
         return (cos(f));
      case SIN:
         return (sin(f));
      case NEG:
         return (f*(-1));
   }

}					// The procedures calculate and return
					// a value of the type float.
					// Two procedures are needed as they
float fcalc2(float f, float g, code c)	// both take in a different number
{					// of floats.
   switch(c)
   {
      case ADD:				// Exactly the same can be said of
         return (f+g);			// the procedures in bcalc.c except
      case SUB:				// those procedures return a value
         return (f-g);			// of the type bool.
      case MUL:
         return (f*g);
      case DIV:
         return (f/g);
   }
}
