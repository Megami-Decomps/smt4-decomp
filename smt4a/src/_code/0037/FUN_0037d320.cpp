/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d320` (_code @ 0x37d320, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);

/* Supplied declaration required: scrSetResult. */
extern int FUN_003dfe60(void);


unsigned int FUN_0037d320(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003dfe60();
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
