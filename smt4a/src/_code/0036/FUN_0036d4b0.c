/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d4b0` (_code @ 0x36d4b0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e59f8. */


/* WARNING: Removing unreachable block (ram,0x002e6e08) */
/* WARNING: Removing unreachable block (ram,0x002e6e00) */
/* WARNING: Removing unreachable block (ram,0x002e6e04) */
/* WARNING: Removing unreachable block (ram,0x002e6e0c) */
/* WARNING: Removing unreachable block (ram,0x002e6e10) */

unsigned int * FUN_0036d4b0(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if ((unsigned int *)0x1f < param_1) {
    return param_1;
  }
  for (; (int)param_1 < 0x1f; param_1 = (unsigned int *)((int)param_1 + 1)) {
    temp_v1 = 0;
    if ((int)param_1 + 1U < 0x20) {
      temp_v1 = DAT_0057f69c + ((int)param_1 + 1U) * 100 + 0x2720c;
    }
    if (param_1 < (unsigned int *)0x20) {
      FUN_002e59f8(temp_v1,DAT_0057f69c + (int)param_1 * 100 + 0x2720c,100);
    }
  }
  temp_v2 = 100;
  puVar4 = (unsigned int *)(DAT_0057f69c + 0x27e28);
  if (((unsigned int)puVar4 & 3) != 0) {
    temp_v1 = 4 - ((unsigned int)puVar4 & 3);
    puVar2 = puVar4;
    if (temp_v1 != 2) {
      puVar2 = (unsigned int *)(DAT_0057f69c + 0x27e29);
      *(unsigned char *)puVar4 = 0;
    }
    temp_v2 = 100 - temp_v1;
    puVar4 = puVar2;
    if (temp_v1 >= 2) {
      puVar4 = (unsigned int *)((int)puVar2 + 2);
      *(unsigned short *)puVar2 = 0;
    }
  }
  temp_v3 = temp_v2 >= 0x20;
  temp_v2 = temp_v2 - 0x20;
  do {
    if (temp_v3) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4 = puVar4 + 8;
      temp_v3 = temp_v2 >= 0x20;
      temp_v2 = temp_v2 - 0x20;
    }
  } while (temp_v3);
  if ((unsigned char)((unsigned char)(temp_v2 >> 4) & 1)) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
  }
  if ((int)(temp_v2 << 0x1c) < 0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  temp_v0 = temp_v2 << 0x1e;
  puVar2 = puVar4;
  if ((unsigned char)((unsigned char)((temp_v2 << 0x1c) >> 0x1e) & 1)) {
    puVar2 = puVar4 + 1;
    *puVar4 = 0;
  }
  if (temp_v0 != 0) {
    puVar4 = puVar2;
    if ((int)temp_v0 < 0) {
      puVar4 = (unsigned int *)((int)puVar2 + 2);
      *(unsigned short *)puVar2 = 0;
    }
    puVar2 = puVar4;
    if ((temp_v0 & 0x40000000) != 0) {
      puVar2 = (unsigned int *)((int)puVar4 + 1);
      *(unsigned char *)puVar4 = 0;
    }
    return puVar2;
  }
  return puVar2;
}
