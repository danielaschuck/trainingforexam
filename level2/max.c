int max(int *tab, unsigned int len)
{
  if (len==0)
    return(0);

  unsigned int i = 0 ;
  unsigned int result;
  result = tab[i]; 
  while (i < len)
  {
      if(tab[i] > result)
        result=tab[i]
      i++;
  }
  return result;
}
