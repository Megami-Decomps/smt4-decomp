/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8a60` (_code @ 0x3d8a60, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d8a60_arg0 fn_003d8a60_arg0;
struct fn_003d8a60_arg0 {
    unsigned char pad_0x0[0x68];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    unsigned char pad_0x74[0x550];
    undefined4 field_0x5c4; /* +0x5c4 */
    undefined4 field_0x5c8; /* +0x5c8 */
    undefined4 field_0x5cc; /* +0x5cc */
    unsigned char pad_0x5d0[0x20];
    float field_0x5f0; /* +0x5f0 */
    float field_0x5f4; /* +0x5f4 */
    float field_0x5f8; /* +0x5f8 */
    unsigned char pad_0x5fc[0x38];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0x94];
    float *field_0x6cc; /* +0x6cc */
    undefined4 field_0x6d0; /* +0x6d0 */
    void *field_0x6d4; /* +0x6d4 */
    undefined4 field_0x6d8; /* +0x6d8 */
    undefined4 field_0x6dc; /* +0x6dc */
    undefined4 field_0x6e0; /* +0x6e0 */
    undefined4 field_0x6e4; /* +0x6e4 */
    undefined4 field_0x6e8; /* +0x6e8 */
    undefined4 field_0x6ec; /* +0x6ec */
    unsigned char field_0x6f0; /* +0x6f0 */
    unsigned char pad_0x6f1[0x3];
    unsigned char field_0x6f4; /* +0x6f4 */
    unsigned char pad_0x6f5[0x3];
    unsigned char field_0x6f8; /* +0x6f8 */
    unsigned char pad_0x6f9[0x6b];
    float field_0x764; /* +0x764 */
    float field_0x768; /* +0x768 */
    float field_0x76c; /* +0x76c */
};

extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_004342f0; /* 0x4342f0 */
extern unsigned int DAT_00493530; /* 0x493530 */
extern unsigned int DAT_00493534; /* 0x493534 */
extern unsigned int DAT_00493538; /* 0x493538 */
extern unsigned int DAT_0049353c; /* 0x49353c */
extern unsigned int DAT_00493540; /* 0x493540 */
extern unsigned int DAT_00493544; /* 0x493544 */
extern float DAT_00493548; /* 0x493548 */
extern float DAT_0049354c; /* 0x49354c */
extern float DAT_00493550; /* 0x493550 */


void FUN_003d8a60(fn_003d8a60_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_004342c8;
  if (DAT_004342f0 < 1) {
    param_1->field_0x5c4 = in_s0;
    param_1->field_0x5c8 = in_s1;
    param_1->field_0x5cc = in_s2;
    param_1->field_0x6ec = 0;
    param_1->field_0x6e8 = 0;
    param_1->field_0x6e4 = 0;
    *(unsigned int *)&param_1->field_0x6f8 = param_3;
    *(unsigned int *)&param_1->field_0x6f0 = param_2;
    *(unsigned int *)&param_1->field_0x6f4 = 0;
    param_1->field_0x634 = param_1->field_0x634 | 0x2000;
    return;
  }
  pfVar2 = (float *)(DAT_004342c8 + 0x764);
  puVar4 = (unsigned int *)(DAT_004342c8 + 0x5c4);
  if (DAT_004342f0 != 2) {
    if (DAT_004342f0 == 1) {
      puVar3 = (unsigned int *)(DAT_004342c8 + 0x6e4);
      *(unsigned int *)(DAT_004342c8 + 0x6ec) = 0;
      *(unsigned int *)(temp_v0 + 0x6e8) = 0;
      *puVar3 = 0;
      DAT_00493530 = *(unsigned int *)(temp_v0 + 0x6e4);
      DAT_00493534 = *(unsigned int *)(temp_v0 + 0x6e8);
      DAT_00493538 = *(unsigned int *)(temp_v0 + 0x6ec);
      DAT_00493548 = DAT_00493548 - *pfVar2;
      DAT_0049354c = DAT_0049354c - *(float *)(temp_v0 + 0x768);
      DAT_00493550 = DAT_00493550 - *(float *)(temp_v0 + 0x76c);
      *puVar4 = in_s0;
      *(unsigned int *)(temp_v0 + 0x5c8) = in_s1;
      *(unsigned int *)(temp_v0 + 0x5cc) = in_s2;
      DAT_0049353c = DAT_00493530;
      DAT_00493540 = DAT_00493534;
      DAT_00493544 = DAT_00493538;
      *(unsigned int *)(temp_v0 + 0x5f0) = *(unsigned int *)(temp_v0 + 0x6cc);
      *(unsigned int *)(temp_v0 + 0x5f4) = *(unsigned int *)(temp_v0 + 0x6d0);
      *(unsigned int *)(temp_v0 + 0x5f8) = *(unsigned int *)(temp_v0 + 0x6d4);
    }
  }
  else {
    DAT_00493548 = *(float *)(DAT_004342c8 + 0x68) - *pfVar2;
    DAT_0049354c = *(float *)(DAT_004342c8 + 0x6c) - *(float *)(DAT_004342c8 + 0x768);
    DAT_00493550 = *(float *)(DAT_004342c8 + 0x70) - *(float *)(DAT_004342c8 + 0x76c);
    puVar3 = (unsigned int *)(DAT_004342c8 + 0x6e4);
    *puVar4 = in_s0;
    *(unsigned int *)(temp_v0 + 0x5c8) = in_s1;
    *(unsigned int *)(temp_v0 + 0x5cc) = in_s2;
    DAT_00493530 = *puVar3;
    DAT_00493534 = *(unsigned int *)(temp_v0 + 0x6e8);
    DAT_00493538 = *(unsigned int *)(temp_v0 + 0x6ec);
    *(unsigned int *)(temp_v0 + 0x5f0) = *(unsigned int *)(temp_v0 + 0x6cc);
    *(unsigned int *)(temp_v0 + 0x5f4) = *(unsigned int *)(temp_v0 + 0x6d0);
    *(unsigned int *)(temp_v0 + 0x5f8) = *(unsigned int *)(temp_v0 + 0x6d4);
  }
  *(unsigned int *)(temp_v0 + 0x6d8) = param_2;
  *(unsigned int *)(temp_v0 + 0x6dc) = 0;
  *(unsigned int *)(temp_v0 + 0x6e0) = 1;
  *(unsigned int *)(temp_v0 + 0x634) = *(unsigned int *)(temp_v0 + 0x634) | 0x20000;
  return;
}
