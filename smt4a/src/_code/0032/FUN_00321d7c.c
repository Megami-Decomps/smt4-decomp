/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321d7c` (_code @ 0x321d7c, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Supplied declaration required: FUN_001b640c. */
/* Supplied declaration required: FUN_002cf548. */
/* Supplied declaration required: FUN_0034f8b4. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_00321d7c(float *param_1,int param_2,unsigned int param_3,float *param_4)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  float temp_v0;
  float in_s0;
  
  temp_v0 = (float)(param_2 + 0x2c);
  FUN_0038136c(temp_v0,param_2 + 0x50,param_3,*(unsigned int *)(param_2 + 0xb8));
  param_1[5] = temp_v0;
  FUN_0034f8b4(param_2 + 0x60,param_3,*(unsigned int *)(param_2 + 0xb8));
  param_1[6] = in_s0;
  if (*(char *)(param_2 + 0x9c) != '\x02') {
    FUN_0034f8b4(param_2 + 0x8c,param_3,*(unsigned int *)(param_2 + 0xb8));
  }
  else {
    DAT_006472dc = *param_1;
    DAT_006472e0 = param_1[1];
    DAT_006472e4 = param_1[2];
    DAT_006472e8 = param_1[3];
    FUN_002cf548();
    DAT_006472f8 = DAT_006472e8;
    DAT_006472ec = DAT_006472dc;
    DAT_006472f0 = DAT_006472e0;
    DAT_006472f4 = DAT_006472e4;
    DAT_006472dc = *param_4;
    DAT_006472e0 = param_4[1];
    DAT_006472e4 = param_4[2];
    DAT_006472e8 = param_4[3];
    FUN_002cf548();
    DAT_006472dc = DAT_006472dc - DAT_006472ec;
    in_s0 = DAT_006472e0 - DAT_006472f0;
    DAT_006472e4 = DAT_006472e4 - DAT_006472f4;
    DAT_006472e8 = DAT_006472e8 - DAT_006472f8;
    DAT_006472e0 = in_s0;
    if (DAT_006472dc == 0.0f && in_s0 == 0.0f) {
      param_1[7] = 0.0f;
      return;
    }
    FUN_001b640c();
    in_s0 = in_s0 * 0.024543693f;
  }
  param_1[7] = in_s0;
  return;
}
