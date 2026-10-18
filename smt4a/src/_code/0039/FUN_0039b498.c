/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b498` (_code @ 0x39b498, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_0036f22c(void);


unsigned int FUN_0039b498(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0036f22c();
  if (temp_v0 != 0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 0;
}
