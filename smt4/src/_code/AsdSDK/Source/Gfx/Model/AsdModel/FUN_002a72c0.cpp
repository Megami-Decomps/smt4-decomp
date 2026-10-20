/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a72c0` (_code @ 0x2a72c0, 0x480 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelSlotClearActive(int);
int FUN_001569d8(unsigned int, unsigned int, unsigned char *);
int FUN_002b2368(unsigned int);
int asdMemFree(...);
int nw_gfx_res_ResGraphicsFile_Cleanup(unsigned int *[2]);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char g_asdModelBanks; /* 0x4d9880 */
extern unsigned char DAT_004d9d88; /* 0x4d9d88 */
extern unsigned char g_asdModelIdLists; /* 0x4daca0 */
extern unsigned char DAT_004dace0; /* 0x4dace0 */

extern unsigned int asdModelGetSlotArray3(int);
/* Supplied declaration required: asdModelSlotClearActive. */
/* Supplied declaration required: FUN_001569d8. */
extern unsigned int FUN_002a4258(int);
extern int asdModelGetSlotArray2(int);
extern int asdModelGetSlotArray1(int);
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Cleanup. */


void FUN_002a72c0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *temp_v7 [2];
  int temp_v8;
  
  temp_v8 = param_1;
  temp_v1 = asdModelGetSlotArray1(param_1);
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v5 = 1;
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v6 = *piVar3;
      temp_v5 = temp_v5 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = 0;
      }
    } while (temp_v5 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  temp_v1 = asdModelGetSlotArray2(temp_v8);
  temp_v5 = 1;
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v6 = *piVar3;
      temp_v5 = temp_v5 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = 0;
      }
    } while (temp_v5 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  temp_v2 = asdModelGetSlotArray3(temp_v8);
  temp_v3 = FUN_002a4258(temp_v8);
  temp_v0 = temp_v8 * 0x40;
  FUN_001569d8(temp_v2,temp_v3,&DAT_004dace0 + temp_v0);
  temp_v7[0] = (unsigned int *)**(unsigned int **)(temp_v8 * 4 + 0x464aa4);
  if (temp_v7[0] != (unsigned int *)0x0) {
    nw_gfx_res_ResGraphicsFile_Cleanup(temp_v7);
  }
  puVar10 = (unsigned int *)(temp_v8 * 4 + 0x464aac);
  puVar9 = (unsigned int *)*puVar10;
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    *puVar10 = 0;
  }
  *(unsigned int *)(temp_v0 + 0x4dace8) = *(unsigned int *)(temp_v0 + 0x4dace4);
  FUN_002b2368(*(unsigned int *)(temp_v8 * 4 + 0x464aa4));
  asdMemFree(*(unsigned int *)(temp_v8 * 4 + 0x464a9c));
  *(unsigned int *)(temp_v8 * 4 + 0x464a9c) = 0;
  asdModelSlotClearActive(temp_v8);
  temp_v0 = temp_v8;
  temp_v1 = 0;
  temp_v5 = temp_v8 * 0x284 + 0x4da290;
  temp_v6 = temp_v8 * 0x284 + 0x4da798;
  do {
    temp_v4 = temp_v1 * 0x4c + temp_v0 * 0x284;
    puVar9 = *(unsigned int **)(&g_asdModelBanks + temp_v4 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v7[0] = (unsigned int *)(&g_asdModelBanks + temp_v4 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v7[0] = 0;
    }
    if (*(int *)(&g_asdModelBanks + temp_v4 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v4 = temp_v1 * 4 + temp_v0 * 0x284;
    puVar9 = *(unsigned int **)(&g_asdModelBanks + temp_v4 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(&g_asdModelBanks + temp_v4 + 0x264) = 0;
    }
    temp_v4 = temp_v1 * 0x4c + temp_v0 * 0x284;
    puVar9 = *(unsigned int **)(&DAT_004d9d88 + temp_v4 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v7[0] = (unsigned int *)(&DAT_004d9d88 + temp_v4 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v7[0] = 0;
    }
    if (*(int *)(&DAT_004d9d88 + temp_v4 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v4 = temp_v1 * 4 + temp_v0 * 0x284;
    puVar9 = *(unsigned int **)(&DAT_004d9d88 + temp_v4 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(&DAT_004d9d88 + temp_v4 + 0x264) = 0;
    }
    temp_v4 = temp_v5 + temp_v1 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v4 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      temp_v7[0] = (unsigned int *)(temp_v4 + 0x44);
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *temp_v7[0] = 0;
    }
    if (*(int *)(temp_v4 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v4 = temp_v5 + temp_v1 * 4;
    puVar9 = *(unsigned int **)(temp_v4 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v4 + 0x264) = 0;
    }
    temp_v4 = temp_v6 + temp_v1 * 0x4c;
    puVar9 = *(unsigned int **)(temp_v4 + 0x44);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v4 + 0x44) = 0;
    }
    if (*(int *)(temp_v4 + 0x4c) != 0) {
      asdMemFree();
    }
    temp_v4 = temp_v6 + temp_v1 * 4;
    puVar9 = *(unsigned int **)(temp_v4 + 0x264);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(temp_v4 + 0x264) = 0;
    }
    temp_v1 = (int)(short)((short)temp_v1 + 1);
  } while (temp_v1 < 8);
  temp_v1 = 0;
  temp_v0 = temp_v8 * 0x14;
  do {
    temp_v5 = temp_v1 * 4 + temp_v0;
    puVar9 = *(unsigned int **)(&g_asdModelIdLists + temp_v5 + 4);
    if (puVar9 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      *(unsigned int *)(&g_asdModelIdLists + temp_v5 + 4) = 0;
    }
    temp_v1 = (int)(short)((short)temp_v1 + 1);
  } while (temp_v1 < 4);
  return;
}

} /* extern "C" */
