void greetuser(char *str)
{
    char msg[];
    
    if (language == 1) {
          msg = "Hyvää päivää "; // good day
    }
    else if (language == 2) {
          msg = "Goedemiddag! "; //good afternoon
    }
    else if (language == 0) {
          msg = "Hello "
    }
    strcat(msg, str); // str is equal ebp +8 , argv[1]
    puts(msg);
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
    char *buff2 [36];
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
        ret = greetuser(argv[1]);
    }
    else
        ret = 1;
    return (ret);
}