/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00449ce0` (_code @ 0x449ce0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b884; /* 0x55b884 */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */


unsigned int * FUN_00449ce0(unsigned int *param_1)

{
  int temp_v0;
  int *piVar2;
  
  *param_1 = (unsigned int)&DAT_0055b884;
  param_1[0xc] = (unsigned int)&DAT_0055c4f0;
  temp_v0 = param_1[9];
  param_1[10] = temp_v0;
  piVar2 = (int *)param_1[8];
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  }
  temp_v0 = param_1[5];
  piVar2 = (int *)param_1[4];
  param_1[6] = temp_v0;
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[5];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  }
  return param_1;
}

} /* extern "C" */
