/*
  CS300 Secure Coding
  Homework: 1
  Question: 2
  compile: gcc question-1.c -o question-1 -w -fno-stack-protector -z execstack -no-pie
*/

int main(int argc, char *argv[])
{
  char cmdline[4096];
  cmdline[0] = '\0';

  for (int i = 1; i < argc; i++)
  {
    strcat(cmdline, argv[i]);
    strat(cmdline, " ");
  }

  return 0;

}
