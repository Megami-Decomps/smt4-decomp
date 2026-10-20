/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00165480` (_code @ 0x165480, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001692d4(void);

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001692d4. */


unsigned int FUN_00165480(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  temp_v0 = param_1[2];
  if (temp_v0 != 0) {
    if ((temp_v0 != 1) && (temp_v0 == 99)) {
      FUN_001631d0(*param_1,0);
    }
  }
  else {
    FUN_001692d4();
    param_1[2] = param_1[2] + 1;
  }
  return 0;
}

} /* extern "C" */
