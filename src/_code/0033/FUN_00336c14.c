/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336c14` (_code @ 0x336c14, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_00336c14(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v2 = param_1 + temp_v0 * 4;
    temp_v1 = *(int *)(temp_v2 + 0x2270);
    if ((temp_v1 != 0) && (temp_v1 == param_2)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 6) {
      *(int *)(param_1 + *(int *)(param_1 + 0x22a0) * 4 + 0x2270) = param_2;
      *(int *)(param_1 + *(int *)(param_1 + 0x22a0) * 4 + 0x2288) = param_3;
      temp_v0 = *(int *)(param_1 + 0x22a0) + 1;
      *(int *)(param_1 + 0x22a0) = temp_v0;
      if (temp_v0 >= 6) {
        *(unsigned int *)(param_1 + 0x22a0) = 0;
      }
      return;
    }
  }
  *(int *)(temp_v2 + 0x2288) = *(int *)(param_1 + temp_v0 * 4 + 0x2288) + param_3;
  return;
}
