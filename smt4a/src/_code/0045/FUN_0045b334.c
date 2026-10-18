/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b334` (_code @ 0x45b334, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001af090(void);


void FUN_0045b334(unsigned int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0 */
  unsigned int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = FUN_001af090();
  param_1[1] = in_s0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  *param_1 = temp_v0 | ((param_2 & 0x7f) << 0x18) | 0x80000000;
  return;
}
