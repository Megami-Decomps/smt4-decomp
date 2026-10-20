/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170e6c` (_code @ 0x170e6c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e758(void);
int FUN_00189938(void);

extern signed char DAT_005891b4; /* 0x5891b4 */

/* Supplied declaration required: FUN_0016e758. */
/* Supplied declaration required: FUN_00189938. */
extern int FUN_001c6e20(void);


void FUN_00170e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (DAT_005891b4 != '\0') {
      FUN_00189938();
      DAT_005891b4 = '\0';
    }
  }
  else {
    temp_v0 = FUN_001c6e20();
    if (temp_v0 != 0) {
      FUN_0016e758();
      DAT_005891b4 = '\x01';
    }
  }
  return;
}

} /* extern "C" */
