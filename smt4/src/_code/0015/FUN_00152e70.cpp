/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152e70` (_code @ 0x152e70, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short DAT_00465120; /* 0x465120 */
extern short DAT_00465122; /* 0x465122 */
extern int DAT_00465128; /* 0x465128 */


void FUN_00152e70(unsigned short param_1)

{
  unsigned char temp_v0;
  
  temp_v0 = DAT_00465122 == 0;
  DAT_00465122 = DAT_00465122 + 1;
  if (temp_v0) {
    DAT_00465120 = *(unsigned short *)(DAT_00465128 + 0x38);
  }
  *(unsigned short *)(DAT_00465128 + 0x38) = param_1;
  return;
}

} /* extern "C" */
