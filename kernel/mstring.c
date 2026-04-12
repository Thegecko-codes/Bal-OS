#include "mstring.h"

char* mstrcat(char *dest, const char *src)
{
  int i = 0;
  int j = 0;

  while (dest[i] != '\0') 
  {
    i++;
  }
  while (src[j] != '\0') {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return dest;
}
bool mstrcmp(const char *s1, const char *s2)
{
  int ret = 0;
  while (!(ret = *(unsigned char *) s1 - *(unsigned char *) s2) && *s2)
    ++s1, ++s2;
  if(ret == 0)
    return false;
  else if(ret > 0)
    return true;
}
