/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c614` (_code @ 0x13c614, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167f24(int);
int FUN_001695a0(void);

extern int FUN_001527e4(int);
extern int FUN_00153588(void);
/* Supplied declaration required: FUN_00167f24. */
/* Supplied declaration required: FUN_001695a0. */


unsigned int FUN_0013c614(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = FUN_00153588();
    if ((temp_v0 == 0) && (temp_v0 = FUN_001527e4(param_1), temp_v0 == 0)) {
      FUN_00167f24(2);
    }
  }
  else {
    FUN_001695a0();
  }
  return 1;
}

} /* extern "C" */
