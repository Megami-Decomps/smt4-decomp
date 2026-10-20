/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003881b0` (_code @ 0x3881b0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);


int FUN_003881b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00187180(0x4a,2);
  temp_v0 = FUN_00192798();
  return temp_v0 + param_1 * 8;
}

} /* extern "C" */
