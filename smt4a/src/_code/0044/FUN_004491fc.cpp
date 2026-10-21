/* NON_MATCHING: retail pops its frame at +0xb0 and falls through a NOP into an unsymbolized outlined flag-reset helper at 0x4492b4; unit boundaries must be recovered first. */
#include "romwright_types.h"

extern "C" {

int FUN_0044d750(unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_0044d750. */


void FUN_004491fc(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  
  puVar4 = *(unsigned int **)(param_3 + 8);
  temp_v0 = *(int *)(param_1 + 4);
  temp_v1 = *(int *)(param_2 + 4);
  for (puVar2 = *(unsigned int **)(param_3 + 4); puVar2 != puVar4; puVar2 = puVar2 + 1) {
    FUN_0044d750(*puVar2);
  }
  *(unsigned int *)(temp_v1 + 0x10) = *(unsigned int *)(temp_v1 + 0xc);
  *(unsigned int *)(temp_v1 + 0x20) = *(unsigned int *)(temp_v1 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x30) = *(unsigned int *)(temp_v1 + 0x2c);
  *(unsigned int *)(temp_v1 + 0x40) = *(unsigned int *)(temp_v1 + 0x3c);
  *(unsigned int *)(temp_v1 + 0x70) = *(unsigned int *)(temp_v1 + 0x6c);
  *(unsigned int *)(temp_v1 + 0x80) = *(unsigned int *)(temp_v1 + 0x7c);
  *(unsigned int *)(temp_v1 + 0x90) = *(unsigned int *)(temp_v1 + 0x8c);
  *(unsigned int *)(temp_v1 + 0xa0) = *(unsigned int *)(temp_v1 + 0x9c);
  *(unsigned int *)(temp_v1 + 0xb0) = *(unsigned int *)(temp_v1 + 0xac);
  *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(temp_v1 + 0x4c);
  *(unsigned int *)(temp_v1 + 0x60) = *(unsigned int *)(temp_v1 + 0x5c);
  *(unsigned int *)(temp_v1 + 0xc0) = *(unsigned int *)(temp_v1 + 0xbc);
  *(unsigned int *)(temp_v1 + 0xd0) = *(unsigned int *)(temp_v1 + 0xcc);
  *(unsigned int *)(temp_v1 + 0xe0) = *(unsigned int *)(temp_v1 + 0xdc);
  *(unsigned int *)(temp_v1 + 0xf0) = *(unsigned int *)(temp_v1 + 0xec);
  puVar2 = *(unsigned int **)(temp_v0 + 0xac);
  temp_v1 = *(int *)(temp_v0 + 0xb0) - (int)puVar2;
  if (0 < temp_v1 >> 2) {
    puVar4 = puVar2;
    if (temp_v1 * 0x20000000 < 0) {
      puVar4 = puVar2 + 1;
      *puVar2 = 0;
    }
    for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      *puVar2 = 0;
    }
  }
  puVar2 = *(unsigned int **)(temp_v0 + 0xc0);
  temp_v1 = *(int *)(temp_v0 + 0xc4) - (int)puVar2;
  if (0 < temp_v1 >> 2) {
    puVar4 = puVar2;
    if (temp_v1 * 0x20000000 < 0) {
      puVar4 = puVar2 + 1;
      *puVar2 = 0;
    }
    for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      *puVar2 = 0;
    }
  }
  puVar2 = *(unsigned int **)(temp_v0 + 0xd0);
  temp_v0 = *(int *)(temp_v0 + 0xd4) - (int)puVar2;
  if (0 < temp_v0 >> 2) {
    puVar4 = puVar2;
    if (temp_v0 * 0x20000000 < 0) {
      puVar4 = puVar2 + 1;
      *puVar2 = 0;
    }
    for (temp_v0 = temp_v0 >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar2 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      *puVar2 = 0;
    }
  }
  return;
}

} /* extern "C" */
