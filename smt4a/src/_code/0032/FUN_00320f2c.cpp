/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320f2c` (_code @ 0x320f2c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275b10(int);
int FUN_004f2518(int);

/* Supplied declaration required: FUN_00275b10. */
/* Supplied declaration required: FUN_004f2518. */


unsigned int FUN_00320f2c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    FUN_00275b10(0);
    FUN_00275b10(1);
    FUN_004f2518(temp_v0);
  }
  return 1;
}

} /* extern "C" */
