/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f800` (_code @ 0x34f800, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00420a88; /* 0x420a88 */
extern unsigned char DAT_00420aac; /* 0x420aac */
extern unsigned char DAT_00420b04; /* 0x420b04 */


unsigned int FUN_0034f800(unsigned int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = *(int *)(param_3 + 4);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        *param_4 = 0;
        return 1;
      }
      if (temp_v0 != 4) {
        return 0;
      }
      piVar1 = (int *)(**(romwright_code **)*param_2)(param_2,8,4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&DAT_00420a88;
        piVar1[1] = 0;
      }
    }
    else {
      piVar1 = (int *)(**(romwright_code **)*param_2)(param_2,8,4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&DAT_00420aac;
        piVar1[1] = 0;
      }
    }
  }
  else {
    piVar1 = (int *)(**(romwright_code **)*param_2)(param_2,8,4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)&DAT_00420b04;
      piVar1[1] = 0;
    }
  }
  *param_4 = (unsigned int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 8))(piVar1,*(unsigned int *)(param_3 + 8),*(unsigned int *)(param_3 + 0xc));
  }
  return 1;
}

} /* extern "C" */
