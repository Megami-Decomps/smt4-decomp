/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb67c` (_code @ 0x2eb67c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a284; /* 0x55a284 */

/* Supplied declaration required: FUN_002f4364. */


unsigned int * FUN_002eb67c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055a284;
  FUN_002f4364();
  return param_1;
}
