/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1de8` (_code @ 0x3c1de8, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0cec(int, int);

extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


int FUN_003c1de8(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  for (temp_v2 = param_1; temp_v2 != 99; temp_v2 = temp_v2 + 1) {
    FUN_002c0cec(9,1);
    temp_v0 = FUN_002c0cc4();
    if (temp_v2 < 99) {
      temp_v0 = temp_v0 + temp_v2 * 4;
    }
    if (temp_v2 < 99) {
      temp_v1 = *(unsigned int *)(temp_v0 - 4);
    }
    else {
      temp_v1 = 0;
    }
    if (*param_2 < temp_v1) break;
    *param_2 = *param_2 - temp_v1;
  }
  return temp_v2 - param_1;
}

} /* extern "C" */
