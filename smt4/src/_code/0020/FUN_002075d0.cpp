/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002075d0` (_code @ 0x2075d0, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c92c(unsigned char [12]);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0028c92c. */


void FUN_002075d0(float *param_1,float *param_2)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned char temp_v3 [12];
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  FUN_0028c92c(temp_v3);
  DAT_004ea938 = 0;
  DAT_004ea92c = temp_v4;
  DAT_004ea930 = temp_v5;
  DAT_004ea934 = temp_v6;
  DAT_004ea91c = *param_1 - temp_v4;
  DAT_004ea920 = param_1[1] - temp_v5;
  DAT_004ea924 = param_1[2] - temp_v6;
  DAT_004ea928 = param_1[3] - 0.0f;
  temp_v2 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
               DAT_004ea924 * DAT_004ea924);
  if (0.0f < temp_v2) {
    DAT_004ea91c = DAT_004ea91c / temp_v2;
    DAT_004ea920 = DAT_004ea920 / temp_v2;
    DAT_004ea924 = DAT_004ea924 / temp_v2;
  }
  temp_v1 = DAT_004ea924;
  temp_v0 = DAT_004ea920;
  temp_v2 = DAT_004ea91c;
  param_2[3] = DAT_004ea928;
  *param_2 = temp_v2;
  param_2[1] = temp_v0;
  param_2[2] = temp_v1;
  return;
}

} /* extern "C" */
