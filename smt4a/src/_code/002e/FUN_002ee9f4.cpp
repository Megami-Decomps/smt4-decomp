/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee9f4` (_code @ 0x2ee9f4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0053a204; /* 0x53a204 */

extern unsigned int FUN_002e784e(int, unsigned char *);


unsigned int * FUN_002ee9f4(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  param_2 = param_2 * 3;
  *param_1 = 0;
  param_1[1] = param_2;
  if (0 < param_2) {
    temp_v0 = FUN_002e784e(param_2,&DAT_0053a204);
    *param_1 = temp_v0;
  }
  return param_1;
}

} /* extern "C" */
