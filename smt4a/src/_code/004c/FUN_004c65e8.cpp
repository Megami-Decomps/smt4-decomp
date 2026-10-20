/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c65e8` (_code @ 0x4c65e8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(unsigned int *, unsigned int);

extern unsigned int DAT_00571400; /* 0x571400 */
extern unsigned int DAT_00571404; /* 0x571404 */

extern unsigned int *FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_004c65e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar1,param_1);
  temp_v0 = 0;
  if ((DAT_00571400 & *puVar1) != 0 || (puVar1[1] & DAT_00571404) != 0) {
    temp_v0 = 0x105;
  }
  return temp_v0;
}

} /* extern "C" */
