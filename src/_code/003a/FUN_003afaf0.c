/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afaf0` (_code @ 0x3afaf0, 0x1f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0022c968. */


unsigned int FUN_003afaf0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  
  if (param_1[0x14] == 0) {
    if (param_1[0xb] != 0) {
      puVar1 = param_1 + 0x13;
      puVar3 = (unsigned int *)((param_1[0xb] * 0x10 - 0x10) + param_1[9]);
      if (puVar1 != puVar3) {
        puVar5 = (unsigned int *)param_1[0x15];
        if (puVar5 != (unsigned int *)0x0 && puVar5 != puVar1) {
          puVar5[3] = param_1[0x16];
          *(unsigned int *)(param_1[0x16] + 8) = param_1[0x15];
          param_1[0x15] = 0;
          param_1[0x16] = 0;
        }
        param_1[0x14] = 0;
        param_1[0x14] = puVar3[1];
        temp_v2 = puVar3[3];
        param_1[0x16] = temp_v2;
        *(unsigned int **)(temp_v2 + 8) = puVar1;
        param_1[0x15] = (unsigned int)puVar3;
        puVar3[3] = (unsigned int)puVar1;
      }
      temp_v3 = param_1[0xb];
      temp_v0 = param_1[9];
      temp_v1 = (temp_v3 * 0x10 - 0x10) + temp_v0;
      temp_v2 = ((temp_v1 + 0x10) - temp_v0) >> 4;
      FUN_0022c968(param_1 + 8,(temp_v1 - temp_v0) >> 4,temp_v2,temp_v3 - temp_v2);
      temp_v0 = param_1[9];
      temp_v2 = param_1[0xb];
      puVar1 = (unsigned int *)(temp_v0 + (temp_v3 - 1) * 0x10);
      while (puVar1 < (unsigned int *)(temp_v0 + temp_v2 * 0x10)) {
        puVar3 = (unsigned int *)puVar1[2];
        if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
          if (puVar1[1] != 0) {
            (**(romwright_code **)(*(int *)*puVar1 + 4))();
          }
        }
        else {
          puVar3[3] = puVar1[3];
          *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        puVar1[1] = 0;
        puVar1 = puVar1 + 4;
      }
      param_1[0xb] = temp_v3 - 1;
      *(unsigned int *)(param_1[0x14] + 8) = 0;
      *(unsigned int *)(param_1[0x14] + 0xc) = 0;
      *(unsigned char *)(param_1[0x14] + 0x14) = 0;
    }
    else {
      puVar1 = param_1 + 0x13;
      temp_v2 = (*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x18);
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 8) = 0;
        *(unsigned int *)(temp_v2 + 0xc) = 0;
        *(unsigned char *)(temp_v2 + 0x14) = 0;
      }
      puVar3 = (unsigned int *)param_1[0x15];
      if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
        if (param_1[0x14] != 0) {
          (**(romwright_code **)(*(int *)*puVar1 + 4))();
        }
      }
      else {
        puVar3[3] = param_1[0x16];
        *(unsigned int *)(param_1[0x16] + 8) = param_1[0x15];
        param_1[0x15] = 0;
        param_1[0x16] = 0;
      }
      param_1[0x14] = temp_v2;
      param_1[0x16] = (unsigned int)puVar1;
      param_1[0x15] = (unsigned int)puVar1;
      if (param_1[0x14] == 0) {
        return 0;
      }
    }
  }
  return 1;
}
