/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245ed0` (_code @ 0x245ed0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */


void FUN_00245ed0(void)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = DAT_004ea91c * DAT_004ea960;
  temp_v0 = DAT_004ea924 * DAT_004ea97c;
  temp_v1 = DAT_004ea924 * DAT_004ea980;
  temp_v2 = DAT_004ea924 * DAT_004ea988;
  DAT_004ea924 = DAT_004ea91c * DAT_004ea964 + DAT_004ea920 * DAT_004ea974 +
                 DAT_004ea924 * DAT_004ea984;
  DAT_004ea928 = DAT_004ea91c * DAT_004ea968 + DAT_004ea920 * DAT_004ea978 + temp_v2;
  DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c + temp_v0;
  DAT_004ea920 = temp_v3 + DAT_004ea920 * DAT_004ea970 + temp_v1;
  return;
}
