/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4abc` (_code @ 0x1b4abc, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001bced4. */


void FUN_001b4abc(float *param_1,float *param_2)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned char temp_v3 [12];
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  FUN_001bced4(temp_v3);
  DAT_006472f8 = 0;
  DAT_006472ec = temp_v4;
  DAT_006472f0 = temp_v5;
  DAT_006472f4 = temp_v6;
  DAT_006472dc = *param_1 - temp_v4;
  DAT_006472e0 = param_1[1] - temp_v5;
  DAT_006472e4 = param_1[2] - temp_v6;
  DAT_006472e8 = param_1[3] - 0.0f;
  temp_v2 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
               DAT_006472e4 * DAT_006472e4);
  if (0.0f < temp_v2) {
    DAT_006472dc = DAT_006472dc / temp_v2;
    DAT_006472e0 = DAT_006472e0 / temp_v2;
    DAT_006472e4 = DAT_006472e4 / temp_v2;
  }
  temp_v1 = DAT_006472e4;
  temp_v0 = DAT_006472e0;
  temp_v2 = DAT_006472dc;
  param_2[3] = DAT_006472e8;
  *param_2 = temp_v2;
  param_2[1] = temp_v0;
  param_2[2] = temp_v1;
  return;
}
