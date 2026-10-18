/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027f170` (_code @ 0x27f170, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


unsigned char FUN_0027f170(void)

{
/* irregular: irregular input(s): in_s0, in_s2, in_s3, in_s4, in_s6, in_s7; 6 native warning(s); review required */
  float in_s0;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s6;
  float in_s7;
  
  return romwright_sqrt_4((in_s0 - in_s4) * (in_s0 - in_s4) + (in_s2 - in_s6) * (in_s2 - in_s6)) <=
         in_s3 + in_s7;
}
