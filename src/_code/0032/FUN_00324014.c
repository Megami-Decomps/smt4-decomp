/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324014` (_code @ 0x324014, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00221b78. */
extern int *FUN_00296f60(void);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_00324014(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)FUN_00296f60();
  if (piVar1 == (int *)0x0) {
    temp_v0 = 1;
  }
  else {
    if (*piVar1 == 0) {
      FUN_002c4360(piVar1);
      return 1;
    }
    temp_v1 = FUN_002c1f28();
    if (temp_v1 != 0) {
      FUN_00221b78(piVar1[1]);
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
