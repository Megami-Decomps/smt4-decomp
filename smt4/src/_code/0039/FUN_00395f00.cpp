/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395f00` (_code @ 0x395f00, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_00395f00(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (0 < param_1[0x16]) {
    param_1[0x16] = param_1[0x16] - 1;
  }
  if (param_1[0x16] == 0) {
    *(unsigned char *)(param_1 + 2) = *(unsigned char *)(param_1 + 2) & ~1;
  }
  if ((int *)param_1[0x1a] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1a] + 0xc))(param_1[0x1a]);
  }
                    /* WARNING: Could not recover jumptable at 0x00395f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x18))(param_1);
  return;
}

} /* extern "C" */
