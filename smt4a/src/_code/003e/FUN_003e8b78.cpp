/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8b78` (_code @ 0x3e8b78, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_003e8b78(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x2a;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0x201c) = 0;
    *(unsigned int *)(temp_v2 + 0x2020) = 0xffffffff;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
