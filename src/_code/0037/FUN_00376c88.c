/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c88` (_code @ 0x376c88, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002bf774. */
/* Supplied declaration required: FUN_00379afc. */
/* Supplied declaration required: FUN_00379ed4. */


void FUN_00376c88(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_2 + 4);
  if (temp_v0 != 0) {
    FUN_00379ed4(temp_v0);
    FUN_00379afc(param_2,temp_v0);
    FUN_002bf774(param_1 + 0x18,param_1 + 0x1c,temp_v0 + 0x18);
    return;
  }
  return;
}
