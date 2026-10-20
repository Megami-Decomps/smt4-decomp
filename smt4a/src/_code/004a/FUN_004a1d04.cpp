/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a1d04` (_code @ 0x4a1d04, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(int, int);
int FUN_004a6d5c(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_004a6d5c. */


void FUN_004a1d04(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((int *)param_1[0x213] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x213] + 4))();
    param_1[0x213] = 0;
  }
  FUN_004a6d5c((int)param_1 + 0x96);
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  jobStop(param_1[1],0);
  return;
}

} /* extern "C" */
