/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328bd4` (_code @ 0x328bd4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_002a9acc. */


void FUN_00328bd4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  *(unsigned int *)(*(int *)(param_1 + 4) + 0x18) = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
  temp_v0[0] = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
  FUN_002a9acc(temp_v0,param_1,param_2,param_3);
  return;
}
