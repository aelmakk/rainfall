
void p(char *param_1,char *separator) /* separator " - " */

{
  char *pcVar1;
  char local_100c [4104];
  
  puts(separator);
  read(0,local_100c,0x1000);
  pcVar1 = strchr(local_100c,'\n');
  *pcVar1 = '\0';
  strncpy(param_1,local_100c,0x14);
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
  p(local_34,&DAT_080486a0);
  p(local_20,&DAT_080486a0);
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