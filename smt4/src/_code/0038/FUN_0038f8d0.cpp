#include "romwright_types.h"

extern "C" {

extern unsigned int *jobGetWork(void);


unsigned int FUN_0038f8d0(void)
{
  unsigned int *puVar1;
  unsigned int *p;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)jobGetWork();
  p = puVar1 + 0x5e6;
  temp_v0 = (*p + 1) % 0x28;
  *p = temp_v0;
  if (temp_v0 > 0x14) {
    *puVar1 = *puVar1 | 0x200;
  }
  return 0;
}
} /* extern "C" */
