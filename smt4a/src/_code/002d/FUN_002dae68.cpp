/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dae68` (_code @ 0x2dae68, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mathAngleDeltaDegrees(void);

extern float g_lmapScene; /* 0x581288 */

/* Supplied declaration required: mathAngleDeltaDegrees. */


void FUN_002dae68(void)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = *(float *)((int)g_lmapScene + 0x4c);
  mathAngleDeltaDegrees();
  temp_v1 = temp_v0;
  if (temp_v0 < 0.0f) {
    temp_v1 = -temp_v0;
  }
  if ((int)temp_v1 < 0x41700000) {
    temp_v2 = 0.2f;
  }
  else {
    temp_v2 = 0.33333334f;
  }
  temp_v2 = temp_v1 * temp_v2;
  temp_v3 = temp_v2;
  if ((int)temp_v2 < 0x40a00000) {
    temp_v3 = 5.0f;
  }
  if (temp_v1 <= temp_v3) {
    temp_v2 = g_lmapScene;
  }
  if (temp_v1 <= temp_v3) {
    temp_v3 = *(float *)((int)temp_v2 + 0x50);
  }
  else if (temp_v0 < 0.0f) {
    temp_v3 = *(float *)((int)g_lmapScene + 0x4c) - temp_v3;
  }
  else {
    temp_v3 = *(float *)((int)g_lmapScene + 0x4c) + temp_v3;
  }
  if (temp_v3 < 0.0f) {
    temp_v3 = temp_v3 + 360.0f;
  }
  if ((int)temp_v3 >= 0x43b40001) {
    temp_v3 = temp_v3 - 360.0f;
  }
  *(float *)((int)g_lmapScene + 0x4c) = temp_v3;
  return;
}

} /* extern "C" */
