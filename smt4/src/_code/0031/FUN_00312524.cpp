/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312524` (_code @ 0x312524, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);


unsigned int FUN_00312524(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002939f4();
  FUN_0028dcb0((int)*(short *)(temp_v0 + 0x496a));
  return 1;
}

} /* extern "C" */
