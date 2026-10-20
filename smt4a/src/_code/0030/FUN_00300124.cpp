/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300124` (_code @ 0x300124, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00647194; /* 0x647194 */
extern unsigned int DAT_006471a8; /* 0x6471a8 */


void FUN_00300124(unsigned int *param_1,int param_2)

{
  if ((&DAT_00647194)[param_2] == 0) {
    (&DAT_00647194)[param_2] = (unsigned int)param_1;
  }
  else {
    *(unsigned int **)(&DAT_006471a8)[param_2] = param_1;
  }
  (&DAT_006471a8)[param_2] = (unsigned int)param_1;
  *param_1 = 0;
  return;
}

} /* extern "C" */
