/* NON_MATCHING: found outside every function: branched to by FUN_0033b66c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0037b540 for reference (not compiled; its own view of the boundaries):

unsigned int * FUN_0037b540(unsigned int *param_1)

{
  *param_1 = &DAT_00421c78;
  if (*(char *)(param_1 + 0x60) != '\0') {
    if ((param_1[0x44] & 0xfffffffe) != 0) {
      FUN_002b90b0(param_1[0x44] & 0xfffffffe);
      param_1[0x44] = 0;
    }
    FUN_00140f3c(param_1 + 0x4b);
    *(unsigned char *)(param_1 + 0x60) = 0;
  }
  FUN_001404c4(param_1);
  param_1[0x5f] = 0xffffffff;
  if ((param_1[0x44] & 0xfffffffe) != 0) {
    FUN_002b90b0(param_1[0x44] & 0xfffffffe);
    param_1[0x44] = 0;
  }
  return param_1;
}
*/
#include "common.h"
