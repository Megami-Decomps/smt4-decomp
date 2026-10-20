/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003604f4` (_code @ 0x3604f4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

/* Supplied declaration required: FUN_002c52f8. */
extern int FUN_003608a8(void);


int FUN_003604f4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003608a8();
  if (temp_v0 != -0x36bfafff) {
    if (temp_v0 < 0) {
      FUN_002c52f8();
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
