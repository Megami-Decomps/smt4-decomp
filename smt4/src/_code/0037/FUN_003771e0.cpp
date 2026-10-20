#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004219c4; /* 0x4219c4 */

extern unsigned int *FUN_0037b4b0(unsigned int, unsigned int);


void FUN_003771e0(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037b4b0(param_1,0);
  *puVar1 = (unsigned int)&DAT_004219c4;
  return;
}

} /* extern "C" */
