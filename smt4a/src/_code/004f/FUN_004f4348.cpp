/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f4348` (_code @ 0x4f4348, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f4348_arg0 fn_004f4348_arg0;
struct fn_004f4348_arg0 {
    unsigned char pad_0x0[0x7c];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x554];
    undefined4 field_0x5dc; /* +0x5dc */
    undefined4 field_0x5e0; /* +0x5e0 */
    undefined4 field_0x5e4; /* +0x5e4 */
    unsigned char pad_0x5e8[0x20];
    undefined4 field_0x608; /* +0x608 */
    undefined4 field_0x60c; /* +0x60c */
    undefined4 field_0x610; /* +0x610 */
    unsigned char pad_0x614[0x38];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0xe8];
    float *field_0x738; /* +0x738 */
    void *field_0x73c; /* +0x73c */
    undefined4 field_0x740; /* +0x740 */
    undefined4 field_0x744; /* +0x744 */
    undefined4 field_0x748; /* +0x748 */
    undefined4 field_0x74c; /* +0x74c */
    undefined4 field_0x750; /* +0x750 */
    undefined4 field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    unsigned char field_0x75c; /* +0x75c */
    unsigned char pad_0x75d[0x3];
    unsigned char field_0x760; /* +0x760 */
    unsigned char pad_0x761[0x3];
    unsigned char field_0x764; /* +0x764 */
    unsigned char pad_0x765[0x6b];
    float field_0x7d0; /* +0x7d0 */
    float field_0x7d4; /* +0x7d4 */
    float field_0x7d8; /* +0x7d8 */
};

extern int DAT_00571508; /* 0x571508 */
extern int DAT_00571530; /* 0x571530 */
extern unsigned int DAT_005e1530; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */
extern unsigned int DAT_005e153c; /* 0x5e153c */
extern unsigned int DAT_005e1540; /* 0x5e1540 */
extern unsigned int DAT_005e1544; /* 0x5e1544 */
extern float DAT_005e1548; /* 0x5e1548 */
extern float DAT_005e154c; /* 0x5e154c */
extern float DAT_005e1550; /* 0x5e1550 */


void FUN_004f4348(fn_004f4348_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_00571508;
  if (DAT_00571530 < 1) {
    param_1->field_0x5dc = in_s0;
    param_1->field_0x5e0 = in_s1;
    param_1->field_0x5e4 = in_s2;
    param_1->field_0x758 = 0;
    param_1->field_0x754 = 0;
    param_1->field_0x750 = 0;
    *(unsigned int *)&param_1->field_0x764 = param_3;
    *(unsigned int *)&param_1->field_0x75c = param_2;
    *(unsigned int *)&param_1->field_0x760 = 0;
    param_1->field_0x64c = param_1->field_0x64c | 0x2000;
    return;
  }
  puVar2 = (unsigned int *)(DAT_00571508 + 0x5dc);
  puVar7 = (unsigned int *)(DAT_00571508 + 0x608);
  if (DAT_00571530 != 2) {
    if (DAT_00571530 == 1) {
      puVar4 = (unsigned int *)(DAT_00571508 + 0x750);
      puVar6 = (unsigned int *)(DAT_00571508 + 0x750);
      *(unsigned int *)(DAT_00571508 + 0x758) = 0;
      *(unsigned int *)(temp_v0 + 0x754) = 0;
      *puVar4 = 0;
      DAT_005e1530 = *puVar6;
      DAT_005e1534 = *(unsigned int *)(temp_v0 + 0x754);
      DAT_005e1538 = *(unsigned int *)(temp_v0 + 0x758);
      DAT_005e1548 = DAT_005e1548 - *(float *)(temp_v0 + 2000);
      DAT_005e154c = DAT_005e154c - *(float *)(temp_v0 + 0x7d4);
      DAT_005e1550 = DAT_005e1550 - *(float *)(temp_v0 + 0x7d8);
      *puVar2 = in_s0;
      *(unsigned int *)(temp_v0 + 0x5e0) = in_s1;
      *(unsigned int *)(temp_v0 + 0x5e4) = in_s2;
      DAT_005e1544 = DAT_005e1538;
      DAT_005e153c = DAT_005e1530;
      DAT_005e1540 = DAT_005e1534;
      temp_v1 = *(unsigned int *)(temp_v0 + 0x73c);
      temp_v2 = *(unsigned int *)(temp_v0 + 0x740);
      *puVar7 = *(unsigned int *)(temp_v0 + 0x738);
      *(unsigned int *)(temp_v0 + 0x60c) = temp_v1;
      *(unsigned int *)(temp_v0 + 0x610) = temp_v2;
    }
  }
  else {
    DAT_005e1548 = *(float *)(DAT_00571508 + 0x7c) - *(float *)(DAT_00571508 + 2000);
    DAT_005e154c = *(float *)(DAT_00571508 + 0x80) - *(float *)(DAT_00571508 + 0x7d4);
    puVar4 = (unsigned int *)(DAT_00571508 + 0x750);
    DAT_005e1550 = *(float *)(DAT_00571508 + 0x84) - *(float *)(DAT_00571508 + 0x7d8);
    *puVar2 = in_s0;
    *(unsigned int *)(temp_v0 + 0x5e0) = in_s1;
    *(unsigned int *)(temp_v0 + 0x5e4) = in_s2;
    DAT_005e1530 = *puVar4;
    DAT_005e1534 = *(unsigned int *)(temp_v0 + 0x754);
    DAT_005e1538 = *(unsigned int *)(temp_v0 + 0x758);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x73c);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x740);
    *puVar7 = *(unsigned int *)(temp_v0 + 0x738);
    *(unsigned int *)(temp_v0 + 0x60c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x610) = temp_v2;
  }
  *(unsigned int *)(temp_v0 + 0x744) = param_2;
  *(unsigned int *)(temp_v0 + 0x748) = 0;
  *(unsigned int *)(temp_v0 + 0x74c) = 1;
  *(unsigned int *)(temp_v0 + 0x64c) = *(unsigned int *)(temp_v0 + 0x64c) | 0x20000;
  return;
}

} /* extern "C" */
