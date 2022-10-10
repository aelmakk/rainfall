
int     main(int argc, char *argv[])
{
  undefined4 ret;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 buff [16];
  undefined local_57;
  char local_56 [66];
  FILE *local_14;
  
  bVar4 = 0;
  local_14 = fopen("/home/user/end/.pass","r");
  puVar3 = buff;

  // bzero(buff, sizeof(int)*33); 132 bytes
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if ((local_14 == NULL) || (argc != 2)) {
    ret = 0xffffffff;
  }
  else {
    fread(buff,1,0x42,local_14);
    local_57 = 0;
    iVar2 = atoi(argv[1]);
    *(char *)((int)buff + iVar2) = 0;
    fread(local_56,1,0x41,local_14);
    fclose(local_14);
    iVar2 = strcmp((char *)buff,*(char **)(param_2 + 4));
    if (iVar2 == 0) {
      execl("/bin/sh","sh",0);
    }
    else {
      puts(local_56);
    }
    ret = 0;
  }
  return ret;
}
