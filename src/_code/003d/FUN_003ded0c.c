/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ded0c` (_code @ 0x3ded0c, 0x3b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp114; /* 0x114: local_114 */
} param_5_stack;

extern unsigned int DAT_00476638; /* 0x476638 */
extern float DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern float DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern float DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern float DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002c0000. */
extern int FUN_002c00d4(unsigned int *);


void FUN_003ded0c(int param_1,float *param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float *temp_v13;
  float temp_v14;
  float temp_v15;
  float fStack_f8;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float fStack_e8;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float fStack_d8;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [10];
  float *temp_v29;
  float *temp_v30;
  float *temp_v31;
  int temp_v32;
  float *pfStack_30;
  int iStack_2c;
  int temp_v33;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  temp_v11 = (float)VectorUnsignedToFloat(param_5 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat((param_5 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat((param_5 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat(param_5 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = temp_v11 * 0.003921569f;
  temp_v10 = temp_v10 * 0.003921569f;
  temp_v0 = param_3 * 0xc + 4;
  temp_v1 = param_3 * 0xc + 6;
  temp_v8 = temp_v8 * 0.003921569f;
  temp_v6 = temp_v6 * 0.003921569f;
  if (param_4 != 4) {
    if (param_4 != 5) {
      if (param_4 != 6) {
        return;
      }
      temp_v2 = *(int *)(param_1 + 0x30);
      temp_v27 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1) + (unsigned int)*(unsigned short *)(temp_v2 + temp_v0);
      temp_v28 = (temp_v27 - 1) + (unsigned int)*(unsigned short *)(temp_v2 + param_3 * 0xc + 8);
    }
    else {
      temp_v27 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v0);
      temp_v28 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v1) + (temp_v27 - 1);
    }
  }
  else {
    temp_v2 = *(int *)(param_1 + 0x30);
    temp_v27 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1) + (unsigned int)*(unsigned short *)(temp_v2 + temp_v0);
    temp_v28 = (temp_v27 - 1) + (unsigned int)*(unsigned short *)(temp_v2 + param_3 * 0xc + 8);
  }
  temp_v12 = 1.0f;
  temp_v32 = param_1;
  pfStack_30 = param_2;
  iStack_2c = param_3;
  temp_v33 = param_4;
  if (((DAT_00476638 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00476638), temp_v0 != 0)) {
    DAT_004efda0 = 0;
    DAT_004efda4 = 0;
    DAT_004efda8 = 0;
    DAT_004efdac = 0;
    DAT_004efdb4 = 0;
    DAT_004efdb8 = 0;
    DAT_004efdbc = 0;
    DAT_004efdc0 = 0;
    DAT_004efdc8 = 0;
    DAT_004efdcc = 0;
    DAT_004efdd0 = 0;
    DAT_004efdd4 = 0;
    DAT_004efd9c = temp_v12;
    DAT_004efdb0 = temp_v12;
    DAT_004efdc4 = temp_v12;
    DAT_004efdd8 = temp_v12;
  }
  FUN_002c0000(&temp_v14,&DAT_004efd9c);
  temp_v29 = param_2;
  for (; (int)temp_v27 <= temp_v28; temp_v27 = temp_v27 + 1) {
    pfVar1 = (float *)(*(int *)(temp_v32 + 0x2c) + temp_v27 * 0x58);
    temp_v30 = pfVar1;
    if ((temp_v33 == 5) ||
       (((pfVar1[0x14] != 1.0f || (temp_v33 == 4)) &&
        (((int)pfVar1[0x14] >= 0x3f800000 || (temp_v33 == 6)))))) {
      temp_v3 = 0;
      pfVar2 = &fStack_b8;
      do {
        temp_v4 = pfVar1[1];
        temp_v7 = pfVar1[2];
        temp_v9 = *pfVar1;
        temp_v3 = temp_v3 + 1;
        pfVar1 = pfVar1 + 3;
        temp_v5 = temp_v12 / (temp_v24 * temp_v4 + temp_v25 * temp_v7 + temp_v26 + temp_v23 * temp_v9);
        pfVar2[2] = (temp_v21 * temp_v4 + fStack_d8 * temp_v7 + temp_v22 + temp_v20 * temp_v9) * temp_v5
        ;
        *pfVar2 = (temp_v15 * temp_v4 + fStack_f8 * temp_v7 + temp_v16 + temp_v14 * temp_v9) * temp_v5;
        pfVar2[1] = (temp_v18 * temp_v4 + fStack_e8 * temp_v7 + temp_v19 + temp_v17 * temp_v9) * temp_v5
        ;
        pfVar2 = pfVar2 + 3;
      } while (temp_v3 < 4);
      pfVar15 = &fStack_b8;
      temp_v13 = temp_v29 + 4;
      temp_v31 = temp_v30 + 0xc;
      temp_v0 = 4;
      pfVar7 = temp_v29 + 6;
      pfVar8 = &fStack_b4;
      pfVar10 = afStack_b0;
      pfVar9 = temp_v29 + 7;
      pfVar11 = temp_v29 + 8;
      pfVar12 = temp_v29 + 2;
      pfVar13 = temp_v29 + 3;
      pfVar14 = temp_v29 + 5;
      pfVar2 = temp_v29 + 1;
      pfVar16 = temp_v30 + 0x10;
      pfVar1 = temp_v29;
      do {
        temp_v0 = temp_v0 - 1;
        *pfVar7 = *pfVar15;
        pfVar15 = pfVar15 + 3;
        *pfVar9 = *pfVar8;
        pfVar7 = pfVar7 + 9;
        *pfVar11 = *pfVar10;
        *pfVar12 = temp_v11;
        *pfVar13 = temp_v10;
        pfVar8 = pfVar8 + 3;
        pfVar9 = pfVar9 + 9;
        pfVar10 = pfVar10 + 3;
        *temp_v13 = temp_v8;
        pfVar11 = pfVar11 + 9;
        pfVar12 = pfVar12 + 9;
        pfVar13 = pfVar13 + 9;
        *pfVar14 = temp_v6 * temp_v30[0x14];
        pfVar14 = pfVar14 + 9;
        *pfVar1 = *temp_v31;
        pfVar1 = pfVar1 + 9;
        temp_v4 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        temp_v13 = temp_v13 + 9;
        temp_v31 = temp_v31 + 1;
        *pfVar2 = -temp_v4;
        pfVar2 = pfVar2 + 9;
      } while (temp_v0 != 0);
      temp_v29 = temp_v29 + 0x24;
    }
  }
  return;
}
