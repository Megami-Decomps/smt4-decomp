/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e964` (_code @ 0x27e964, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


int FUN_0027e964(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = 0;
  while ((temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288),
         (temp_v1 & 1) == 0 || (temp_v1 & 0x100) == 0 || (temp_v2 = temp_v2 + 1, temp_v2 != param_2))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return -1;
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288 + 0x6e);
}
