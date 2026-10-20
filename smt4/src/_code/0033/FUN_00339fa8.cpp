/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339fa8` (_code @ 0x339fa8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_00339fa8(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0x43;
  do {
    temp_v0 = *(int *)(param_1 + 0x1e98) + temp_v1 * 0x114;
    if (((*(unsigned int *)(temp_v0 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0x50) & 0x8000) != 0) &&
       ((*(unsigned int *)(temp_v0 + 0x54) & 8) != 0)) {
      *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x54) & 0xfffffff7;
      *(float *)(temp_v0 + 0xc) = *(float *)(temp_v0 + 0xc) - *(float *)(param_1 + 0x439c);
      *(unsigned short *)(temp_v0 + 0x5a) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  return;
}

} /* extern "C" */
