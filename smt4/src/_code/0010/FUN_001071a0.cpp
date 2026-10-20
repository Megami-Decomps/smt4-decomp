/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001071a0` (_code @ 0x1071a0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111184(void);
int FUN_002c222c(void);

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00111184. */
/* Supplied declaration required: FUN_002c222c. */


void FUN_001071a0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0xd68;
  FUN_002c222c();
  if (temp_v0 != 0) {
    FUN_00111184();
  }
  DAT_00432fc8 = temp_v0;
  return;
}

} /* extern "C" */
