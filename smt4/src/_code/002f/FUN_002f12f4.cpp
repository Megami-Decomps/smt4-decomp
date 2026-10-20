/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f12f4` (_code @ 0x2f12f4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e6f4(unsigned int, int);
int scrSetResult(void);

/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);


unsigned int FUN_002f12f4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = btlGetMainState();
  FUN_0027e6f4(temp_v0,1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
