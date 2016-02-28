#include <stdio.h>
#include "constants.h"
#include "types.h"

bool bcalc1(bool b, code c)
{
   switch(c)
   {
      case NOT:
         return (!b);
   }
}


bool bcalc2(bool b, bool d, code c)
{
   switch(c)
   {
      case AND:
         return (b && d);
      case OR:
         return (b || d);
   }
}
