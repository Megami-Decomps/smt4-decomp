/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3490` (_code @ 0x2f3490, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558b2c; /* 0x558b2c */

/* Supplied declaration required: FUN_002e9318. */


int FUN_002f3490(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558b2c;
  temp_v0 = FUN_002e9318(param_1 + 4);
  temp_v0 = FUN_002e9318(temp_v0 - 0xc);
  return temp_v0 - 4;
}
