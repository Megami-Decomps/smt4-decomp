/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b660` (_code @ 0x24b660, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_00207ee8. */
/* Supplied declaration required: FUN_0024c418. */
/* Supplied declaration required: FUN_00269508. */
/* Supplied declaration required: FUN_00269694. */


void FUN_0024b660(float *param_1,int param_2,unsigned int param_3,float *param_4)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  float temp_v0;
  float in_s0;
  
  temp_v0 = (float)(param_2 + 0x2c);
  FUN_00269694(temp_v0,param_2 + 0x50,param_3,*(unsigned int *)(param_2 + 0xb8));
  param_1[5] = temp_v0;
  FUN_00269508(param_2 + 0x60,param_3,*(unsigned int *)(param_2 + 0xb8));
  param_1[6] = in_s0;
  if (*(char *)(param_2 + 0x9c) != '\x02') {
    FUN_00269508(param_2 + 0x8c,param_3,*(unsigned int *)(param_2 + 0xb8));
  }
  else {
    DAT_004ea91c = *param_1;
    DAT_004ea920 = param_1[1];
    DAT_004ea924 = param_1[2];
    DAT_004ea928 = param_1[3];
    FUN_00207ee8();
    DAT_004ea938 = DAT_004ea928;
    DAT_004ea92c = DAT_004ea91c;
    DAT_004ea930 = DAT_004ea920;
    DAT_004ea934 = DAT_004ea924;
    DAT_004ea91c = *param_4;
    DAT_004ea920 = param_4[1];
    DAT_004ea924 = param_4[2];
    DAT_004ea928 = param_4[3];
    FUN_00207ee8();
    DAT_004ea91c = DAT_004ea91c - DAT_004ea92c;
    in_s0 = DAT_004ea920 - DAT_004ea930;
    DAT_004ea924 = DAT_004ea924 - DAT_004ea934;
    DAT_004ea928 = DAT_004ea928 - DAT_004ea938;
    DAT_004ea920 = in_s0;
    if (DAT_004ea91c == 0.0f && in_s0 == 0.0f) {
      param_1[7] = 0.0f;
      return;
    }
    FUN_0024c418();
    in_s0 = in_s0 * 0.024543693f;
  }
  param_1[7] = in_s0;
  return;
}
