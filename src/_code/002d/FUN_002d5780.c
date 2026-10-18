/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5780` (_code @ 0x2d5780, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0028c8d0. */
/* Supplied declaration required: FUN_0029bdb4. */


void FUN_002d5780(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  
  FUN_0029bdb4(*(unsigned int *)(param_1 + 8));
  FUN_0028c8d0(*(unsigned int *)(param_1 + 8));
  temp_v0 = *(int *)(param_1 + 8);
  if (0 < *(int *)(temp_v0 + 0x68)) {
    *(float *)(temp_v0 + 0x80) = in_s0;
    temp_v1 = *(int *)(temp_v0 + 0x2c);
    if ((*(int *)(temp_v1 + 0x150) != 0) &&
       (temp_v1 = *(int *)(*(int *)(*(int *)(temp_v1 + 0x28) + 0x1c) +
                        *(int *)(temp_v1 + 0x154) * *(int *)(*(int *)(temp_v1 + 0x28) + 0x28) * 4),
       temp_v1 != 0)) {
      *(float *)(temp_v1 + 0x40) = *(float *)(temp_v0 + 0x74) * in_s0;
    }
  }
  return;
}
