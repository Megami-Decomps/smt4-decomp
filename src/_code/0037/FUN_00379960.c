/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379960` (_code @ 0x379960, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0014be64. */


void FUN_00379960(int *param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  if (param_1[4] != 0) {
    FUN_0014be64(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0037998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x24))(param_1);
  return;
}
