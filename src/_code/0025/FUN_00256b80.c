/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256b80` (_code @ 0x256b80, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004342c8; /* 0x4342c8 */


unsigned int FUN_00256b80(unsigned int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x44a0);
  if (((((*(unsigned int *)(param_2 + 0x44a8) & 0x40000000) == 0 || (temp_v0 & 0x4000000) == 0) &&
        (temp_v0 & 4) == 0) && ((*(unsigned int *)(param_2 + 0xe4) & 0x10) == 0 && (temp_v0 & 0x200) == 0)) &&
     ((param_3 == 0 || ((DAT_004342c8 == 0 || ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x2000000) == 0)))
      ))) {
    return 1;
  }
  return 0;
}
