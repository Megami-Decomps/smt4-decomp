/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1030` (_code @ 0x1a1030, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289234(unsigned int);
int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int FUN_002fdff4(void);

/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002fdff4. */


unsigned int FUN_001a1030(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg();
  FUN_002fdff4();
  eventTexSetJobParam();
  FUN_00289234(temp_v0);
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
