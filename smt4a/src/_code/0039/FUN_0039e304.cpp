/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e304` (_code @ 0x39e304, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004a0ef8(unsigned int);

extern unsigned int DAT_005710e0; /* 0x5710e0 */

extern int FUN_0037c894(void);
/* Supplied declaration required: FUN_004a0ef8. */


int FUN_0039e304(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0037c894();
  if (temp_v0 == 1) {
    FUN_004a0ef8(DAT_005710e0);
    DAT_005710e0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
