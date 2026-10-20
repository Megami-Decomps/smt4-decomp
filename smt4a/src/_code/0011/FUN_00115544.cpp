#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559814; /* 0x559814 */

extern unsigned int *FUN_002e9f80(void);


void FUN_00115544(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_00559814;
  return;
}

} /* extern "C" */
