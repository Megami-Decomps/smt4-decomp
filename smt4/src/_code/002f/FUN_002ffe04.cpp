#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);
long long __aeabi_idivmod(int, unsigned int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: __aeabi_idivmod. */


unsigned int FUN_002ffe04(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v2 = (unsigned int)((unsigned long long)__aeabi_idivmod(*(unsigned char *)(temp_v1 + 0x44b4) + 1,temp_v0) >> 0x20);
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
