int main(void)
{
  void * ret__;
  asm volatile ("mov" " ""%P" "1"",%0" : "=r" (ret__) : "p" (0xffffffff00000000));
  return 0;
}
