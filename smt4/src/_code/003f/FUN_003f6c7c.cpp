/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6c7c` (_code @ 0x3f6c7c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_003f6c7c(void)

{
  float temp_v0;
  
  temp_v0 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
               DAT_004ea924 * DAT_004ea924 + DAT_004ea928 * DAT_004ea928);
  DAT_004ea91c = DAT_004ea91c / temp_v0;
  DAT_004ea920 = DAT_004ea920 / temp_v0;
  DAT_004ea924 = DAT_004ea924 / temp_v0;
  DAT_004ea928 = DAT_004ea928 / temp_v0;
  return;
}

} /* extern "C" */
