/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fad88` (_code @ 0x2fad88, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


void FUN_002fad88(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472850))(param_1);
  temp_v0 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = temp_v0;
  if (0 < temp_v0) {
                    /* WARNING: Could not recover jumptable at 0x002fadd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472854))();
    return;
  }
  return;
}
