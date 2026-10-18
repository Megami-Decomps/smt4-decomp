/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020dc34` (_code @ 0x20dc34, 0x970 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 41 slot(s), 164 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
} void_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern int DAT_004475b8; /* 0x4475b8 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f91c; /* 0x49f91c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_002ad6d8. */
/* Supplied declaration required: FUN_002ba520. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c8a28. */


/* WARNING: Removing unreachable block (ram,0x0020e144) */
/* WARNING: Removing unreachable block (ram,0x0020df64) */
/* WARNING: Removing unreachable block (ram,0x0020df74) */
/* WARNING: Removing unreachable block (ram,0x0020e154) */
/* WARNING: Removing unreachable block (ram,0x0020dea8) */
/* WARNING: Removing unreachable block (ram,0x0020e088) */

void FUN_0020dc34(void)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float *pfVar6;
  int temp_v5;
  int *piVar8;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18 [3];
  float temp_v19 [3];
  float temp_v20 [3];
  float temp_v21 [3];
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  unsigned int temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  unsigned int temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  
  temp_v5 = DAT_004475b8;
  temp_v13 = 100.0f;
  if (*(char *)(DAT_004475b8 + 0x3c) == '\0') {
    return;
  }
  FUN_002c8a28();
  temp_v1 = DAT_0044ea00;
  temp_v0 = FUN_002c5f7c(5,0);
  piVar8 = (int *)(temp_v1 + 0x124c);
  temp_v2 = *piVar8;
  temp_v3 = piVar8[temp_v2 + 2];
  *piVar8 = temp_v2 + 1;
  piVar8[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  temp_v1 = DAT_0044ea00;
  temp_v0 = FUN_002c5fa4(6,1,0);
  piVar8 = (int *)(temp_v1 + 0x12ac);
  temp_v2 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = temp_v0;
  if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x12c8))();
    *(unsigned char *)(temp_v1 + 0x12c4) = 0;
  }
  temp_v1 = *(int *)(temp_v5 + 0x40);
  temp_v16 = 160.0f;
  temp_v15 = 20.0f;
  if (DAT_0049f91c >= 100) {
    if (temp_v1 == 1) {
      temp_v14 = 150.0f;
    }
    else {
      temp_v14 = temp_v16;
      if (temp_v1 != 2) {
        if (temp_v1 == 3) {
          temp_v14 = 170.0f;
        }
        else {
          temp_v14 = 180.0f;
        }
      }
    }
  }
  else if (temp_v1 == 1) {
    temp_v14 = 10.0f;
  }
  else {
    temp_v14 = temp_v15;
    if ((temp_v1 != 2) && (temp_v14 = temp_v13, temp_v1 == 3)) {
      temp_v14 = 90.0f;
    }
  }
  temp_v1 = *(int *)(temp_v5 + 0x44);
  temp_v13 = 1.0f;
  if (DAT_0049f91c >= 100) {
    if (temp_v1 < 0x10) {
      temp_v46 = 0x40;
    }
    else {
      temp_v16 = (float)VectorSignedToFloat(temp_v1 - 0xf,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = temp_v16 * 1.57f * 0.06666667f;
      FUN_0028277c();
      temp_v16 = (temp_v13 - temp_v16) * 64.0f;
      temp_v46 = (unsigned int)temp_v16;
      if ((int)temp_v46 < 0) {
        temp_v46 = 0;
      }
    }
  }
  else if (temp_v1 < 0x10) {
    temp_v46 = 0xa0;
  }
  else {
    temp_v10 = (float)VectorSignedToFloat(temp_v1 - 0xf,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v10 * 1.57f * 0.06666667f;
    FUN_0028277c();
    temp_v16 = (temp_v13 - temp_v10) * temp_v16;
    temp_v46 = (unsigned int)temp_v16;
    if ((int)temp_v46 < 0) {
      temp_v46 = 0;
    }
  }
  temp_v18[0] = -temp_v14;
  temp_v46 = temp_v46 | 0xffffff00;
  temp_v18[1] = 0.0f;
  temp_v19[1] = 0.0f;
  temp_v20[1] = 0.0f;
  temp_v21[1] = 0.0f;
  if (DAT_0049f91c >= 100) {
    temp_v13 = *(float *)(temp_v5 + 0x54) * 0.7111111f;
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v13) << 0x1d);
    for (temp_v13 = romwright_fabs_4(temp_v13); (int)temp_v13 >= 0x47800000; temp_v13 = temp_v13 - 65536.0f) {
    }
    temp_v7 = VectorFloatToUnsigned(0,3);
    temp_v8 = VectorFloatToUnsigned(temp_v13,3);
    temp_v9 = VectorFloatToUnsigned(0,3);
    temp_v4 = temp_v7;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v7 = temp_v8 & 0xff;
    temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v8 = temp_v9 & 0xff;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v42 = (float)(&DAT_00407fc0)[temp_v7 * 4] +
               (temp_v13 - temp_v11) * (float)(&DAT_00407fc8)[temp_v7 * 4];
    temp_v44 = (float)(&DAT_00407fc4)[temp_v7 * 4] +
               (temp_v13 - temp_v11) * (float)(&DAT_00407fcc)[temp_v7 * 4];
    temp_v11 = (float)(&DAT_00407fc4)[temp_v4 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407fcc)[temp_v4 * 4];
    temp_v13 = (float)(&DAT_00407fc0)[temp_v4 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407fc8)[temp_v4 * 4];
    temp_v10 = (float)(&DAT_00407fc0)[temp_v8 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00407fc8)[temp_v8 * 4];
    temp_v16 = (float)(&DAT_00407fc4)[temp_v8 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00407fcc)[temp_v8 * 4];
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
      temp_v42 = -temp_v42;
    }
    temp_v34 = temp_v16 * temp_v44;
    temp_v43 = temp_v13 * temp_v44;
    temp_v38 = temp_v10 * temp_v44;
    temp_v44 = temp_v11 * temp_v44;
    temp_v35 = temp_v13 * temp_v16 * temp_v42 - temp_v11 * temp_v10;
    temp_v40 = temp_v11 * temp_v10 * temp_v42 - temp_v13 * temp_v16;
    temp_v36 = temp_v13 * temp_v10 + temp_v11 * temp_v16 * temp_v42;
    temp_v39 = temp_v11 * temp_v16 + temp_v13 * temp_v10 * temp_v42;
  }
  else {
    temp_v13 = *(float *)(DAT_00447e88 + 0x4c) * 0.7111111f;
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v13) << 0x1d);
    for (temp_v13 = romwright_fabs_4(temp_v13); (int)temp_v13 >= 0x47800000; temp_v13 = temp_v13 - 65536.0f) {
    }
    temp_v7 = VectorFloatToUnsigned(0,3);
    temp_v8 = VectorFloatToUnsigned(temp_v13,3);
    temp_v9 = VectorFloatToUnsigned(0,3);
    temp_v4 = temp_v7;
    temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v7 = temp_v8 & 0xff;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v8 = temp_v9 & 0xff;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v42 = (float)(&DAT_00407fc0)[temp_v7 * 4] +
               (temp_v13 - temp_v10) * (float)(&DAT_00407fc8)[temp_v7 * 4];
    temp_v44 = (float)(&DAT_00407fc4)[temp_v7 * 4] +
               (temp_v13 - temp_v10) * (float)(&DAT_00407fcc)[temp_v7 * 4];
    temp_v12 = (float)(&DAT_00407fc4)[temp_v4 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407fcc)[temp_v4 * 4];
    temp_v13 = (float)(&DAT_00407fc0)[temp_v4 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407fc8)[temp_v4 * 4];
    temp_v10 = (float)(&DAT_00407fc0)[temp_v8 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00407fc8)[temp_v8 * 4];
    temp_v16 = (float)(&DAT_00407fc4)[temp_v8 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00407fcc)[temp_v8 * 4];
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
      temp_v42 = -temp_v42;
    }
    temp_v34 = temp_v16 * temp_v44;
    temp_v43 = temp_v13 * temp_v44;
    temp_v38 = temp_v10 * temp_v44;
    temp_v44 = temp_v12 * temp_v44;
    temp_v35 = temp_v13 * temp_v16 * temp_v42 - temp_v12 * temp_v10;
    temp_v40 = temp_v12 * temp_v10 * temp_v42 - temp_v13 * temp_v16;
    temp_v36 = temp_v13 * temp_v10 + temp_v12 * temp_v16 * temp_v42;
    temp_v39 = temp_v12 * temp_v16 + temp_v13 * temp_v10 * temp_v42;
  }
  temp_v42 = -temp_v42;
  temp_v37 = 0;
  temp_v41 = 0;
  temp_v45 = 0;
  temp_v18[2] = temp_v18[0];
  temp_v19[0] = temp_v18[0];
  temp_v19[2] = temp_v14;
  temp_v20[0] = temp_v14;
  temp_v20[2] = temp_v18[0];
  temp_v21[0] = temp_v14;
  temp_v21[2] = temp_v14;
  if (DAT_0049f91c >= 100) {
    temp_v17 = 0x40800000;
    temp_v13 = 50.0f;
    temp_v0 = 0;
    do {
      temp_v16 = (float)VectorSignedToFloat(temp_v1 * temp_v0,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v16 = temp_v13 + temp_v16 * (float)temp_v17;
      FUN_002ad6d8(&temp_v22,&temp_v34,temp_v18);
      FUN_002ad6d8(&temp_v25,&temp_v34,temp_v19);
      FUN_002ad6d8(&temp_v28,&temp_v34,temp_v20);
      FUN_002ad6d8(&temp_v31,&temp_v34,temp_v21);
      temp_v22 = temp_v22 + *(float *)(temp_v5 + 0x48);
      temp_v23 = temp_v23 + *(float *)(temp_v5 + 0x4c) + temp_v16;
      temp_v24 = temp_v24 + *(float *)(temp_v5 + 0x50);
      temp_v25 = temp_v25 + *(float *)(temp_v5 + 0x48);
      temp_v26 = temp_v26 + *(float *)(temp_v5 + 0x4c) + temp_v16;
      temp_v27 = temp_v27 + *(float *)(temp_v5 + 0x50);
      temp_v28 = temp_v28 + *(float *)(temp_v5 + 0x48);
      temp_v29 = temp_v29 + *(float *)(temp_v5 + 0x4c) + temp_v16;
      temp_v30 = temp_v30 + *(float *)(temp_v5 + 0x50);
      temp_v31 = temp_v31 + *(float *)(temp_v5 + 0x48);
      temp_v32 = temp_v32 + *(float *)(temp_v5 + 0x4c) + temp_v16;
      temp_v33 = temp_v33 + *(float *)(temp_v5 + 0x50);
      FUN_002ba520(temp_v46);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  else {
    temp_v17 = 0x3fc00000;
    temp_v5 = 0;
    do {
      temp_v13 = (float)VectorSignedToFloat(temp_v1 * temp_v5,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v13 = temp_v15 + temp_v13 * (float)temp_v17;
      FUN_002ad6d8(&temp_v22,&temp_v34,temp_v18);
      FUN_002ad6d8(&temp_v25,&temp_v34,temp_v19);
      FUN_002ad6d8(&temp_v28,&temp_v34,temp_v20);
      FUN_002ad6d8(&temp_v31,&temp_v34,temp_v21);
      pfVar6 = (float *)(DAT_00447e88 + 0x1c);
      temp_v22 = temp_v22 + *(float *)(DAT_00447e88 + 0x1c);
      temp_v23 = temp_v23 + *(float *)(DAT_00447e88 + 0x20) + temp_v13;
      temp_v24 = temp_v24 + *(float *)(DAT_00447e88 + 0x24);
      temp_v25 = temp_v25 + *pfVar6;
      temp_v26 = temp_v26 + *(float *)(DAT_00447e88 + 0x20) + temp_v13;
      temp_v27 = temp_v27 + *(float *)(DAT_00447e88 + 0x24);
      temp_v28 = temp_v28 + *pfVar6;
      temp_v29 = temp_v29 + *(float *)(DAT_00447e88 + 0x20) + temp_v13;
      temp_v30 = temp_v30 + *(float *)(DAT_00447e88 + 0x24);
      temp_v31 = temp_v31 + *pfVar6;
      temp_v32 = temp_v32 + *(float *)(DAT_00447e88 + 0x20) + temp_v13;
      temp_v33 = temp_v33 + *(float *)(DAT_00447e88 + 0x24);
      FUN_002ba520(temp_v46);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
  }
  temp_v5 = DAT_0044ea00;
  temp_v1 = FUN_002c5fa4(6,7,0);
  piVar8 = (int *)(temp_v5 + 0x12ac);
  temp_v0 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = temp_v1;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v0 != temp_v1) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  temp_v5 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar8;
  temp_v0 = piVar8[temp_v1 + 2];
  *piVar8 = temp_v1 - 1;
  if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v0 != piVar8[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1268))();
    *(unsigned char *)(temp_v5 + 0x1264) = 0;
  }
  return;
}
