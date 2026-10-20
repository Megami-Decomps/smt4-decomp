/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7d18` (_code @ 0x2c7d18, 0x888 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_0024f880(...);
int FUN_0024f890(...);
int FUN_00256cd8(unsigned int, double, unsigned char [16]);
int FUN_0025b750(...);
int FUN_0028c92c(...);
int FUN_002a2c7c(...);
int FUN_002a34e8(...);
int FUN_002a3504(...);
int FUN_002aff70(...);
int FUN_002b011c(...);
int FUN_002b7064(...);
int FUN_002b70cc(...);
int FUN_002b90f8(...);
int FUN_002c1b64(...);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX44TransposeAsm(...);

typedef struct fn_002c7d18_arg0 fn_002c7d18_arg0;
typedef struct fn_002c7d18_arg0_p4c fn_002c7d18_arg0_p4c;
struct fn_002c7d18_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xa];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x2f];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    fn_002c7d18_arg0_p4c *field_0x4c; /* +0x4c */
};
struct fn_002c7d18_arg0_p4c {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp17C; /* 0x17c: local_17c */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern unsigned int DAT_00472550; /* 0x472550 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern float DAT_004ea98c; /* 0x4ea98c */
extern float DAT_004ea990; /* 0x4ea990 */
extern float DAT_004ea994; /* 0x4ea994 */
extern float DAT_004ea998; /* 0x4ea998 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0024f880. */
/* Supplied declaration required: FUN_0024f890. */
/* Supplied declaration required: FUN_00256cd8. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_0028c92c. */
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002a34e8. */
/* Supplied declaration required: FUN_002a3504. */
/* Supplied declaration required: FUN_002aff70. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002b90f8. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_002c7d18(fn_002c7d18_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  float *pfVar3;
  fn_002c7d18_arg0_p4c *pfVar4;
  int temp_v2;
  int temp_v3;
  float *pfVar7;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  long long temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned char temp_v28 [16];
  unsigned int temp_v29;
  unsigned char temp_v30 [12];
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int uStack_cc;
  unsigned int temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float fStack_8c;
  float fStack_88;
  float temp_v46;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float temp_v47;
  
  temp_v0 = param_1->field_0x4;
  temp_v16 = 0.003921569f;
  DAT_004ea91c = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea920 = (float)VectorUnsignedToFloat
                                  ((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea924 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea91c = DAT_004ea91c * 0.003921569f;
  temp_v18 = (unsigned long long)(unsigned int)DAT_004ea91c << 0x20;
  DAT_004ea920 = DAT_004ea920 * 0.003921569f;
  DAT_004ea924 = DAT_004ea924 * 0.003921569f;
  temp_v15 = CONCAT44(DAT_004ea924,DAT_004ea920);
  temp_v4 = temp_v4 * 0.003921569f;
  pfVar4 = param_1->field_0x4c;
  pfVar3 = (float *)pfVar4->field_0x18;
  DAT_004ea928 = temp_v4;
  FUN_0024f880(pfVar4,&temp_v20);
  FUN_0028c92c(temp_v30);
  temp_v31 = 0;
  temp_v32 = 0;
  temp_v33 = 0;
  temp_v34 = 0;
  temp_v35 = 0;
  temp_v36 = 0;
  uStack_cc = 0x3f800000;
  nn_math_ARMv6_MTX44TransposeAsm(temp_v30);
  temp_v42 = -temp_v20;
  temp_v43 = -temp_v21;
  temp_v44 = -temp_v22;
  temp_v45 = temp_v20;
  fStack_8c = temp_v21;
  fStack_88 = temp_v22;
  FUN_002a3504(temp_v30,temp_v30,&temp_v42);
  FUN_002a34e8(temp_v30,&temp_v45);
  FUN_002b90f8(DAT_0044ea00,temp_v30);
  temp_v3 = pfVar4->field_0x8;
  if (param_1->field_0xc == 7) {
    temp_v17 = 255.0f;
    if ((pfVar4->field_0xc & 1) != 0) {
      FUN_0024f890(pfVar4,&temp_v46);
      FUN_0024f880(pfVar4,&temp_v20);
      pfVar7 = &temp_v46;
      DAT_004ea91c = temp_v46;
      DAT_004ea920 = fStack_7c;
      DAT_004ea924 = fStack_78;
      DAT_004ea928 = fStack_74;
      FUN_002a2c7c();
      DAT_004ea98c = temp_v20;
      if (0 < temp_v3) {
        pfVar7 = (float *)&DAT_00472550;
      }
      temp_v2 = 0;
      DAT_004ea990 = temp_v21;
      DAT_004ea994 = temp_v22;
      DAT_004ea998 = temp_v23;
      temp_v38 = DAT_004ea970;
      temp_v24 = DAT_004ea978;
      temp_v47 = DAT_004ea97c;
      temp_v25 = DAT_004ea980;
      temp_v39 = DAT_004ea984;
      temp_v26 = DAT_004ea988;
      temp_v40 = temp_v20;
      temp_v27 = temp_v21;
      temp_v41 = temp_v22;
      temp_v16 = DAT_004ea968;
      temp_v17 = DAT_004ea960;
      temp_v19 = DAT_004ea96c;
      temp_v1 = DAT_004ea974;
      temp_v5 = DAT_004ea95c;
      temp_v7 = DAT_004ea964;
      if (0 < temp_v3) {
        do {
          temp_v12 = (float)((unsigned long long)temp_v18 >> 0x20);
          if (-1 < (int)pfVar3[4]) {
            DAT_004ea970 = temp_v38;
            DAT_004ea978 = temp_v24;
            DAT_004ea97c = temp_v47;
            DAT_004ea980 = temp_v25;
            DAT_004ea984 = temp_v39;
            DAT_004ea988 = temp_v26;
            DAT_004ea98c = temp_v40;
            DAT_004ea990 = temp_v27;
            DAT_004ea994 = temp_v41;
            DAT_004ea998 = temp_v23;
            temp_v10 = *pfVar3;
            temp_v13 = pfVar3[1];
            temp_v14 = pfVar3[2];
            *pfVar7 = temp_v13 * temp_v19 + temp_v14 * temp_v47 + temp_v40 + temp_v10 * temp_v5;
            pfVar7[1] = temp_v13 * temp_v38 + temp_v14 * temp_v25 + temp_v27 + temp_v10 * temp_v17;
            pfVar7[2] = temp_v13 * temp_v1 + temp_v14 * temp_v39 + temp_v41 + temp_v10 * temp_v7;
            pfVar7[3] = temp_v13 * temp_v24 + temp_v14 * temp_v26 + temp_v23 + temp_v10 * temp_v16;
            temp_v10 = pfVar3[5];
            temp_v13 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v10 & 0xffffff) >> 0x10,
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v10 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v10 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea930 = (float)temp_v15;
            DAT_004ea934 = (float)((unsigned long long)temp_v15 >> 0x20);
            DAT_004ea91c = temp_v11 * 0.003921569f * temp_v12;
            DAT_004ea920 = temp_v13 * 0.003921569f * DAT_004ea930;
            DAT_004ea924 = temp_v14 * 0.003921569f * DAT_004ea934;
            DAT_004ea928 = temp_v10 * 0.003921569f * temp_v4;
            VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
            temp_v0 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
            VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
            VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
            DAT_004ea92c = temp_v12;
            DAT_004ea938 = temp_v4;
            DAT_004ea95c = temp_v5;
            DAT_004ea960 = temp_v17;
            DAT_004ea964 = temp_v7;
            DAT_004ea968 = temp_v16;
            DAT_004ea96c = temp_v19;
            DAT_004ea974 = temp_v1;
            if ((temp_v0 & 0xff) != 0) {
              FUN_00256cd8(*(unsigned int *)&param_1->field_0x48,pfVar3[4],temp_v28);
              FUN_002c1b64(DAT_0044ea00,temp_v29);
              FUN_002b7064();
              FUN_002b70cc();
              temp_v18 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
              FUN_002b011c();
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_0025b750();
            }
          }
          temp_v2 = temp_v2 + 1;
          pfVar3 = pfVar3 + 10;
        } while (temp_v2 < temp_v3);
      }
    }
    else {
      temp_v2 = 0;
      if (0 < temp_v3) {
        do {
          temp_v19 = (float)((unsigned long long)temp_v18 >> 0x20);
          if (-1 < (int)pfVar3[4]) {
            temp_v1 = pfVar3[5];
            temp_v5 = (float)VectorUnsignedToFloat
                                     (((unsigned int)temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v7 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v1 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea930 = (float)temp_v15;
            DAT_004ea934 = (float)((unsigned long long)temp_v15 >> 0x20);
            DAT_004ea91c = temp_v12 * temp_v16 * temp_v19;
            DAT_004ea920 = temp_v5 * temp_v16 * DAT_004ea930;
            DAT_004ea924 = temp_v7 * temp_v16 * DAT_004ea934;
            DAT_004ea928 = temp_v1 * temp_v16 * temp_v4;
            temp_v0 = VectorFloatToUnsigned(DAT_004ea91c * temp_v17,3);
            temp_v8 = VectorFloatToUnsigned(DAT_004ea920 * temp_v17,3);
            temp_v6 = VectorFloatToUnsigned(DAT_004ea924 * temp_v17,3);
            temp_v9 = VectorFloatToUnsigned(DAT_004ea928 * temp_v17,3);
            temp_v37 = (temp_v0 & 0xff) |
                       (temp_v9 << 0x18) | ((temp_v6 & 0xff) << 0x10) | ((temp_v8 & 0xff) << 8);
            DAT_004ea92c = temp_v19;
            DAT_004ea938 = temp_v4;
            if ((temp_v0 & 0xff) != 0) {
              FUN_00256cd8(*(unsigned int *)&param_1->field_0x48,pfVar3[4],temp_v28);
              FUN_002c1b64(DAT_0044ea00,temp_v29);
              FUN_002b7064();
              FUN_002b70cc();
              temp_v18 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
              FUN_002b011c();
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_002aff70(temp_v37);
              FUN_0025b750();
            }
          }
          temp_v2 = temp_v2 + 1;
          pfVar3 = pfVar3 + 10;
        } while (temp_v2 < temp_v3);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
