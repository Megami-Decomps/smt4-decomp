/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214da4` (_code @ 0x214da4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern int DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_001846d0. */


void FUN_00214da4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f578;
  *(unsigned int *)(DAT_0057f578 + 8) = 3;
  FUN_001846d0(temp_v0 + 0x34,1);
  return;
}

} /* extern "C" */
