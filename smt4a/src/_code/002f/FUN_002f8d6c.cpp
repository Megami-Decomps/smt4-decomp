/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8d6c` (_code @ 0x2f8d6c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *);
int FUN_002e6e5c(int *);
int FUN_002f8820(int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f8820. */


void FUN_002f8d6c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 500) + 0x18))();
  if (temp_v0 != 0) {
    FUN_002e6e34(&uStack_18);
    FUN_002f8820(param_1);
    FUN_002e6e5c(&uStack_18);
    return;
  }
  FUN_002f8820(param_1);
  return;
}

} /* extern "C" */
