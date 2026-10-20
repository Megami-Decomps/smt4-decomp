/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d84d8` (_code @ 0x3d84d8, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003d84d8(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  
  if (param_3 == 1) {
    puVar1 = (unsigned int *)(param_1 + 0x5ac);
  }
  else if (param_3 == 2) {
    puVar1 = (unsigned int *)(param_1 + 0x5f0);
  }
  else {
    puVar1 = (unsigned int *)(param_1 + 0x568);
  }
  switch(param_2) {
  case 0:
    puVar1[0x10] = 0x420c0000;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xbf800000;
    *puVar1 = 0;
    puVar1[1] = 0x40c9999a;
    puVar1[2] = 0x42320000;
    puVar1[0xc] = 0x42320000;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    return;
  case 1:
  case 4:
    puVar1[0x10] = 0x420c0000;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xbf800000;
    *puVar1 = 0;
    puVar1[1] = 0x40133333;
    puVar1[2] = 0x425c0000;
    puVar1[0xc] = 0x425c0000;
    puVar1[0xd] = 0xc0f66666;
    puVar1[0xe] = 0x43340000;
    return;
  case 2:
    puVar1[0x10] = 0x420c0000;
    puVar1[6] = 0x3f4ccccd;
    puVar1[7] = 0;
    puVar1[8] = 0xbf19999a;
    *puVar1 = 0x3f333333;
    puVar1[1] = 0x40a9999a;
    puVar1[2] = 0x421e6666;
    puVar1[0xe] = 0x43340000;
    puVar1[0xc] = 0x421e6666;
    puVar1[0xd] = 0xc0c66666;
    return;
  case 3:
    puVar1[0x10] = 0x41f00000;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xbf800000;
    *puVar1 = 0x3fe66666;
    puVar1[1] = 0x40800000;
    puVar1[2] = 0x423a0000;
    puVar1[0xe] = 0x43340000;
    puVar1[0xc] = 0x423a0000;
    puVar1[0xd] = 0xc11e6666;
    return;
  case 5:
    puVar1[0x10] = 0x420c0000;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xbf800000;
    *puVar1 = 0;
    puVar1[1] = 0x40133333;
    puVar1[2] = 0x42553333;
    puVar1[0xc] = 0x42553333;
    puVar1[0xd] = 0xc0f66666;
    puVar1[0xe] = 0x43340000;
    return;
  default:
    return;
  }
}

} /* extern "C" */
