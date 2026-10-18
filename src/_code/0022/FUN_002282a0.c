/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002282a0` (_code @ 0x2282a0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */


int FUN_002282a0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x1cfc);
  if ((temp_v0 == 0) || (*(short *)(temp_v0 + 400) < 0)) {
    return -1;
  }
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_00293c98(), (*(unsigned int *)(temp_v0 + 0x44ac) & 2) != 0)) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_00293c98(0);
    temp_v0 = FUN_002934d4();
    if (temp_v0 != 0) {
      return -1;
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 0x1cfc) + 400);
}
