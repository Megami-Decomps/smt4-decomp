/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129c70` (_code @ 0x129c70, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471a8c; /* 0x471a8c */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_00129c70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_00471a8c;
  temp_v1 = 0;
  if (param_2 < 7) {
    FUN_002c3aa8(DAT_00471a8c);
    temp_v2 = temp_v0 + param_2 * 4;
    temp_v1 = *(unsigned int *)(temp_v2 + 0x10);
    *(unsigned int *)(temp_v2 + 0x10) = param_1;
    FUN_002c3a24(temp_v0);
  }
  return temp_v1;
}
