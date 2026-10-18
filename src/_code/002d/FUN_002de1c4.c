/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de1c4` (_code @ 0x2de1c4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea9c; /* 0x44ea9c */

/* Supplied declaration required: FUN_0024972c. */
/* Supplied declaration required: FUN_0024fe64. */
/* Supplied declaration required: FUN_00250440. */


unsigned int FUN_002de1c4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0024972c(DAT_0044ea9c,*(int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                 *(unsigned short *)(param_1 + 8));
  }
  temp_v0 = DAT_0044ea9c;
  FUN_0024fe64(DAT_0044ea9c);
  FUN_00250440();
  return temp_v0;
}
