#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c618; /* 0x55c618 */

extern unsigned int *FUN_00175f54(void);


void FUN_0015f0dc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00175f54();
  *puVar1 = (unsigned int)&DAT_0055c618;
  return;
}

} /* extern "C" */
