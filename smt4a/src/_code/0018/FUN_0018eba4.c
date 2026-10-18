/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018eba4` (_code @ 0x18eba4, 0x218 bytes) from smt4a.cxi.
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
/* Supplied declaration required: FUN_001a4f44. */
/* Supplied declaration required: FUN_001a4fb4. */
/* Supplied declaration required: FUN_001a515c. */
/* Supplied declaration required: FUN_001a5308. */
/* Supplied declaration required: FUN_001a5474. */
/* Supplied declaration required: FUN_001a5514. */


void FUN_0018eba4(unsigned int param_1,float *param_2,float *param_3,float *param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  param_1 = param_1 & 0x70000;
  temp_v2 = romwright_sqrt_4(param_4[1] * param_4[1] + param_4[5] * param_4[5] + param_4[9] * param_4[9]);
  temp_v0 = romwright_sqrt_4(*param_4 * *param_4 + param_4[4] * param_4[4] + param_4[8] * param_4[8]);
  temp_v1 = romwright_sqrt_4(param_4[2] * param_4[2] + param_4[6] * param_4[6] + param_4[10] * param_4[10]);
  param_2[3] = param_3[1] * param_4[7] + param_3[2] * param_4[0xb] +
               param_3[3] + *param_3 * param_4[3];
  param_2[7] = param_3[5] * param_4[7] + param_3[6] * param_4[0xb] +
               param_3[7] + param_3[4] * param_4[3];
  param_2[0xb] = param_3[9] * param_4[7] + param_3[10] * param_4[0xb] +
                 param_3[0xb] + param_3[8] * param_4[3];
  if (param_1 != 0x50000) {
    if (param_1 < 0x50001) {
      if (param_1 != 0x20000) {
        if (param_1 != 0x30000) {
          if (param_1 == 0x40000) {
            FUN_001a4f44(param_2,param_5);
          }
        }
        else {
          FUN_001a4fb4(param_2);
        }
      }
      else {
        FUN_001a5474(param_2);
      }
    }
    else if (param_1 != 0x60000) {
      if (param_1 == 0x70000) {
        FUN_001a515c(param_2);
      }
    }
    else {
      FUN_001a5514(param_2);
    }
  }
  else {
    FUN_001a5308(param_2,param_5);
  }
  *param_2 = *param_2 * temp_v0;
  param_2[1] = param_2[1] * temp_v2;
  param_2[2] = param_2[2] * temp_v1;
  param_2[4] = param_2[4] * temp_v0;
  param_2[5] = param_2[5] * temp_v2;
  param_2[6] = param_2[6] * temp_v1;
  param_2[8] = param_2[8] * temp_v0;
  param_2[9] = param_2[9] * temp_v2;
  param_2[10] = param_2[10] * temp_v1;
  return;
}
