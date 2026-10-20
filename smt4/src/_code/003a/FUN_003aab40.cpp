/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aab40` (_code @ 0x3aab40, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_003aab40(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x10;
  do {
    temp_v2 = param_1 + temp_v0;
    *(unsigned short *)(param_1 + temp_v0 * 2) = 0xffff;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned char *)(temp_v2 + 0x20) = 0;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
