/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ac83c` (_code @ 0x4ac83c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00521d14. */
/* Supplied declaration required: FUN_00521d90. */


unsigned int FUN_004ac83c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  
  if (param_1[0x12] == 0) {
    if (param_1[10] != 0) {
      puVar1 = param_1 + 0x11;
      puVar3 = (unsigned int *)((param_1[10] * 0x10 - 0x10) + param_1[8]);
      if (puVar1 != puVar3) {
        puVar5 = (unsigned int *)param_1[0x13];
        if (puVar5 != (unsigned int *)0x0 && puVar5 != puVar1) {
          puVar5[3] = param_1[0x14];
          *(unsigned int *)(param_1[0x14] + 8) = param_1[0x13];
          param_1[0x13] = 0;
          param_1[0x14] = 0;
        }
        param_1[0x12] = 0;
        param_1[0x12] = puVar3[1];
        temp_v2 = puVar3[3];
        param_1[0x14] = temp_v2;
        *(unsigned int **)(temp_v2 + 8) = puVar1;
        param_1[0x13] = (unsigned int)puVar3;
        puVar3[3] = (unsigned int)puVar1;
      }
      temp_v3 = param_1[10];
      temp_v0 = param_1[8];
      temp_v1 = (temp_v3 * 0x10 - 0x10) + temp_v0;
      temp_v2 = ((temp_v1 + 0x10) - temp_v0) >> 4;
      FUN_00521d90(temp_v0 + ((temp_v1 - temp_v0) >> 4) * 0x10,temp_v0 + temp_v2 * 0x10,temp_v3 - temp_v2);
      FUN_00521d14(param_1 + 7,temp_v3 - 1,param_1[10]);
      param_1[10] = temp_v3 - 1;
      *(unsigned int *)(param_1[0x12] + 8) = 0;
      *(unsigned int *)(param_1[0x12] + 0xc) = 0;
      *(unsigned char *)(param_1[0x12] + 0x11) = 0;
    }
    else {
      puVar1 = param_1 + 0x11;
      temp_v2 = (*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x18);
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 8) = 0;
        *(unsigned int *)(temp_v2 + 0xc) = 0;
        *(unsigned char *)(temp_v2 + 0x11) = 0;
      }
      puVar3 = (unsigned int *)param_1[0x13];
      if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
        if (param_1[0x12] != 0) {
          (**(romwright_code **)(*(int *)*puVar1 + 4))();
        }
      }
      else {
        puVar3[3] = param_1[0x14];
        *(unsigned int *)(param_1[0x14] + 8) = param_1[0x13];
        param_1[0x13] = 0;
        param_1[0x14] = 0;
      }
      param_1[0x12] = temp_v2;
      param_1[0x14] = (unsigned int)puVar1;
      param_1[0x13] = (unsigned int)puVar1;
    }
    if (param_1[0x12] == 0) {
      return 0;
    }
  }
  return 1;
}
