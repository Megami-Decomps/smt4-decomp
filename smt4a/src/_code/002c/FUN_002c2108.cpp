/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2108` (_code @ 0x2c2108, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf09c(void);
int scrSetResult(void);
int FUN_003d2150(void);

extern int FUN_002360dc(void);
/* Supplied declaration required: FUN_002bf09c. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003d2150. */


void FUN_002c2108(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002360dc();
  FUN_002bf09c();
  if (-1 < temp_v0) {
    FUN_003d2150();
    scrSetResult();
  }
  return;
}

} /* extern "C" */
