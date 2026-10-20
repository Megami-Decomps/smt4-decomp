/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b524` (_code @ 0x13b524, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158124(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00158124. */


void FUN_0013b524(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1;
  FUN_00158124();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(*(int *)(param_1 + 4) + 0xe0);
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 0x48) + 1;
      *(unsigned int *)(temp_v0 + 0x48) = temp_v1;
      if (temp_v1 >= 2) {
        *(unsigned int *)(temp_v0 + 0x48) = 0;
      }
      *(unsigned char *)(temp_v0 + *(int *)(temp_v0 + 0x48) * 0x20 + 0x24) = 0;
      *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x48) * 0x20 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x48) * 0x20 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x48) * 0x20 + 0x20) = 0xffffffff;
    }
    return;
  }
  return;
}

} /* extern "C" */
