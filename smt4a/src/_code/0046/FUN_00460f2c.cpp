/* NON_MATCHING: found outside every function: branched to by FUN_003f2cb0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00460f2c for reference (not compiled; its own view of the boundaries):

void FUN_00460f2c(unsigned int *param_1)

{
  *param_1 = &DAT_0055c0fc;
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_0019059c(param_1 + 0x47);
    FUN_001913e4(param_1 + 0x4f);
    *(unsigned char *)(param_1 + 100) = 0;
  }
  FUN_0018fee4(param_1);
  param_1[99] = 0xffffffff;
  if ((param_1[0x48] & 0xfffffffe) != 0) {
    if ((param_1[0x48] & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(param_1[0x48] & 0xfffffffe);
    param_1[0x48] = 0;
  }
  *param_1 = &DAT_0055bd6c;
  return;
}
*/
#include "common.h"
