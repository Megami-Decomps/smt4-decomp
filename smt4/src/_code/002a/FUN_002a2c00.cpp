/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2c00` (_code @ 0x2a2c00, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */


void FUN_002a2c00(void)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v5 = DAT_004ea91c * DAT_004ea92c;
  temp_v4 = DAT_004ea91c * DAT_004ea930;
  temp_v2 = DAT_004ea91c * DAT_004ea934;
  temp_v0 = DAT_004ea920 * DAT_004ea930;
  temp_v3 = DAT_004ea920 * DAT_004ea92c;
  temp_v1 = DAT_004ea924 * DAT_004ea934;
  DAT_004ea91c = (DAT_004ea920 * DAT_004ea934 - DAT_004ea924 * DAT_004ea930) +
                 DAT_004ea92c * DAT_004ea928 + DAT_004ea91c * DAT_004ea938;
  DAT_004ea920 = (DAT_004ea924 * DAT_004ea92c - temp_v2) + DAT_004ea930 * DAT_004ea928 +
                 DAT_004ea920 * DAT_004ea938;
  DAT_004ea924 = (temp_v4 - temp_v3) + DAT_004ea934 * DAT_004ea928 + DAT_004ea924 * DAT_004ea938;
  DAT_004ea928 = DAT_004ea928 * DAT_004ea938 - (temp_v5 + temp_v0 + temp_v1);
  return;
}

} /* extern "C" */
