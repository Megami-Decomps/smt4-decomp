/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd63c` (_code @ 0x3fd63c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_004bb6d8. */


void FUN_003fd63c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v2 = FUN_001ab940();
  if (param_3 != 0) {
    FUN_004bb6d8(param_1,param_2);
  }
  temp_v1 = (unsigned char)(1 << (param_1 & 7));
  temp_v0 = *(unsigned char *)(temp_v2 + (param_1 >> 3));
  if (param_2 != 0) {
    temp_v1 = temp_v1 | temp_v0;
  }
  else {
    temp_v1 = temp_v0 & ~temp_v1;
  }
  *(unsigned char *)(temp_v2 + (param_1 >> 3)) = temp_v1;
  return;
}
