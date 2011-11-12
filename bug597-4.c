extern __attribute__((section(".data.percpu" ""))) __typeof__(struct task_struct *) per_cpu__current_task;

extern void main(void)
{
  void * ret__;
  int u;
  asm volatile ("mov" "q ""%%""gs"":%P" "1"",%0" : "=r" (ret__) : "p" (&u));
}
