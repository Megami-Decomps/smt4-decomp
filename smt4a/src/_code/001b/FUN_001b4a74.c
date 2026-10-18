/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4a74` (_code @ 0x1b4a74, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Removing unreachable block (ram,0x002e6e08) */
/* WARNING: Removing unreachable block (ram,0x002e6e00) */
/* WARNING: Removing unreachable block (ram,0x002e6e04) */
/* WARNING: Removing unreachable block (ram,0x002e6e0c) */
/* WARNING: Removing unreachable block (ram,0x002e6e10) */

unsigned int * FUN_001b4a74(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  *(unsigned int *)(param_1 + 0x7e8) = 0;
  temp_v1 = 0x100;
  puVar2 = (unsigned int *)(param_1 + 0x8ec);
  if (((unsigned int)puVar2 & 3) != 0) {
    temp_v2 = 4 - ((unsigned int)puVar2 & 3);
    puVar3 = puVar2;
    if (temp_v2 != 2) {
      puVar3 = (unsigned int *)(param_1 + 0x8ed);
      *(unsigned char *)puVar2 = 0xff;
    }
    temp_v1 = 0x100 - temp_v2;
    puVar2 = puVar3;
    if (temp_v2 >= 2) {
      puVar2 = (unsigned int *)((int)puVar3 + 2);
      *(unsigned short *)puVar3 = 0xffff;
    }
  }
  temp_v3 = temp_v1 >= 0x20;
  temp_v1 = temp_v1 - 0x20;
  do {
    if (temp_v3) {
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2[4] = 0xffffffff;
      puVar2[5] = 0xffffffff;
      puVar2[6] = 0xffffffff;
      puVar2[7] = 0xffffffff;
      puVar2 = puVar2 + 8;
      temp_v3 = temp_v1 >= 0x20;
      temp_v1 = temp_v1 - 0x20;
    }
  } while (temp_v3);
  if ((unsigned char)((unsigned char)(temp_v1 >> 4) & 1)) {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = puVar2 + 4;
  }
  if ((int)(temp_v1 << 0x1c) < 0) {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2 = puVar2 + 2;
  }
  temp_v0 = temp_v1 << 0x1e;
  puVar3 = puVar2;
  if ((unsigned char)((unsigned char)((temp_v1 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = puVar2 + 1;
    *puVar2 = 0xffffffff;
  }
  if (temp_v0 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)temp_v0 < 0) {
    puVar2 = (unsigned int *)((int)puVar3 + 2);
    *(unsigned short *)puVar3 = 0xffff;
  }
  puVar3 = puVar2;
  if ((temp_v0 & 0x40000000) != 0) {
    puVar3 = (unsigned int *)((int)puVar2 + 1);
    *(unsigned char *)puVar2 = 0xff;
  }
  return puVar3;
}
