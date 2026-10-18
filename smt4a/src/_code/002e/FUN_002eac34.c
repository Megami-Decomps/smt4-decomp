/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eac34` (_code @ 0x2eac34, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0062e6d0; /* 0x62e6d0 */

/* Supplied declaration required: FUN_00310010. */
extern unsigned int FUN_00310024(unsigned char *);


void FUN_002eac34(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00310024(&DAT_0062e6d0 + param_1 * 0x1c0);
  FUN_00310010(&DAT_0062e6d0 + param_1 * 0x1c0,temp_v0);
  return;
}
