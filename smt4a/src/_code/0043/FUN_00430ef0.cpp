/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430ef0` (_code @ 0x430ef0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9110(void);
int FUN_0050d71c(void);

/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: FUN_0050d71c. */


unsigned int FUN_00430ef0(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    FUN_001a9110();
  }
  else {
    FUN_0050d71c();
  }
  return param_1;
}

} /* extern "C" */
