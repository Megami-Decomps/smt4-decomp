/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe718` (_code @ 0x3fe718, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

typedef int romwright_code(...);
/* Supplied declaration required: asdMemFree. */


void FUN_003fe718(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2;
  
  if (*(int **)(param_1 + 0x25c) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x25c) + 4))();
    *(unsigned int *)(param_1 + 0x25c) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x94) = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      asdMemFree();
      *(unsigned int *)(param_1 + 0xb0) = 0;
    }
  }
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x30;
    if (*(int *)(temp_v0 + 0x34) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x34) = 0;
    }
    if (*(int *)(temp_v0 + 0x50) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x50) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  if (*(int *)(param_1 + 0x10) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x264) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x264) = 0;
  }
  if (*(int *)(param_1 + 0x260) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x260) = 0;
  }
  temp_v1 = *(int *)(param_1 + 0x254);
  *(unsigned int *)(param_1 + 0x254) = 0;
  *(unsigned int *)(param_1 + 600) = 0;
  if (temp_v1 != 0) {
    asdMemFree();
  }
  piVar2 = *(int **)(param_1 + 4);
  temp_v2 = ((unsigned int)piVar2 & 8) != 0;
  if (temp_v2) {
    piVar2 = *(int **)(param_1 + 0x20c);
  }
  if (temp_v2 && piVar2 != (int *)0x0) {
    (**(romwright_code **)(*piVar2 + 4))();
    *(unsigned int *)(param_1 + 0x20c) = 0;
  }
  return;
}

} /* extern "C" */
