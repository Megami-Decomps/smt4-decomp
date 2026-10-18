/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3020` (_code @ 0x3d3020, 0x4e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_3_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

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
extern unsigned int FUN_00153f64(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001640cc. */
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int FUN_001f3e80(unsigned int, unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_002371b0. */
/* Supplied declaration required: FUN_00317c3c. */
/* Supplied declaration required: FUN_0032c808. */


/* WARNING: Removing unreachable block (ram,0x003d3364) */
/* WARNING: Removing unreachable block (ram,0x003d336c) */

void FUN_003d3020(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s2, in_s3; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  float *pfVar5;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  float in_s2;
  float in_s3;
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
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25 [3];
  unsigned int temp_v26;
  unsigned int uStack_90;
  float temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float fStack_5c;
  float temp_v39;
  float fStack_54;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float fStack_44;
  
  temp_v1 = FUN_001f3e80(0,0xff,0x1e,(int)in_s2,1);
  temp_v19 = 1.0f;
  temp_v25[2] = 0.0f;
  if (param_2 != 0) {
    if ((param_3 != 0) && ((int)in_s2 + 0xbe900000U >= 0x780000)) {
      if (0x1efffff >= (int)in_s2 + 0xc0800000U) {
        temp_v21 = 0.23529412f;
        temp_v22 = 0.43137255f;
        temp_v23 = 0.8235294f;
      }
      else {
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s2 == 0.0f) << 0x1e) |
                   ((unsigned int)(in_s2 <= 0.0f) << 0x1d);
        temp_v0 = (unsigned char)(in_fpscr >> 0x18);
        if ((!((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6))) && (0x3f7fffff >= (int)in_s2)) {
          temp_v21 = 0.43137258f;
          temp_v22 = 0.43137258f;
          temp_v23 = 0.62745106f;
        }
        else {
          temp_v21 = 0.627451f;
          temp_v22 = 0.43137258f;
          temp_v23 = 0.43137258f;
        }
      }
    }
    else {
      temp_v21 = 0.8235294f;
      temp_v22 = 0.43137255f;
      temp_v23 = 0.23529412f;
    }
  }
  else {
    temp_v21 = 0.23529412f;
    temp_v22 = 0.43137255f;
    temp_v23 = 0.8235294f;
  }
  temp_v20 = 0.003921569f;
  temp_v24 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v24 = temp_v24 * 0.003921569f;
  temp_v2 = FUN_00153f64(0xc,3);
  FUN_0016c4b8(DAT_0059dbb4,temp_v2);
  VectorSignedToFloat(0x100 - param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = temp_v25[2];
  FUN_001640cc(&temp_v21);
  temp_v24 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v24 = temp_v24 * temp_v20;
  temp_v21 = temp_v19;
  temp_v22 = temp_v19;
  temp_v23 = temp_v19;
  temp_v1 = FUN_00153f64(0xc,2);
  FUN_0016c4b8(DAT_0059dbb4,temp_v1);
  temp_v25[0] = -42.0f;
  temp_v25[1] = -42.0f;
  temp_v27 = temp_v25[2];
  temp_v26 = 0xc2280000;
  uStack_90 = 0x41b00000;
  temp_v28 = 0x41b00000;
  temp_v29 = 0xc2280000;
  temp_v30 = temp_v25[2];
  temp_v31 = 0x41b00000;
  temp_v32 = 0x41b00000;
  temp_v33 = temp_v25[2];
  temp_v34 = temp_v25[2];
  temp_v35 = temp_v25[2];
  temp_v36 = temp_v25[2];
  temp_v37 = temp_v25[2];
  pfVar5 = temp_v25;
  temp_v38 = temp_v19;
  fStack_5c = temp_v25[2];
  temp_v20 = in_s3 * 256.0f * 0.0027777778f;
  temp_v39 = temp_v19;
  fStack_54 = temp_v25[2];
  temp_v40 = temp_v25[2];
  temp_v41 = temp_v19;
  temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v20) << 0x1d);
  temp_v42 = temp_v19;
  fStack_44 = temp_v25[2];
  for (temp_v20 = romwright_fabs_4(temp_v20); (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - 65536.0f) {
  }
  temp_v7 = VectorFloatToUnsigned(temp_v13,3);
  temp_v5 = 0;
  temp_v8 = VectorFloatToUnsigned(temp_v13,3);
  temp_v9 = VectorFloatToUnsigned(temp_v20,3);
  temp_v3 = temp_v7;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
  temp_v7 = temp_v8 & 0xff;
  temp_v12 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
  temp_v8 = temp_v9 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
  temp_v17 = (float)(&DAT_00536d18)[temp_v3 * 4] + (temp_v13 - temp_v11) * (float)(&DAT_00536d20)[temp_v3 * 4]
  ;
  temp_v14 = (float)(&DAT_00536d14)[temp_v7 * 4] +
           (temp_v13 - temp_v12) * (float)(&DAT_00536d1c)[temp_v7 * 4];
  temp_v11 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v13 - temp_v11) * (float)(&DAT_00536d1c)[temp_v3 * 4]
  ;
  temp_v12 = (float)(&DAT_00536d18)[temp_v7 * 4] +
           (temp_v13 - temp_v12) * (float)(&DAT_00536d20)[temp_v7 * 4];
  temp_v13 = (float)(&DAT_00536d14)[temp_v8 * 4] +
           (temp_v20 - temp_v10) * (float)(&DAT_00536d1c)[temp_v8 * 4];
  temp_v20 = (float)(&DAT_00536d18)[temp_v8 * 4] +
           (temp_v20 - temp_v10) * (float)(&DAT_00536d20)[temp_v8 * 4];
  if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
    temp_v13 = -temp_v13;
  }
  pfVar4 = pfVar5;
  do {
    temp_v10 = pfVar5[1];
    temp_v15 = pfVar5[2];
    temp_v16 = *pfVar5;
    temp_v5 = temp_v5 + 1;
    pfVar5 = pfVar5 + 3;
    temp_v18 = temp_v19 / (temp_v10 * 0.0f + temp_v15 * 0.0f + temp_v16 * 0.0f + 1.0f);
    pfVar4[2] = (temp_v11 * temp_v12 * temp_v10 + temp_v17 * temp_v12 * temp_v15 + -temp_v14 * temp_v16 + 0.0f) *
                temp_v18;
    *pfVar4 = ((temp_v11 * temp_v20 * temp_v14 - temp_v17 * temp_v13) * temp_v10 +
               (temp_v11 * temp_v13 + temp_v17 * temp_v20 * temp_v14) * temp_v15 +
              temp_v20 * temp_v12 * temp_v16 + 0.0f) * temp_v18;
    pfVar4[1] = ((temp_v17 * temp_v20 + temp_v11 * temp_v13 * temp_v14) * temp_v10 +
                 (temp_v17 * temp_v13 * temp_v14 - temp_v11 * temp_v20) * temp_v15 +
                temp_v13 * temp_v12 * temp_v16 + 0.0f) * temp_v18;
    pfVar4 = pfVar4 + 3;
  } while (temp_v5 < 4);
  FUN_0032c808();
  temp_v4 = 0;
  do {
    VectorSignedToFloat(0x100 - param_1,(unsigned char)(temp_v6 >> 0x16) & 3);
    FUN_00317c3c(&temp_v21);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  FUN_002371b0();
  return;
}
