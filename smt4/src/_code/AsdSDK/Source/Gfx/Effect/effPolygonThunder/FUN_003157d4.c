/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003157d4` (_code @ 0x3157d4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00269a58(void);


void FUN_003157d4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x2c) * 0x18 + 0x4727b4))(param_1);
  temp_v0 = FUN_00269a58();
  temp_v0 = *(int *)(param_1 + 0x28) + temp_v0;
  *(int *)(param_1 + 0x28) = temp_v0;
  if (0 < temp_v0) {
                    /* WARNING: Could not recover jumptable at 0x00315828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)(param_1 + 0x2c) * 0x18 + 0x4727b8))();
    return;
  }
  return;
}
