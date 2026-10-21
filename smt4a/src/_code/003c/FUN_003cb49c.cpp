/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb49c` (_code @ 0x3cb49c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern float DAT_005f1a30; /* 0x5f1a30 */
extern float DAT_005f1a34; /* 0x5f1a34 */
extern float DAT_005f1a38; /* 0x5f1a38 */
extern float DAT_005f1a3c; /* 0x5f1a3c */
extern float DAT_005f1a40; /* 0x5f1a40 */
extern float DAT_005f1a44; /* 0x5f1a44 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern int FUN_003033d4(void);


void FUN_003cb49c(void)

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
  temp_v3 = *(float *)(g_lmapScene + 0x1c);
  temp_v5 = *(float *)(g_lmapScene + 0x24);
  temp_v7 = *(float *)(g_lmapScene + 0x20) + *(float *)(g_lmapView + temp_v0 * 4 + 0xcc);
  temp_v2 = (*(float *)(g_lmapView + 0x18) - 90.0f) * 0.017453292f;
  FUN_001bc124();
  temp_v3 = temp_v3 + temp_v2 * *(float *)(g_lmapView + temp_v0 * 4 + 0x14c);
  temp_v2 = (*(float *)(g_lmapView + 0x18) - temp_v6) * temp_v4;
  FUN_001bbf0c();
  DAT_005f1a44 = temp_v5 + temp_v2 * *(float *)(g_lmapView + temp_v0 * 4 + 0x14c);
  temp_v2 = *(float *)(g_lmapView + 0x18) * temp_v4;
  DAT_005f1a3c = temp_v3;
  DAT_005f1a40 = temp_v7;
  FUN_001bc124();
  temp_v3 = *(float *)(g_lmapScene + 0x1c) - temp_v2 * *(float *)(g_lmapView + temp_v0 * 4 + 0x18c);
  temp_v2 = *(float *)(g_lmapView + 0x18) * temp_v4;
  FUN_001bbf0c();
  temp_v1 = g_lmapView + temp_v0 * 4;
  temp_v5 = *(float *)(g_lmapScene + 0x24) - temp_v2 * *(float *)(temp_v1 + 0x18c);
  temp_v7 = *(float *)(g_lmapScene + 0x20) + *(float *)(temp_v1 + 0x10c) +
          *(float *)(g_lmapView + 0x1c);
  temp_v2 = (*(float *)(g_lmapView + 0x18) - temp_v6) * temp_v4;
  FUN_001bc124();
  temp_v3 = temp_v3 + temp_v2 * *(float *)(g_lmapView + temp_v0 * 4 + 0x14c);
  temp_v4 = (*(float *)(g_lmapView + 0x18) - temp_v6) * temp_v4;
  FUN_001bbf0c();
  DAT_005f1a30 = temp_v3;
  DAT_005f1a34 = temp_v7;
  DAT_005f1a38 = temp_v5 + temp_v4 * *(float *)(g_lmapView + temp_v0 * 4 + 0x14c);
  return;
}

} /* extern "C" */
