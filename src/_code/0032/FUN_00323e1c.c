/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323e1c` (_code @ 0x323e1c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00221c70. */
extern int *FUN_00296cc8(void);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_00323e1c(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)FUN_00296cc8();
  if (piVar1 == (int *)0x0) {
    temp_v0 = 1;
  }
  else {
    if (*piVar1 == 0) {
      FUN_002c415c(piVar1);
      return 1;
    }
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 != 0) {
      FUN_00221c70(piVar1[1]);
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
