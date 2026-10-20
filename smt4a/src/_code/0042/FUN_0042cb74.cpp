/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042cb74` (_code @ 0x42cb74, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0042cb74(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = 0;
  temp_v0 = 0;
  do {
    *(unsigned char *)((int)param_1 + temp_v0 + 4) = 0;
    param_1[temp_v0 + 4] = 0;
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 + 0x10] = 0xffffffff;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0xc);
  return;
}

} /* extern "C" */
