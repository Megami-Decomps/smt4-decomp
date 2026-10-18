/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002571b8` (_code @ 0x2571b8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004ea7d4; /* 0x4ea7d4 */
extern unsigned int DAT_004ea7e8; /* 0x4ea7e8 */


void FUN_002571b8(unsigned int *param_1,int param_2)

{
  if ((&DAT_004ea7d4)[param_2] == 0) {
    (&DAT_004ea7d4)[param_2] = (unsigned int)param_1;
  }
  else {
    *(unsigned int **)(&DAT_004ea7e8)[param_2] = param_1;
  }
  (&DAT_004ea7e8)[param_2] = (unsigned int)param_1;
  *param_1 = 0;
  return;
}
