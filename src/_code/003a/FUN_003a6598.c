/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6598` (_code @ 0x3a6598, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0022e58c. */
extern int FUN_002ae650(void);


void FUN_003a6598(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ae650();
  if (temp_v0 == 10) {
    FUN_0022e58c();
  }
  return;
}
