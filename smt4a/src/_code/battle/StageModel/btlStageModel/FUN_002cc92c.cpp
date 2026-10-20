/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc92c` (_code @ 0x2cc92c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);

extern unsigned char LAB_002cc944; /* 0x2cc944 */
extern unsigned char *DAT_005710d8; /* 0x5710d8 */

/* Supplied declaration required: FUN_0020214c. */


void FUN_002cc92c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_002cc944;
  FUN_0020214c();
  DAT_005710d8 = puVar1;
  return;
}

} /* extern "C" */
