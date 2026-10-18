/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa9a0` (_code @ 0x3fa9a0, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003fa9a0(unsigned int *param_1)

{
  unsigned char *puVar1;
  unsigned int temp_v0;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned char *)param_1[2];
  if (puVar1 != (unsigned char *)0x0) {
    param_1[2] = *(unsigned int *)(puVar1 + 0xc);
  }
  else {
    puVar1 = (unsigned char *)param_1[3];
    if (puVar1 != (unsigned char *)param_1[4]) {
      param_1[3] = (unsigned int)(puVar1 + 0x24);
    }
    else {
      if (param_1[1] == 0) {
        temp_v2 = 0x20;
      }
      else {
        temp_v0 = *(unsigned int *)(param_1[1] + 4);
        temp_v2 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
        if (temp_v2 < temp_v0 + 0x20) {
          temp_v2 = temp_v0 + 0x20;
        }
      }
      piVar3 = (int *)*param_1;
      puVar4 = (unsigned int *)(**(romwright_code **)*piVar3)(piVar3,0xc);
      if (puVar4 == (unsigned int *)0x0) {
        (**(romwright_code **)(*piVar3 + 8))
                  (piVar3,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",0xc);
      }
      piVar3 = (int *)*param_1;
      temp_v1 = (**(romwright_code **)*piVar3)();
      if (temp_v1 == 0) {
        (**(romwright_code **)(*piVar3 + 8))
                  (piVar3,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                   temp_v2 * 0x24);
      }
      puVar4[2] = temp_v1;
      *puVar4 = param_1[1];
      puVar4[1] = temp_v2;
      param_1[1] = (unsigned int)puVar4;
      puVar1 = (unsigned char *)puVar4[2];
      param_1[4] = (unsigned int)(puVar1 + temp_v2 * 0x24);
      param_1[3] = (unsigned int)(puVar1 + 0x24);
    }
  }
  *(unsigned int *)(puVar1 + 4) = 0;
  *(unsigned int *)(puVar1 + 8) = 0;
  *(unsigned int *)(puVar1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}
