/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423efc` (_code @ 0x423efc, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00557f7c; /* 0x557f7c */


unsigned int FUN_00423efc(int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  if (*(int *)(param_3 + 4) != 0) {
    temp_v0 = 0;
  }
  else {
    piVar2 = (int *)(**(romwright_code **)*param_2)(param_2,8,4);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      *piVar2 = (int)&DAT_00557f7c;
    }
    *param_4 = (unsigned int)piVar2;
    temp_v1 = *(unsigned int *)(param_3 + 8);
    temp_v2 = temp_v1 < 2;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 4);
    }
    if (!(temp_v2 && temp_v1 == 0)) {
      (**(romwright_code **)(*piVar2 + 8))
                (piVar2,*(unsigned int *)(param_3 + 0x14),*(unsigned int *)(param_3 + 0x18),6);
    }
    else {
      (**(romwright_code **)(*piVar2 + 8))
                (piVar2,*(unsigned int *)(param_3 + 0x14),*(unsigned int *)(param_3 + 0x18),0xc);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
