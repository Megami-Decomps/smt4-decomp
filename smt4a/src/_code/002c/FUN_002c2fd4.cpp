/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2fd4` (_code @ 0x2c2fd4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dialogOpen(int);
int scrGetArgString(void);
int FUN_002392b8(void);
int FUN_002c2d5c(unsigned int);

/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: scrGetArgString. */
/* Supplied declaration required: FUN_002392b8. */
/* Supplied declaration required: FUN_002c2d5c. */


unsigned int FUN_002c2fd4(void)

{
/* irregular: 4 native warning(s); review required */
  scrGetArgString();
  FUN_002392b8();
  dialogOpen(1);
  FUN_002c2d5c(0xffffffff);
  return 1;
}

} /* extern "C" */
