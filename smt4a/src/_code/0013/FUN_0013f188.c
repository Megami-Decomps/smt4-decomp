/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f188` (_code @ 0x13f188, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3bc0; /* 0x5b3bc0 */
extern unsigned int *DAT_005b3bc4; /* 0x5b3bc4 */


void FUN_0013f188(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int in_s0;
  
  puVar1 = (unsigned int *)&DAT_005b3bc0;
  if (DAT_005b3bc0 != 0) {
    puVar1 = DAT_005b3bc4;
  }
  if ((DAT_005b3bc0 != 0 && param_1 < puVar1) &&
     (temp_v0 = DAT_005b3bc0 + (int)param_1 * 0x2c, temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 0x28) = in_s0;
  }
  return;
}
