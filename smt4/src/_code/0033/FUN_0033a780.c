/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a780` (_code @ 0x33a780, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;


void FUN_0033a780(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = 0x6d;
  do {
    temp_v3 = *(int *)(param_1 + 0x1e98);
    temp_v0 = (int)*(short *)(temp_v3 + temp_v1 * 0x114 + 0x60);
    if ((-1 < temp_v0) && ((*(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288) & 0x10) != 0)) {
      temp_v0 = temp_v1 * 0x114 + 0x50;
      *(unsigned int *)(temp_v3 + temp_v0) = *(unsigned int *)(temp_v3 + temp_v0) | 0x4000;
    }
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 != 0);
  return;
}
