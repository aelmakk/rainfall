
void p(char *str,char *separator) /* separator " - " */

{
  char *nl_locator;
  char buff [4104];
  
  puts(separator);
  read(0, buff, 4096);
  nl_locator = strchr(buff,'\n'); /* locate the first occurence of \n in buff, return a pointer to located char or NULL*/
  *nl_locator = '\0'; /* replace new line if found with '\0' */
  strncpy(str, buff, 20);
  return;
}

void pp(char *buff)
{
  char          cVar1;
  unsigned int  cpt;
  // int           flag;
  char          *p;
  char          str1 [20];
  char          str2 [20];
  
  // flag = 0;
  p(str1, " - ");
  p(str2, " - ");
  strcpy(buff, str1);
  cpt = UINT_MAX;
  p = buff;
  do {
    if (cpt == 0)
      break;
    cpt --;
    cVar1 = *p;
    p += 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(buff + (~cpt - 1)) = ' ';
  strcat(buff,str2);
  return;
}



int main(void)
{
  char buff [54];
  
  pp(buff);
  puts(buff);
  return 0;
}


str1 = "AAAABBBBCCCCDDDDEEEE"  20 + 9 + shellcode
str2 = "IIIIJJJJKAAAALLLMMMMNNNNOOOOPPPPQQQQ"

AAAAAAAAAAAAAAAAAAAABBBBBBBBBBBB BBBBBBBBBBBB

BBBBBBBBBBBBBBBBBBB