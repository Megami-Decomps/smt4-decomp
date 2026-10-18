/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cb490` (_code @ 0x1cb490, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned char DAT_005c0cc0; /* 0x5c0cc0 */
extern unsigned int DAT_005c0d70; /* 0x5c0d70 */

/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_78. */


unsigned int FUN_001cb490(int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_005c0d70 = 0;
  if (param_1 != 0) {
    DAT_005c0d70 = 2;
  }
  nw_gfx_internal_FastWordCopyAsm_78(DAT_005b40e0,&DAT_005c0cc0);
  return 0x138;
}
