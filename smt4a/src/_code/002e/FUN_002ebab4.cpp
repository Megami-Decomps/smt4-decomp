/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebab4` (_code @ 0x2ebab4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00594b38; /* 0x594b38 */
extern int DAT_00594b3c; /* 0x594b3c */


void FUN_002ebab4(unsigned int *param_1,unsigned int *param_2)

{
  DAT_00594b38 = *param_2 - *param_1;
  DAT_00594b3c = (param_2[1] - param_1[1]) - (unsigned int)(*param_2 < *param_1);
  return;
}

} /* extern "C" */
