#include <stdio.h>
#include <string.h>
#include <math.h>

int
poslednaya ()
{
  int ls;
  scanf ("%d", &ls);
  return ls;
}

int
pervaya ()
{
  int fs;
  scanf ("%d", &fs);
  return fs;

}

int number = 0;

int
ANY_BIGGER_TEN_TO_DEC (char chislo[10], int first)
{
  int i, s, k, p;
  s = 0;
  p = strlen (chislo) - 1;
  //printf ("%d\n", p);
  //printf ("%d\n", first);
  for (i = 0; p >= 0; i++, p--)
    {
      k = toupper (chislo[i]);
      s += ((k >= 'A') ? 10 + k - 'A' : k - '0') * pow (first, p);
    }
  return s;
}

int
main (void)
{
  char chislo[10];
  char lol[10];
  int first, b, last, chl, p;
  printf ("first system: ");
  first = pervaya ();
  printf ("\nposledna'ya system: ");
  last = poslednaya ();
  printf ("vvedite chislo: ");
  scanf ("%s", &chislo);
  //printf ("Result: %d\n", ANY_BIGGER_TEN_TO_DEC (chislo, first));
  if (last == 10)
    {
      printf ("Resultat perevoda: %d\n",
	      ANY_BIGGER_TEN_TO_DEC (chislo, first));
    }
  else if (last > 10)
    {
      printf ("Resultat perevoda v DEC: %d\n",
	      ANY_BIGGER_TEN_TO_DEC (chislo, first));
      printf ("nu i tut nedodumal yesh'e))))");
    }
  else if (last < 10)
    {
      chl = ANY_BIGGER_TEN_TO_DEC (chislo, first);
      printf ("Resultat perevoda v DEC: %d\n", chl);
      int b, schet = 0;
      for (int i = 0; chl != 0; i++, schet++)
	    {
	        b = chl % last;
	        lol[i] = b;
	        chl = chl / last;
	    }
      printf ("Resultat perevoda: ");
      p = strlen (lol)-1;
      for (int i = schet-1; i >= 0; i--)
        {
            printf("%d", lol[i]);
        }
    }
  else
    printf ("U vas odinakovaya s.s.");

  return 0;
}
