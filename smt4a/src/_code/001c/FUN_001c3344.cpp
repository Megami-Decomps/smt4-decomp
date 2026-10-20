/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3344` (_code @ 0x1c3344, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

/* WARNING: Removing unreachable block (ram,0x001c3394) */

void FUN_001c3344(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (temp_v1 < 0x10)) &&
       (temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x90), temp_v0 != 0)) {
      (*(romwright_code *)0x461f08)(temp_v0,param_3);
    }
    temp_v1 = temp_v1 + 1;
    param_2 = param_2 >> 1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
