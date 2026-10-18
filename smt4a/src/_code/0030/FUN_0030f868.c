/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f868` (_code @ 0x30f868, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e26. */
extern int FUN_0030f78c(void);
extern int FUN_0030f84e(void);


unsigned int FUN_0030f868(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002e6e26();
  temp_v0 = FUN_0030f78c();
  if (temp_v0 != 0) {
    FUN_002e6e26();
    temp_v0 = FUN_0030f84e();
    if (temp_v0 == 0) {
      return 1;
    }
  }
  return 0;
}
