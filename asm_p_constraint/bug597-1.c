void *  per_cpu__current_task;

int main(void)
{
  void * ret__;
  asm volatile ("mov %P" "1"",%0" : "=r" (ret__) : "p" (per_cpu__current_task));
  return 0;
}
