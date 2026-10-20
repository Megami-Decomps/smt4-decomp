/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00419e38` (_code @ 0x419e38, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(...);
int sysMemClear(int, int);
int FUN_0042cb74(...);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0042cb74. */


void FUN_00419e38(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  
  temp_v4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    temp_v7 = 0;
    do {
      temp_v5 = *(int *)(*(int *)(param_1 + 8) + temp_v4 * 4);
      if (temp_v5 != 0) {
        temp_v3 = temp_v5 + 0x10;
        *(unsigned int *)(temp_v5 + 0x10) = 0;
        sysMemClear(temp_v5 + 0x14,0x150);
        temp_v2 = 0;
        do {
          *(unsigned char *)(temp_v3 + temp_v2 + 0x154) = 0;
          FUN_0042cb74(temp_v3 + temp_v2 * 0x70 + 0x160);
          temp_v1 = temp_v2 + 1;
          temp_v0 = temp_v3 + temp_v2 * 0x14;
          *(unsigned char *)(temp_v0 + 0x6a0) = 0;
          temp_v6 = (unsigned int)temp_v7;
          *(unsigned int *)(temp_v0 + 0x6a4) = temp_v6;
          *(unsigned int *)(temp_v0 + 0x6a8) = temp_v6;
          *(unsigned int *)(temp_v0 + 0x6ac) = temp_v6;
          *(unsigned int *)(temp_v0 + 0x6b0) = temp_v6;
          temp_v2 = temp_v1;
        } while (temp_v1 < 0xc);
        asdMemFree(*(unsigned int *)(temp_v5 + 8));
        asdMemFree(*(unsigned int *)(temp_v5 + 0xc));
      }
      temp_v5 = *(int *)(*(int *)(param_1 + 4) + temp_v4 * 4);
      if (temp_v5 != 0) {
        puVar5 = (unsigned int *)(temp_v5 + 0x10);
        *puVar5 = 0;
        sysMemClear(temp_v5 + 0x14,0x150);
        temp_v2 = 0;
        do {
          *(unsigned char *)((int)puVar5 + temp_v2 + 0x154) = 0;
          FUN_0042cb74(puVar5 + temp_v2 * 0x1c + 0x58);
          temp_v1 = temp_v2 + 1;
          *(unsigned char *)(puVar5 + temp_v2 * 5 + 0x1a8) = 0;
          temp_v6 = (unsigned int)temp_v7;
          puVar5[temp_v2 * 5 + 0x1a9] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1aa] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1ab] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1ac] = temp_v6;
          temp_v2 = temp_v1;
        } while (temp_v1 < 0xc);
        asdMemFree(*(unsigned int *)(temp_v5 + 8));
        asdMemFree(*(unsigned int *)(temp_v5 + 0xc));
      }
      temp_v5 = *(int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4);
      if (temp_v5 != 0) {
        puVar5 = (unsigned int *)(temp_v5 + 0x10);
        *puVar5 = 0;
        sysMemClear(temp_v5 + 0x14,0x150);
        temp_v2 = 0;
        do {
          *(unsigned char *)((int)puVar5 + temp_v2 + 0x154) = 0;
          FUN_0042cb74(puVar5 + temp_v2 * 0x1c + 0x58);
          temp_v1 = temp_v2 + 1;
          *(unsigned char *)(puVar5 + temp_v2 * 5 + 0x1a8) = 0;
          temp_v6 = (unsigned int)temp_v7;
          puVar5[temp_v2 * 5 + 0x1a9] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1aa] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1ab] = temp_v6;
          puVar5[temp_v2 * 5 + 0x1ac] = temp_v6;
          temp_v2 = temp_v1;
        } while (temp_v1 < 0xc);
        asdMemFree(*(unsigned int *)(temp_v5 + 8));
        asdMemFree(*(unsigned int *)(temp_v5 + 0xc));
      }
      if (*(int *)(*(int *)(param_1 + 8) + temp_v4 * 4) != 0) {
        asdMemFree();
        *(unsigned int *)(*(int *)(param_1 + 8) + temp_v4 * 4) = 0;
      }
      if (*(int *)(*(int *)(param_1 + 4) + temp_v4 * 4) != 0) {
        asdMemFree();
        *(unsigned int *)(*(int *)(param_1 + 4) + temp_v4 * 4) = 0;
      }
      if (*(int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4) != 0) {
        asdMemFree();
        *(unsigned int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4) = 0;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  return;
}

} /* extern "C" */
