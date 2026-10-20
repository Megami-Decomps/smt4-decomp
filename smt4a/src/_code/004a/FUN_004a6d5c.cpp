/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a6d5c` (_code @ 0x4a6d5c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_004a6d5c(int param_1)

{
  int temp_v0;
  int temp_v1;
  short *psVar3;
  
  temp_v0 = 0;
  temp_v1 = 0x10;
  do {
    psVar3 = (short *)(param_1 + temp_v0 * 2);
    if (*psVar3 != -1) {
      *psVar3 = -1;
      *(unsigned char *)(param_1 + temp_v0 + 0x20) = 0;
    }
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
