int     main(int argc, char *argv[ ])
{
    file    *pass_ptr;
    char    buff[33];
    int     i = 0;
    
    pass_ptr = fopen("/home/user/end/.pass","r");   /* FILE *fopen(const char * restrict path, const char * restrict mode); */
    puVar3 = buff;
    for (i = 33; i != 0; i--) {
        *puVar3 = 0;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((pass_ptr == NULL) || (argc != 2)) {
        ret = -1;
    }
    else {
      fread(buff, 1, 66, pass_ptr);   /* The function fread() reads nitems objects, each size bytes long, from the stream pointed to by stream, storing them at the location given by ptr. */
      local_57 = 0;
      iVar2 = atoi(argv[1]);
      *(undefined *)((int)buff + iVar2) = 0;
      fread(local_56,1,0x41,pass_ptr);
      fclose(pass_ptr);
      iVar2 = strcmp((char *)buff,*(char **)(param_2 + 4));
      if (iVar2 == 0) {
        execl("/bin/sh","sh",0);
      }
      else {
        puts(local_56);
      }
      ret = 0;
    }
    return (ret);
}
