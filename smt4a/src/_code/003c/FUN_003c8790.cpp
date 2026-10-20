/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8790` (_code @ 0x3c8790, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c8738(void);

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_003c8738. */


void FUN_003c8790(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f118 != 0) {
    temp_v0 = *(int *)(DAT_0057f118 + 0xc);
  }
  if (DAT_0057f118 == 0 || temp_v0 == 0) {
    return;
  }
  FUN_003c8738();
  return;
}

} /* extern "C" */
