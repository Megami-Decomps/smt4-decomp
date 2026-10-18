/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c2d0` (_code @ 0x14c2d0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


int FUN_0014c2d0(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(char *)(param_1 + 0x18c) != '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(param_1 + 0x184);
    temp_v2 = *(unsigned int *)(param_1 + 0x188);
    if (temp_v1 < temp_v2) {
      if (temp_v2 < param_2 + temp_v1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x184) = param_2 + temp_v1;
      temp_v0 = *(int *)(param_1 + 0x17c) + temp_v1 * 4;
    }
    else if (*(unsigned int *)(param_1 + 0x180) >= temp_v1 + param_2) {
      *(unsigned int *)(param_1 + 0x184) = temp_v1 + param_2;
      temp_v0 = *(int *)(param_1 + 0x17c) + temp_v1 * 4;
    }
    else {
      if (temp_v2 < param_2) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x184) = param_2;
      temp_v0 = *(int *)(param_1 + 0x17c);
    }
    if ((temp_v0 != 0) && (*(unsigned int *)(param_1 + 0x184) == temp_v2)) {
      *(unsigned char *)(param_1 + 0x18c) = 1;
    }
  }
  return temp_v0;
}
