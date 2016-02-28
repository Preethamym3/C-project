#include <stdio.h>
#include "constants.h"
#include "types.h"


main ()
{
  char c; 
  float f, g, res; 
  bool b, d;

  printf ("University of St Andrews Calculator\n");
  do
  {
    printf ("? ");
    scanf (" %c", &c);

    switch (c)
    {
      case '+':
      case '-':
      case '*':
      case '/':
        scanf ("%f%f", &f, &g);
        res = fcalc2 (f, g, encode (c));
        break;

      case 's':
      case 'c':
      case '~':
        scanf ("%f", &f);
        res = fcalc1 (f, encode (c));
        break;

      case '!':
        scanf ("%d", &b);
        res = bcalc1 (b, encode (c));
        break;

      case '&':
      case '|':
        scanf ("%d%d", &b, &d);
        res = bcalc2 (b, d, encode (c));
        break;

      case 'q':
        continue;

      default:
        printf ("Unknown command: %c", c);
	do
	{
	  scanf ("%c", &c);
	  printf ("%c", c);
	} while (c != '\n');
        continue;
    }
    printf ("%f\n", res);
  } while (c != 'q');
}
