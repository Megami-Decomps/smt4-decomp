/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126694` (_code @ 0x126694, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e2598; /* 0x4e2598 */
extern unsigned char DAT_004e259c; /* 0x4e259c */
extern unsigned char DAT_004e259d; /* 0x4e259d */
extern int DAT_004e3170; /* 0x4e3170 */
extern int DAT_004e3174; /* 0x4e3174 */

/* Supplied declaration required: FUN_002bd3fc. */


void FUN_00126694(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 != 0xffffffff) && (1 >= param_1)) &&
     (temp_v0 = param_1 * 0x3c, *(int *)(temp_v0 + 0x4e2574) != 0)) {
    (&DAT_004e259d)[temp_v0] = 0x40;
    (&DAT_004e2598)[param_1 * 0xf] = 0;
    (&DAT_004e259c)[temp_v0] = 0;
    FUN_002bd3fc(temp_v0 + 0x4e2564,*(unsigned int *)(temp_v0 + 0x4e2590));
    DAT_004e3170 = temp_v0 + 0x4e2564;
  }
  else {
    DAT_004e3170 = 0;
  }
  if (((param_2 != 0xffffffff) && (param_2 < 2)) &&
     (temp_v0 = param_2 * 0x3c, *(int *)(temp_v0 + 0x4e2574) != 0)) {
    (&DAT_004e259d)[temp_v0] = 0x40;
    (&DAT_004e2598)[param_2 * 0xf] = 0;
    (&DAT_004e259c)[temp_v0] = 0;
    FUN_002bd3fc(temp_v0 + 0x4e2564,*(unsigned int *)(temp_v0 + 0x4e2590));
    DAT_004e3174 = temp_v0 + 0x4e2564;
    return;
  }
  DAT_004e3174 = 0;
  return;
}
