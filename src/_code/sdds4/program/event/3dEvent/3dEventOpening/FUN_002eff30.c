/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eff30` (_code @ 0x2eff30, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043df98; /* 0x43df98 */

/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002c0ac8. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002eff30(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002a5058();
  FUN_002c0ac8(param_1);
  FUN_002c4360(DAT_0043df98);
  DAT_0043df98 = 0;
  return;
}
