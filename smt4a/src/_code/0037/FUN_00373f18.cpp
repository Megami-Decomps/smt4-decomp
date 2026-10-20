/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373f18` (_code @ 0x373f18, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_003eebf4(unsigned int, int);

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eebf4. */


unsigned int FUN_00373f18(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = btlGetMainState();
  FUN_003eebf4(temp_v0,1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
