/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c728` (_code @ 0x39c728, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern float DAT_0044cdc8; /* 0x44cdc8 */
extern signed char DAT_0049f934; /* 0x49f934 */

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
/* Supplied declaration required: FUN_002319a4. */
extern float *FUN_00231dc4(int);
extern int FUN_002bffd8(float *, float *);
/* Supplied declaration required: FUN_0039f84c. */


void FUN_0039c728(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float in_s0;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v5 = 0;
  temp_v1 = param_1 + 0x162;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) {
    temp_v0 = FUN_002bffd8(&temp_v7,&temp_v6);
    if ((temp_v0 == 0) || (DAT_0049f934 != '\0')) {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
      if (*(char *)(param_1 + 0x54) >= '\x03') {
        *(unsigned int *)(param_1 + 0x3c) = temp_v5;
        *(unsigned int *)(param_1 + 0x40) = temp_v5;
      }
      else {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50);
      }
    }
    else {
      FUN_0039f84c(temp_v1);
      temp_v3 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (temp_v3 - *(float *)(param_1 + 0x2c)) / in_s0 + *(float *)(param_1 + 0x34);
      temp_v3 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (temp_v3 - *(float *)(param_1 + 0x30)) / in_s0 + *(float *)(param_1 + 0x38);
      FUN_002319a4(temp_v1,&temp_v8);
      temp_v3 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x44) == temp_v3) << 0x1e);
      if (romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0)) {
        temp_v3 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x48) == temp_v3) << 0x1e);
        if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0)) goto LAB_0039c918;
        if (*(char *)(param_1 + 0x54) < 'c') {
          *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
        }
      }
      else {
LAB_0039c918:
        temp_v4 = VectorSignedToFloat(temp_v7,(unsigned char)(temp_v2 >> 0x16) & 3);
        *(unsigned char *)(param_1 + 0x54) = 0;
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
        *(unsigned int *)(param_1 + 0x44) = temp_v4;
        temp_v4 = VectorSignedToFloat(temp_v6,(unsigned char)(temp_v2 >> 0x16) & 3);
        *(unsigned int *)(param_1 + 0x48) = temp_v4;
      }
      *(unsigned char *)(param_1 + 0x5a8d) = 1;
    }
    if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) {
      return;
    }
  }
  temp_v3 = DAT_0044cdc8;
  if ((int)romwright_fabs_4(*(float *)(param_1 + 0x3c)) < 0x3f000001) {
    if ((int)romwright_fabs_4(*(float *)(param_1 + 0x40)) < 0x3f000001) {
      *(unsigned int *)(param_1 + 0x3c) = temp_v5;
      *(unsigned int *)(param_1 + 0x40) = temp_v5;
      return;
    }
  }
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * DAT_0044cdc8;
  temp_v3 = *(float *)(param_1 + 0x40) * temp_v3;
  *(float *)(param_1 + 0x40) = temp_v3;
  FUN_0039f84c(temp_v1);
  pfVar2 = (float *)FUN_00231dc4(temp_v1);
  temp_v6 = *(float *)(param_1 + 0x3c) / temp_v3 + *pfVar2;
  temp_v7 = *(float *)(param_1 + 0x40) / temp_v3 + pfVar2[1];
  FUN_002319a4(temp_v1,&temp_v6);
  *(unsigned char *)(param_1 + 0x5a8d) = 1;
  return;
}
