/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f70bc` (_code @ 0x2f70bc, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_00247004(unsigned int);
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_002f70bc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(*param_1);
  temp_v0 = FUN_00247004(*(unsigned int *)(temp_v0 + 0x20));
  if (temp_v0 != 0) {
    FUN_0028dcb0(1);
    return 1;
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
