/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c80f0` (_code @ 0x4c80f0, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_003f0e20(int, int);

extern int btlGetMainState(void);
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_0017760c(void);
extern int FUN_001ab854(int);
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004c80f0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = btlGetMainState();
  if (param_1 < 0x6d) {
    temp_v4 = temp_v2;
    FUN_001568f8(temp_v2,param_1);
    if (temp_v4 != 0) {
      if (param_2 != 0) {
        if (param_2 == 1) {
          param_3 = *(int *)(temp_v4 + 0xfc) + param_3;
          if (param_3 < 0) {
            param_3 = 0;
          }
          if (*(int *)(temp_v4 + 0x100) < param_3) {
            param_3 = *(int *)(temp_v4 + 0x100);
          }
          *(int *)(temp_v4 + 0xfc) = param_3;
        }
      }
      else {
        param_3 = *(int *)(temp_v4 + 0xf4) + param_3;
        if (param_3 < 0) {
          param_3 = 0;
        }
        if (*(int *)(temp_v4 + 0xf8) < param_3) {
          param_3 = *(int *)(temp_v4 + 0xf8);
        }
        *(int *)(temp_v4 + 0xf4) = param_3;
      }
      FUN_003f0e20(temp_v2,param_1);
      if (*(int *)(temp_v2 + 0x3f8) == 0) {
        if (*(int *)(temp_v2 + 0x3fc) != 0) {
          *(short *)(*(int *)(temp_v2 + 0x3fc) + 0x2a) = (short)*(unsigned int *)(temp_v4 + 0xf4);
          temp_v1 = (unsigned short)*(unsigned int *)(temp_v4 + 0xfc);
          temp_v2 = *(int *)(temp_v2 + 0x3fc);
        }
        else {
          if (*(int *)(temp_v2 + 0x400) == 0) {
            return;
          }
          temp_v3 = FUN_0015688c();
          if (temp_v3 == 0) {
            return;
          }
          if (*(int *)(temp_v2 + 0x400) != temp_v3) {
            *(short *)(temp_v3 + 0x2a) = (short)*(unsigned int *)(temp_v4 + 0xf4);
            *(short *)(temp_v3 + 0x2c) = (short)*(unsigned int *)(temp_v4 + 0xfc);
            return;
          }
          *(short *)(*(int *)(temp_v2 + 0x400) + 0x2a) = (short)*(unsigned int *)(temp_v4 + 0xf4);
          temp_v1 = (unsigned short)*(unsigned int *)(temp_v4 + 0xfc);
          temp_v2 = *(int *)(temp_v2 + 0x400);
        }
        *(unsigned short *)(temp_v2 + 0x2c) = temp_v1;
        return;
      }
      *(short *)(*(int *)(temp_v2 + 0x3f8) + 0x2a) = (short)*(unsigned int *)(temp_v4 + 0xf4);
      *(short *)(*(int *)(temp_v2 + 0x3f8) + 0x2c) = (short)*(unsigned int *)(temp_v4 + 0xfc);
    }
  }
  else {
    temp_v2 = FUN_001ab854(param_1 - 0x6d);
    if (param_2 == 0) {
      temp_v0 = *(short *)(temp_v2 + 0x2a);
      temp_v4 = FUN_0017760c();
      param_3 = temp_v0 + param_3;
      if (param_3 < 0) {
        param_3 = 0;
      }
      if (temp_v4 < param_3) {
        param_3 = temp_v4;
      }
      *(short *)(temp_v2 + 0x2a) = (short)param_3;
      return;
    }
    if (param_2 == 1) {
      param_3 = *(short *)(temp_v2 + 0x2c) + param_3;
      if (param_3 < 0) {
        param_3 = 0;
      }
      if (*(short *)(temp_v2 + 0x10) < param_3) {
        param_3 = (int)*(short *)(temp_v2 + 0x10);
      }
      *(short *)(temp_v2 + 0x2c) = (short)param_3;
      return;
    }
  }
  return;
}

} /* extern "C" */
