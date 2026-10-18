/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377384` (_code @ 0x377384, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004215d4; /* 0x4215d4 */
extern unsigned char DAT_004215f4; /* 0x4215f4 */
extern unsigned char DAT_004ea4b4; /* 0x4ea4b4 */


void FUN_00377384(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_004215d4;
  param_1[1] = (unsigned int)&DAT_004215f4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (unsigned int)(param_1 + 4);
  param_1[5] = (unsigned int)(param_1 + 4);
  param_1[6] = (unsigned int)&DAT_004ea4b4;
  param_1[7] = 0x20;
  param_1[8] = 0x3f666666;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(unsigned char *)(param_1 + 0xe) = 0;
  return;
}
