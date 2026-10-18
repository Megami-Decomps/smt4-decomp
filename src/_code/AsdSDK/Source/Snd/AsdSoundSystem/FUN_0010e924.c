/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e924` (_code @ 0x10e924, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004e3138; /* 0x4e3138 */
extern unsigned int DAT_004e313c; /* 0x4e313c */
extern unsigned int DAT_004e3140; /* 0x4e3140 */
extern unsigned int DAT_004e3144; /* 0x4e3144 */
extern unsigned int DAT_004e3148; /* 0x4e3148 */
extern unsigned int DAT_004e314c; /* 0x4e314c */
extern unsigned char DAT_004e3150; /* 0x4e3150 */
extern unsigned char DAT_004e3151; /* 0x4e3151 */
extern unsigned char DAT_004e3152; /* 0x4e3152 */
extern signed char DAT_004e316b; /* 0x4e316b */


void FUN_0010e924(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (param_1 != 0) {
    DAT_004e3150 = DAT_004e3150 | 1;
    DAT_004e3138 = in_s0;
    if (in_s0 <= 0.0f) {
      DAT_004e3138 = 0.0f;
    }
    if ((int)DAT_004e3138 >= 0x3f800001) {
      DAT_004e3138 = 1.0f;
    }
    DAT_004e313c = param_2;
    DAT_004e3144 = param_4;
    DAT_004e3148 = param_5;
    DAT_004e3140 = param_3;
    if (DAT_004e316b == '\0') {
      return;
    }
    DAT_004e3152 = 1;
  }
  else {
    DAT_004e3152 = 0;
    DAT_004e313c = 0;
    DAT_004e3138 = 0.0f;
    DAT_004e3144 = 0;
    DAT_004e3148 = 0;
    DAT_004e3140 = 0;
    DAT_004e314c = 0;
    DAT_004e3151 = 0;
    DAT_004e3150 = 0;
  }
  return;
}
