/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8704` (_code @ 0x3e8704, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_003e8704(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v2 = param_1 + temp_v0 * 4;
    temp_v1 = *(int *)(temp_v2 + 0x236c);
    if ((temp_v1 != 0) && (temp_v1 == param_2)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 6) {
      *(int *)(param_1 + *(int *)(param_1 + 0x239c) * 4 + 0x236c) = param_2;
      *(int *)(param_1 + *(int *)(param_1 + 0x239c) * 4 + 0x2384) = param_3;
      temp_v0 = *(int *)(param_1 + 0x239c) + 1;
      *(int *)(param_1 + 0x239c) = temp_v0;
      if (temp_v0 >= 6) {
        *(unsigned int *)(param_1 + 0x239c) = 0;
      }
      return;
    }
  }
  *(int *)(temp_v2 + 0x2384) = *(int *)(param_1 + temp_v0 * 4 + 0x2384) + param_3;
  return;
}
