/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039611c` (_code @ 0x39611c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_0039611c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (0 < param_1[0x16]) {
    param_1[0x16] = param_1[0x16] - 1;
  }
  if (param_1[0x16] == 0) {
    *(unsigned char *)(param_1 + 2) = *(unsigned char *)(param_1 + 2) & 0xfe;
  }
  if ((int *)param_1[0x1a] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1a] + 0xc))();
  }
                    /* WARNING: Could not recover jumptable at 0x00396174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x18))(param_1);
  return;
}
