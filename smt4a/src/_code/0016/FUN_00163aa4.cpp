/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163aa4` (_code @ 0x163aa4, 0x39c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001807a0(int);
int FUN_00181948(int);
int FUN_00182348(int);
int uiSpriteSetKeyframe(int, int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001807a0. */
/* Supplied declaration required: FUN_00181948. */
/* Supplied declaration required: FUN_00182348. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int __aeabi_idivmod(int, unsigned int);


int FUN_00163aa4(int param_1)

{
/* irregular: 6 unstructured edge(s); irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  short *psVar7;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v6;
  float temp_v7;
  
  if (param_1 == 0) {
    return 1;
  }
  temp_v2 = *(int *)(param_1 + 4);
  temp_v5 = temp_v2 < 0;
  if (temp_v5) {
    temp_v2 = *(int *)(param_1 + 8);
  }
  if (temp_v5 && temp_v2 < 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x86) == '\0') && (*(int *)(param_1 + 0x4c) != 0)) {
    psVar7 = (short *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 0x50) * 0xc);
    temp_v7 = (float)VectorUnsignedToFloat((unsigned int)(unsigned short)psVar7[4],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = VectorFloatToUnsigned(temp_v7 / in_s0,3);
    if ((int)*(short *)(param_1 + 0x52) >= (int)(temp_v6 & 0xffff)) {
      if ((char)psVar7[5] != '\0') {
        if (*(char *)(param_1 + 0x54) != '\0') {
          *(int *)(param_1 + 0xc) = (int)psVar7[2] << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar7[3] << 0xc;
        }
        else {
          *(int *)(param_1 + 0xc) = (int)*psVar7 << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar7[1] << 0xc;
        }
        *(unsigned short *)(param_1 + 0x52) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x54) != '\0') {
          *(int *)(param_1 + 0xc) = (int)*psVar7 << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar7[1] << 0xc;
        }
        else {
          *(int *)(param_1 + 0xc) = (int)psVar7[2] << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar7[3] << 0xc;
        }
        temp_v5 = *(char *)(param_1 + 0x84) != '\0';
        temp_v2 = 0;
        if (temp_v5) {
          temp_v2 = *(int *)(param_1 + 0x78);
        }
        if ((temp_v5 && temp_v2 != 0) && (*(int *)(temp_v2 + *(short *)(param_1 + 0x7c) * 0x1c) != -1)) {
          temp_v0 = *(short *)(param_1 + 0x7c) + 1;
          *(short *)(param_1 + 0x7c) = temp_v0;
          piVar4 = (int *)(*(int *)(param_1 + 0x78) + temp_v0 * 0x1c);
          temp_v2 = *piVar4;
          if (temp_v2 != -1 && temp_v2 != -3) {
            if (temp_v2 != -2) {
              uiSpriteSetKeyframe(param_1,(int)(short)temp_v2,(int)(char)piVar4[1]);
            }
            else {
              *(unsigned short *)(param_1 + 0x7c) = 0;
              uiSpriteSetKeyframe(param_1,(int)(short)**(unsigned int **)(param_1 + 0x78),
                           (int)*(char *)(*(unsigned int **)(param_1 + 0x78) + 1));
            }
          }
          else {
            *(unsigned char *)(param_1 + 0x86) = 1;
          }
        }
        else {
          *(unsigned char *)(param_1 + 0x86) = 1;
        }
      }
    }
    else {
      temp_v7 = (float)VectorUnsignedToFloat((unsigned int)(unsigned short)psVar7[4],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = VectorFloatToUnsigned(temp_v7 / in_s0,3) & 0xffff;
      if (*(char *)(param_1 + 0x54) != '\0') {
        temp_v2 = __aeabi_idivmod(((int)*psVar7 - (int)psVar7[2]) * 0x1000,temp_v6);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar7[1] - (int)psVar7[3]) * 0x1000,temp_v6);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + temp_v2;
      }
      else {
        temp_v2 = __aeabi_idivmod(((int)psVar7[2] - (int)*psVar7) * 0x1000,temp_v6);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar7[3] - (int)psVar7[1]) * 0x1000,temp_v6);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + temp_v2;
      }
      temp_v5 = *(char *)(param_1 + 0x54) != '\0';
      psVar7 = (short *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 0x50) * 0xc);
      temp_v2 = (int)psVar7[2];
      temp_v3 = (int)*psVar7;
      temp_v4 = temp_v2 - temp_v3;
      if (temp_v5) {
        temp_v4 = temp_v3 - temp_v2;
      }
      if (temp_v5) {
        temp_v2 = temp_v3;
      }
      temp_v3 = *(int *)(param_1 + 0xc) >> 0xc;
      if (temp_v4 >= 1) {
        if (temp_v2 <= temp_v3) {
          *(int *)(param_1 + 0xc) = temp_v2 << 0xc;
        }
      }
      else if (temp_v3 <= temp_v2) {
        *(int *)(param_1 + 0xc) = temp_v2 << 0xc;
      }
      temp_v5 = *(char *)(param_1 + 0x54) != '\0';
      temp_v3 = *(int *)(param_1 + 0x4c) + *(short *)(param_1 + 0x50) * 0xc;
      temp_v2 = (int)*(short *)(temp_v3 + 6);
      temp_v3 = (int)*(short *)(temp_v3 + 2);
      temp_v4 = temp_v2 - temp_v3;
      if (temp_v5) {
        temp_v4 = temp_v3 - temp_v2;
      }
      if (temp_v5) {
        temp_v2 = temp_v3;
      }
      temp_v3 = *(int *)(param_1 + 0x10) >> 0xc;
      if (temp_v4 >= 1) {
        if (temp_v2 <= temp_v3) {
          *(int *)(param_1 + 0x10) = temp_v2 << 0xc;
        }
      }
      else if (temp_v3 <= temp_v2) {
        *(int *)(param_1 + 0x10) = temp_v2 << 0xc;
      }
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
    }
  }
  else {
    *(unsigned char *)(param_1 + 0x86) = 1;
  }
  FUN_001807a0(param_1);
  FUN_00182348(param_1);
  FUN_00181948(param_1);
  temp_v5 = *(char *)(param_1 + 0x86) != '\0';
  temp_v1 = '\0';
  if (temp_v5) {
    temp_v1 = *(char *)(param_1 + 0x87);
  }
  if (temp_v5 && temp_v1 != '\0') {
    temp_v5 = *(char *)(param_1 + 0x88) != '\0';
    temp_v1 = '\0';
    if (temp_v5) {
      temp_v1 = *(char *)(param_1 + 0x89);
    }
    if (temp_v5 && temp_v1 != '\0') {
      *(unsigned char *)(param_1 + 0x8a) = 1;
      *(unsigned char *)(param_1 + 0x85) = 1;
      return (int)*(char *)(param_1 + 0x8a);
    }
  }
  *(unsigned char *)(param_1 + 0x8a) = 0;
  *(unsigned char *)(param_1 + 0x85) = 1;
  return (int)*(char *)(param_1 + 0x8a);
}

} /* extern "C" */
