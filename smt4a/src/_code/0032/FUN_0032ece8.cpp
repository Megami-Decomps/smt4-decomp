/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ece8` (_code @ 0x32ece8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);


int FUN_0032ece8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00187180(0x4a,0);
  temp_v0 = FUN_00192798();
  return temp_v0 + param_1 * 0x2c;
}

} /* extern "C" */
