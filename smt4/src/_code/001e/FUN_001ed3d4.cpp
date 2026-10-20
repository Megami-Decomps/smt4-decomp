/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed3d4` (_code @ 0x1ed3d4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00259528(unsigned int);
int FUN_00266b44(int);
int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int FUN_0030a0f0(unsigned int);

/* Supplied declaration required: FUN_00259528. */
/* Supplied declaration required: FUN_00266b44. */
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_0030a0f0. */


unsigned int FUN_001ed3d4(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg();
  FUN_00266b44(1);
  FUN_0030a0f0(temp_v0);
  eventTexSetJobParam();
  FUN_00259528(temp_v0);
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
