/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002888a8` (_code @ 0x2888a8, 0x500 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b0750(...);
int FUN_002bed3c(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_11: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_11_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_002888a8(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9,
                 unsigned long long param_10,int param_11)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = FUN_002bf4f8(param_5,param_6);
  psVar2 = *(short **)(temp_v0 + 0xc);
  temp_v1 = param_1;
  if (param_2 < param_1) {
    temp_v1 = param_2;
  }
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v9 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat((int)*psVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = VectorFloatToUnsigned((temp_v6 / temp_v9) * temp_v8,3);
  if ((-1 < param_1) && (temp_v1 == 0)) {
    temp_v1 = 1;
  }
  temp_v10 = (unsigned int)param_10;
  temp_v11 = (unsigned int)((unsigned long long)param_10 >> 0x20);
  if (param_3 != 0) {
    temp_v5 = param_1 + param_3;
    if (param_2 < param_1 + param_3) {
      temp_v5 = param_2;
    }
    if (temp_v5 < 0) {
      temp_v5 = 0;
    }
    temp_v8 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = param_4 - 10;
    temp_v7 = VectorFloatToUnsigned((temp_v6 / temp_v8) * temp_v9,3);
    if (temp_v7 == 0) {
      temp_v7 = 1;
    }
    if (param_3 >= 1) {
      temp_v3 = temp_v7 - temp_v1;
      temp_v4 = temp_v3;
      if (temp_v3 == 0) {
        temp_v4 = 1;
      }
      if (param_4 - 0xbU < 10) {
        temp_v6 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v9,3);
        temp_v7 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v8,3);
        temp_v4 = temp_v4 - temp_v2;
        temp_v1 = temp_v1 + temp_v7;
      }
      else if (param_4 >= 0x15) {
        temp_v4 = 0;
        temp_v1 = temp_v7;
      }
      if (param_11 == 0) {
        if (temp_v5 < 1) {
          FUN_002b0750(2,param_5,param_6,param_9,temp_v10,temp_v1 - 1,(int)psVar2[1],temp_v11);
        }
        else {
          FUN_002b0750(2,param_5,param_6,param_9,temp_v10,temp_v1,(int)psVar2[1],temp_v11);
        }
      }
      temp_v5 = g_titleScene;
      if (temp_v4 == 0) {
        FUN_002bed3c();
        return;
      }
      if (param_11 != 0) {
        temp_v2 = packNibblesAndByte(6,1,0);
        piVar6 = (int *)(temp_v5 + 0x12ac);
        temp_v7 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v2;
        if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v2) {
          (**(romwright_code **)(temp_v5 + 0x12c8))();
          *(unsigned char *)(temp_v5 + 0x12c4) = 0;
        }
      }
      temp_v10 = (unsigned int)((unsigned long long)param_10 >> 0x20);
      if (param_1 < 1) {
        FUN_002b0750(2,param_5,param_7,(param_9 + temp_v1) - 1,(int)param_10,temp_v4 + 1,
                     (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),temp_v10);
      }
      else {
        FUN_002b0750(2,param_5,param_7,param_9 + temp_v1,(int)param_10,temp_v4,
                     (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),temp_v10);
      }
      temp_v1 = g_titleScene;
      temp_v0 = packNibblesAndByte(6,7,0);
      piVar6 = (int *)(temp_v1 + 0x12ac);
      temp_v5 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v0;
      if (*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v5 == temp_v0) {
        FUN_002bed3c();
        return;
      }
    }
    else {
      temp_v1 = temp_v1 - temp_v7;
      if (param_4 - 0xbU < 10) {
        temp_v8 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = VectorFloatToUnsigned(temp_v8 * 0.1f * temp_v6,3);
        temp_v1 = temp_v1 - temp_v2;
      }
      else if (param_4 >= 0x15) {
        temp_v1 = 0;
      }
      if (param_11 == 0) {
        if (temp_v5 < 1) {
          FUN_002b0750(2,param_5,param_6,param_9,temp_v10,temp_v7 - 1,(int)psVar2[1],temp_v11);
        }
        else {
          FUN_002b0750(2,param_5,param_6,param_9,temp_v10,temp_v7,(int)psVar2[1],temp_v11);
        }
      }
      temp_v2 = g_titleScene;
      if (temp_v1 == 0) {
        FUN_002bed3c();
        return;
      }
      if (param_11 != 0) {
        temp_v4 = packNibblesAndByte(6,1,0);
        piVar6 = (int *)(temp_v2 + 0x12ac);
        temp_v3 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v3 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12c8))();
          *(unsigned char *)(temp_v2 + 0x12c4) = 0;
        }
      }
      temp_v10 = (unsigned int)((unsigned long long)param_10 >> 0x20);
      if (temp_v5 < 1) {
        FUN_002b0750(2,param_5,param_8,(param_9 + temp_v7) - 1,(int)param_10,temp_v1 + 1,
                     (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),temp_v10);
      }
      else {
        FUN_002b0750(2,param_5,param_8,param_9 + temp_v7,(int)param_10,temp_v1,
                     (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),temp_v10);
      }
      temp_v1 = g_titleScene;
      temp_v0 = packNibblesAndByte(6,7,0);
      piVar6 = (int *)(temp_v1 + 0x12ac);
      temp_v5 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v0;
      if (*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v5 == temp_v0) {
        FUN_002bed3c();
        return;
      }
    }
    (*(romwright_code *)piVar6[7])();
    *(unsigned char *)(piVar6 + 6) = 0;
  }
  else {
    if (param_1 == 0) {
      temp_v1 = 0;
    }
    FUN_002b0750(2,param_5,param_6,param_9,temp_v10,temp_v1,(int)psVar2[1],temp_v11);
  }
  FUN_002bed3c();
  return;
}

} /* extern "C" */
