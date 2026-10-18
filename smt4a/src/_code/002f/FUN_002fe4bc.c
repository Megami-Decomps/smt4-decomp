/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe4bc` (_code @ 0x2fe4bc, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00538b30; /* 0x538b30 */

/* Supplied declaration required: FUN_0030f138. */


unsigned int FUN_002fe4bc(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,&DAT_00538b30,0);
  return param_1 & 0xffff;
}
