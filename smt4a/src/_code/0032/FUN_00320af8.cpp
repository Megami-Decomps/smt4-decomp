/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320af8` (_code @ 0x320af8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0047fc38(void);

/* Supplied declaration required: FUN_0047fc38. */


void FUN_00320af8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + param_2 * 4 + 0x331c);
  if ((temp_v0 != 0x3d && temp_v0 != 0xb5) && (temp_v0 != 0x30d && temp_v0 != 0x295)) {
    FUN_0047fc38();
  }
  return;
}

} /* extern "C" */
