
void p(char *str,char *separator) /* separator " - " */

{
  char *nl_locator;
  char buff [4104];
  
  puts(separator);
  read(0, buff, 4096);
  nl_locator = strchr(buff,'\n'); /* locate the first occurence of \n in buff, return a pointer to located char or NULL*/
  *nl_locator = '\0';
  strncpy(str, buff, 20);
  return;
}

#something 
void pp(char *param_1)
{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  char local_34 [20];
  char local_20 [20];
  
  bVar4 = 0;
  p(local_34, " - ");
  p(local_20, " - ");
  strcpy(param_1,local_34);
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + (~uVar2 - 1)) = 0x20;
  strcat(param_1,local_20);
  return;
}



int main(void)
{
  char buff [54];
  
  pp(buff);
  puts(buff);
  return 0;
}