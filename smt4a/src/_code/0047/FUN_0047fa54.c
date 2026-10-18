/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fa54` (_code @ 0x47fa54, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int FUN_0047fa54(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if ((param_2 & 0xffff & ~*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x188)) != 0) {
    temp_v0 = *(unsigned int *)(param_1 + 8);
  }
  else if (*(int *)(param_1 + 0x24) >= 1) {
    temp_v0 = **(unsigned int **)(param_1 + 0x10);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
