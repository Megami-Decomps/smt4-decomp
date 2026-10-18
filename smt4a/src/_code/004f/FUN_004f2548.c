/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2548` (_code @ 0x4f2548, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571530; /* 0x571530 */
extern unsigned int DAT_005e1530; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */
extern float DAT_005e153c; /* 0x5e153c */
extern float DAT_005e1540; /* 0x5e1540 */
extern float DAT_005e1544; /* 0x5e1544 */
extern float DAT_005e1548; /* 0x5e1548 */
extern float DAT_005e154c; /* 0x5e154c */
extern float DAT_005e1550; /* 0x5e1550 */

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f2548(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v3 = DAT_005e1544;
  temp_v2 = DAT_005e1540;
  if (DAT_00571530 != 2) {
    if (DAT_00571530 != 1) {
      return;
    }
    *(float *)(param_1 + 0x750) = DAT_005e153c;
    *(float *)(param_1 + 0x754) = temp_v2;
    *(float *)(param_1 + 0x758) = temp_v3;
    FUN_003d4dd4(*(unsigned int *)(param_1 + 0x74c),*(unsigned int *)(param_1 + 0x744),
                 *(unsigned int *)(param_1 + 0x748));
    *(float *)(param_1 + 0x758) =
         (*(float *)(param_1 + 0x5e4) - (*(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x758)))
         * in_s0;
    *(float *)(param_1 + 0x750) =
         (*(float *)(param_1 + 0x5dc) - (*(float *)(param_1 + 0x5a4) - *(float *)(param_1 + 0x750)))
         * in_s0;
    *(float *)(param_1 + 0x754) =
         (*(float *)(param_1 + 0x5e0) - (*(float *)(param_1 + 0x5a8) - *(float *)(param_1 + 0x754)))
         * in_s0;
    temp_v1 = DAT_005e1534;
    temp_v0 = DAT_005e1530;
    DAT_005e153c = *(float *)(param_1 + 0x750);
    DAT_005e1540 = *(float *)(param_1 + 0x754);
    DAT_005e1544 = *(float *)(param_1 + 0x758);
    *(unsigned int *)(param_1 + 0x758) = DAT_005e1538;
    *(unsigned int *)(param_1 + 0x750) = temp_v0;
    *(unsigned int *)(param_1 + 0x754) = temp_v1;
    *(float *)(param_1 + 0x738) = DAT_005e153c + *(float *)(param_1 + 0x608);
    *(float *)(param_1 + 0x73c) = DAT_005e1540 + *(float *)(param_1 + 0x60c);
    temp_v2 = DAT_005e1544 + *(float *)(param_1 + 0x610);
  }
  else {
    temp_v2 = *(float *)(param_1 + 0x5e4);
    temp_v3 = *(float *)(param_1 + 0x5dc) - DAT_005e1548;
    temp_v4 = *(float *)(param_1 + 0x5e0) - DAT_005e154c;
    temp_v5 = temp_v2 - DAT_005e1550;
    FUN_003d4dd4(*(unsigned int *)(param_1 + 0x74c),*(unsigned int *)(param_1 + 0x744),
                 *(unsigned int *)(param_1 + 0x748));
    *(float *)(param_1 + 0x738) = *(float *)(param_1 + 0x608) + temp_v3 * temp_v2;
    *(float *)(param_1 + 0x73c) = *(float *)(param_1 + 0x60c) + temp_v4 * temp_v2;
    temp_v2 = *(float *)(param_1 + 0x610) + temp_v5 * temp_v2;
  }
  *(float *)(param_1 + 0x740) = temp_v2;
  return;
}
