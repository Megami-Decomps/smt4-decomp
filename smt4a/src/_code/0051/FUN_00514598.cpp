/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514598` (_code @ 0x514598, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_00514598(void)

{
  float temp_v0;
  
  temp_v0 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
               DAT_006472e4 * DAT_006472e4 + DAT_006472e8 * DAT_006472e8);
  DAT_006472dc = DAT_006472dc / temp_v0;
  DAT_006472e0 = DAT_006472e0 / temp_v0;
  DAT_006472e4 = DAT_006472e4 / temp_v0;
  DAT_006472e8 = DAT_006472e8 / temp_v0;
  return;
}

} /* extern "C" */
