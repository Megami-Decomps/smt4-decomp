/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212204` (_code @ 0x212204, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */


void FUN_00212204(int param_1)

{
  int temp_v0;
  
  temp_v0 = param_1 * 0x14;
  (&DAT_006357dc)[param_1 * 5] = 0;
  *(unsigned int *)(temp_v0 + 0x6357e0) = 0;
  (&DAT_006357e8)[temp_v0] = 0;
  *(unsigned int *)(temp_v0 + 0x6357d8) = 0;
  return;
}
