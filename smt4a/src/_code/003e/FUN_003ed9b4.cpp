/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed9b4` (_code @ 0x3ed9b4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_003ed9b4(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = 0x6d;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v0 = param_1 + temp_v1 * 0x1c;
    *(unsigned int *)(temp_v0 + 0x2418) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x241c) = 0xffffffff;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x2430) = 0xffffffff;
  } while (temp_v2 != 0);
  return;
}

} /* extern "C" */
