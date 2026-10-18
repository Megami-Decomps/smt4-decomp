/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bedac` (_code @ 0x2bedac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern unsigned int DAT_0063ffd0; /* 0x63ffd0 */
extern unsigned int DAT_0063fff0; /* 0x63fff0 */


unsigned char FUN_002bedac(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if ((param_1 < 0x1f) && (*(int *)(param_1 * 8 + 0x53d740) == 0)) {
    if (!((DAT_005b4008 & 1) == 0 && (DAT_005b4008 & 2) == 0)) {
      puVar1 = &DAT_0063fff0;
    }
    else {
      puVar1 = &DAT_0063ffd0;
    }
    temp_v0 = 0;
    if (puVar1 != (unsigned int *)0x0) {
      temp_v0 = puVar1[2];
    }
    return (temp_v0 & *(unsigned int *)(param_1 * 8 + 0x53d744)) != 0;
  }
  return 0;
}
