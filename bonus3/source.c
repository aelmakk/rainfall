int     main(int argc, char *argv[ ])
{
    file    *pass_ptr;
    char    buff[132];
    int     tmp;
    
    pass_ptr = fopen("/home/user/end/.pass","r");   /* FILE *fopen(const char * restrict path, const char * restrict mode); */
    bzero(buff, sizeof(int) * 33)
    if ((pass_ptr == NULL) || (argc != 2)) {
        ret = 0xffffffff;
    }
    else {
      fread(buff, 1, 66, pass_ptr);   /* The function fread() reads nitems objects, each size bytes long, from the stream pointed to by stream, storing them at the location given by ptr. */
      local_57 = 0;
      tmp = atoi(argv[1]);
      *(undefined *)((int)buff + tmp) = 0;
      fread(local_56, 1, 65, pass_ptr);
      fclose(pass_ptr);
      if (strcmp(buff, argv[1]); == 0) {
        execl("/bin/sh","sh",0);
      }
      else {
        puts(local_56);
      }
      ret = 0;
    }
    return (ret);
}
