/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a637c` (_code @ 0x3a637c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e3f8(void);

/* Supplied declaration required: FUN_0022e3f8. */
extern int FUN_002ae3c4(void);


void FUN_003a637c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ae3c4();
  if (temp_v0 == 10) {
    FUN_0022e3f8();
  }
  return;
}

} /* extern "C" */
