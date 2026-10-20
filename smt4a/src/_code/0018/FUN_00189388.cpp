/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189388` (_code @ 0x189388, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e2a8(void);
int FUN_0016e7c0(...);
int FUN_00188444(void);
int vcallSlot12IfValid(unsigned int);
int FUN_001886bc(void);
int FUN_00188e44(...);
int sysFatalBreak(void);

typedef int romwright_code(...);
extern unsigned char DAT_005c0adc; /* 0x5c0adc */

/* Supplied declaration required: FUN_0016e2a8. */
/* Supplied declaration required: FUN_0016e7c0. */
/* Supplied declaration required: FUN_00188444. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_00188e44. */
/* Supplied declaration required: sysFatalBreak. */


unsigned int FUN_00189388(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  temp_v0 = FUN_00188e44();
  temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
  if (temp_v1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        sysFatalBreak();
      }
      vcallSlot12IfValid(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v1 < 0) {
      FUN_0016e7c0(temp_v1,0x1893f8);
    }
  }
  if (*param_2 != 0x4f00) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        sysFatalBreak();
      }
      vcallSlot12IfValid(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    temp_v2 = (*(unsigned int *)((unsigned char *)&DAT_005c0adc + 0x4));
    FUN_001886bc();
    FUN_00188444();
    if ((((temp_v2 & 0x3fc00) != 0x4400) || ((temp_v2 & 0x3ff) < 100)) || ((temp_v2 & 0x3ff) >= 0xb4)) {
      if ((int)temp_v2 < 0) {
        FUN_0016e7c0();
      }
    }
    FUN_0016e2a8();
    temp_v0 = 1;
    FUN_00188e44(param_1);
    temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
    if (temp_v1 < 0) {
      if ((param_1[2] & 0xfffffffeU) != 0) {
        if ((param_1[2] & 1U) != 0) {
          sysFatalBreak();
        }
        vcallSlot12IfValid(param_1[2] & 0xfffffffe);
        param_1[2] = 0;
      }
      if (temp_v1 < 0) {
        FUN_0016e7c0(temp_v1,0x1894e4);
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
