/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6e20` (_code @ 0x3d6e20, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004342f0; /* 0x4342f0 */
extern float DAT_00493530; /* 0x493530 */
extern unsigned int DAT_00493534; /* 0x493534 */
extern unsigned int DAT_00493538; /* 0x493538 */
extern float DAT_0049353c; /* 0x49353c */
extern float DAT_00493540; /* 0x493540 */
extern float DAT_00493544; /* 0x493544 */
extern float DAT_00493548; /* 0x493548 */
extern float DAT_0049354c; /* 0x49354c */
extern float DAT_00493550; /* 0x493550 */

/* Supplied declaration required: FUN_00227280. */


void FUN_003d6e20(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  float in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v3 = DAT_00493544;
  temp_v2 = DAT_00493540;
  if (DAT_004342f0 != 2) {
    if (DAT_004342f0 != 1) {
      return;
    }
    pfVar3 = (float *)(param_1 + 0x6e4);
    *pfVar3 = DAT_0049353c;
    *(float *)(param_1 + 0x6e8) = temp_v2;
    *(float *)(param_1 + 0x6ec) = temp_v3;
    FUN_00227280(*(unsigned int *)(param_1 + 0x6e0),*(unsigned int *)(param_1 + 0x6d8),
                 *(unsigned int *)(param_1 + 0x6dc));
    *(float *)(param_1 + 0x6ec) =
         (*(float *)(param_1 + 0x5cc) - (*(float *)(param_1 + 0x594) - *(float *)(param_1 + 0x6ec)))
         * in_s0;
    *(float *)(param_1 + 0x6e4) =
         (*(float *)(param_1 + 0x5c4) - (*(float *)(param_1 + 0x58c) - *pfVar3)) * in_s0;
    *(float *)(param_1 + 0x6e8) =
         (*(float *)(param_1 + 0x5c8) - (*(float *)(param_1 + 0x590) - *(float *)(param_1 + 0x6e8)))
         * in_s0;
    temp_v1 = DAT_00493538;
    temp_v0 = DAT_00493534;
    DAT_0049353c = *pfVar3;
    DAT_00493540 = *(float *)(param_1 + 0x6e8);
    DAT_00493544 = *(float *)(param_1 + 0x6ec);
    *pfVar3 = DAT_00493530;
    *(unsigned int *)(param_1 + 0x6e8) = temp_v0;
    *(unsigned int *)(param_1 + 0x6ec) = temp_v1;
    *(float *)(param_1 + 0x6cc) = DAT_0049353c + *(float *)(param_1 + 0x5f0);
    *(float *)(param_1 + 0x6d0) = DAT_00493540 + *(float *)(param_1 + 0x5f4);
    temp_v2 = DAT_00493544 + *(float *)(param_1 + 0x5f8);
  }
  else {
    temp_v2 = *(float *)(param_1 + 0x5cc);
    temp_v5 = *(float *)(param_1 + 0x5c4) - DAT_00493548;
    temp_v4 = *(float *)(param_1 + 0x5c8) - DAT_0049354c;
    temp_v3 = temp_v2 - DAT_00493550;
    FUN_00227280(*(unsigned int *)(param_1 + 0x6e0),*(unsigned int *)(param_1 + 0x6d8),
                 *(unsigned int *)(param_1 + 0x6dc));
    *(float *)(param_1 + 0x6cc) = *(float *)(param_1 + 0x5f0) + temp_v5 * temp_v2;
    *(float *)(param_1 + 0x6d0) = *(float *)(param_1 + 0x5f4) + temp_v4 * temp_v2;
    temp_v2 = *(float *)(param_1 + 0x5f8) + temp_v3 * temp_v2;
  }
  *(float *)(param_1 + 0x6d4) = temp_v2;
  return;
}
