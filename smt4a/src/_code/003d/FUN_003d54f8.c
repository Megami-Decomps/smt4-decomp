/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d54f8` (_code @ 0x3d54f8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */


void FUN_003d54f8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 * 0x14 + 0x6357e0) = param_2;
  (&DAT_006357dc)[param_1 * 5] = 0;
  (&DAT_006357e8)[param_1 * 0x14] = 2;
  return;
}
