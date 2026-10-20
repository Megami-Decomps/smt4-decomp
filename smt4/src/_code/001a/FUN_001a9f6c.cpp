/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9f6c` (_code @ 0x1a9f6c, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7064(void);
int FUN_002b70cc(void);
int FUN_003219b0(unsigned int, float *, unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_003219b0. */


unsigned int FUN_001a9f6c(unsigned int param_1,float *param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v1 = *param_2;
  temp_v0 = temp_v1 * temp_v1 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if (temp_v0 == 0.0f) {
    temp_v0 = 1.0f;
  }
  temp_v3 = 1.0f / romwright_sqrt_4(temp_v0);
  temp_v1 = temp_v1 * temp_v3;
  temp_v2 = param_2[1] * temp_v3;
  temp_v3 = param_2[2] * temp_v3;
  FUN_002b70cc();
  FUN_002b7064();
  FUN_003219b0(param_1,&temp_v1,param_3);
  return param_1;
}

} /* extern "C" */
