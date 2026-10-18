/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003002c8` (_code @ 0x3002c8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e6e14. */


void FUN_003002c8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned char *)(param_1 + 3) = 0;
  temp_v1 = param_1[1];
  for (temp_v0 = 0; temp_v0 < temp_v1; temp_v0 = temp_v0 + 1) {
    *(unsigned int *)(*param_1 + temp_v0 * 0x34 + 0x10) = 0;
  }
  if (*param_1 != 0) {
    FUN_002e6e14(*param_1 - 8);
  }
  *param_1 = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  return;
}
