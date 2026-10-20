#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558510; /* 0x558510 */

extern unsigned int *FUN_0010d134(void);


void FUN_0010390c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0010d134();
  *puVar1 = (unsigned int)&DAT_00558510;
  return;
}

} /* extern "C" */
