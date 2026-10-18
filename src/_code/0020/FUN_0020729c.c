/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020729c` (_code @ 0x20729c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae584. */


int FUN_0020729c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  FUN_002ae584();
  temp_v1 = *param_2;
  FUN_002ae584();
  temp_v0 = (unsigned int)*(unsigned short *)(temp_v1 + 0x28) - (unsigned int)*(unsigned short *)(temp_v0 + 0x28);
  if (temp_v0 == 0) {
    temp_v0 = *param_1;
    FUN_002ae584();
    temp_v1 = *param_2;
    FUN_002ae584();
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v1 + 0x24) - (unsigned int)*(unsigned short *)(temp_v0 + 0x24);
  }
  return temp_v0;
}
