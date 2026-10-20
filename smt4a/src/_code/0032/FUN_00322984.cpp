/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322984` (_code @ 0x322984, 0x1234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00182540(...);
int FUN_001b4c1c(...);
int FUN_001bc460(void);
int FUN_00212500(void);
int requestDispatch(...);
int FUN_00290c28(...);
int FUN_00290e04(...);
int FUN_00290e6c(...);
int FUN_002b3538(...);
int FUN_002b3c9c(...);
int FUN_002e59f8(...);
int FUN_002ff8e8(...);
int FUN_00323f50(...);
int FUN_0039ede0(...);
int FUN_003b24f0(...);
int SUB41(double, int);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);

typedef struct fn_00322984_arg0 fn_00322984_arg0;
struct fn_00322984_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x26];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x7];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x7];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x7];
    void *field_0x4c; /* +0x4c */
};

/* stack frame of param_1: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */
extern float DAT_0064734c; /* 0x64734c */
extern float DAT_00647350; /* 0x647350 */
extern float DAT_00647354; /* 0x647354 */
extern float DAT_00647358; /* 0x647358 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_00182540. */
/* Supplied declaration required: FUN_001b4c1c. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_00212500. */
/* Supplied declaration required: requestDispatch. */
/* Supplied declaration required: FUN_00290c28. */
extern unsigned int FUN_00290df4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00290e04. */
/* Supplied declaration required: FUN_00290e6c. */
/* Supplied declaration required: FUN_002b3538. */
/* Supplied declaration required: FUN_002b3c9c. */
/* Supplied declaration required: FUN_002e59f8. */
extern int FUN_002fe3bc(void *);
/* Supplied declaration required: FUN_002ff8e8. */
/* Supplied declaration required: FUN_00323f50. */
/* Supplied declaration required: FUN_0039ede0. */
/* Supplied declaration required: FUN_003b24f0. */


void FUN_00322984(fn_00322984_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 20 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  int temp_v5;
  float *pfVar8;
  int temp_v6;
  int temp_v7;
  void *pvVar11;
  int temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned long long temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int *temp_v33;
  int iStack_14c;
  int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  unsigned int *temp_v46;
  float *temp_v47;
  int iStack_ec;
  float *temp_v48;
  int iStack_e4;
  float *temp_v49;
  int iStack_dc;
  unsigned char temp_v50 [8];
  float temp_v51;
  float temp_v52;
  float temp_v53;
  unsigned int temp_v54;
  unsigned int temp_v55;
  unsigned int temp_v56;
  unsigned int temp_v57;
  unsigned int temp_v58;
  float temp_v59;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  unsigned char *temp_v60;
  int iStack_6c;
  
  temp_v29 = (unsigned long long)(unsigned int)in_s0;
  pvVar11 = param_1->field_0x4c;
  temp_v0 = param_1->field_0x4;
  temp_v24 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar2 = (unsigned int *)&DAT_006472dc;
  temp_v23 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v24 = temp_v24 * 0.003921569f;
  temp_v23 = temp_v23 * 0.003921569f;
  temp_v14 = temp_v14 * 0.003921569f;
  temp_v18 = temp_v18 * 0.003921569f;
  temp_v6 = *(int *)((int)pvVar11 + 8);
  if (temp_v6 != 0) {
    puVar2 = *(unsigned int **)((int)pvVar11 + 0x10);
  }
  DAT_006472dc = temp_v24;
  DAT_006472e0 = temp_v18;
  DAT_006472e4 = temp_v23;
  DAT_006472e8 = temp_v14;
  if (temp_v6 != 0 && puVar2 != (unsigned int *)0x0) {
    pfVar8 = *(float **)((int)pvVar11 + 0x18);
    switch(param_1->field_0xc) {
    case 1:
    case 4:
    case 9:
      temp_v7 = 0;
      temp_v1 = *(int *)((int)pvVar11 + 0x20);
      temp_v14 = (float)param_1[1].field_0x4 * in_s0;
      temp_v18 = *(float *)&param_1[1].field_0x8 * in_s0;
      temp_v8 = *(int *)(*(int *)(param_1 + 1) + 0xc);
      FUN_002b3538(temp_v8,1,&temp_v49);
      FUN_002b3538(temp_v8,2,&temp_v60);
      FUN_002b3538(temp_v8,4,&temp_v47);
      FUN_002b3538(temp_v8,0x20,&temp_v48);
      if ((*(unsigned int *)((int)pvVar11 + 0xc) & 1) != 0) {
        FUN_0039ede0(pvVar11,&temp_v59);
        FUN_003b24f0(pvVar11,&temp_v35);
        DAT_006472dc = temp_v59;
        DAT_006472e0 = fStack_84;
        DAT_006472e4 = fStack_80;
        DAT_006472e8 = fStack_7c;
        FUN_001bc460();
        temp_v32 = DAT_00647348;
        temp_v26 = DAT_00647344;
        temp_v25 = DAT_00647340;
        temp_v31 = DAT_0064733c;
        temp_v22 = DAT_00647338;
        temp_v20 = DAT_00647334;
        temp_v12 = DAT_00647330;
        temp_v4 = DAT_0064732c;
        temp_v30 = DAT_00647328;
        temp_v28 = DAT_00647324;
        temp_v24 = DAT_00647320;
        temp_v23 = DAT_0064731c;
        DAT_0064734c = temp_v35;
        temp_v5 = 0;
        DAT_00647350 = temp_v36;
        DAT_00647354 = temp_v37;
        DAT_00647358 = temp_v38;
        temp_v41 = DAT_00647344;
        temp_v42 = DAT_00647348;
        if (temp_v6 < 1) {
          return;
        }
        do {
          if (-1 < (int)pfVar8[4]) {
            DAT_00647358 = temp_v38;
            DAT_0064734c = temp_v35;
            DAT_00647350 = temp_v36;
            DAT_00647354 = temp_v37;
            temp_v9 = *pfVar8;
            temp_v15 = pfVar8[1];
            temp_v19 = pfVar8[2];
            DAT_006472dc = temp_v15 * temp_v4 + temp_v19 * temp_v31 + temp_v35 + temp_v9 * temp_v23;
            DAT_006472e8 = temp_v15 * temp_v22 + temp_v19 * temp_v32 + temp_v38 + temp_v9 * temp_v30;
            temp_v21 = temp_v15 * temp_v20 + temp_v19 * temp_v26 + temp_v37 + temp_v9 * temp_v28;
            temp_v9 = temp_v15 * temp_v12 + temp_v19 * temp_v25 + temp_v36 + temp_v9 * temp_v24;
            DAT_006472e0 = temp_v9;
            DAT_006472e4 = temp_v21;
            DAT_0064731c = temp_v23;
            DAT_00647320 = temp_v24;
            DAT_00647324 = temp_v28;
            DAT_00647328 = temp_v30;
            DAT_0064732c = temp_v4;
            DAT_00647330 = temp_v12;
            DAT_00647334 = temp_v20;
            DAT_00647338 = temp_v22;
            DAT_0064733c = temp_v31;
            DAT_00647340 = temp_v25;
            DAT_00647344 = temp_v26;
            DAT_00647348 = temp_v32;
            *temp_v49 = DAT_006472dc;
            temp_v49[1] = temp_v9;
            temp_v49[2] = temp_v21;
            temp_v49 = (float *)((int)temp_v49 + iStack_dc);
            temp_v9 = pfVar8[5];
            *temp_v60 = SUB41(temp_v9,0);
            temp_v60[1] = (char)((unsigned int)temp_v9 >> 8);
            temp_v60[2] = (char)((unsigned int)temp_v9 >> 0x10);
            temp_v60[3] = (char)((unsigned int)temp_v9 >> 0x18);
            temp_v60 = temp_v60 + iStack_6c;
            temp_v9 = pfVar8[7];
            if ((int)temp_v9 >= 0x40490fdc) {
              for (; (int)temp_v9 >= 0x40490fdc; temp_v9 = temp_v9 - 6.2831855f) {
              }
            }
            else {
              for (; 0xc0490fdb < (unsigned int)temp_v9; temp_v9 = temp_v9 + 6.2831855f) {
              }
            }
            pfVar8[7] = temp_v9;
            *temp_v48 = temp_v9;
            temp_v48 = (float *)((int)temp_v48 + iStack_e4);
            temp_v15 = temp_v14 * pfVar8[6];
            temp_v9 = temp_v18 * pfVar8[6];
            *temp_v47 = temp_v15;
            temp_v47[1] = temp_v9;
            if ((*(unsigned int *)((int)pvVar11 + 0xc) & 2) != 0) {
              *temp_v47 = temp_v15 * pfVar8[8];
              temp_v47[1] = temp_v9 * pfVar8[9];
            }
            temp_v7 = temp_v7 + 1;
            temp_v47 = (float *)((int)temp_v47 + iStack_ec);
          }
          temp_v5 = temp_v5 + 1;
          pfVar8 = pfVar8 + 10;
        } while (temp_v5 < temp_v6);
      }
      else {
        temp_v5 = 0;
        if (temp_v6 < 1) {
          return;
        }
        do {
          if (-1 < (int)pfVar8[4]) {
            *temp_v49 = *pfVar8;
            temp_v49[1] = pfVar8[1];
            temp_v49[2] = pfVar8[2];
            temp_v49 = (float *)((int)temp_v49 + iStack_dc);
            temp_v23 = pfVar8[5];
            *temp_v60 = SUB41(temp_v23,0);
            temp_v60[1] = (char)((unsigned int)temp_v23 >> 8);
            temp_v60[2] = (char)((unsigned int)temp_v23 >> 0x10);
            temp_v60[3] = (char)((unsigned int)temp_v23 >> 0x18);
            temp_v60 = temp_v60 + iStack_6c;
            temp_v23 = pfVar8[7];
            if ((int)temp_v23 >= 0x40490fdc) {
              for (; (int)temp_v23 >= 0x40490fdc; temp_v23 = temp_v23 - 6.2831855f) {
              }
            }
            else {
              for (; 0xc0490fdb < (unsigned int)temp_v23; temp_v23 = temp_v23 + 6.2831855f) {
              }
            }
            pfVar8[7] = temp_v23;
            *temp_v48 = temp_v23;
            temp_v48 = (float *)((int)temp_v48 + iStack_e4);
            temp_v24 = temp_v14 * pfVar8[6];
            temp_v23 = temp_v18 * pfVar8[6];
            *temp_v47 = temp_v24;
            temp_v47[1] = temp_v23;
            if ((*(unsigned int *)((int)pvVar11 + 0xc) & 2) != 0) {
              *temp_v47 = temp_v24 * pfVar8[8];
              temp_v47[1] = temp_v23 * pfVar8[9];
            }
            temp_v7 = temp_v7 + 1;
            temp_v47 = (float *)((int)temp_v47 + iStack_ec);
          }
          temp_v5 = temp_v5 + 1;
          pfVar8 = pfVar8 + 10;
        } while (temp_v5 < temp_v6);
      }
      if (temp_v7 != 0) {
        temp_v0 = param_1->field_0x4;
        temp_v6 = FUN_002fe3bc(pvVar11);
        if (temp_v6 != 0) {
          *(unsigned int *)(temp_v8 + 0xa8) = *(unsigned int *)(temp_v8 + 0xa8) | 2;
          FUN_002e59f8(temp_v6,temp_v8 + 0xac,8);
        }
        *(int *)(temp_v8 + 0x60) = temp_v7;
        *(unsigned int *)(temp_v8 + 100) =
             (((temp_v0 >> 0x10) & 0xff) << 0x10) | (temp_v0 & 0xff) | (((temp_v0 >> 8) & 0xff) << 8) |
             (temp_v0 & 0xff000000);
        FUN_002ff8e8(*(unsigned int *)(temp_v1 + 0x54) & 0xffff);
        FUN_002b3c9c(*(unsigned int *)(param_1 + 1),*(unsigned int *)(temp_v1 + 0x54) & 0xffff);
      }
      break;
    case 2:
      temp_v8 = 0;
      temp_v34 = *(int *)(*(int *)(param_1 + 1) + 0xc);
      temp_v2 = *(unsigned int *)&param_1->field_0x44;
      temp_v7 = *(int *)((int)pvVar11 + 0x20);
      FUN_002b3538(temp_v34,1,&temp_v49);
      FUN_002b3538(temp_v34,2,&temp_v60);
      FUN_002b3538(temp_v34,4,&temp_v47);
      FUN_002b3538(temp_v34,0x20,&temp_v48);
      FUN_002b3538(temp_v34,0x80,&temp_v33);
      temp_v1 = temp_v34;
      temp_v3 = FUN_00290df4(temp_v2,0);
      *(unsigned int *)(temp_v1 + 0xb4) = temp_v3;
      FUN_00212500();
      temp_v14 = (float)temp_v29;
      if ((*(unsigned int *)((int)pvVar11 + 0xc) & 1) != 0) {
        FUN_0039ede0(pvVar11,&temp_v59);
        FUN_003b24f0(pvVar11,&temp_v35);
        DAT_006472dc = temp_v59;
        DAT_006472e0 = fStack_84;
        DAT_006472e4 = fStack_80;
        DAT_006472e8 = fStack_7c;
        FUN_001bc460();
        DAT_0064734c = temp_v35;
        temp_v1 = 0;
        DAT_00647350 = temp_v36;
        DAT_00647354 = temp_v37;
        DAT_00647358 = temp_v38;
        temp_v39 = DAT_00647338;
        temp_v40 = DAT_00647340;
        temp_v42 = DAT_00647348;
        temp_v43 = temp_v35;
        temp_v44 = temp_v36;
        temp_v45 = temp_v37;
        if (temp_v6 < 1) {
          return;
        }
        temp_v32 = 6.2831855f;
        temp_v25 = 0.003921569f;
        temp_v26 = 255.0f;
        temp_v18 = temp_v38;
        temp_v23 = DAT_00647330;
        temp_v24 = DAT_0064732c;
        temp_v28 = DAT_00647334;
        temp_v30 = DAT_00647328;
        temp_v4 = DAT_00647344;
        temp_v12 = DAT_0064731c;
        temp_v20 = DAT_0064733c;
        temp_v22 = DAT_00647320;
        temp_v31 = DAT_00647324;
        do {
          if (-1 < (int)pfVar8[4]) {
            FUN_00290e04(temp_v2);
            FUN_00290c28(temp_v2,temp_v50);
            temp_v46 = (unsigned int *)&DAT_006472dc;
            DAT_00647338 = temp_v39;
            DAT_00647340 = temp_v40;
            DAT_00647348 = temp_v42;
            DAT_0064734c = temp_v43;
            DAT_00647350 = temp_v44;
            DAT_00647354 = temp_v45;
            temp_v9 = *pfVar8;
            temp_v15 = pfVar8[1];
            temp_v19 = pfVar8[2];
            DAT_0064731c = temp_v12;
            DAT_00647320 = temp_v22;
            DAT_00647324 = temp_v31;
            DAT_00647328 = temp_v30;
            DAT_0064732c = temp_v24;
            DAT_00647330 = temp_v23;
            DAT_00647334 = temp_v28;
            DAT_0064733c = temp_v20;
            DAT_00647344 = temp_v4;
            DAT_00647358 = temp_v18;
            *temp_v33 = temp_v54;
            temp_v33[1] = temp_v55;
            temp_v33[2] = temp_v56;
            temp_v33[3] = temp_v57;
            temp_v33 = (unsigned int *)((int)temp_v33 + iStack_14c);
            *temp_v49 = temp_v15 * temp_v24 + temp_v19 * temp_v20 + temp_v43 + temp_v9 * temp_v12;
            temp_v49[1] = temp_v15 * temp_v23 + temp_v19 * temp_v40 + temp_v44 + temp_v9 * temp_v22;
            temp_v49[2] = temp_v15 * temp_v28 + temp_v19 * temp_v4 + temp_v45 + temp_v9 * temp_v31;
            temp_v49 = (float *)((int)temp_v49 + iStack_dc);
            temp_v9 = pfVar8[5];
            DAT_006472f0 = (float)VectorUnsignedToFloat
                                            (((unsigned int)temp_v9 & 0xffffff) >> 0x10,
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f4 = (float)VectorUnsignedToFloat
                                            (((unsigned int)temp_v9 & 0xffff) >> 8,
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472ec = (float)VectorUnsignedToFloat
                                            ((unsigned int)temp_v9 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f8 = (float)VectorUnsignedToFloat
                                            ((unsigned int)temp_v9 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f0 = DAT_006472f0 * temp_v25;
            DAT_006472f4 = DAT_006472f4 * temp_v25;
            DAT_006472ec = DAT_006472ec * temp_v25;
            DAT_006472f8 = DAT_006472f8 * temp_v25;
            temp_v15 = (float)VectorUnsignedToFloat
                                      ((temp_v58 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat
                                      ((temp_v58 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (float)VectorUnsignedToFloat(temp_v58 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = (float)VectorUnsignedToFloat(temp_v58 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472dc = temp_v9 * temp_v25 * DAT_006472ec;
            DAT_006472e0 = temp_v15 * temp_v25 * DAT_006472f0;
            DAT_006472e4 = temp_v19 * temp_v25 * DAT_006472f4;
            DAT_006472e8 = temp_v21 * temp_v25 * DAT_006472f8;
            temp_v3 = VectorFloatToUnsigned(DAT_006472dc * temp_v26,3);
            temp_v16 = VectorFloatToUnsigned(DAT_006472e0 * temp_v26,3);
            temp_v10 = VectorFloatToUnsigned(DAT_006472e4 * temp_v26,3);
            temp_v11 = VectorFloatToUnsigned(DAT_006472e8 * temp_v26,3);
            *temp_v60 = (char)temp_v11;
            temp_v60[1] = (char)temp_v10;
            temp_v60[2] = (char)temp_v16;
            temp_v60[3] = (char)temp_v3;
            temp_v60 = temp_v60 + iStack_6c;
            temp_v9 = pfVar8[7] + temp_v53;
            if ((int)temp_v9 >= 0x40490fdc) {
              for (; (int)temp_v9 >= 0x40490fdc; temp_v9 = temp_v9 - temp_v32) {
              }
            }
            else {
              for (; 0xc0490fdb < (unsigned int)temp_v9; temp_v9 = temp_v9 + temp_v32) {
              }
            }
            temp_v8 = temp_v8 + 1;
            *temp_v48 = temp_v9;
            temp_v48 = (float *)((int)temp_v48 + iStack_e4);
            temp_v9 = pfVar8[6];
            *temp_v47 = temp_v51 * temp_v9 * temp_v14;
            temp_v47[1] = temp_v52 * temp_v9 * temp_v14;
            temp_v47 = (float *)((int)temp_v47 + iStack_ec);
          }
          temp_v1 = temp_v1 + 1;
          pfVar8 = pfVar8 + 10;
        } while (temp_v1 < temp_v6);
      }
      else {
        temp_v1 = 0;
        if (temp_v6 < 1) {
          return;
        }
        temp_v27 = 0x40c90fdb;
        temp_v14 = 0.003921569f;
        temp_v18 = 255.0f;
        do {
          if (-1 < (int)pfVar8[4]) {
            FUN_00290e04(temp_v2);
            FUN_00290c28(temp_v2,temp_v50);
            *temp_v33 = temp_v54;
            temp_v33[1] = temp_v55;
            temp_v33[2] = temp_v56;
            temp_v33[3] = temp_v57;
            temp_v33 = (unsigned int *)((int)temp_v33 + iStack_14c);
            *temp_v49 = *pfVar8;
            temp_v49[1] = pfVar8[1];
            temp_v49[2] = pfVar8[2];
            temp_v49 = (float *)((int)temp_v49 + iStack_dc);
            temp_v23 = pfVar8[5];
            DAT_006472f8 = (float)VectorUnsignedToFloat
                                            ((unsigned int)temp_v23 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472ec = (float)VectorUnsignedToFloat
                                            ((unsigned int)temp_v23 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f0 = (float)VectorUnsignedToFloat
                                            (((unsigned int)temp_v23 & 0xffffff) >> 0x10,
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f4 = (float)VectorUnsignedToFloat
                                            (((unsigned int)temp_v23 & 0xffff) >> 8,
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472f8 = DAT_006472f8 * temp_v14;
            DAT_006472ec = DAT_006472ec * temp_v14;
            DAT_006472f0 = DAT_006472f0 * temp_v14;
            DAT_006472f4 = DAT_006472f4 * temp_v14;
            temp_v30 = (float)VectorUnsignedToFloat(temp_v58 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = (float)VectorUnsignedToFloat
                                      ((temp_v58 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v24 = (float)VectorUnsignedToFloat
                                      ((temp_v58 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v28 = (float)VectorUnsignedToFloat(temp_v58 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472dc = temp_v30 * temp_v14 * DAT_006472ec;
            DAT_006472e0 = temp_v23 * temp_v14 * DAT_006472f0;
            DAT_006472e4 = temp_v24 * temp_v14 * DAT_006472f4;
            DAT_006472e8 = temp_v28 * temp_v14 * DAT_006472f8;
            temp_v11 = VectorFloatToUnsigned(DAT_006472dc * temp_v18,3);
            temp_v3 = VectorFloatToUnsigned(DAT_006472e0 * temp_v18,3);
            temp_v16 = VectorFloatToUnsigned(DAT_006472e4 * temp_v18,3);
            temp_v10 = VectorFloatToUnsigned(DAT_006472e8 * temp_v18,3);
            *temp_v60 = (char)temp_v10;
            temp_v60[1] = (char)temp_v16;
            temp_v60[2] = (char)temp_v3;
            temp_v60[3] = (char)temp_v11;
            temp_v60 = temp_v60 + iStack_6c;
            temp_v23 = pfVar8[7] + temp_v53;
            if ((int)temp_v23 >= 0x40490fdc) {
              for (; (int)temp_v23 >= 0x40490fdc; temp_v23 = temp_v23 - (float)temp_v27) {
              }
            }
            else {
              for (; 0xc0490fdb < (unsigned int)temp_v23; temp_v23 = temp_v23 + (float)temp_v27) {
              }
            }
            temp_v8 = temp_v8 + 1;
            *temp_v48 = temp_v23;
            temp_v48 = (float *)((int)temp_v48 + iStack_e4);
            temp_v23 = pfVar8[6] * (float)temp_v29;
            *temp_v47 = temp_v51 * temp_v23;
            temp_v47[1] = temp_v52 * temp_v23;
            temp_v47 = (float *)((int)temp_v47 + iStack_ec);
          }
          temp_v1 = temp_v1 + 1;
          pfVar8 = pfVar8 + 10;
        } while (temp_v1 < temp_v6);
      }
      if (temp_v8 != 0) {
        temp_v0 = param_1->field_0x4;
        *(unsigned int *)(temp_v34 + 100) =
             (temp_v0 & 0xff) | (((temp_v0 >> 8) & 0xff) << 8) | (((temp_v0 >> 0x10) & 0xff) << 0x10) |
             (temp_v0 & 0xff000000);
        *(int *)(temp_v34 + 0x60) = temp_v8;
        FUN_002ff8e8(*(unsigned int *)(temp_v7 + 0x54) & 0xffff);
        FUN_002b3c9c(*(unsigned int *)(param_1 + 1),*(unsigned int *)(temp_v7 + 0x54) & 0xffff);
        return;
      }
      break;
    case 5:
      puVar2 = *(unsigned int **)&param_1->field_0x34;
      temp_v1 = 0;
      if (0 < temp_v6) {
        temp_v28 = 0.003921569f;
        temp_v30 = 255.0f;
        do {
          if (-1 < (int)pfVar8[4]) {
            temp_v4 = pfVar8[5];
            temp_v22 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v4 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
            temp_v20 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v4 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v4 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472dc = temp_v12 * temp_v28 * temp_v24;
            DAT_006472e0 = temp_v22 * temp_v28 * temp_v18;
            DAT_006472e4 = temp_v20 * temp_v28 * temp_v23;
            DAT_006472e8 = temp_v4 * temp_v28 * temp_v14;
            temp_v7 = VectorFloatToUnsigned(DAT_006472dc * temp_v30,3);
            temp_v17 = VectorFloatToUnsigned(DAT_006472e0 * temp_v30,3);
            temp_v0 = VectorFloatToUnsigned(DAT_006472e4 * temp_v30,3);
            temp_v13 = VectorFloatToUnsigned(DAT_006472e8 * temp_v30,3);
            DAT_006472ec = temp_v24;
            DAT_006472f0 = temp_v18;
            DAT_006472f4 = temp_v23;
            DAT_006472f8 = temp_v14;
            FUN_00290e6c(*puVar2,(temp_v13 & 0xff) |
                                 (temp_v7 << 0x18) | ((temp_v17 & 0xff) << 0x10) |
                                 ((temp_v0 & 0xff) << 8));
            requestDispatch(*puVar2);
          }
          temp_v1 = temp_v1 + 1;
          pfVar8 = pfVar8 + 10;
          puVar2 = puVar2 + 1;
        } while (temp_v1 < temp_v6);
        return;
      }
      break;
    case 6:
      puVar2 = *(unsigned int **)&param_1->field_0x3c;
      temp_v1 = 0;
      if (0 < temp_v6) {
        temp_v28 = 0.003921569f;
        temp_v30 = 255.0f;
        do {
          if (-1 < (int)pfVar8[4]) {
            temp_v4 = pfVar8[5];
            temp_v22 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v4 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
            temp_v12 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v4 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v4 = (float)VectorUnsignedToFloat((unsigned int)temp_v4 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_006472dc = temp_v20 * temp_v28 * temp_v24;
            DAT_006472e0 = temp_v22 * temp_v28 * temp_v18;
            DAT_006472e4 = temp_v12 * temp_v28 * temp_v23;
            DAT_006472e8 = temp_v4 * temp_v28 * temp_v14;
            temp_v7 = VectorFloatToUnsigned(DAT_006472dc * temp_v30,3);
            temp_v17 = VectorFloatToUnsigned(DAT_006472e0 * temp_v30,3);
            temp_v0 = VectorFloatToUnsigned(DAT_006472e4 * temp_v30,3);
            temp_v13 = VectorFloatToUnsigned(DAT_006472e8 * temp_v30,3);
            DAT_006472ec = temp_v24;
            DAT_006472f0 = temp_v18;
            DAT_006472f4 = temp_v23;
            DAT_006472f8 = temp_v14;
            FUN_001b4c1c(*puVar2,(temp_v13 & 0xff) |
                                 (temp_v7 << 0x18) | ((temp_v17 & 0xff) << 0x10) |
                                 ((temp_v0 & 0xff) << 8));
            FUN_00182540(*puVar2);
          }
          temp_v1 = temp_v1 + 1;
          pfVar8 = pfVar8 + 10;
          puVar2 = puVar2 + 1;
        } while (temp_v1 < temp_v6);
        return;
      }
      break;
    case 7:
      FUN_002ff8e8(*(unsigned int *)(*(int *)((int)pvVar11 + 0x20) + 0x54) & 0xffff);
      FUN_00323f50(param_1);
      return;
    }
  }
  return;
}

} /* extern "C" */
