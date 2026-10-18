/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001caea8` (_code @ 0x1caea8, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001bc2ec(int);


void FUN_001caea8(int param_1,int param_2)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  puVar5 = (unsigned int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x48) = 0x38;
  temp_v0 = *(unsigned int *)(param_2 + 0x34);
  temp_v4 = *(unsigned int *)(param_1 + 0x10) & 0xfffffff0;
  *(unsigned int *)(param_1 + 0x10) = temp_v4;
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x1c) & 0xf00fffff;
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xf800f800;
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x24) & 0xffffffcf;
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) & 0xfff0ffff;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) & 0xf0000000;
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x30) & 0xffc00000;
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) & 0xffc00000;
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0x38) & 0xffc00000;
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_1 + 0x3c) & 0xffc00000;
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_1 + 0x40) & 0xffc00000;
  *puVar5 = temp_v4 | (temp_v0 & 0xf);
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x1c) | 0x900000;
  temp_v4 = *(unsigned int *)(param_1 + 0x20) | (*(unsigned int *)(param_2 + 0x18) & 0x7ff);
  *(unsigned int *)(param_1 + 0x20) = temp_v4;
  *(unsigned int *)(param_1 + 0x20) = temp_v4 | ((*(unsigned int *)(param_2 + 0x1c) & 0xffff07ff) << 0x10);
  if (temp_v0 == 0xc) {
    *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x24) | 0x20;
  }
  temp_v1 = *(int *)(param_1 + 0xc);
  if (temp_v1 != 0) {
    temp_v1 = param_1 + 0xc + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v0 = *(unsigned int *)(temp_v1 + 8);
  temp_v5 = (temp_v0 & 0xff) != 0;
  if (temp_v5) {
    temp_v0 = temp_v0 & 0xff;
  }
  if (temp_v5 && temp_v0 != 1) {
    *(unsigned int *)(param_1 + 0x28) =
         *(unsigned int *)(param_1 + 0x28) | (((*(int *)(param_2 + 0x28) - 1U) & 0xf) << 0x10);
  }
  temp_v0 = 0;
  do {
    while( 1 ) {
      piVar1 = (int *)((temp_v0 & 0xff) * 4 + 0x38 + param_2);
      temp_v1 = *piVar1;
      if (temp_v1 != 0) {
        temp_v1 = (int)piVar1 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = *(int *)(temp_v1 + 0x18);
      if (temp_v2 == 0) {
        temp_v2 = *(int *)(temp_v1 + 0xc);
        if (temp_v2 != 0) {
          temp_v2 = temp_v2 + temp_v1 + 0xc;
        }
        else {
          temp_v2 = 0;
        }
      }
      if (temp_v0 != 0) break;
      temp_v4 = FUN_001bc2ec(temp_v2);
      temp_v0 = 1;
      *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | ((temp_v4 & 0x7fffffff) >> 3);
    }
    temp_v4 = FUN_001bc2ec(temp_v2);
    temp_v3 = temp_v0 + 1;
    puVar5[temp_v0 + 7] = ((temp_v4 >> 3) & 0xe03fffff) | puVar5[temp_v0 + 7];
    temp_v0 = temp_v3;
  } while ((int)temp_v3 < 6);
  return;
}
