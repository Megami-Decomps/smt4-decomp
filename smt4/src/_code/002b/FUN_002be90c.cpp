/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be90c` (_code @ 0x2be90c, 0x430 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b0750(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_12: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_12_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d46b0; /* 0x4d46b0 */
extern unsigned int DAT_004d46b4; /* 0x4d46b4 */
extern unsigned int DAT_004d46b8; /* 0x4d46b8 */
extern unsigned int DAT_004d46bc; /* 0x4d46bc */
extern unsigned int DAT_004d46c0; /* 0x4d46c0 */
extern unsigned int DAT_004d46c4; /* 0x4d46c4 */
extern unsigned int DAT_004d46c8; /* 0x4d46c8 */
extern unsigned int DAT_004d46cc; /* 0x4d46cc */
extern unsigned int DAT_004d46d0; /* 0x4d46d0 */
extern unsigned int DAT_004d46d4; /* 0x4d46d4 */
extern unsigned int DAT_004d46d8; /* 0x4d46d8 */
extern unsigned int DAT_004d46dc; /* 0x4d46dc */
extern unsigned int DAT_004d46e0; /* 0x4d46e0 */
extern unsigned int DAT_004d46e4; /* 0x4d46e4 */
extern unsigned int DAT_004d46e8; /* 0x4d46e8 */
extern unsigned int DAT_004d4704; /* 0x4d4704 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b0750. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_002be90c(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
                 int param_10,unsigned long long param_11,int param_12)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v0 = FUN_002bf4f8(param_5,param_6);
  psVar4 = *(short **)(temp_v0 + 0xc);
  temp_v1 = param_1;
  if (param_2 < param_1) {
    temp_v1 = param_2;
  }
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v10 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat((int)*psVar4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = VectorFloatToUnsigned((temp_v6 / temp_v10) * temp_v8,3);
  if ((0 < param_1) && (temp_v9 == 0)) {
    temp_v9 = 1;
  }
  temp_v1 = (int)(short)param_2 << 0xc;
  temp_v2 = ((int)((unsigned long long)((long long)temp_v1 * 0x28f5c29) >> 0x20) - (temp_v1 >> 0x1f)) * 0x14;
  temp_v11 = (unsigned int)param_11;
  temp_v12 = (unsigned int)((unsigned long long)param_11 >> 0x20);
  if (param_3 == 0) {
    if (temp_v2 < 0x1000) {
      temp_v2 = 0x1000;
    }
    if ((unsigned int)((int)(short)param_1 << 0xc) <= temp_v2) {
      param_6 = param_9;
    }
    FUN_002b0750(2,param_5,param_6,param_10,temp_v11,temp_v9,(int)psVar4[1],temp_v12);
    DAT_004d46ac = 0x3f800000;
    DAT_004d46b0 = 0x3f800000;
    DAT_004d46b4 = 0x3f800000;
    DAT_004d46b8 = DAT_004d4704;
    DAT_004d46bc = 0x3f800000;
    DAT_004d46c0 = 0x3f800000;
    DAT_004d46c4 = 0x3f800000;
    DAT_004d46c8 = DAT_004d4704;
    DAT_004d46cc = 0x3f800000;
    DAT_004d46d0 = 0x3f800000;
    DAT_004d46d4 = 0x3f800000;
    DAT_004d46d8 = DAT_004d4704;
    DAT_004d46dc = 0x3f800000;
    DAT_004d46e0 = 0x3f800000;
    DAT_004d46e4 = 0x3f800000;
    DAT_004d46e8 = DAT_004d4704;
    return;
  }
  temp_v1 = param_1 + param_3;
  if (param_2 < param_1 + param_3) {
    temp_v1 = param_2;
  }
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v8 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = VectorFloatToUnsigned((temp_v6 / temp_v8) * temp_v10,3);
  if (temp_v7 == 0) {
    temp_v7 = 1;
  }
  if (temp_v2 < 0x1000) {
    temp_v2 = 0x1000;
  }
  if ((unsigned int)((int)(short)temp_v1 << 0xc) <= temp_v2) {
    param_6 = param_9;
  }
  temp_v1 = param_4 - 10;
  if (param_3 >= 1) {
    temp_v4 = temp_v7 - temp_v9;
    temp_v5 = temp_v4;
    if (temp_v4 == 0) {
      temp_v5 = 1;
    }
    if (param_4 - 0xbU < 10) {
      temp_v6 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v10,3);
      temp_v4 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v8,3);
      temp_v5 = temp_v5 - temp_v1;
      temp_v9 = temp_v9 + temp_v4;
    }
    else if (param_4 >= 0x15) {
      temp_v5 = 0;
      temp_v9 = temp_v7;
    }
    if (param_12 == 0) {
      FUN_002b0750(2,param_5,param_6,param_10,temp_v11,temp_v9,(int)psVar4[1],temp_v12);
    }
    temp_v1 = DAT_0044ea00;
    if (temp_v5 == 0) {
      DAT_004d46ac = 0x3f800000;
      DAT_004d46b0 = 0x3f800000;
      DAT_004d46b4 = 0x3f800000;
      DAT_004d46b8 = DAT_004d4704;
      DAT_004d46bc = 0x3f800000;
      DAT_004d46c0 = 0x3f800000;
      DAT_004d46c4 = 0x3f800000;
      DAT_004d46c8 = DAT_004d4704;
      DAT_004d46cc = 0x3f800000;
      DAT_004d46d0 = 0x3f800000;
      DAT_004d46d4 = 0x3f800000;
      DAT_004d46d8 = DAT_004d4704;
      DAT_004d46dc = 0x3f800000;
      DAT_004d46e0 = 0x3f800000;
      DAT_004d46e4 = 0x3f800000;
      DAT_004d46e8 = DAT_004d4704;
      return;
    }
    if (param_12 != 0) {
      temp_v4 = FUN_002c5da8(6,1,0);
      piVar7 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
    FUN_002b0750(2,param_5,param_7,param_10 + temp_v9,(int)param_11,temp_v5,
                 (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),(int)((unsigned long long)param_11 >> 0x20));
    temp_v1 = DAT_0044ea00;
    temp_v0 = FUN_002c5da8(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v5 == temp_v0) {
      DAT_004d46ac = 0x3f800000;
      DAT_004d46b0 = 0x3f800000;
      DAT_004d46b4 = 0x3f800000;
      DAT_004d46b8 = DAT_004d4704;
      DAT_004d46bc = 0x3f800000;
      DAT_004d46c0 = 0x3f800000;
      DAT_004d46c4 = 0x3f800000;
      DAT_004d46c8 = DAT_004d4704;
      DAT_004d46cc = 0x3f800000;
      DAT_004d46d0 = 0x3f800000;
      DAT_004d46d4 = 0x3f800000;
      DAT_004d46d8 = DAT_004d4704;
      DAT_004d46dc = 0x3f800000;
      DAT_004d46e0 = 0x3f800000;
      DAT_004d46e4 = 0x3f800000;
      DAT_004d46e8 = DAT_004d4704;
      return;
    }
  }
  else {
    temp_v5 = temp_v9 - temp_v7;
    if (temp_v9 < temp_v7) {
      temp_v5 = 0;
      temp_v7 = temp_v9;
    }
    if (param_4 - 0xbU < 10) {
      temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v9 - temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v8,3);
      temp_v5 = temp_v5 - temp_v1;
    }
    else if (param_4 >= 0x15) {
      temp_v5 = 0;
    }
    if (param_12 == 0) {
      FUN_002b0750(2,param_5,param_6,param_10,temp_v11,temp_v7,(int)psVar4[1],temp_v12);
    }
    temp_v1 = DAT_0044ea00;
    if (temp_v5 == 0) {
      DAT_004d46ac = 0x3f800000;
      DAT_004d46b0 = 0x3f800000;
      DAT_004d46b4 = 0x3f800000;
      DAT_004d46b8 = DAT_004d4704;
      DAT_004d46bc = 0x3f800000;
      DAT_004d46c0 = 0x3f800000;
      DAT_004d46c4 = 0x3f800000;
      DAT_004d46c8 = DAT_004d4704;
      DAT_004d46cc = 0x3f800000;
      DAT_004d46d0 = 0x3f800000;
      DAT_004d46d4 = 0x3f800000;
      DAT_004d46d8 = DAT_004d4704;
      DAT_004d46dc = 0x3f800000;
      DAT_004d46e0 = 0x3f800000;
      DAT_004d46e4 = 0x3f800000;
      DAT_004d46e8 = DAT_004d4704;
      return;
    }
    if (param_12 != 0) {
      temp_v4 = FUN_002c5da8(6,1,0);
      piVar7 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
    FUN_002b0750(2,param_5,param_8,param_10 + temp_v7,(int)param_11,temp_v5,
                 (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),(int)((unsigned long long)param_11 >> 0x20));
    temp_v1 = DAT_0044ea00;
    temp_v0 = FUN_002c5da8(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v5 == temp_v0) {
      DAT_004d46ac = 0x3f800000;
      DAT_004d46b0 = 0x3f800000;
      DAT_004d46b4 = 0x3f800000;
      DAT_004d46b8 = DAT_004d4704;
      DAT_004d46bc = 0x3f800000;
      DAT_004d46c0 = 0x3f800000;
      DAT_004d46c4 = 0x3f800000;
      DAT_004d46c8 = DAT_004d4704;
      DAT_004d46cc = 0x3f800000;
      DAT_004d46d0 = 0x3f800000;
      DAT_004d46d4 = 0x3f800000;
      DAT_004d46d8 = DAT_004d4704;
      DAT_004d46dc = 0x3f800000;
      DAT_004d46e0 = 0x3f800000;
      DAT_004d46e4 = 0x3f800000;
      DAT_004d46e8 = DAT_004d4704;
      return;
    }
  }
  (*(romwright_code *)piVar7[7])();
  *(unsigned char *)(piVar7 + 6) = 0;
  DAT_004d46ac = 0x3f800000;
  DAT_004d46b0 = 0x3f800000;
  DAT_004d46b4 = 0x3f800000;
  DAT_004d46b8 = DAT_004d4704;
  DAT_004d46bc = 0x3f800000;
  DAT_004d46c0 = 0x3f800000;
  DAT_004d46c4 = 0x3f800000;
  DAT_004d46c8 = DAT_004d4704;
  DAT_004d46cc = 0x3f800000;
  DAT_004d46d0 = 0x3f800000;
  DAT_004d46d4 = 0x3f800000;
  DAT_004d46d8 = DAT_004d4704;
  DAT_004d46dc = 0x3f800000;
  DAT_004d46e0 = 0x3f800000;
  DAT_004d46e4 = 0x3f800000;
  DAT_004d46e8 = DAT_004d4704;
  return;
}

} /* extern "C" */
