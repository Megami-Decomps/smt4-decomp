/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049c760` (_code @ 0x49c760, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0049c78c; /* 0x49c78c */
extern unsigned char DAT_0061949c; /* 0x61949c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0015f858. */


void FUN_0049c760(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_0015f858();
  if (temp_v0 == 0) {
    FUN_00100388(&DAT_0061949c,&LAB_0049c78c,param_1);
  }
  return;
}
