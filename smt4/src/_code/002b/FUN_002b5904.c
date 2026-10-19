/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5904` (_code @ 0x2b5904, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e364; /* 0x44e364 */

/* Supplied declaration required: FUN_0013a410. */
/* Supplied declaration required: FUN_002bb20c. */
extern int FUN_002bb274(void);


void FUN_002b5904(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (DAT_0044e364 != '\0') {
      FUN_0013a410();
      DAT_0044e364 = '\0';
    }
  }
  else {
    temp_v0 = FUN_002bb274();
    if (temp_v0 != 0) {
      FUN_002bb20c();
      DAT_0044e364 = '\x01';
    }
  }
  return;
}
