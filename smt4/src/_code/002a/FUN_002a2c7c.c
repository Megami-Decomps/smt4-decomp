/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2c7c` (_code @ 0x2a2c7c, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern unsigned int DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern unsigned int DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern unsigned int DAT_004ea988; /* 0x4ea988 */
extern unsigned int DAT_004ea98c; /* 0x4ea98c */
extern unsigned int DAT_004ea990; /* 0x4ea990 */
extern unsigned int DAT_004ea994; /* 0x4ea994 */
extern unsigned int DAT_004ea998; /* 0x4ea998 */


void FUN_002a2c7c(void)

{
  DAT_004ea95c = 1.0f - (DAT_004ea920 * DAT_004ea920 + DAT_004ea924 * DAT_004ea924) * 2.0f;
  DAT_004ea960 = (DAT_004ea91c * DAT_004ea920 - DAT_004ea928 * DAT_004ea924) * 2.0f;
  DAT_004ea964 = (DAT_004ea928 * DAT_004ea920 + DAT_004ea91c * DAT_004ea924) * 2.0f;
  DAT_004ea968 = 0;
  DAT_004ea96c = (DAT_004ea91c * DAT_004ea920 + DAT_004ea928 * DAT_004ea924) * 2.0f;
  DAT_004ea970 = 1.0f - (DAT_004ea91c * DAT_004ea91c + DAT_004ea924 * DAT_004ea924) * 2.0f;
  DAT_004ea974 = (DAT_004ea920 * DAT_004ea924 - DAT_004ea928 * DAT_004ea91c) * 2.0f;
  DAT_004ea978 = 0;
  DAT_004ea97c = (DAT_004ea91c * DAT_004ea924 - DAT_004ea928 * DAT_004ea920) * 2.0f;
  DAT_004ea980 = (DAT_004ea920 * DAT_004ea924 + DAT_004ea928 * DAT_004ea91c) * 2.0f;
  DAT_004ea984 = 1.0f - (DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920) * 2.0f;
  DAT_004ea988 = 0;
  DAT_004ea98c = 0;
  DAT_004ea990 = 0;
  DAT_004ea994 = 0;
  DAT_004ea998 = 0x3f800000;
  return;
}
