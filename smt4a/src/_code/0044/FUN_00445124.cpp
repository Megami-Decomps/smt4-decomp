/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00445124` (_code @ 0x445124, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b574; /* 0x55b574 */
extern unsigned char DAT_0055b884; /* 0x55b884 */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */


unsigned int * FUN_00445124(unsigned int *param_1)

{
  int *piVar1;
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b574;
  if ((*(char *)((int)param_1 + 0x59) == '\0') && (param_1[0x17] != 0)) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  piVar1 = (int *)param_1[0x19];
  temp_v0 = param_1[0x1a];
  param_1[0x1b] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0x1a];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  param_1[0xc] = (unsigned int)&DAT_0055c4f0;
  *param_1 = (unsigned int)&DAT_0055b884;
  temp_v0 = param_1[9];
  param_1[10] = temp_v0;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))(piVar1);
  }
  temp_v0 = param_1[5];
  piVar1 = (int *)param_1[4];
  param_1[6] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[5];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))(piVar1);
  }
  return param_1;
}

} /* extern "C" */
