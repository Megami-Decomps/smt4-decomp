/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001397b0` (_code @ 0x1397b0, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_00471b60; /* 0x471b60 */

/* Supplied declaration required: FUN_00128098. */
/* Supplied declaration required: FUN_00139268. */
/* Supplied declaration required: FUN_002a882c. */
/* Supplied declaration required: FUN_002adb14. */
/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_002bb988. */
/* Supplied declaration required: FUN_002bce48. */


unsigned int FUN_001397b0(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  temp_v0 = FUN_00139268();
  temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
  if (temp_v1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002bce48();
      }
      FUN_002b93f0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v1 < 0) {
      FUN_002bb988(temp_v1,0x139820);
    }
  }
  if (*param_2 != 0x4f00) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002bce48();
      }
      FUN_002b93f0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    temp_v2 = DAT_00471b60;
    FUN_002adb14();
    FUN_002a882c();
    if ((((temp_v2 & 0x3fc00) != 0x4400) || ((temp_v2 & 0x3ff) < 100)) || ((temp_v2 & 0x3ff) >= 0xb4)) {
      if ((int)temp_v2 < 0) {
        FUN_002bb988();
      }
    }
    FUN_00128098();
    temp_v0 = 1;
    FUN_00139268(param_1);
    temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
    if (temp_v1 < 0) {
      if ((param_1[2] & 0xfffffffeU) != 0) {
        if ((param_1[2] & 1U) != 0) {
          FUN_002bce48();
        }
        FUN_002b93f0(param_1[2] & 0xfffffffe);
        param_1[2] = 0;
      }
      if (temp_v1 < 0) {
        FUN_002bb988(temp_v1,0x13990c);
      }
    }
  }
  return temp_v0;
}
