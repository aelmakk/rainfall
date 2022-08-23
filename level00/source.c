int main(int argc, char **argv)
{
    int value;
    value = atoi(argv[1]);
    if (value != 423)
    {} // {"flag"}
    else
        fwrite(); // {"No\n"}
    return (0);
}