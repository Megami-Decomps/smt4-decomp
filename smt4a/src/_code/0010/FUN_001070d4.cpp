/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001070d4` (_code @ 0x1070d4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558ae4; /* 0x558ae4 */

extern int FUN_00115750(unsigned int *);


void FUN_001070d4(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558ae4;
  temp_v0 = FUN_00115750(param_1 + 1);
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  return;
}

} /* extern "C" */
