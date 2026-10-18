/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb5f0` (_code @ 0x3cb5f0, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */
extern float DAT_005f1a18; /* 0x5f1a18 */
extern float DAT_005f1a1c; /* 0x5f1a1c */
extern float DAT_005f1a20; /* 0x5f1a20 */
extern float DAT_005f1a24; /* 0x5f1a24 */
extern float DAT_005f1a28; /* 0x5f1a28 */
extern float DAT_005f1a2c; /* 0x5f1a2c */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern int FUN_003033d4(void);


void FUN_003cb5f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = FUN_003033d4();
  temp_v6 = 90.0f;
  temp_v4 = 0.017453292f;
  temp_v3 = *(float *)(DAT_00581288 + 0x1c);
  temp_v5 = *(float *)(DAT_00581288 + 0x24);
  temp_v7 = *(float *)(DAT_00581288 + 0x20) + *(float *)(DAT_005806a4 + temp_v0 * 4 + 0xcc);
  temp_v2 = (*(float *)(DAT_005806a4 + 0x18) - 90.0f) * 0.017453292f;
  FUN_001bc124();
  temp_v3 = temp_v3 + temp_v2 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v2 = (*(float *)(DAT_005806a4 + 0x18) - temp_v6) * temp_v4;
  FUN_001bbf0c();
  DAT_005f1a2c = temp_v5 + temp_v2 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v2 = *(float *)(DAT_005806a4 + 0x18) * temp_v4;
  DAT_005f1a24 = temp_v3;
  DAT_005f1a28 = temp_v7;
  FUN_001bc124();
  temp_v3 = *(float *)(DAT_00581288 + 0x1c) - temp_v2 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x18c);
  temp_v2 = *(float *)(DAT_005806a4 + 0x18) * temp_v4;
  FUN_001bbf0c();
  temp_v1 = DAT_005806a4 + temp_v0 * 4;
  temp_v5 = *(float *)(DAT_00581288 + 0x24) - temp_v2 * *(float *)(temp_v1 + 0x18c);
  temp_v7 = *(float *)(DAT_00581288 + 0x20) + *(float *)(temp_v1 + 0x10c) +
          *(float *)(DAT_005806a4 + 0x1c);
  temp_v2 = (*(float *)(DAT_005806a4 + 0x18) - temp_v6) * temp_v4;
  FUN_001bc124();
  temp_v3 = temp_v3 + temp_v2 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v4 = (*(float *)(DAT_005806a4 + 0x18) - temp_v6) * temp_v4;
  FUN_001bbf0c();
  DAT_005f1a18 = temp_v3;
  DAT_005f1a1c = temp_v7;
  DAT_005f1a20 = temp_v5 + temp_v4 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  return;
}
