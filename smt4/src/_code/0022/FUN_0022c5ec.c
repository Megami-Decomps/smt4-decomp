/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c5ec` (_code @ 0x22c5ec, 0x1e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00422548; /* 0x422548 */

/* Supplied declaration required: FUN_0022c0a4. */


unsigned int * FUN_0022c5ec(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  
  temp_v1 = param_1[4];
  *param_1 = (unsigned int)&DAT_00422548;
  if (temp_v1 != 0) {
    if (0 < *(int *)(temp_v1 + 0x68)) {
      for (temp_v0 = *(int *)(temp_v1 + 0x68) >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      }
    }
    (**(romwright_code **)(**(int **)(temp_v1 + 0x5c) + 4))();
    *(unsigned int *)(temp_v1 + 0x60) = 0;
    *(unsigned int *)(temp_v1 + 100) = 0;
    FUN_0022c0a4(temp_v1 + 0x4c);
    temp_v0 = *(int *)(temp_v1 + 0x3c);
    puVar4 = *(unsigned int **)(temp_v1 + 0x34);
    puVar1 = puVar4;
    while (puVar1 < puVar4 + temp_v0 * 4) {
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
    (**(romwright_code **)(**(int **)(temp_v1 + 0x30) + 4))
              (*(int **)(temp_v1 + 0x30),*(unsigned int *)(temp_v1 + 0x34));
    *(unsigned int *)(temp_v1 + 0x34) = 0;
    *(unsigned int *)(temp_v1 + 0x38) = 0;
    temp_v0 = *(int *)(temp_v1 + 0x2c);
    puVar4 = *(unsigned int **)(temp_v1 + 0x24);
    puVar1 = puVar4;
    while (puVar1 < puVar4 + temp_v0 * 4) {
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
    (**(romwright_code **)(**(int **)(temp_v1 + 0x20) + 4))
              (*(int **)(temp_v1 + 0x20),*(unsigned int *)(temp_v1 + 0x24));
    *(unsigned int *)(temp_v1 + 0x24) = 0;
    *(unsigned int *)(temp_v1 + 0x28) = 0;
    if (0 < *(int *)(temp_v1 + 0x10)) {
      for (temp_v0 = *(int *)(temp_v1 + 0x10) >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      }
    }
    (**(romwright_code **)(**(int **)(temp_v1 + 4) + 4))();
    *(unsigned int *)(temp_v1 + 8) = 0;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    (**(romwright_code **)(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[4]);
    param_1[4] = 0;
  }
  return param_1;
}
