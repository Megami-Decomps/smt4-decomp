/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6044` (_code @ 0x2f6044, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);

extern int FUN_002471d8(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002f6044(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002471d8();
  if (temp_v0 == 4) {
    temp_v1 = 1;
  }
  else {
    if (temp_v0 != 5) {
      scrSetResult(0);
      return 1;
    }
    temp_v1 = 2;
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
