/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00178a54` (_code @ 0x178a54, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00194934. */


int FUN_00178a54(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    temp_v0 = *(int *)(param_1 + 0x3c);
    FUN_00194934();
    if (temp_v0 != -1) {
      if (temp_v0 == -1) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = *(int *)(param_1 + 0x38) + *(int *)(*(int *)(param_1 + 0x38) + 4);
        if (temp_v1 != 0) {
          temp_v1 = temp_v1 + *(int *)(temp_v1 + temp_v0 * 0xc + 8);
        }
      }
      return temp_v1;
    }
  }
  return 0;
}
