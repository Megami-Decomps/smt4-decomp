/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f1f0` (_code @ 0x39f1f0, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0039f1f0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  temp_v0 = param_1 + *(int *)(param_1 + 4) * 8;
  UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v0 + 0xb14);
  temp_v1 = *(unsigned int *)(temp_v0 + 0xb18);
  if ((UNRECOVERED_JUMPTABLE == (romwright_code *)0x0) && (((temp_v1 & 1) == 0 || (temp_v1 == 0)))) {
    return;
  }
  if ((temp_v1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(romwright_code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1 + ((int)temp_v1 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0039f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
