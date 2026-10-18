/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034875c` (_code @ 0x34875c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00318174. */


unsigned int FUN_0034875c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_00203d74();
  temp_v4 = temp_v3 != 0;
  temp_v3 = 0;
  if (temp_v4) {
    temp_v3 = temp_v2 - 4;
  }
  if ((temp_v4 && temp_v2 != 4) && temp_v3 < 0 == (temp_v4 && SBORROW4(temp_v2,4))) {
    temp_v2 = 4;
  }
  FUN_00318174(temp_v0,temp_v1,temp_v2);
  return 1;
}
