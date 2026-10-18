/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b370` (_code @ 0x39b370, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern float DAT_0044cdc8; /* 0x44cdc8 */
extern unsigned char DAT_0049f934; /* 0x49f934 */

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
/* Supplied declaration required: FUN_00231420. */
/* Supplied declaration required: FUN_00231434. */
extern int FUN_002bffd8(unsigned int *, int *);
/* Supplied declaration required: FUN_0039b648. */
/* Supplied declaration required: FUN_003c2e0c. */
extern unsigned int FUN_003c2e14(unsigned int *, int *);
/* Supplied declaration required: NaviMain_GetCursorPos. */
/* Supplied declaration required: NaviMain_SetCursorPos. */


unsigned int FUN_0039b370(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  float *pfVar4;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *temp_v9;
  unsigned int *temp_v10;
  int temp_v11;
  int temp_v12;
  int uStack_28;
  unsigned int temp_v13 [5];
  
  temp_v2 = param_1;
  FUN_0039b648();
  if (temp_v2 != 0) {
    return 0;
  }
  temp_v8 = 0;
  temp_v2 = param_1 + 0x162;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) {
    temp_v0 = FUN_002bffd8((unsigned int *)&temp_v12,&temp_v11);
    if ((temp_v0 == 0) || (DAT_0049f934 != 0)) {
      temp_v1 = FUN_003c2e14((unsigned int *)&temp_v12,&temp_v11);
      temp_v3 = temp_v1 == 0;
      if (temp_v3) {
        temp_v1 = (unsigned int)DAT_0049f934;
      }
      if (!temp_v3 || temp_v1 != 0) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffdffff;
        if (*(char *)(param_1 + 0x54) >= '\x03') {
          *(unsigned int *)(param_1 + 0x3c) = temp_v8;
          *(unsigned int *)(param_1 + 0x40) = temp_v8;
        }
        else {
          *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x4c);
          *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50);
        }
      }
    }
    else {
      temp_v4 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (unsigned int *)(*(float *)(param_1 + 0x34) + (temp_v4 - *(float *)(param_1 + 0x2c)));
      temp_v4 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (unsigned int *)(*(float *)(param_1 + 0x38) + (temp_v4 - *(float *)(param_1 + 0x30)));
      NaviMain_SetCursorPos(temp_v2,&temp_v9);
      temp_v4 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x44) == temp_v4) << 0x1e);
      if (romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
        temp_v4 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(temp_v1 >> 0x16) & 3);
        temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x48) == temp_v4) << 0x1e);
        if (romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
          if (*(char *)(param_1 + 0x54) < 'c') {
            *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
          }
        }
        else {
          temp_v5 = VectorSignedToFloat(temp_v12,(unsigned char)(temp_v1 >> 0x16) & 3);
          *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
          *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
          *(unsigned int *)(param_1 + 0x44) = temp_v5;
          temp_v5 = VectorSignedToFloat(temp_v11,(unsigned char)(temp_v1 >> 0x16) & 3);
          *(unsigned int *)(param_1 + 0x48) = temp_v5;
        }
      }
      else {
        temp_v5 = VectorSignedToFloat(temp_v12,(unsigned char)(temp_v1 >> 0x16) & 3);
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
        *(unsigned int *)(param_1 + 0x44) = temp_v5;
        temp_v5 = VectorSignedToFloat(temp_v11,(unsigned char)(temp_v1 >> 0x16) & 3);
        *(unsigned int *)(param_1 + 0x48) = temp_v5;
      }
    }
  }
  else {
    temp_v10 = temp_v13;
    temp_v9 = (unsigned int *)&uStack_28;
    FUN_00231434(0x1c,0xfa4,&temp_v11,&temp_v12);
    FUN_00231420(temp_v11,temp_v12,uStack_28,temp_v13[0]);
    if ((temp_v11 != 0) && (DAT_0049f934 == 0)) {
      FUN_003c2e0c(&temp_v9,&temp_v10);
      temp_v5 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x2c) = temp_v5;
      temp_v5 = VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x30) = temp_v5;
      puVar3 = (unsigned int *)NaviMain_GetCursorPos(temp_v2);
      temp_v5 = puVar3[1];
      *(unsigned int *)(param_1 + 0x34) = *puVar3;
      *(unsigned int *)(param_1 + 0x38) = temp_v5;
      temp_v6 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x44) = temp_v6;
      temp_v7 = VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x48) = temp_v7;
      *(unsigned int *)(param_1 + 0x4c) = temp_v5;
      *(unsigned int *)(param_1 + 0x50) = temp_v6;
      *(unsigned char *)(param_1 + 0x54) = 0;
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x20000;
    }
  }
  temp_v4 = DAT_0044cdc8;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) == 0) {
    if ((int)romwright_fabs_4(*(float *)(param_1 + 0x3c)) < 0x3f000001) {
      if ((int)romwright_fabs_4(*(float *)(param_1 + 0x40)) < 0x3f000001) {
        *(unsigned int *)(param_1 + 0x3c) = temp_v8;
        *(unsigned int *)(param_1 + 0x40) = temp_v8;
        return 0;
      }
    }
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * DAT_0044cdc8;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * temp_v4;
    pfVar4 = (float *)NaviMain_GetCursorPos(temp_v2);
    temp_v9 = (unsigned int *)(*pfVar4 + *(float *)(param_1 + 0x3c));
    temp_v10 = (unsigned int *)(pfVar4[1] + *(float *)(param_1 + 0x40));
    NaviMain_SetCursorPos(temp_v2,&temp_v9);
  }
  return 0;
}
