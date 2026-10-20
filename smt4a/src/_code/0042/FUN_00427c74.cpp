/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427c74` (_code @ 0x427c74, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(...);

extern int DAT_005c0a90; /* 0x5c0a90 */
extern unsigned char DAT_00642b80; /* 0x642b80 */

/* Supplied declaration required: FUN_0019a46c. */


void FUN_00427c74(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  FUN_0019a46c(&DAT_00642b80 + DAT_005c0a90 * 0x140,param_1,0x40);
  FUN_0019a46c(DAT_005c0a90 * 0x140 + 0x642bc0,param_2,0x40);
  FUN_0019a46c(DAT_005c0a90 * 0x140 + 0x642c00,param_3,0x40);
  FUN_0019a46c(DAT_005c0a90 * 0x140 + 0x642c40,param_4,0x40);
  FUN_0019a46c(DAT_005c0a90 * 0x140 + 0x642c80,param_5,0x40);
  DAT_005c0a90 = DAT_005c0a90 + 1;
  return;
}

} /* extern "C" */
