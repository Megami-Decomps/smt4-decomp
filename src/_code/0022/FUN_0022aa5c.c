/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022aa5c` (_code @ 0x22aa5c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027dca0. */


void FUN_0022aa5c(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  if ((((*(unsigned int *)(param_1 + 0x44a0) & 0x40000) == 0) && (FUN_0027dca0(), (*param_1 & 8) == 0)) &&
     (param_1 != (unsigned char *)0x0)) {
    if (param_3 != 0) {
      temp_v0 = *(unsigned short *)(param_1 + 0xfc);
    }
    else {
      temp_v0 = *(unsigned short *)(param_1 + 0xfe);
    }
    if (param_3 != 0) {
      *(unsigned short *)(param_1 + 0xfc) = temp_v0 | 0x10;
    }
    else {
      *(unsigned short *)(param_1 + 0xfe) = temp_v0 | 0x10;
    }
  }
  return;
}
