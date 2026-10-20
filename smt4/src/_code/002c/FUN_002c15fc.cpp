/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c15fc` (_code @ 0x2c15fc, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004650a8; /* 0x4650a8 */
extern unsigned int DAT_004e3c28; /* 0x4e3c28 */
extern unsigned int DAT_004e3c48; /* 0x4e3c48 */


unsigned char FUN_002c15fc(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if ((param_1 < 0x1f) && (*(int *)(param_1 * 8 + 0x409ab0) == 0)) {
    if ((DAT_004650a8 & 1) != 0) {
      puVar1 = &DAT_004e3c48;
    }
    else {
      puVar1 = &DAT_004e3c28;
    }
    temp_v0 = 0;
    if (puVar1 != (unsigned int *)0x0) {
      temp_v0 = *puVar1;
    }
    return (temp_v0 & *(unsigned int *)(param_1 * 8 + 0x409ab4)) != 0;
  }
  return 0;
}

} /* extern "C" */
