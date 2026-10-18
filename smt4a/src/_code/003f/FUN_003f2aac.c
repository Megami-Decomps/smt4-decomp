/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2aac` (_code @ 0x3f2aac, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001568f8. */


void FUN_003f2aac(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  FUN_001568f8();
  if (((*param_1 & 8) == 0) && (param_1 != (unsigned char *)0x0)) {
    if (param_3 != 0) {
      temp_v0 = *(unsigned short *)(param_1 + 0x112);
    }
    else {
      temp_v0 = *(unsigned short *)(param_1 + 0x114);
    }
    if (param_3 != 0) {
      *(unsigned short *)(param_1 + 0x112) = temp_v0 | 0x10;
    }
    else {
      *(unsigned short *)(param_1 + 0x114) = temp_v0 | 0x10;
    }
  }
  return;
}
