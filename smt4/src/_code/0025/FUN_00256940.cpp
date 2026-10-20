/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256940` (_code @ 0x256940, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlMain; /* 0x4342c8 */


unsigned int FUN_00256940(unsigned int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x44a0);
  if (((((*(unsigned int *)(param_2 + 0x44a8) & 0x40000000) == 0 || (temp_v0 & 0x4000000) == 0) &&
        (temp_v0 & 4) == 0) && ((*(unsigned int *)(param_2 + 0xe4) & 0x10) == 0 && (temp_v0 & 0x200) == 0)) &&
     ((param_3 == 0 || ((g_btlMain == 0 || ((*(unsigned int *)(g_btlMain + 0x634) & 0x2000000) == 0)))
      ))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
