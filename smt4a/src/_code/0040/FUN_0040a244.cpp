/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a244` (_code @ 0x40a244, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fcfe8(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_003fcfe8. */


void FUN_0040a244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    temp_v1 = 0;
    while( 1 ) {
      temp_v0 = temp_v1 * 4;
      if ((*(int *)(temp_v0 + 0x5cc50c) != 0) &&
         (*(int *)(*(int *)(temp_v0 + 0x5cc50c) + 4) == *(int *)(param_1 + 4))) break;
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 0x10) {
        return;
      }
    }
    FUN_003fcfe8();
    if (*(int **)(temp_v0 + 0x5cc50c) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x5cc50c) + 4))();
    }
    *(unsigned int *)(temp_v0 + 0x5cc50c) = 0;
  }
  else {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - 1;
  }
  return;
}

} /* extern "C" */
