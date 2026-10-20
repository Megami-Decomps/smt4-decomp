/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6938` (_code @ 0x3d6938, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227280(unsigned int, unsigned int, unsigned int);

extern int DAT_004342f0; /* 0x4342f0 */
extern float DAT_00493530; /* 0x493530 */
extern float DAT_00493534; /* 0x493534 */
extern float DAT_00493538; /* 0x493538 */
extern float DAT_0049353c; /* 0x49353c */
extern float DAT_00493540; /* 0x493540 */
extern float DAT_00493544; /* 0x493544 */
extern float DAT_00493548; /* 0x493548 */
extern float DAT_0049354c; /* 0x49354c */
extern float DAT_00493550; /* 0x493550 */

/* Supplied declaration required: FUN_00227280. */


void FUN_003d6938(int param_1)

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
  
  temp_v1 = DAT_00493544;
  temp_v0 = DAT_00493540;
  pfVar4 = (float *)(param_1 + 0x5c4);
  if (DAT_004342f0 == 2) {
    temp_v5 = *pfVar4 - DAT_00493548;
    temp_v4 = *(float *)(param_1 + 0x5c8) - DAT_0049354c;
    temp_v3 = *(float *)(param_1 + 0x5cc) - DAT_00493550;
    temp_v2 = DAT_00493550;
    FUN_00227280(*(unsigned int *)(param_1 + 0x844),*(unsigned int *)(param_1 + 0x83c),
                 *(unsigned int *)(param_1 + 0x840));
    *(float *)(param_1 + 0x7e8) = *(float *)(param_1 + 0x5f0) + temp_v5 * temp_v2;
    *(float *)(param_1 + 0x7ec) = *(float *)(param_1 + 0x5f4) + temp_v4 * temp_v2;
    *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x5f8) + temp_v3 * temp_v2;
    return;
  }
  pfVar3 = (float *)(param_1 + 0x818);
  if (DAT_004342f0 != 1) {
    temp_v2 = *(float *)(param_1 + 0x594) - *(float *)(param_1 + 0x820);
    temp_v5 = *pfVar4 - (*(float *)(param_1 + 0x58c) - *pfVar3);
    temp_v3 = *(float *)(param_1 + 0x5c8) -
            (*(float *)(param_1 + 0x590) - *(float *)(param_1 + 0x81c));
    temp_v4 = *(float *)(param_1 + 0x5cc) - temp_v2;
    FUN_00227280(*(unsigned int *)(param_1 + 0x844),*(unsigned int *)(param_1 + 0x83c),
                 *(unsigned int *)(param_1 + 0x840));
    *(float *)(param_1 + 0x820) = temp_v4 * temp_v2;
    *(float *)(param_1 + 0x818) = temp_v5 * temp_v2;
    *(float *)(param_1 + 0x81c) = temp_v3 * temp_v2;
    return;
  }
  *pfVar3 = DAT_0049353c;
  *(float *)&*(unsigned int *)(param_1 + 0x81c) = temp_v0;
  *(float *)&*(unsigned int *)(param_1 + 0x820) = temp_v1;
  FUN_00227280(*(unsigned int *)(param_1 + 0x844),*(unsigned int *)(param_1 + 0x83c),
               *(unsigned int *)(param_1 + 0x840));
  *(float *)(param_1 + 0x818) = (*pfVar4 - (*(float *)(param_1 + 0x58c) - *pfVar3)) * in_s0;
  *(float *)(param_1 + 0x81c) =
       (*(float *)(param_1 + 0x5c8) - (*(float *)(param_1 + 0x590) - *(float *)(param_1 + 0x81c))) *
       in_s0;
  *(float *)(param_1 + 0x820) =
       (*(float *)(param_1 + 0x5cc) - (*(float *)(param_1 + 0x594) - *(float *)(param_1 + 0x820))) *
       in_s0;
  temp_v2 = DAT_00493538;
  temp_v0 = DAT_00493534;
  DAT_0049353c = *(float *)(param_1 + 0x818);
  DAT_00493540 = *(float *)(param_1 + 0x81c);
  DAT_00493544 = *(float *)(param_1 + 0x820);
  *pfVar3 = DAT_00493530;
  *(float *)&*(unsigned int *)(param_1 + 0x81c) = temp_v0;
  *(float *)(param_1 + 0x820) = temp_v2;
  *(float *)(param_1 + 0x7e8) = DAT_0049353c + *(float *)(param_1 + 0x5f0);
  *(float *)(param_1 + 0x7ec) = DAT_00493540 + *(float *)(param_1 + 0x5f4);
  temp_v2 = DAT_00493544 + *(float *)(param_1 + 0x5f8);
  *(float *)(param_1 + 0x7f0) = temp_v2;
  *(float *)(param_1 + 0x6d4) = temp_v2 + (*(float *)(param_1 + 0x5cc) - DAT_00493538) * in_s0;
  return;
}

} /* extern "C" */
