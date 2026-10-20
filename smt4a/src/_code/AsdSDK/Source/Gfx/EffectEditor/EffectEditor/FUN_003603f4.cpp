/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003603f4` (_code @ 0x3603f4, 0xf30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001a1ee0(void);
int FUN_001acf08(void);
int FUN_001b63b0(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, int, char [4], int *);
int FUN_00514500(...);
int FUN_00514540(...);
int FUN_005147a0(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 17 slot(s), 65 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned char sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_1_stack;

extern float DAT_005c1110; /* 0x5c1110 */
extern float DAT_005c1114; /* 0x5c1114 */
extern float DAT_005c1118; /* 0x5c1118 */
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

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001acf08. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_00375c74. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: FUN_005147a0. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003603f4(int param_1)

{
/* irregular: irregular input(s): in_d10, in_d14, in_d15, in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float *pfVar6;
  float *pfVar7;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  long long in_d10;
  float temp_v26;
  long long temp_v27;
  unsigned long long in_d14;
  unsigned int temp_v28;
  unsigned long long temp_v29;
  unsigned long long in_d15;
  float temp_v30;
  float fStack_c4;
  float fStack_c0;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  int temp_v39;
  char temp_v40 [4];
  unsigned int temp_v41;
  float temp_v42;
  int temp_v43;
  
  temp_v28 = (unsigned int)((unsigned long long)in_d14 >> 0x20);
  temp_v43 = param_1;
  temp_v1 = FUN_001acf08();
  pfVar7 = *(float **)(temp_v43 + 0x18);
  temp_v23 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  pfVar6 = *(float **)(temp_v43 + 0x1c);
  temp_v6 = *(int *)(temp_v43 + 0x20);
  temp_v8 = *(unsigned int *)(temp_v43 + 4);
  temp_v9 = *(int *)(temp_v6 + 0xb8);
  if (temp_v9 != 0) {
    temp_v41 = (unsigned int)*(unsigned char *)(temp_v6 + 0x9c);
    DAT_006472dc = *(float *)(temp_v6 + 0x10);
    DAT_006472e0 = *(float *)(temp_v6 + 0x14);
    DAT_006472e4 = *(float *)(temp_v6 + 0x18);
    DAT_006472e8 = *(float *)(temp_v6 + 0x1c);
    temp_v10 = *(int *)(temp_v6 + 0x20);
    temp_v29 = romwright_piece_4_4(temp_v28,*(unsigned int *)(temp_v6 + 0xec));
    temp_v27 = (unsigned long long)*(unsigned int *)(temp_v6 + 0xf8) << 0x20;
    temp_v24 = *(float *)(temp_v6 + 0xfc);
    temp_v25 = *(unsigned long long *)(temp_v6 + 0x100);
    FUN_001bc460();
    FUN_00375c74(temp_v43,temp_v6,temp_v40,&temp_v39);
    if (temp_v8 != 0) {
      in_d15 = romwright_piece_4_4(0x3f800000,(int)in_d15);
    }
    temp_v7 = 0;
    if (temp_v7 < temp_v8) {
      do {
        if (temp_v9 <= (int)pfVar7[4]) {
          if (temp_v10 == 0) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar7[4] = temp_v2;
          FUN_002fe2e8(temp_v43,pfVar7);
        }
        temp_v12 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v2 = pfVar7[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v34 = *pfVar7;
            temp_v35 = pfVar7[1];
            temp_v36 = pfVar7[2];
            temp_v37 = pfVar7[3];
            temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v27 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
            temp_v23 = pfVar6[0xd] * temp_v11 + temp_v12 * temp_v11 * temp_v11 * 0.5f;
            temp_v4 = in_fpscr & 0xfffffff;
            if (temp_v23 < 0.0f) {
              temp_v23 = 0.0f;
            }
            temp_v12 = pfVar6[0xc] * temp_v11 + (float)temp_v29 * temp_v11 * temp_v11 * 0.5f;
            if (temp_v12 < 0.0f) {
              temp_v12 = 0.0f;
            }
            temp_v15 = pfVar6[0xf];
            temp_v16 = (float)((unsigned long long)in_d15 >> 0x20);
            temp_v11 = temp_v23 * 0.001f;
            if ((int)(temp_v23 * 0.001f) >= 0x3f800001) {
              temp_v11 = temp_v16;
            }
            if (temp_v15 <= temp_v11) {
              pfVar6[0xf] = temp_v11;
              temp_v15 = temp_v11;
            }
            temp_v16 = temp_v16 - temp_v15;
            DAT_006472e8 = (float)in_d10;
            temp_v26 = *(float *)(temp_v6 + 0x10c) + pfVar6[10];
            in_d10 = CONCAT44(temp_v26,DAT_006472e8);
            temp_v17 = temp_v16 * temp_v16 * temp_v16;
            temp_v19 = temp_v15 * temp_v15 * temp_v15;
            temp_v21 = temp_v16 * temp_v16 * temp_v15 * 3.0f;
            temp_v11 = temp_v15 * temp_v15 * temp_v16 * 3.0f;
            in_fpscr = temp_v4 | ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
            temp_v23 = *(float *)(temp_v6 + 0xfc) * temp_v17 + *pfVar6 * temp_v21 + pfVar6[3] * temp_v11 +
                     (*(float *)(temp_v6 + 0x108) + pfVar6[9]) * temp_v19;
            temp_v12 = *(float *)(temp_v6 + 0x100) * temp_v17 + pfVar6[1] * temp_v21 + pfVar6[4] * temp_v11 +
                     temp_v26 * temp_v19;
            temp_v11 = *(float *)(temp_v6 + 0x104) * temp_v17 + pfVar6[2] * temp_v21 + pfVar6[5] * temp_v11 +
                     (*(float *)(temp_v6 + 0x110) + pfVar6[0xb]) * temp_v19;
            DAT_006472dc = temp_v23;
            DAT_006472e0 = temp_v12;
            DAT_006472e4 = temp_v11;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
              DAT_006472ec = *(float *)(temp_v6 + 0xfc);
              DAT_006472f0 = *(float *)(temp_v6 + 0x100);
              DAT_006472f4 = *(float *)(temp_v6 + 0x104);
              DAT_006472f8 = (float)in_d15;
              DAT_006472dc = temp_v24 - DAT_006472ec;
              DAT_006472e0 = (float)temp_v25 - DAT_006472f0;
              DAT_006472e4 = (float)((unsigned long long)temp_v25 >> 0x20) - DAT_006472f4;
              temp_v31 = (float)((unsigned long long)temp_v29 >> 0x20) - DAT_006472f8;
              temp_v16 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                            DAT_006472e4 * DAT_006472e4);
              temp_v4 = temp_v4 | ((unsigned int)(temp_v16 < 0.0f) << 0x1f) | ((unsigned int)(temp_v16 == 0.0f) << 0x1e);
              in_fpscr = temp_v4 | ((unsigned int)(temp_v16 != temp_v16) << 0x1c);
              temp_v0 = (unsigned char)(temp_v4 >> 0x18);
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                DAT_006472dc = DAT_006472dc / temp_v16;
                DAT_006472e0 = DAT_006472e0 / temp_v16;
                DAT_006472e4 = DAT_006472e4 / temp_v16;
              }
              temp_v30 = DAT_006472dc;
              fStack_c4 = DAT_006472e0;
              fStack_c0 = DAT_006472e4;
              DAT_006472e8 = temp_v31;
              FUN_005147a0(&temp_v30);
              temp_v15 = pfVar6[0xe] * temp_v15;
              DAT_006472ec = temp_v30 * temp_v15;
              DAT_006472f0 = fStack_c4 * temp_v15;
              DAT_006472f4 = fStack_c0 * temp_v15;
              DAT_006472f8 = temp_v31 * temp_v15;
              temp_v23 = temp_v23 - DAT_006472ec;
              temp_v12 = temp_v12 - DAT_006472f0;
              temp_v11 = temp_v11 - DAT_006472f4;
              DAT_006472dc = temp_v23 * DAT_0064731c + temp_v12 * DAT_0064732c + temp_v11 * DAT_0064733c +
                             DAT_006472ec;
              DAT_006472e0 = temp_v23 * DAT_00647320 + temp_v12 * DAT_00647330 + temp_v11 * DAT_00647340 +
                             DAT_006472f0;
              DAT_006472e4 = temp_v23 * DAT_00647324 + temp_v12 * DAT_00647334 + temp_v11 * DAT_00647344 +
                             DAT_006472f4;
              DAT_006472e8 = temp_v23 * DAT_00647328 + temp_v12 * DAT_00647338 + temp_v11 * DAT_00647348 +
                             DAT_006472f8;
            }
            temp_v11 = DAT_006472e8;
            temp_v12 = DAT_006472e4;
            temp_v23 = DAT_006472e0;
            *pfVar7 = DAT_006472dc;
            pfVar7[1] = temp_v23;
            pfVar7[2] = temp_v12;
            pfVar7[3] = temp_v11;
            FUN_00321d7c(pfVar7,temp_v6,temp_v2,&temp_v34);
            pfVar7[6] = pfVar7[6] * pfVar6[0x10];
            temp_v12 = pfVar7[7];
            temp_v23 = pfVar6[0x12];
            pfVar7[7] = temp_v12 * temp_v23;
            temp_v23 = temp_v12 * temp_v23 + pfVar6[0x11];
            pfVar7[7] = temp_v23;
            FUN_0027134c(temp_v43,pfVar7);
            temp_v3 = FUN_001acf08();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v39 != 0) {
            FUN_00514540(0);
            temp_v2 = (temp_v23 - 0.5f) * 2.0f * 3.1415927f * 40.743664f;
            temp_v23 = temp_v2;
            FUN_001b63b0();
            pfVar6[9] = temp_v2 * *(float *)(temp_v6 + 0x11c);
            pfVar6[10] = -*(float *)(temp_v6 + 0x120);
            FUN_001a1ee0();
            temp_v23 = temp_v23 * *(float *)(temp_v6 + 0x11c);
            pfVar6[0xb] = temp_v23;
            temp_v15 = *(float *)(temp_v6 + 0x108) + pfVar6[9];
            temp_v33 = *(float *)(temp_v6 + 0x10c) + pfVar6[10];
            DAT_006472e8 = (float)((unsigned long long)temp_v29 >> 0x20);
            temp_v42 = *(float *)(temp_v6 + 0x110) + temp_v23;
            temp_v26 = (float)temp_v25;
            DAT_006472e4 = (float)((unsigned long long)temp_v25 >> 0x20);
            temp_v18 = (float)in_d15;
            temp_v17 = (float)((unsigned long long)in_d15 >> 0x20);
            temp_v23 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 200),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = temp_v23 * 0.01f;
            temp_v2 = temp_v17 - temp_v23;
            temp_v21 = temp_v26 * temp_v2 + temp_v33 * temp_v23;
            temp_v11 = DAT_006472e4 * temp_v2 + temp_v42 * temp_v23;
            temp_v16 = DAT_006472e8 * temp_v2 + temp_v18 * temp_v23;
            temp_v27 = CONCAT44(temp_v12,temp_v24 * temp_v2 + temp_v15 * temp_v23);
            temp_v2 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xd4),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v2 = temp_v2 * 0.01f;
            temp_v17 = temp_v17 - temp_v2;
            temp_v19 = temp_v24 * temp_v17;
            temp_v23 = temp_v33 * temp_v2;
            temp_v32 = DAT_006472e4 * temp_v17 + temp_v42 * temp_v2;
            temp_v38 = DAT_006472e8 * temp_v17 + temp_v18 * temp_v2;
            DAT_006472dc = temp_v24 - temp_v15;
            DAT_006472e0 = temp_v26 - temp_v33;
            DAT_006472e4 = DAT_006472e4 - temp_v42;
            DAT_006472e8 = DAT_006472e8 - temp_v18;
            pfVar6[0xe] = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                               DAT_006472e4 * DAT_006472e4);
            temp_v12 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                          DAT_006472e4 * DAT_006472e4);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)(temp_v12 != temp_v12) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_006472dc = DAT_006472dc / temp_v12;
              DAT_006472e0 = DAT_006472e0 / temp_v12;
              DAT_006472e4 = DAT_006472e4 / temp_v12;
            }
            temp_v30 = DAT_006472dc;
            fStack_c4 = DAT_006472e0;
            fStack_c0 = DAT_006472e4;
            temp_v31 = DAT_006472e8;
            DAT_006472fc = DAT_006472dc;
            DAT_00647300 = DAT_006472e0;
            DAT_00647304 = DAT_006472e4;
            DAT_00647308 = DAT_006472e8;
            temp_v13 = DAT_006472e0 * DAT_005c1118 - DAT_006472e4 * DAT_005c1114;
            temp_v12 = DAT_006472e4 * DAT_005c1110 - DAT_006472dc * DAT_005c1118;
            temp_v18 = DAT_006472dc * DAT_005c1114 - DAT_006472e0 * DAT_005c1110;
            DAT_006472ec = DAT_006472dc;
            DAT_006472f0 = DAT_006472e0;
            DAT_006472f4 = DAT_006472e4;
            DAT_006472f8 = DAT_006472e8;
            temp_v22 = temp_v12 * DAT_006472e4 - temp_v18 * DAT_006472e0;
            temp_v20 = temp_v13 * DAT_006472e0;
            DAT_006472e0 = temp_v18 * DAT_006472dc - temp_v13 * DAT_006472e4;
            DAT_006472e4 = temp_v20 - temp_v12 * DAT_006472dc;
            temp_v12 = DAT_006472e8;
            DAT_006472dc = temp_v22;
            temp_v18 = DAT_006472e0;
            temp_v20 = DAT_006472e4;
            FUN_00514540(0);
            temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xe0),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = (temp_v13 - 0.5f) * 2.0f * temp_v14 * 0.5f * 0.017453292f;
            FUN_005147a0(&temp_v30);
            FUN_00514540(0);
            DAT_00647304 = temp_v20;
            DAT_00647300 = temp_v18;
            temp_v18 = (((float)((unsigned long long)in_d15 >> 0x20) - *(float *)(temp_v6 + 0xd0)) +
                     temp_v13 * *(float *)(temp_v6 + 0xd0)) * *(float *)(temp_v6 + 0xcc);
            temp_v20 = temp_v22 * temp_v18;
            temp_v13 = DAT_00647300 * temp_v18;
            temp_v18 = DAT_00647304 * temp_v18;
            DAT_006472ec = temp_v20 * DAT_0064731c + temp_v13 * DAT_0064732c + temp_v18 * DAT_0064733c;
            DAT_006472f0 = temp_v20 * DAT_00647320 + temp_v13 * DAT_00647330 + temp_v18 * DAT_00647340;
            DAT_006472f4 = temp_v20 * DAT_00647324 + temp_v13 * DAT_00647334 + temp_v18 * DAT_00647344;
            DAT_006472f8 = temp_v20 * DAT_00647328 + temp_v13 * DAT_00647338 + temp_v18 * DAT_00647348;
            temp_v20 = (float)temp_v27 + DAT_006472ec;
            temp_v18 = temp_v21 + DAT_006472f0;
            temp_v11 = temp_v11 + DAT_006472f4;
            DAT_006472e8 = temp_v16 + DAT_006472f8;
            DAT_006472dc = temp_v20;
            DAT_006472e0 = temp_v18;
            DAT_006472e4 = temp_v11;
            DAT_006472fc = temp_v22;
            DAT_00647308 = temp_v12;
            *pfVar6 = temp_v20;
            pfVar6[1] = temp_v18;
            pfVar6[2] = temp_v11;
            FUN_00514540(0);
            temp_v12 = (((float)((unsigned long long)in_d15 >> 0x20) - *(float *)(temp_v6 + 0xdc)) +
                     temp_v20 * *(float *)(temp_v6 + 0xdc)) * *(float *)(temp_v6 + 0xd8);
            temp_v11 = DAT_006472fc * temp_v12;
            temp_v16 = DAT_00647300 * temp_v12;
            temp_v12 = DAT_00647304 * temp_v12;
            DAT_006472ec = temp_v11 * DAT_0064731c + temp_v16 * DAT_0064732c + temp_v12 * DAT_0064733c;
            DAT_006472f0 = temp_v11 * DAT_00647320 + temp_v16 * DAT_00647330 + temp_v12 * DAT_00647340;
            DAT_006472f4 = temp_v11 * DAT_00647324 + temp_v16 * DAT_00647334 + temp_v12 * DAT_00647344;
            DAT_006472f8 = temp_v11 * DAT_00647328 + temp_v16 * DAT_00647338 + temp_v12 * DAT_00647348;
            temp_v12 = temp_v19 + temp_v15 * temp_v2 + DAT_006472ec;
            temp_v23 = temp_v26 * temp_v17 + temp_v23 + DAT_006472f0;
            temp_v2 = temp_v32 + DAT_006472f4;
            DAT_006472e8 = temp_v38 + DAT_006472f8;
            DAT_006472dc = temp_v12;
            DAT_006472e0 = temp_v23;
            DAT_006472e4 = temp_v2;
            pfVar6[3] = temp_v12;
            pfVar6[4] = temp_v23;
            pfVar6[5] = temp_v2;
            FUN_00514540(0);
            temp_v23 = (((float)((unsigned long long)in_d15 >> 0x20) - *(float *)(temp_v6 + 0xf4)) +
                     temp_v12 * *(float *)(temp_v6 + 0xf4)) * *(float *)(temp_v6 + 0xf0);
            pfVar6[0xd] = temp_v23;
            FUN_00514540(0);
            in_d10 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
            temp_v23 = (((float)((unsigned long long)in_d15 >> 0x20) - *(float *)(temp_v6 + 0xe8)) +
                     temp_v23 * *(float *)(temp_v6 + 0xe8)) * *(float *)(temp_v6 + 0xe4);
            pfVar6[0xc] = temp_v23;
            pfVar6[0xf] = 0.0f;
            pfVar7[3] = (float)((unsigned long long)temp_v29 >> 0x20);
            *pfVar7 = temp_v24;
            pfVar7[1] = (float)temp_v25;
            pfVar7[2] = (float)((unsigned long long)temp_v25 >> 0x20);
            FUN_00514540(0);
            temp_v2 = (float)((unsigned long long)in_d15 >> 0x20);
            pfVar6[0x10] = (temp_v2 - *(float *)(temp_v6 + 0x6c)) + temp_v23 * *(float *)(temp_v6 + 0x6c);
            if (temp_v41 == 2) {
              pfVar6[0x11] = (float)in_d10;
              pfVar6[0x12] = temp_v2;
            }
            else {
              FUN_00514540(0);
              pfVar6[0x12] = ((float)((unsigned long long)in_d15 >> 0x20) - *(float *)(temp_v6 + 0x98)) +
                             temp_v23 * *(float *)(temp_v6 + 0x98);
              if (temp_v41 != 1) {
                pfVar6[0x11] = (float)in_d10;
              }
              else {
                FUN_00514540(0);
                temp_v4 = 0;
                pfVar6[0x11] = temp_v23 * 6.2831855f;
                FUN_00514500();
                if ((temp_v4 & 1) != 0) {
                  pfVar6[0x12] = -pfVar6[0x12];
                }
              }
            }
            temp_v23 = (float)((unsigned long long)temp_v27 >> 0x20);
            temp_v34 = *pfVar7;
            temp_v35 = pfVar7[1];
            temp_v36 = pfVar7[2];
            temp_v37 = pfVar7[3];
            pfVar7[4] = 0.0f;
            if (temp_v40[0] != '\0') {
              FUN_00514500(0);
              aeabi_uidivmod();
              temp_v12 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v2 = pfVar6[0xd] * temp_v12 + temp_v23 * temp_v12 * temp_v12 * 0.5f;
              if (temp_v2 < (float)in_d10) {
                temp_v2 = (float)in_d10;
              }
              temp_v11 = pfVar6[0xc] * temp_v12 + (float)temp_v29 * temp_v12 * temp_v12 * 0.5f;
              if (temp_v11 < 0.0f) {
                temp_v11 = 0.0f;
              }
              DAT_006472e8 = (float)((unsigned long long)in_d10 >> 0x20);
              temp_v17 = pfVar6[0xf];
              temp_v19 = (float)((unsigned long long)in_d15 >> 0x20);
              temp_v16 = temp_v2 * 0.001f;
              if ((int)(temp_v2 * 0.001f) >= 0x3f800001) {
                temp_v16 = temp_v19;
              }
              temp_v2 = temp_v16;
              if (temp_v16 < temp_v17) {
                temp_v2 = temp_v17;
              }
              in_d10 = CONCAT44(DAT_006472e8,temp_v2);
              if (temp_v17 <= temp_v16) {
                pfVar6[0xf] = temp_v2;
              }
              temp_v19 = temp_v19 - temp_v2;
              temp_v27 = CONCAT44(temp_v23,temp_v42);
              temp_v21 = temp_v19 * temp_v19 * temp_v19;
              temp_v16 = temp_v2 * temp_v2 * temp_v2;
              temp_v17 = temp_v19 * temp_v19 * temp_v2 * 3.0f;
              temp_v23 = temp_v2 * temp_v2 * temp_v19 * 3.0f;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
              DAT_006472dc = *(float *)(temp_v6 + 0xfc) * temp_v21 + *pfVar6 * temp_v17 +
                             pfVar6[3] * temp_v23 + temp_v15 * temp_v16;
              DAT_006472e0 = *(float *)(temp_v6 + 0x100) * temp_v21 + pfVar6[1] * temp_v17 +
                             pfVar6[4] * temp_v23 + temp_v33 * temp_v16;
              DAT_006472e4 = *(float *)(temp_v6 + 0x104) * temp_v21 + pfVar6[2] * temp_v17 +
                             pfVar6[5] * temp_v23 + temp_v42 * temp_v16;
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
                FUN_005147a0(&temp_v30);
                DAT_006472f8 = pfVar6[0xe] * (float)in_d10;
                DAT_006472ec = temp_v30 * DAT_006472f8;
                DAT_006472f0 = fStack_c4 * DAT_006472f8;
                DAT_006472f4 = fStack_c0 * DAT_006472f8;
                DAT_006472f8 = temp_v31 * DAT_006472f8;
                temp_v23 = DAT_006472dc - DAT_006472ec;
                temp_v2 = DAT_006472e0 - DAT_006472f0;
                temp_v11 = DAT_006472e4 - DAT_006472f4;
                DAT_006472dc = temp_v23 * DAT_0064731c + temp_v2 * DAT_0064732c + temp_v11 * DAT_0064733c
                               + DAT_006472ec;
                DAT_006472e0 = temp_v23 * DAT_00647320 + temp_v2 * DAT_00647330 + temp_v11 * DAT_00647340
                               + DAT_006472f0;
                DAT_006472e4 = temp_v23 * DAT_00647324 + temp_v2 * DAT_00647334 + temp_v11 * DAT_00647344
                               + DAT_006472f4;
                DAT_006472e8 = temp_v23 * DAT_00647328 + temp_v2 * DAT_00647338 + temp_v11 * DAT_00647348
                               + DAT_006472f8;
              }
              temp_v11 = DAT_006472e4;
              temp_v2 = DAT_006472e0;
              temp_v23 = DAT_006472dc;
              pfVar7[3] = DAT_006472e8;
              *pfVar7 = temp_v23;
              pfVar7[1] = temp_v2;
              pfVar7[2] = temp_v11;
              pfVar7[4] = (float)(int)temp_v12;
            }
            FUN_00321d7c(pfVar7,temp_v6,pfVar7[4],&temp_v34);
            pfVar7[6] = pfVar7[6] * pfVar6[0x10];
            temp_v23 = pfVar7[7];
            temp_v2 = pfVar6[0x12];
            pfVar7[7] = temp_v23 * temp_v2;
            temp_v23 = temp_v23 * temp_v2 + pfVar6[0x11];
            pfVar7[7] = temp_v23;
            if (temp_v40[0] != '\0') {
              FUN_00321e98(temp_v43,pfVar7);
              temp_v3 = FUN_001acf08();
              pfVar7[4] = (float)(temp_v3 + (int)pfVar7[4]);
            }
            temp_v39 = temp_v39 - 1;
          }
        }
        temp_v7 = temp_v7 + 1;
        pfVar6 = pfVar6 + 0x13;
        pfVar7 = pfVar7 + 10;
      } while (temp_v7 < temp_v8);
    }
  }
  return;
}

} /* extern "C" */
