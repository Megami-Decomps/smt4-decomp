/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f780` (_code @ 0x45f780, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a586c(int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_001a586c. */


void FUN_0045f780(int *param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)((int)param_1 + 0x9d) = param_2;
  if (param_1[4] != 0) {
    FUN_001a586c(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0045f7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x24))(param_1);
  return;
}

} /* extern "C" */
