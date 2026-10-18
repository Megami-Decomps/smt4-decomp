/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bd68` (_code @ 0x15bd68, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004652a0; /* 0x4652a0 */
extern unsigned char DAT_00471dc8; /* 0x471dc8 */
extern unsigned int DAT_00471e78; /* 0x471e78 */

/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_78. */


unsigned int FUN_0015bd68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_00471e78 = 0;
  if (param_1 != 0) {
    DAT_00471e78 = 2;
  }
  nw_gfx_internal_FastWordCopyAsm_78(DAT_004652a0,&DAT_00471dc8);
  return 0x138;
}
