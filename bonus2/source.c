void greetuser(void)

{
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined local_3a;
  
  if (language == 1) {
    local_4c = 0xc3767948;
    local_48 = 0x20a4c3a4;
    local_44 = 0x69a4c370;
    local_40 = 0xc3a4c376;
    local_3c = 0x20a4;
    local_3a = 0;
  }
  else if (language == 2) {
    local_4c = 0x64656f47;
    local_48 = 0x64696d65;
    local_44 = 0x21676164;
    local_40 = CONCAT22(local_40._2_2_,0x20);
  }
  else if (language == 0) {
    local_4c = 0x6c6c6548;
    local_48 = CONCAT13(local_48._3_1_,0x206f);
  }
  strcat((char *)&local_4c,&stack0x00000004);
  puts((char *)&local_4c);
  return;
}

int     main(int argc, char *argv[])
{
    int ret;
    int count;
    void *ptr;
    undefined4 *puVar4;
    bool flag;
    undefined4 buff1 [10];
    char acStack56 [36];
    char *lang;

    flag = 0;
    if (argc == 3)
    {
        ptr = buff1;
        for (count = 19; count != 0; i--)        /* put zeros on buff1 count=19 time */
        {
          *ptr = 0;
          ptr = ptr + 1;
        }
        strncpy(buff1, argv[1], 40);
        strncpy(buff2, argv[2], 32);
        lang = getenv("LANG");
        if (lang) {
            if (memcmp(lang, "fi", 2) == 0)
              language = 1;
            else if (memcmp(lang, "nl", 2) == 0)
                language = 2;
        }
        ptr = buff1;
        puVar4 = (undefined4 *)&stack0xffffff50;
        for (count = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *ptr;
          ptr = ptr + flag * -2 + 1;
          puVar4 = puVar4 + flag * -2 + 1;
        }
        ret = greetuser();
    }
    else
        ret = 1;
    return (ret);
}