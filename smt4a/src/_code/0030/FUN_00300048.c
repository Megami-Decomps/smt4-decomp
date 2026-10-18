/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300048` (_code @ 0x300048, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00120f5c. */
/* Supplied declaration required: FUN_002ea704. */


void FUN_00300048(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ea704();
  if (temp_v0 != 0) {
    piVar2 = (int *)FUN_002ea704();
    temp_v1 = (**(romwright_code **)(*piVar2 + 0x2c))();
    FUN_00120f5c(temp_v1,0);
  }
  return;
}
