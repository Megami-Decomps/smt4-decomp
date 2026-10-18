/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b77c` (_code @ 0x24b77c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


unsigned int FUN_0024b77c(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 == (unsigned int *)0x0) {
    param_1 = (unsigned int *)0x4d9748;
  }
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  param_1[1] = *param_1;
  temp_v0 = ((temp_v1 << 2) | (*param_1 >> 0x1e)) ^ ((param_1[3] << 1) | (temp_v2 >> 0x1f));
  *param_1 = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2;
  return temp_v0;
}
