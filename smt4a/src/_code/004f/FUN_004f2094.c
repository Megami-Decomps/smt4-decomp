/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2094` (_code @ 0x4f2094, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571530; /* 0x571530 */
extern float DAT_005e1530; /* 0x5e1530 */
extern float DAT_005e1534; /* 0x5e1534 */
extern float DAT_005e1538; /* 0x5e1538 */
extern float DAT_005e153c; /* 0x5e153c */
extern float DAT_005e1540; /* 0x5e1540 */
extern float DAT_005e1544; /* 0x5e1544 */
extern float DAT_005e1548; /* 0x5e1548 */
extern float DAT_005e154c; /* 0x5e154c */
extern float DAT_005e1550; /* 0x5e1550 */

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f2094(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float *pfVar3;
  float *pfVar4;
  float in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v1 = DAT_005e1544;
  temp_v0 = DAT_005e1540;
  pfVar4 = (float *)(param_1 + 0x5dc);
  if (DAT_00571530 == 2) {
    temp_v2 = *(float *)(param_1 + 0x5e0);
    temp_v3 = *pfVar4 - DAT_005e1548;
    temp_v4 = temp_v2 - DAT_005e154c;
    temp_v5 = *(float *)(param_1 + 0x5e4) - DAT_005e1550;
    FUN_003d4dd4(*(unsigned int *)(param_1 + 0x8b0),*(unsigned int *)(param_1 + 0x8a8),
                 *(unsigned int *)(param_1 + 0x8ac));
    *(float *)(param_1 + 0x854) = *(float *)(param_1 + 0x608) + temp_v3 * temp_v2;
    *(float *)(param_1 + 0x858) = *(float *)(param_1 + 0x60c) + temp_v4 * temp_v2;
    *(float *)(param_1 + 0x85c) = *(float *)(param_1 + 0x610) + temp_v5 * temp_v2;
    return;
  }
  pfVar3 = (float *)(param_1 + 0x884);
  if (DAT_00571530 != 1) {
    temp_v2 = *(float *)(param_1 + 0x5a8) - *(float *)(param_1 + 0x888);
    temp_v5 = *pfVar4 - (*(float *)(param_1 + 0x5a4) - *pfVar3);
    temp_v4 = *(float *)(param_1 + 0x5e0) - temp_v2;
    temp_v3 = *(float *)(param_1 + 0x5e4) -
            (*(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x88c));
    FUN_003d4dd4(*(unsigned int *)(param_1 + 0x8b0),*(unsigned int *)(param_1 + 0x8a8),
                 *(unsigned int *)(param_1 + 0x8ac));
    *(float *)(param_1 + 0x88c) = temp_v3 * temp_v2;
    *(float *)(param_1 + 0x884) = temp_v5 * temp_v2;
    *(float *)(param_1 + 0x888) = temp_v4 * temp_v2;
    return;
  }
  *pfVar3 = DAT_005e153c;
  *(float *)&*(unsigned int *)(param_1 + 0x888) = temp_v0;
  *(float *)&*(unsigned int *)(param_1 + 0x88c) = temp_v1;
  FUN_003d4dd4(*(unsigned int *)(param_1 + 0x8b0),*(unsigned int *)(param_1 + 0x8a8),
               *(unsigned int *)(param_1 + 0x8ac));
  *(float *)(param_1 + 0x884) = (*pfVar4 - (*(float *)(param_1 + 0x5a4) - *pfVar3)) * in_s0;
  *(float *)(param_1 + 0x888) =
       (*(float *)(param_1 + 0x5e0) - (*(float *)(param_1 + 0x5a8) - *(float *)(param_1 + 0x888))) *
       in_s0;
  *(float *)(param_1 + 0x88c) =
       (*(float *)(param_1 + 0x5e4) - (*(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x88c))) *
       in_s0;
  temp_v2 = DAT_005e1538;
  temp_v0 = DAT_005e1534;
  DAT_005e153c = *(float *)(param_1 + 0x884);
  DAT_005e1540 = *(float *)(param_1 + 0x888);
  DAT_005e1544 = *(float *)(param_1 + 0x88c);
  *pfVar3 = DAT_005e1530;
  *(float *)&*(unsigned int *)(param_1 + 0x888) = temp_v0;
  *(float *)(param_1 + 0x88c) = temp_v2;
  *(float *)(param_1 + 0x854) = DAT_005e153c + *(float *)(param_1 + 0x608);
  *(float *)(param_1 + 0x858) = DAT_005e1540 + *(float *)(param_1 + 0x60c);
  temp_v2 = DAT_005e1544 + *(float *)(param_1 + 0x610);
  *(float *)(param_1 + 0x85c) = temp_v2;
  *(float *)(param_1 + 0x740) = temp_v2 + (*(float *)(param_1 + 0x5e4) - DAT_005e1538) * in_s0;
  return;
}
