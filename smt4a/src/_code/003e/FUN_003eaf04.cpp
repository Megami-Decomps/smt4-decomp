/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaf04` (_code @ 0x3eaf04, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

/* Supplied declaration required: FUN_00187180. */
extern short FUN_00192748(void);


int FUN_003eaf04(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  
  FUN_00187180(0x4d,0);
  temp_v0 = FUN_00192748();
  return (int)temp_v0;
}

} /* extern "C" */
