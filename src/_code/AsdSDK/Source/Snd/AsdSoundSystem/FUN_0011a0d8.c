/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a0d8` (_code @ 0x11a0d8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e25e4; /* 0x4e25e4 */
extern unsigned char DAT_004e25e8; /* 0x4e25e8 */
extern unsigned char DAT_004e25e9; /* 0x4e25e9 */
extern int *DAT_004e3178; /* 0x4e3178 */
extern int *DAT_004e317c; /* 0x4e317c */

/* Supplied declaration required: FUN_002bdc08. */


void FUN_0011a0d8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((param_1 != 0xffffffff) && (1 >= param_1)) {
    temp_v0 = param_1 * 0x10;
    temp_v1 = *(int *)(temp_v0 + 0x4e25dc);
    if (temp_v1 != 0) {
      FUN_002bdc08(temp_v1,0);
    }
    (&DAT_004e25e4)[param_1 * 4] = 0;
    (&DAT_004e25e9)[temp_v0] = 0x40;
    (&DAT_004e25e8)[temp_v0] = 0;
    DAT_004e3178 = (int *)(temp_v0 + 0x4e25dc);
  }
  else {
    DAT_004e3178 = (int *)0x0;
  }
  if ((param_2 != 0xffffffff) && (param_2 < 2)) {
    temp_v0 = param_2 * 0x10;
    temp_v1 = *(int *)(temp_v0 + 0x4e25dc);
    if (temp_v1 != 0) {
      FUN_002bdc08(temp_v1,0);
    }
    (&DAT_004e25e4)[param_2 * 4] = 0;
    (&DAT_004e25e9)[temp_v0] = 0x40;
    (&DAT_004e25e8)[temp_v0] = 0;
    DAT_004e317c = (int *)(temp_v0 + 0x4e25dc);
    return;
  }
  DAT_004e317c = (int *)0x0;
  return;
}
