/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380b4c` (_code @ 0x380b4c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421ba4; /* 0x421ba4 */

/* Supplied declaration required: FUN_002c3b00. */
extern int FUN_003804a8(unsigned int *);


int FUN_00380b4c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421ba4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  temp_v0 = FUN_003804a8(param_1 + 4);
  FUN_002c3b00(temp_v0 - 0xc);
  return temp_v0 - 0x10;
}
