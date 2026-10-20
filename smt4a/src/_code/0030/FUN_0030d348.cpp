#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559504; /* 0x559504 */

extern unsigned int *FUN_002fd284(void);


void FUN_0030d348(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002fd284();
  *puVar1 = (unsigned int)&DAT_00559504;
  return;
}

} /* extern "C" */
