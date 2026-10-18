/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e660` (_code @ 0x11e660, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ab0c; /* 0x55ab0c */

/* Supplied declaration required: FUN_002eda5a. */


int FUN_0011e660(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ab0c;
  temp_v0 = FUN_002eda5a(param_1 + 0xe);
  temp_v0 = FUN_002eda5a(temp_v0 - 0xc);
  return temp_v0 - 0x2c;
}
