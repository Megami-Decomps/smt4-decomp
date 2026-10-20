#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558798; /* 0x558798 */

extern unsigned int *FUN_002ec6ec(unsigned int, unsigned int, unsigned int);


void FUN_002f7a28(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002ec6ec(param_1,6,0x40);
  *puVar1 = (unsigned int)&DAT_00558798;
  return;
}

} /* extern "C" */
