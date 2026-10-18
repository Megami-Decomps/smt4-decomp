/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001068b4` (_code @ 0x1068b4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005584b0; /* 0x5584b0 */
extern unsigned char DAT_00558924; /* 0x558924 */


void FUN_001068b4(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00558924;
  param_1[1] = (unsigned int)&DAT_005584b0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}
