/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ff988` (_code @ 0x1ff988, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254ac4. */
/* Supplied declaration required: FUN_002bb8e4. */


void FUN_001ff988(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [500];
  
  FUN_00254ac4(param_2,temp_v0,3);
  if (param_3 != 1) {
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
    FUN_002bb8e4(param_1 + 8,temp_v0,1);
    return;
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_002bb8e4(param_1 + 8,temp_v0,2);
  return;
}
