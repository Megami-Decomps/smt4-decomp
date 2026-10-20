#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558fb4; /* 0x558fb4 */

extern unsigned int *FUN_002f4f3c(void);


void FUN_003070fc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002f4f3c();
  *puVar1 = (unsigned int)&DAT_00558fb4;
  return;
}

} /* extern "C" */
