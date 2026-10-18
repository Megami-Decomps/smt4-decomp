/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d618` (_code @ 0x12d618, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004216bc; /* 0x4216bc */


void FUN_0012d618(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x20,4);
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x14,4);
  temp_v0 = 0x14;
  puVar3 = puVar2;
  do {
    temp_v0 = temp_v0 - 1;
    *(unsigned char *)puVar3 = 0;
    puVar3 = (unsigned int *)((int)puVar3 + 1);
  } while (temp_v0 != 0);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  *puVar2 = 0x20000000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  puVar2[4] = 0x3f490fdb;
  puVar2[3] = 0x3f800000;
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar1 + 2) = 0;
    *(unsigned char *)((int)puVar1 + 9) = 1;
    puVar1[3] = 0x3f000000;
    puVar1[4] = 0x3f000000;
    puVar1[5] = 0x3f000000;
    puVar1[6] = 0x3f000000;
    puVar1[7] = (unsigned int)puVar2;
    *puVar1 = (unsigned int)&DAT_004216bc;
  }
  return;
}
