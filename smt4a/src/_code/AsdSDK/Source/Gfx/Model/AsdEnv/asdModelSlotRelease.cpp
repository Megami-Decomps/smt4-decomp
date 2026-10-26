/* NON_MATCHING: romwright 0.5.0 decompilation of `asdModelSlotRelease` (_code @ 0x1f42b0, 0x480 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/asdModelGetSlotArray1.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"

extern "C" {

int asdMemFree(...);
int asdModelSlotClearActive(int);
int asdOperatorDelete(unsigned int);
int FUN_004491fc(unsigned int, unsigned int, int);
int nw_gfx_res_ResGraphicsFile_Cleanup(unsigned int *[2]);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_00636d20; /* 0x636d20 */

/* Supplied declaration required: asdMemFree. */
extern unsigned int asdModelGetSlotArray3(int);
/* Supplied declaration required: asdModelSlotClearActive. */
/* Supplied declaration required: asdOperatorDelete. */
extern unsigned int asdModelGetSlotHandle(int);
/* Supplied declaration required: FUN_004491fc. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Cleanup. */


void asdModelSlotRelease(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int temp_v7;
  unsigned int *temp_v8 [2];
  int temp_v9;
  
  temp_v9 = param_1;
  temp_v0 = asdModelGetSlotArray1(param_1);
  piVar2 = *(int **)(temp_v0 + 0x18);
  temp_v4 = 1;
  temp_v6 = (*(int *)(temp_v0 + 0x1c) - (int)piVar2) >> 2;
  if (temp_v6 + 1 >= 2) {
    do {
      temp_v5 = *piVar2;
      temp_v4 = temp_v4 + 1;
      piVar2 = piVar2 + 1;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v6 + 1);
  }
  *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + 0x18);
  temp_v0 = asdModelGetSlotArray2(temp_v9);
  temp_v4 = 1;
  piVar2 = *(int **)(temp_v0 + 0x18);
  temp_v6 = (*(int *)(temp_v0 + 0x1c) - (int)piVar2) >> 2;
  if (temp_v6 + 1 >= 2) {
    do {
      temp_v5 = *piVar2;
      temp_v4 = temp_v4 + 1;
      piVar2 = piVar2 + 1;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v6 + 1);
  }
  *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + 0x18);
  temp_v1 = asdModelGetSlotArray3(temp_v9);
  temp_v2 = asdModelGetSlotHandle(temp_v9);
  temp_v6 = temp_v9 * 0x40;
  FUN_004491fc(temp_v1,temp_v2,temp_v6 + 0x636d60);
  temp_v8[0] = (unsigned int *)**(unsigned int **)(temp_v9 * 4 + 0x5b3be0);
  if (temp_v8[0] != (unsigned int *)0x0) {
    nw_gfx_res_ResGraphicsFile_Cleanup(temp_v8);
  }
  puVar10 = (unsigned int *)(temp_v9 * 4 + 0x5b3be8);
  puVar9 = (unsigned int *)*puVar10;
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    *puVar10 = 0;
  }
  *(unsigned int *)(temp_v6 + 0x636d68) = *(unsigned int *)(temp_v6 + 0x636d64);
  asdOperatorDelete(*(unsigned int *)(temp_v9 * 4 + 0x5b3be0));
  asdMemFree(*(unsigned int *)(temp_v9 * 4 + 0x5b3bd8));
  *(unsigned int *)(temp_v9 * 4 + 0x5b3bd8) = 0;
  asdModelSlotClearActive(temp_v9);
  temp_v6 = 0;
  temp_v0 = temp_v9 * 0x284 + 0x635900;
  temp_v4 = temp_v9 * 0x284 + 0x635e08;
  temp_v5 = temp_v9 * 0x284 + 0x636310;
  temp_v7 = temp_v9 * 0x284 + 0x636818;
  do {
    temp_v3 = temp_v0 + temp_v6 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v3 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v8[0] = (unsigned int *)(temp_v3 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v8[0] = 0;
    }
    if (*(int *)(temp_v3 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v3 = temp_v0 + temp_v6 * 4;
    puVar9 = *(unsigned int **)(temp_v3 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v3 + 0x264) = 0;
    }
    temp_v3 = temp_v4 + temp_v6 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v3 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v8[0] = (unsigned int *)(temp_v3 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v8[0] = 0;
    }
    if (*(int *)(temp_v3 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v3 = temp_v4 + temp_v6 * 4;
    puVar9 = *(unsigned int **)(temp_v3 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v3 + 0x264) = 0;
    }
    temp_v3 = temp_v5 + temp_v6 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v3 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v8[0] = (unsigned int *)(temp_v3 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v8[0] = 0;
    }
    if (*(int *)(temp_v3 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v3 = temp_v5 + temp_v6 * 4;
    puVar9 = *(unsigned int **)(temp_v3 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v3 + 0x264) = 0;
    }
    temp_v3 = temp_v7 + temp_v6 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v3 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v3 + 0x44) = 0;
    }
    if (*(int *)(temp_v3 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v3 = temp_v7 + temp_v6 * 4;
    puVar9 = *(unsigned int **)(temp_v3 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v3 + 0x264) = 0;
    }
    temp_v6 = (int)(short)((short)temp_v6 + 1);
  } while (temp_v6 < 8);
  temp_v0 = 0;
  temp_v6 = temp_v9 * 0x14;
  do {
    temp_v4 = temp_v0 * 4 + temp_v6;
    puVar9 = *(unsigned int **)(&DAT_00636d20 + temp_v4 + 4);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(&DAT_00636d20 + temp_v4 + 4) = 0;
    }
    temp_v0 = (int)(short)((short)temp_v0 + 1);
  } while (temp_v0 < 4);
  return;
}

} /* extern "C" */
