/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221a78` (_code @ 0x221a78, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433278; /* 0x433278 */

extern int FUN_001ed164(void);


unsigned int FUN_00221a78(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00433278 - param_1) - 1 < 0) || (temp_v0 = FUN_001ed164(), *(int *)(temp_v0 + 0xd8) < 1)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
