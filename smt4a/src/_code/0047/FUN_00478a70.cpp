#include "romwright_types.h"

extern "C" {

extern unsigned int *jobGetWork(void);


unsigned int FUN_00478a70(void)
{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)jobGetWork();
  puVar1[0x5e6] = (puVar1[0x5e6] + 1) % 0x28;
  if (puVar1[0x5e6] > 0x14) {
    *puVar1 = *puVar1 | 0x200;
  }
  return 0;
}
} /* extern "C" */
