/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022677c` (_code @ 0x22677c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */


void FUN_0022677c(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = param_1 * 0x14;
  *(unsigned int *)(temp_v0 + 0x6357e4) = param_2;
  (&DAT_006357dc)[param_1 * 5] = 0;
  (&DAT_006357e8)[temp_v0] = 3;
  *(unsigned int *)(temp_v0 + 0x6357d8) = 0x3f800000;
  return;
}

} /* extern "C" */
