/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338294` (_code @ 0x338294, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_003ae340. */
/* Supplied declaration required: FUN_003aecb0. */


void FUN_00338294(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  
  temp_v3 = *(short *)(param_1 + 0x4968);
  temp_v2 = *(short *)(param_1 + 0x496a) - temp_v3;
  if (0 < temp_v2) {
    temp_v3 = temp_v3 + temp_v2;
  }
  temp_v0 = (char)temp_v3 - (char)*(unsigned short *)(DAT_00439ca8 + 0x2194);
  temp_v1 = (char)temp_v2 - (char)*(unsigned short *)(DAT_00439ca8 + 0x2196);
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_003aecb0(DAT_00439ca8,(int)temp_v0,(int)temp_v1);
    }
  }
  else {
    FUN_003ae340(DAT_00439ca8,(int)temp_v0,(int)temp_v1);
  }
  *(unsigned short *)(param_1 + 0x496c) = *(unsigned short *)(param_1 + 0x4968);
  *(unsigned short *)(param_1 + 0x496e) = *(unsigned short *)(param_1 + 0x496a);
  return;
}
