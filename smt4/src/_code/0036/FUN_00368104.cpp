/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368104` (_code @ 0x368104, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00421004; /* 0x421004 */


int * FUN_00368104(int *param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  *param_1 = param_2;
  param_1[0xe] = param_1[0xd];
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[0xd];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[8];
  temp_v0 = param_1[9];
  param_1[10] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  *param_1 = (int)&DAT_00421004;
  temp_v0 = param_1[5];
  param_1[6] = temp_v0;
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[5];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))(piVar1);
  }
  return param_1;
}

} /* extern "C" */
