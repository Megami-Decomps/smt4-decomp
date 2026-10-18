/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302374` (_code @ 0x302374, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b0fc; /* 0x55b0fc */

extern unsigned int FUN_002ea4bc(void);


unsigned int * FUN_00302374(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0055b0fc;
  temp_v0 = FUN_002ea4bc();
  param_1[8] = temp_v0;
  return param_1;
}
