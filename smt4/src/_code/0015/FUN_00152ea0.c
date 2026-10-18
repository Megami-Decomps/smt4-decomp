/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152ea0` (_code @ 0x152ea0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_00465120; /* 0x465120 */
extern short DAT_00465122; /* 0x465122 */
extern int DAT_00465128; /* 0x465128 */


void FUN_00152ea0(void)

{
  short temp_v0;
  unsigned char temp_v1;
  
  if ((DAT_00465122 != 0) &&
     (temp_v0 = DAT_00465122 - 1, temp_v1 = DAT_00465122 == 1, DAT_00465122 = temp_v0, temp_v1)) {
    *(unsigned short *)(DAT_00465128 + 0x38) = DAT_00465120;
  }
  return;
}
