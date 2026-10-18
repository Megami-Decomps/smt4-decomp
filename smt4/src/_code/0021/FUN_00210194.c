/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210194` (_code @ 0x210194, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00210104. */
/* Supplied declaration required: FUN_0028703c. */


void FUN_00210194(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_0028703c(*(unsigned int *)(param_1 + 8));
  FUN_00210104(*(unsigned int *)(param_1 + 8));
  if (0 < *(int *)(*(int *)(param_1 + 8) + 0x68)) {
    temp_v0 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    if ((*(int *)(temp_v0 + 0x150) != 0) &&
       (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                        *(int *)(temp_v0 + 0x154) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4),
       temp_v0 != 0)) {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x44);
      (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
      temp_v1 = *(unsigned int *)(temp_v0 + 0x38);
      *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x3c) = temp_v1;
      *(unsigned char *)(temp_v0 + 0x58) = 1;
    }
    return;
  }
  return;
}
