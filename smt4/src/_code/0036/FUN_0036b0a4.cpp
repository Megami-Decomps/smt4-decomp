/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036b0a4` (_code @ 0x36b0a4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00421468; /* 0x421468 */
extern unsigned char DAT_00422058; /* 0x422058 */


unsigned int * FUN_0036b0a4(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  
  *param_1 = param_2;
  temp_v1 = param_1[0x19];
  temp_v3 = param_1[0x1a];
  puVar1 = param_1;
  if (temp_v1 < temp_v3) {
    puVar1 = (unsigned int *)((temp_v3 - temp_v1) * 0x2000000);
  }
  temp_v2 = (int)(temp_v3 - temp_v1) >> 6;
  if (temp_v1 < temp_v3) {
    temp_v3 = (unsigned int)puVar1 >> 0x1f;
  }
  else {
    temp_v3 = 0;
  }
  temp_v0 = temp_v3 + 1;
  if (temp_v0 < temp_v2 + 1) {
    do {
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < temp_v2 + 1);
  }
  param_1[0x1a] = temp_v1;
  if ((int *)param_1[0x18] != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x18] + 0xc))();
  }
  param_1[0xc] = (unsigned int)&DAT_00422058;
  *param_1 = (unsigned int)&DAT_00421468;
  temp_v2 = param_1[9];
  param_1[10] = temp_v2;
  piVar6 = (int *)param_1[8];
  if (piVar6 != (int *)0x0) {
    temp_v2 = param_1[9];
  }
  if (piVar6 != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))(piVar6);
  }
  temp_v2 = param_1[5];
  piVar6 = (int *)param_1[4];
  param_1[6] = temp_v2;
  if (piVar6 != (int *)0x0) {
    temp_v2 = param_1[5];
  }
  if (piVar6 != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))(piVar6);
  }
  return param_1;
}

} /* extern "C" */
