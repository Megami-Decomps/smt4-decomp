/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f090` (_code @ 0x30f090, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0053b570; /* 0x53b570 */

/* Supplied declaration required: FUN_002e9768. */


unsigned int FUN_0030f090(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e9768(param_2,param_3,&DAT_0053b570,
               (*(unsigned short *)(param_1 + 6) << 8) | (*(unsigned short *)(param_1 + 6) >> 8));
  return 1;
}
