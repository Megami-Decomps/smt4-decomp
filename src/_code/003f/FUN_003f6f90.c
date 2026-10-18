/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6f90` (_code @ 0x3f6f90, 0x4c bytes) from smt4.cxi.
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
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002a463c. */


float FUN_003f6f90(float param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  
  temp_v0 = romwright_sqrt_4(param_1);
  if ((0x7f800000 - (int)romwright_fabs_4(temp_v0) < 0) && (-1 < 0x7f800000 - (int)romwright_fabs_4(param_1))) {
    FUN_002a463c(1);
  }
  return temp_v0;
}
