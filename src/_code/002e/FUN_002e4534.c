/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4534` (_code @ 0x2e4534, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9364. */


int FUN_002e4534(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  FUN_002b9364();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  FUN_002b9364();
  temp_v0 = (unsigned int)(unsigned char)puVar2[1] - (unsigned int)(unsigned char)puVar1[1];
  if ((temp_v0 == 0) &&
     (temp_v0 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar1 + 3), temp_v0 == 0)) {
    temp_v0 = (unsigned int)*puVar1 - (unsigned int)*puVar2;
  }
  return temp_v0;
}
