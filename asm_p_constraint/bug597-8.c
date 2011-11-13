int p[600];
int u;
int main(void)
{
  void * ret__;
  asm volatile ("mov" "q ""%%""gs"":%P" "1"",%0" : "=r" (ret__) : "p" (p+u));
  return 0;
}
