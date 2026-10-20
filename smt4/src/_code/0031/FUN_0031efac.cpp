/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031efac` (_code @ 0x31efac, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_0031efac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(*param_1);
  if (*(short *)(*(int *)(temp_v0 + 0x20) + 0x8e) >= 1) {
    FUN_0028dcb0(1);
  }
  else {
    FUN_0028dcb0(0 < *(short *)(*(int *)(temp_v0 + 0x20) + 0x92));
  }
  return 1;
}

} /* extern "C" */
