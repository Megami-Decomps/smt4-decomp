/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001240f6` (_code @ 0x1240f6, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ee42(int);

extern int FUN_0030ee2c(void);
extern int FUN_0030ee34(void);
/* Supplied declaration required: FUN_0030ee42. */


unsigned int FUN_001240f6(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_0030ee42(param_1 + 4);
  temp_v0 = FUN_0030ee34();
  if (temp_v0 != 0) {
    return 0;
  }
  FUN_0030ee42(param_1 + 4);
  temp_v0 = FUN_0030ee2c();
  return *(unsigned int *)(temp_v0 + 4);
}

} /* extern "C" */
