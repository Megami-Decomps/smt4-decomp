/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321ea4` (_code @ 0x321ea4, 0x80c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_00322274; /* 0x322274 */
extern unsigned char LAB_0032228c; /* 0x32228c */
extern unsigned char LAB_003222a0; /* 0x3222a0 */
extern unsigned char LAB_00322664; /* 0x322664 */
extern signed char DAT_0044ea82; /* 0x44ea82 */
extern signed char DAT_0044ea83; /* 0x44ea83 */
extern signed char DAT_0044ea84; /* 0x44ea84 */
extern signed char DAT_0044ea85; /* 0x44ea85 */
extern unsigned int DAT_004728f0; /* 0x4728f0 */
extern unsigned int DAT_004728f4; /* 0x4728f4 */
extern unsigned int DAT_004728f8; /* 0x4728f8 */
extern unsigned int DAT_004728fc; /* 0x4728fc */
extern unsigned int DAT_00472900; /* 0x472900 */
extern unsigned int DAT_00472904; /* 0x472904 */
extern unsigned int DAT_00472908; /* 0x472908 */
extern unsigned int DAT_0047290c; /* 0x47290c */
extern unsigned int DAT_00472910; /* 0x472910 */
extern unsigned int DAT_00472914; /* 0x472914 */
extern unsigned int DAT_00472918; /* 0x472918 */
extern unsigned int DAT_0047291c; /* 0x47291c */
extern unsigned int DAT_00472920; /* 0x472920 */
extern unsigned int DAT_00472924; /* 0x472924 */
extern unsigned int DAT_00472928; /* 0x472928 */
extern unsigned int DAT_0047292c; /* 0x47292c */
extern signed char DAT_004d8bc8; /* 0x4d8bc8 */
extern signed char DAT_004d8bc9; /* 0x4d8bc9 */
extern signed char DAT_004d8bca; /* 0x4d8bca */
extern unsigned int DAT_004d8c10; /* 0x4d8c10 */
extern unsigned int DAT_004d8c14; /* 0x4d8c14 */
extern unsigned int DAT_004d8c18; /* 0x4d8c18 */
extern unsigned int DAT_004d8c1c; /* 0x4d8c1c */
extern float DAT_004d9270; /* 0x4d9270 */
extern float DAT_004d9274; /* 0x4d9274 */
extern unsigned int DAT_004d9278; /* 0x4d9278 */
extern float DAT_004d927c; /* 0x4d927c */
extern float DAT_004d9280; /* 0x4d9280 */
extern float DAT_004d9284; /* 0x4d9284 */
extern float DAT_004d9288; /* 0x4d9288 */
extern float DAT_004d928c; /* 0x4d928c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00243390. */
/* Supplied declaration required: FUN_002497d0. */
/* Supplied declaration required: FUN_0024c62c. */
/* Supplied declaration required: FUN_0024df14. */
/* Supplied declaration required: FUN_0024df94. */
/* Supplied declaration required: FUN_002573ec. */
/* Supplied declaration required: FUN_002885d4. */
/* Supplied declaration required: FUN_002a2ea0. */
/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */
/* Supplied declaration required: FUN_002b902c. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bffbc. */
/* Supplied declaration required: FUN_002c34a4. */
/* Supplied declaration required: FUN_003f6db4. */


unsigned int FUN_00321ea4(void)

{
/* irregular: 8 goto(s); irregular input(s): in_d10, in_d9, in_fpscr; 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  char temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int in_fpscr;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long in_d9;
  float temp_v18;
  unsigned long long in_d10;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  
  temp_v12 = 1;
  FUN_0024df14(8,8,0,&LAB_00322274);
  FUN_0024df14(8,0x14,0,&LAB_0032228c);
  FUN_0024df14(8,0x20,0,&LAB_003222a0);
  temp_v10 = FUN_002b902c(5);
  if (temp_v10 == 0) {
    FUN_0024df94(5);
    temp_v10 = FUN_002b902c();
    if (temp_v10 != 0) goto LAB_00321f24;
    temp_v10 = FUN_002b902c(6);
    if (temp_v10 == 0) {
      FUN_0024df94(6);
      temp_v10 = FUN_002b902c();
      if (temp_v10 != 0) goto LAB_00321fc8;
    }
    else {
LAB_00321fc8:
      if (DAT_0044ea82 != '\b') {
        temp_v9 = DAT_0044ea83;
        if (DAT_0044ea82 == -8) {
          DAT_0044ea85 = -1;
          temp_v9 = DAT_0044ea83 + '\b';
          if ('\x0f' < (char)(DAT_0044ea83 + '\b')) {
            temp_v9 = DAT_0044ea83 - '\b';
          }
        }
      }
      else {
        DAT_0044ea85 = '\x01';
        temp_v9 = DAT_0044ea83 + '\b';
        if ('\x0f' < (char)(DAT_0044ea83 + '\b')) {
          temp_v9 = DAT_0044ea83 - '\b';
        }
      }
      DAT_0044ea83 = temp_v9;
      DAT_0044ea82 = DAT_0044ea82 - DAT_0044ea85;
      temp_v12 = 3;
    }
  }
  else {
LAB_00321f24:
    if (DAT_0044ea82 != '\b') {
      temp_v9 = DAT_0044ea83;
      if (DAT_0044ea82 == -8) {
        DAT_0044ea85 = '\x01';
        temp_v9 = DAT_0044ea83 + '\b';
        if ('\x0f' < (char)(DAT_0044ea83 + '\b')) {
          temp_v9 = DAT_0044ea83 - '\b';
        }
      }
    }
    else {
      DAT_0044ea85 = -1;
      temp_v9 = DAT_0044ea83 + '\b';
      if ('\x0f' < (char)(DAT_0044ea83 + '\b')) {
        temp_v9 = DAT_0044ea83 - '\b';
      }
    }
    DAT_0044ea83 = temp_v9;
    DAT_0044ea82 = DAT_0044ea85 + DAT_0044ea82;
    temp_v12 = 3;
  }
  temp_v10 = FUN_002b902c(3);
  if (temp_v10 == 0) {
    FUN_0024df94(3);
    temp_v10 = FUN_002b902c();
    if (temp_v10 != 0) goto LAB_00322068;
    temp_v10 = FUN_002b902c(4);
    if (temp_v10 == 0) {
      FUN_0024df94(4);
      temp_v10 = FUN_002b902c();
      if (temp_v10 != 0) goto LAB_003220e0;
      goto LAB_00322094;
    }
LAB_003220e0:
    if (DAT_0044ea82 != '\b' && DAT_0044ea82 != -8) {
      if (DAT_0044ea83 != '\0') {
        DAT_0044ea83 = DAT_0044ea83 - '\x01';
      }
      else {
        DAT_0044ea83 = '\x0f';
      }
      goto LAB_00322090;
    }
LAB_003225f0:
    if (DAT_0044ea84 != '\0') {
      DAT_0044ea84 = DAT_0044ea84 - '\x01';
    }
    else {
      DAT_0044ea84 = '\x0f';
    }
  }
  else {
LAB_00322068:
    if (DAT_0044ea82 != '\b' && DAT_0044ea82 != -8) {
      if (DAT_0044ea83 != '\x0f') {
        DAT_0044ea83 = DAT_0044ea83 + '\x01';
      }
      else {
        DAT_0044ea83 = '\0';
      }
LAB_00322090:
      temp_v12 = temp_v12 | 2;
LAB_00322094:
      temp_v10 = FUN_002b902c(7);
      if (temp_v10 == 0) {
        FUN_0024df94(7);
        temp_v10 = FUN_002b902c();
        if (temp_v10 == 0) {
          temp_v10 = FUN_002b902c(8);
          if (temp_v10 == 0) {
            FUN_0024df94(8);
            temp_v10 = FUN_002b902c();
            if (temp_v10 == 0) goto LAB_00322144;
          }
          goto LAB_003225f0;
        }
      }
    }
    if (DAT_0044ea84 != '\x0f') {
      DAT_0044ea84 = DAT_0044ea84 + '\x01';
    }
    else {
      DAT_0044ea84 = '\0';
    }
  }
  temp_v12 = temp_v12 | 2;
LAB_00322144:
  DAT_004ea91c = DAT_004d9270;
  DAT_004ea920 = DAT_004d9274;
  DAT_004ea924 = (float)DAT_004d9278;
  DAT_004ea928 = DAT_004d927c;
  DAT_004ea92c = (float)DAT_004d8c10;
  DAT_004ea930 = (float)DAT_004d8c14;
  DAT_004ea934 = (float)DAT_004d8c18;
  DAT_004ea938 = (float)DAT_004d8c1c;
  FUN_002497d0();
  temp_v24 = 0.0f;
  temp_v29 = DAT_004ea91c;
  temp_v25 = (unsigned long long)(unsigned int)DAT_004ea91c;
  temp_v30 = DAT_004ea920;
  temp_v23 = CONCAT44(DAT_004ea928,DAT_004ea924);
  temp_v20 = 0.19634955f;
  temp_v19 = 40.743664f;
  temp_v21 = -200.0f;
  temp_v22 = 200.0f;
  temp_v10 = -8;
  temp_v31 = DAT_004ea924;
  temp_v32 = DAT_004ea928;
  temp_v16 = DAT_004ea920;
  do {
    temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v17 = (float)in_d9;
    temp_v18 = temp_v15 * temp_v20 * temp_v19;
    temp_v15 = temp_v18;
    FUN_002b740c();
    temp_v30 = temp_v16 + temp_v18 * temp_v21;
    FUN_002b73a4();
    if (DAT_0044ea82 == temp_v10) {
      in_d10 = CONCAT44(temp_v30,temp_v31);
      temp_v24 = temp_v15 * temp_v22;
      temp_v17 = temp_v29;
    }
    in_d9 = CONCAT44(temp_v15 * temp_v22,temp_v17);
    if (DAT_0044ea82 + temp_v10 == 0) {
      temp_v13 = 0xff008080;
      temp_v11 = FUN_002c34a4(0x10000,0x100,0,0x68,0x10,1);
      *(float *)(temp_v11 + 8) = temp_v29;
      *(float *)(temp_v11 + 0xc) = temp_v30;
      *(float *)(temp_v11 + 0x10) = temp_v31;
      *(float *)(temp_v11 + 0x14) = temp_v32;
    }
    else {
      temp_v13 = 0xff808080;
      temp_v11 = FUN_002c34a4(0x10000,0x100,0,0x68,0x10,1);
      *(float *)(temp_v11 + 8) = temp_v29;
      *(float *)(temp_v11 + 0xc) = temp_v30;
      *(float *)(temp_v11 + 0x10) = temp_v31;
      *(float *)(temp_v11 + 0x14) = temp_v32;
    }
    temp_v8 = DAT_0047290c;
    temp_v7 = DAT_00472908;
    temp_v6 = DAT_00472904;
    temp_v5 = DAT_00472900;
    temp_v4 = DAT_004728fc;
    temp_v3 = DAT_004728f8;
    temp_v2 = DAT_004728f4;
    *(unsigned int *)(temp_v11 + 0x20) = DAT_004728f0;
    *(unsigned int *)(temp_v11 + 0x24) = temp_v2;
    *(unsigned int *)(temp_v11 + 0x28) = temp_v3;
    *(unsigned int *)(temp_v11 + 0x2c) = temp_v4;
    *(unsigned int *)(temp_v11 + 0x30) = temp_v5;
    *(unsigned int *)(temp_v11 + 0x34) = temp_v6;
    *(unsigned int *)(temp_v11 + 0x38) = temp_v7;
    *(unsigned int *)(temp_v11 + 0x3c) = temp_v8;
    temp_v8 = DAT_0047292c;
    temp_v7 = DAT_00472928;
    temp_v6 = DAT_00472924;
    temp_v5 = DAT_00472920;
    temp_v4 = DAT_0047291c;
    temp_v3 = DAT_00472918;
    temp_v2 = DAT_00472914;
    *(unsigned int *)(temp_v11 + 0x40) = DAT_00472910;
    *(unsigned int *)(temp_v11 + 0x44) = temp_v2;
    *(unsigned int *)(temp_v11 + 0x48) = temp_v3;
    *(unsigned int *)(temp_v11 + 0x4c) = temp_v4;
    *(unsigned int *)(temp_v11 + 0x50) = temp_v5;
    *(unsigned int *)(temp_v11 + 0x54) = temp_v6;
    *(unsigned int *)(temp_v11 + 0x58) = temp_v7;
    *(unsigned int *)(temp_v11 + 0x5c) = temp_v8;
    *(unsigned int *)(temp_v11 + 0x60) = 0;
    *(int *)(temp_v11 + 0x18) = (int)((unsigned long long)in_d9 >> 0x20);
    *(unsigned int *)(temp_v11 + 0x1c) = temp_v13;
    *(unsigned int *)(temp_v11 + 4) = 7;
    FUN_002573ec(temp_v11,1);
    temp_v13 = FUN_002c34a4(0x10000,0x100,0,0x68,0x10,1);
    FUN_002bcf58(temp_v13,temp_v11,0x68);
    FUN_002573ec(temp_v13,2);
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 9);
  temp_v28 = -(float)in_d10;
  temp_v21 = (float)in_d9;
  temp_v26 = -temp_v21;
  temp_v27 = -(float)((unsigned long long)in_d10 >> 0x20);
  temp_v20 = (float)VectorSignedToFloat((int)DAT_0044ea83,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = temp_v20 * 0.3926991f * temp_v19;
  temp_v20 = temp_v19;
  FUN_002b73a4();
  temp_v29 = temp_v26 - temp_v19 * temp_v24;
  temp_v30 = temp_v27;
  temp_v19 = temp_v20;
  FUN_002b740c();
  temp_v31 = temp_v28 - temp_v20 * temp_v24;
  FUN_00243390(&temp_v29,&temp_v26,0xff00c0c0,0);
  temp_v20 = temp_v19;
  FUN_002b73a4();
  temp_v29 = temp_v21 + temp_v19 * temp_v24;
  temp_v30 = (float)((unsigned long long)in_d10 >> 0x20);
  FUN_002b740c();
  temp_v31 = (float)in_d10 + temp_v20 * temp_v24;
  DAT_004ea92c = (float)temp_v25;
  DAT_004ea934 = (float)temp_v23;
  DAT_004ea938 = (float)((unsigned long long)temp_v23 >> 0x20);
  DAT_004ea91c = temp_v29 - DAT_004ea92c;
  DAT_004ea920 = temp_v30 - temp_v16;
  DAT_004ea924 = temp_v31 - DAT_004ea934;
  DAT_004ea928 = temp_v32 - DAT_004ea938;
  temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                DAT_004ea924 * DAT_004ea924);
  temp_v19 = (float)(temp_v25 >> 0x20);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < temp_v19) << 0x1f) |
          ((unsigned int)(temp_v24 == temp_v19) << 0x1e);
  temp_v14 = temp_v0 | ((unsigned int)(NAN(temp_v24) || NAN(temp_v19)) << 0x1c);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v14 >> 0x1c) & 1)) {
    DAT_004ea91c = DAT_004ea91c / temp_v24;
    DAT_004ea920 = DAT_004ea920 / temp_v24;
    DAT_004ea924 = DAT_004ea924 / temp_v24;
  }
  DAT_004ea930 = temp_v16;
  if ((temp_v12 & 2) != 0) {
    FUN_0024c62c();
    FUN_002885d4();
    FUN_003f6db4();
    VectorSignedToFloat((int)DAT_0044ea84,(unsigned char)(temp_v14 >> 0x16) & 3);
    temp_v24 = DAT_004ea91c;
    temp_v16 = DAT_004ea920;
    temp_v19 = DAT_004ea924;
    temp_v20 = DAT_004ea928;
    FUN_003f6db4(&DAT_004ea91c,(int)DAT_0044ea84);
    DAT_004ea938 = temp_v20;
    DAT_004ea934 = temp_v19;
    DAT_004ea930 = temp_v16;
    DAT_004ea92c = temp_v24;
    FUN_002a2ea0();
    DAT_004d928c = DAT_004ea928;
    DAT_004d9280 = DAT_004ea91c;
    DAT_004d9284 = DAT_004ea920;
    DAT_004d9288 = DAT_004ea924;
  }
  FUN_0024df14(8,0x30,0,&LAB_00322664,DAT_0044ea82 + 8,(int)DAT_0044ea83,(int)DAT_0044ea84);
  DAT_004d8bc8 = DAT_0044ea82;
  DAT_004d8bc9 = DAT_0044ea83;
  DAT_004d8bca = DAT_0044ea84;
  temp_v10 = FUN_002bffbc(1);
  if (temp_v10 == 0) {
    FUN_0024df94(1);
    temp_v10 = FUN_002bffbc();
    if (temp_v10 == 0) {
      return temp_v12 | 0x200000;
    }
  }
  return temp_v12 & 0xfffffffe;
}
