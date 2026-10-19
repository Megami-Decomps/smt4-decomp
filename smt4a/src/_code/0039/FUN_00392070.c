/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00392070` (_code @ 0x392070, 0xe54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00392070_arg0 fn_00392070_arg0;
struct fn_00392070_arg0 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    void *field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
};

/* stack frame of param_1: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp170; /* 0x170: local_170 */
} param_1_stack;

extern float DAT_005c1120; /* 0x5c1120 */
extern float DAT_005c1124; /* 0x5c1124 */
extern float DAT_005c1128; /* 0x5c1128 */
extern float DAT_005c112c; /* 0x5c112c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */
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

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001a1ee0. */
extern int FUN_001acf08(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_00221ee0. */
/* Supplied declaration required: FUN_0037ee54. */
/* Supplied declaration required: FUN_0043bc74. */
/* Supplied declaration required: FUN_0050d7ac. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: FUN_005145f4. */
/* Supplied declaration required: FUN_005147a0. */
/* Supplied declaration required: FUN_005147dc. */
/* Supplied declaration required: FUN_00514904. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00392070(fn_00392070_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar3;
  int temp_v3;
  unsigned int *puVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  int *temp_v22;
  float temp_v23 [15];
  float temp_v24;
  void *temp_v25;
  float temp_v26;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float temp_v27;
  float temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  float temp_v32;
  int temp_v33;
  float afStack_d0 [5];
  int temp_v34;
  float temp_v35;
  float temp_v36;
  float fStack_ac;
  float fStack_a8;
  float temp_v37;
  float temp_v38;
  float fStack_94;
  float fStack_90;
  unsigned int temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  unsigned long long temp_v44;
  
  temp_v25 = param_1->field_0x34;
  puVar5 = param_1->field_0x30;
  temp_v22 = (int *)*puVar5;
  if ((param_1->field_0x28 <= *(int *)((int)temp_v25 + 0x34)) ||
     (*(int *)((int)temp_v25 + 0x34) == 0)) {
    temp_v14 = 0.0f;
    temp_v33 = *(int *)((int)temp_v25 + 0x38);
    temp_v29 = *(int *)((int)temp_v25 + 0x40);
    temp_v28 = *(float *)((int)temp_v25 + 0x50);
    temp_v27 = *(float *)((int)temp_v25 + 0xa8);
    temp_v32 = (float)VectorUnsignedToFloat
                                (*(unsigned int *)((int)temp_v25 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3
                                );
    temp_v7 = (float)VectorUnsignedToFloat
                              (*(unsigned int *)((int)temp_v25 + 0x4c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v39 = (unsigned int)*(unsigned char *)((int)temp_v25 + 0x88);
    temp_v20 = *(float *)((int)temp_v25 + 0x84) / temp_v32;
    temp_v44 = (unsigned long long)(unsigned int)temp_v20;
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 == 0.0f) << 0x1e) |
            ((unsigned int)(0.0f <= temp_v20) << 0x1d);
    temp_v0 = (unsigned char)(temp_v4 >> 0x18);
    temp_v32 = (temp_v7 * 3.1415927f) / temp_v32;
    if ((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6)) {
      FUN_00221ee0(&temp_v38);
      temp_v35 = 0.34906584f;
      temp_v31 = 0;
      temp_v23[1] = *(float *)((int)temp_v25 + 0x80);
      temp_v23[2] = temp_v23[1] + *(float *)((int)temp_v25 + 0x7c);
      temp_v40 = (float)temp_v44 * 0.1f * -0.08726646f;
      temp_v23[3] = temp_v23[2] + *(float *)((int)temp_v25 + 0x7c);
      temp_v23[4] = temp_v23[3] + temp_v23[1];
      temp_v7 = (float)*(unsigned long long *)(puVar5 + 1);
      puVar5[1] = temp_v7 + (float)((unsigned long long)*(unsigned long long *)(puVar5 + 1) >> 0x20);
      temp_v23[0] = temp_v14;
      temp_v24 = temp_v14;
      temp_v41 = temp_v7;
      if (0 < temp_v33) {
        do {
          temp_v20 = (float)temp_v44;
          if (temp_v22[5] != -1) {
            if ((temp_v22[6] & 0xff000000U) >= 0x40000001) {
              temp_v22[6] = temp_v22[6] + 0xc0000000;
              pfVar7 = *(float **)(*(int *)(*temp_v22 + 8) + 0x30);
              temp_v30 = (int)*(short *)(*temp_v22 + 2) / 5;
              temp_v1 = 0;
              FUN_00514500();
              if ((temp_v1 & 1) != 0) {
                temp_v7 = -temp_v28;
                temp_v28 = temp_v7;
              }
              FUN_00514540(0);
              temp_v12 = temp_v7 * 3.1415927f;
              FUN_00514540(0);
              temp_v15 = 40.743664f;
              temp_v42 = (temp_v7 * 0.95f + 0.050000012f) * temp_v28;
              temp_v5 = temp_v12 * 40.743664f;
              FUN_001a1ee0();
              temp_v5 = temp_v5 * temp_v42;
              temp_v12 = temp_v12 + temp_v32;
              temp_v6 = temp_v12 * temp_v15;
              FUN_001a1ee0();
              temp_v6 = temp_v6 * temp_v42;
              temp_v5 = temp_v6 - temp_v5;
              temp_v5 = temp_v5 / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v20 * temp_v20);
              FUN_0050d7ac();
              temp_v13 = CONCAT44(temp_v12,*(float *)((int)temp_v25 + 0x7c));
              temp_v18 = *(float *)((int)temp_v25 + 0x80) + *(float *)((int)temp_v25 + 0x7c);
              temp_v7 = temp_v5;
              FUN_00514540(0);
              temp_v12 = (float)VectorSignedToFloat(temp_v22[5] + 1,(unsigned char)(temp_v4 >> 0x16) & 3);
              temp_v43 = (temp_v7 * 0.7f + 0.3f) * temp_v40;
              temp_v12 = (float)temp_v22[10] +
                       ((float)temp_v22[9] + temp_v27 * temp_v12 * 0.5f) * temp_v12;
              FUN_005147dc();
              FUN_00514904();
              FUN_005145f4();
              temp_v12 = temp_v12 * temp_v15;
              temp_v7 = temp_v12;
              FUN_001b63b0();
              temp_v19 = 0.0f;
              temp_v12 = temp_v12 * temp_v41;
              FUN_001a1ee0();
              DAT_006472e4 = temp_v7 * temp_v41;
              DAT_006472dc = temp_v12;
              DAT_006472e0 = temp_v19;
              DAT_006472e8 = temp_v19;
              FUN_0037ee54();
              temp_v9 = DAT_006472e8;
              temp_v15 = DAT_006472e4;
              temp_v12 = DAT_006472e0;
              temp_v7 = DAT_006472dc;
              temp_v24 = DAT_006472e8;
              temp_v44 = CONCAT44(DAT_006472dc,temp_v20);
              temp_v21 = CONCAT44(DAT_006472e4,DAT_006472e0);
              temp_v20 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                            DAT_006472e4 * DAT_006472e4);
              if (temp_v19 < temp_v20) {
                DAT_006472dc = DAT_006472dc / temp_v20;
                DAT_006472e0 = DAT_006472e0 / temp_v20;
                DAT_006472e4 = DAT_006472e4 / temp_v20;
              }
              temp_v11 = DAT_006472e4;
              temp_v10 = DAT_006472e0;
              temp_v20 = DAT_006472dc;
              temp_v36 = DAT_006472dc;
              fStack_ac = DAT_006472e0;
              fStack_a8 = DAT_006472e4;
              temp_v37 = DAT_006472e8;
              DAT_006472dc = temp_v7 - (float)temp_v22[1];
              DAT_006472e4 = temp_v15 - (float)temp_v22[3];
              DAT_006472e0 = temp_v12 - (float)temp_v22[2];
              temp_v8 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                            DAT_006472e4 * DAT_006472e4);
              if (temp_v19 < temp_v8) {
                DAT_006472dc = DAT_006472dc / temp_v8;
                DAT_006472e0 = DAT_006472e0 / temp_v8;
                DAT_006472e4 = DAT_006472e4 / temp_v8;
              }
              temp_v8 = DAT_006472dc;
              temp_v16 = CONCAT44(DAT_006472e4,DAT_006472e0);
              fStack_118 = DAT_006472dc * temp_v10 - DAT_006472e0 * temp_v20;
              temp_v26 = DAT_006472e0 * temp_v11 - DAT_006472e4 * temp_v10;
              fStack_11c = DAT_006472e4 * temp_v20 - DAT_006472dc * temp_v11;
              temp_v10 = DAT_006472e0 * fStack_90 - DAT_006472e4 * fStack_94;
              temp_v11 = DAT_006472e4 * temp_v38 - DAT_006472dc * fStack_90;
              DAT_006472e4 = DAT_006472dc * fStack_94 - DAT_006472e0 * temp_v38;
              temp_v20 = romwright_sqrt_4(temp_v10 * temp_v10 + temp_v11 * temp_v11 + DAT_006472e4 * DAT_006472e4);
              temp_v1 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v19) << 0x1f) |
                      ((unsigned int)(temp_v20 == temp_v19) << 0x1e);
              temp_v4 = temp_v1 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v19 != temp_v19)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v1 >> 0x18);
              DAT_006472dc = temp_v10;
              DAT_006472e0 = temp_v11;
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v4 >> 0x1c) & 1)) {
                DAT_006472dc = temp_v10 / temp_v20;
                DAT_006472e0 = temp_v11 / temp_v20;
                DAT_006472e4 = DAT_006472e4 / temp_v20;
              }
              DAT_006472fc = DAT_006472dc;
              DAT_00647300 = DAT_006472e0;
              DAT_00647304 = DAT_006472e4;
              DAT_006472ec = DAT_006472dc;
              DAT_006472f0 = DAT_006472e0;
              DAT_006472f4 = DAT_006472e4;
              DAT_006472dc = DAT_006472dc * temp_v18;
              DAT_005c1124 = DAT_006472e0 * temp_v18;
              DAT_005c1128 = DAT_006472e4 * temp_v18;
              DAT_006472e0 = DAT_005c1124;
              DAT_006472e4 = DAT_005c1128;
              DAT_006472f8 = temp_v14;
              DAT_00647308 = temp_v14;
              *pfVar7 = DAT_006472dc;
              pfVar7[1] = DAT_005c1124;
              pfVar7[2] = DAT_005c1128;
              DAT_005c1124 = -DAT_006472e0;
              DAT_005c1128 = -DAT_006472e4;
              pfVar7[0xc] = -DAT_006472dc;
              pfVar7[0xd] = DAT_005c1124;
              pfVar7[0xe] = DAT_005c1128;
              temp_v20 = (float)temp_v13;
              DAT_006472ec = DAT_006472ec * temp_v20;
              DAT_005c1124 = DAT_006472f0 * temp_v20;
              DAT_005c1128 = DAT_006472f4 * temp_v20;
              DAT_006472f8 = DAT_006472f8 * temp_v20;
              DAT_006472f0 = DAT_005c1124;
              DAT_006472f4 = DAT_005c1128;
              pfVar7[3] = DAT_006472ec;
              pfVar7[4] = DAT_005c1124;
              pfVar7[5] = DAT_005c1128;
              DAT_005c1124 = -DAT_006472f0;
              DAT_005c1128 = -DAT_006472f4;
              temp_v3 = 0;
              DAT_005c112c = DAT_006472f8;
              pfVar7[9] = -DAT_006472ec;
              pfVar7[10] = DAT_005c1124;
              pfVar7[0xb] = DAT_005c1128;
              pfVar7[6] = temp_v19;
              pfVar7[7] = temp_v19;
              pfVar7[8] = temp_v19;
              DAT_006472ec = temp_v7;
              DAT_006472f0 = temp_v12 + (float)temp_v22[0xb];
              DAT_006472f4 = temp_v15;
              DAT_006472f8 = DAT_006472e8;
              do {
                pfVar3 = pfVar7 + temp_v3 * 3;
                pfVar6 = afStack_d0 + temp_v3;
                temp_v3 = temp_v3 + 1;
                DAT_005c1120 = *pfVar3 + DAT_006472ec;
                DAT_005c1124 = pfVar3[1] + DAT_006472f0;
                DAT_005c1128 = pfVar3[2] + DAT_006472f4;
                DAT_005c112c = DAT_005c112c + DAT_006472f8;
                DAT_006472dc = DAT_005c1120;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472e8 = DAT_005c112c;
                *pfVar3 = DAT_005c1120;
                pfVar3[1] = DAT_005c1124;
                pfVar3[2] = DAT_005c1128;
                *pfVar6 = temp_v19;
              } while (temp_v3 < 5);
              temp_v22[1] = (int)temp_v7;
              temp_v22[2] = (int)temp_v12;
              temp_v22[3] = (int)temp_v15;
              temp_v34 = 1;
              fStack_114 = temp_v14;
              if (temp_v30 >= 2) {
                do {
                  temp_v20 = (float)((unsigned long long)temp_v13 >> 0x20);
                  pfVar7 = pfVar7 + 0xf;
                  FUN_00514540(0);
                  temp_v1 = 0;
                  temp_v7 = (temp_v7 * 0.75f + 0.25f) * temp_v35;
                  FUN_00514500();
                  if ((temp_v1 & 1) != 0) {
                    temp_v35 = -temp_v35;
                  }
                  temp_v20 = temp_v20 + temp_v32;
                  if ((int)temp_v20 >= 0x40490fdb) {
                    temp_v12 = 3.1415927f;
                    temp_v20 = temp_v20 - 3.1415927f;
                    temp_v14 = temp_v28;
                    temp_v28 = -temp_v28;
                    FUN_00514540(0);
                    temp_v14 = -(temp_v14 * (temp_v12 * 0.95f + 0.050000012f));
                    temp_v42 = temp_v14;
                    FUN_00514540(0);
                    temp_v43 = (temp_v14 * 0.7f + 0.3f) * temp_v40;
                  }
                  temp_v14 = temp_v20 * 40.743664f;
                  FUN_001a1ee0();
                  temp_v14 = temp_v14 * temp_v42;
                  temp_v6 = temp_v14 - temp_v6;
                  temp_v18 = temp_v6 / romwright_sqrt_4(temp_v6 * temp_v6 + (float)temp_v44 * (float)temp_v44);
                  temp_v15 = temp_v9;
                  FUN_0050d7ac();
                  temp_v12 = temp_v5;
                  temp_v6 = temp_v14;
                  temp_v5 = temp_v18 + temp_v7;
                  FUN_005147a0(&temp_v36);
                  temp_v7 = (float)temp_v16;
                  temp_v14 = (float)((unsigned long long)temp_v16 >> 0x20);
                  temp_v10 = temp_v8 * DAT_0064731c + temp_v7 * DAT_0064732c + temp_v14 * DAT_0064733c;
                  temp_v18 = temp_v8 * DAT_00647320 + temp_v7 * DAT_00647330 + temp_v14 * DAT_00647340;
                  temp_v19 = temp_v8 * DAT_00647324 + temp_v7 * DAT_00647334 + temp_v14 * DAT_00647344;
                  DAT_006472e8 = temp_v8 * DAT_00647328 + temp_v7 * DAT_00647338 +
                                 temp_v14 * DAT_00647348;
                  DAT_006472dc = temp_v10;
                  DAT_006472e0 = temp_v18;
                  DAT_006472e4 = temp_v19;
                  FUN_005147a0(&temp_v26);
                  temp_v11 = (float)temp_v16;
                  temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
                  temp_v7 = temp_v8 * DAT_00647320;
                  temp_v14 = temp_v8 * DAT_00647328;
                  temp_v9 = temp_v8 * DAT_00647324;
                  temp_v8 = temp_v8 * DAT_0064731c + temp_v11 * DAT_0064732c + temp_v17 * DAT_0064733c;
                  temp_v14 = temp_v14 + temp_v11 * DAT_00647338 + temp_v17 * DAT_00647348;
                  temp_v16 = CONCAT44(temp_v9 + temp_v11 * DAT_00647334 + temp_v17 * DAT_00647344,
                                    temp_v7 + temp_v11 * DAT_00647330 + temp_v17 * DAT_00647340);
                  DAT_006472ec = (float)(temp_v44 >> 0x20);
                  DAT_006472f0 = (float)temp_v21;
                  DAT_006472f4 = (float)((unsigned long long)temp_v21 >> 0x20);
                  DAT_006472dc = DAT_006472ec * DAT_0064731c + DAT_006472f0 * DAT_0064732c +
                                 DAT_006472f4 * DAT_0064733c;
                  DAT_006472e0 = DAT_006472ec * DAT_00647320 + DAT_006472f0 * DAT_00647330 +
                                 DAT_006472f4 * DAT_00647340;
                  DAT_006472e4 = DAT_006472ec * DAT_00647324 + DAT_006472f0 * DAT_00647334 +
                                 DAT_006472f4 * DAT_00647344;
                  temp_v9 = DAT_006472ec * DAT_00647328 + DAT_006472f0 * DAT_00647338 +
                           DAT_006472f4 * DAT_00647348;
                  temp_v44 = CONCAT44(DAT_006472dc,(int)temp_v44);
                  DAT_006472dc = DAT_006472dc - DAT_006472ec;
                  temp_v21 = CONCAT44(DAT_006472e4,DAT_006472e0);
                  temp_v12 = (temp_v5 - temp_v12) * 0.5f;
                  DAT_006472e0 = DAT_006472e0 - DAT_006472f0;
                  DAT_006472e4 = DAT_006472e4 - DAT_006472f4;
                  temp_v13 = CONCAT44(temp_v20,romwright_sqrt_4(DAT_006472dc * DAT_006472dc +
                                                DAT_006472e0 * DAT_006472e0 +
                                                DAT_006472e4 * DAT_006472e4));
                  temp_v7 = DAT_006472e8;
                  DAT_006472e8 = temp_v9 - temp_v15;
                  DAT_006472f8 = temp_v15;
                  FUN_0043bc74();
                  temp_v3 = 0;
                  DAT_006472fc = temp_v10;
                  DAT_00647300 = temp_v18;
                  DAT_00647304 = temp_v19;
                  DAT_00647308 = DAT_006472e8;
                  do {
                    pfVar6 = afStack_d0 + temp_v3;
                    temp_v20 = *pfVar6;
                    temp_v7 = temp_v23[temp_v3] * temp_v12 * 0.024543693f;
                    pfVar3 = pfVar7 + temp_v3 * 3;
                    temp_v3 = temp_v3 + 1;
                    *pfVar6 = temp_v20 + temp_v7;
                    DAT_006472f8 = temp_v20 + temp_v7 + (float)temp_v13;
                    DAT_006472ec = DAT_006472fc * DAT_006472f8;
                    DAT_006472f0 = DAT_00647300 * DAT_006472f8;
                    DAT_006472f4 = DAT_00647304 * DAT_006472f8;
                    DAT_006472f8 = DAT_00647308 * DAT_006472f8;
                    DAT_005c1120 = pfVar3[-0xf] + DAT_006472ec;
                    DAT_005c1124 = pfVar3[-0xe] + DAT_006472f0;
                    DAT_005c1128 = pfVar3[-0xd] + DAT_006472f4;
                    DAT_005c112c = DAT_005c112c + DAT_006472f8;
                    DAT_006472dc = DAT_005c1120;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    DAT_006472e8 = DAT_005c112c;
                    *pfVar3 = DAT_005c1120;
                    pfVar3[1] = DAT_005c1124;
                    pfVar3[2] = DAT_005c1128;
                    *pfVar6 = temp_v7;
                  } while (temp_v3 < 5);
                  temp_v34 = temp_v34 + 1;
                } while (temp_v34 < temp_v30);
              }
              temp_v3 = FUN_001acf08();
              temp_v22[5] = temp_v22[5] + temp_v3;
            }
            else {
              temp_v22[5] = -1;
              if (0 < temp_v29) {
                FUN_00514500(0);
                aeabi_uidivmod();
                temp_v22[5] = temp_v22[5] - temp_v2;
              }
            }
          }
          else {
            FUN_00514540(0);
            temp_v20 = 0.0f;
            temp_v7 = ((1.0f - *(float *)((int)temp_v25 + 0xa4)) +
                     temp_v7 * *(float *)((int)temp_v25 + 0xa4)) * *(float *)((int)temp_v25 + 0xa0)
            ;
            temp_v22[9] = (int)temp_v7;
            temp_v22[10] = 0;
            if (temp_v39 != 0) {
              FUN_00514540(0);
              temp_v7 = (temp_v7 - 0.5f) * 2.0f * 0.7853982f;
              temp_v22[7] = (int)temp_v7;
              FUN_00514540(0);
              temp_v7 = temp_v7 * *(float *)((int)temp_v25 + 0x9c);
              temp_v22[0xb] = (int)temp_v7;
            }
            else {
              FUN_00514540(0);
              temp_v22[0xb] = (int)temp_v20;
              temp_v7 = (temp_v7 - 0.5f) * 2.0f * 3.1415927f;
              temp_v22[7] = (int)temp_v7;
            }
            FUN_00514540(0);
            temp_v22[8] = (int)((temp_v7 - 0.5f) * 2.0f * 3.1415927f);
            FUN_005147dc();
            FUN_00514904();
            FUN_005145f4();
            temp_v12 = (float)temp_v22[10] * 40.743664f;
            temp_v7 = temp_v12;
            FUN_001b63b0();
            temp_v12 = temp_v12 * temp_v41;
            FUN_001a1ee0();
            DAT_006472e4 = temp_v7 * temp_v41;
            DAT_006472e8 = temp_v24;
            DAT_006472dc = temp_v12;
            DAT_006472e0 = temp_v20;
            FUN_0037ee54();
            temp_v7 = DAT_006472e8;
            temp_v12 = DAT_006472e4;
            temp_v20 = DAT_006472e0;
            temp_v24 = DAT_006472e8;
            temp_v22[1] = (int)DAT_006472dc;
            temp_v22[2] = (int)temp_v20;
            temp_v22[3] = (int)temp_v12;
            temp_v22[6] = -1;
            temp_v3 = FUN_001acf08();
            temp_v22[5] = temp_v22[5] + temp_v3;
          }
          temp_v31 = temp_v31 + 1;
          temp_v22 = temp_v22 + 0xc;
        } while (temp_v31 < temp_v33);
      }
    }
  }
  return;
}
