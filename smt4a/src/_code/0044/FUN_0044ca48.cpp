/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044ca48` (_code @ 0x44ca48, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b884; /* 0x55b884 */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */


unsigned int * FUN_0044ca48(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  
  *param_1 = param_2;
  temp_v2 = param_1[0x19];
  temp_v0 = param_1[0x1a];
  temp_v3 = temp_v0 - param_1[0x19];
  if (temp_v2 < (unsigned int)param_1[0x1a]) {
    temp_v0 = temp_v3 * 0x2000000;
  }
  temp_v3 = temp_v3 >> 6;
  if (temp_v2 < (unsigned int)param_1[0x1a]) {
    temp_v0 = temp_v0 >> 0x1f;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = temp_v0 + 1;
  if (temp_v1 < temp_v3 + 1) {
    do {
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < temp_v3 + 1);
  }
  param_1[0x1a] = temp_v2;
  if ((int *)param_1[0x18] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x18] + 0xc))();
  }
  param_1[0xc] = (unsigned int)&DAT_0055c4f0;
  *param_1 = (unsigned int)&DAT_0055b884;
  temp_v3 = param_1[9];
  param_1[10] = temp_v3;
  piVar5 = (int *)param_1[8];
  if (piVar5 != (int *)0x0) {
    temp_v3 = param_1[9];
  }
  if (piVar5 != (int *)0x0 && temp_v3 != 0) {
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5);
  }
  temp_v3 = param_1[5];
  piVar5 = (int *)param_1[4];
  param_1[6] = temp_v3;
  if (piVar5 != (int *)0x0) {
    temp_v3 = param_1[5];
  }
  if (piVar5 != (int *)0x0 && temp_v3 != 0) {
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5);
  }
  return param_1;
}

} /* extern "C" */
