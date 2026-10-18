/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00452184` (_code @ 0x452184, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_004504d8. */
/* Supplied declaration required: FUN_00451898. */


void FUN_00452184(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  while( 1 ) {
    temp_v0 = *(int *)(param_1 + 0x1c);
    temp_v3 = 0;
    if (temp_v0 != 0) {
      piVar4 = (int *)(param_1 + 0x1c + temp_v0);
    }
    else {
      piVar4 = (int *)0x0;
    }
    temp_v1 = *piVar4;
    if (temp_v1 == 0x20000009) {
      if (temp_v0 != 0) {
        temp_v3 = temp_v0 + param_1 + 0x1c;
      }
      FUN_00451898(temp_v3);
      return;
    }
    if (temp_v1 >= 0x20000009) break;
    if (temp_v1 == 0x20000002) {
      return;
    }
    if (temp_v1 != 0x20000004) {
      return;
    }
    temp_v1 = param_1 + 0x1c;
    param_1 = temp_v3;
    if (temp_v0 != 0) {
      param_1 = temp_v0 + temp_v1;
    }
  }
  if (temp_v1 != 0x20000011) {
    if (temp_v1 != 0x20000021) {
      return;
    }
    if (temp_v0 != 0) {
      puVar1 = (unsigned int *)(param_1 + 0x1c + temp_v0);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    puVar2 = puVar1;
    if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x20000021) != 0)) {
      puVar2 = (unsigned int *)0x0;
    }
    if (puVar2[0xb] != 0) {
      return;
    }
    puVar2[0xb] = (unsigned int)puVar1;
    if (puVar2[0xe] != 0) {
      temp_v0 = (int)puVar2 + puVar2[0xe] + 0x38;
    }
    else {
      temp_v0 = 0;
    }
    temp_v2 = puVar2[0xc];
    temp_v3 = *(int *)(temp_v0 + 0x18);
  }
  else {
    if (temp_v0 != 0) {
      puVar1 = (unsigned int *)(param_1 + 0x1c + temp_v0);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    puVar2 = puVar1;
    if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x20000011) != 0)) {
      puVar2 = (unsigned int *)0x0;
    }
    if (puVar2[0xb] != 0) {
      return;
    }
    puVar2[0xb] = (unsigned int)puVar1;
    if (puVar2[0xe] != 0) {
      temp_v0 = (int)puVar2 + puVar2[0xe] + 0x38;
    }
    else {
      temp_v0 = 0;
    }
    temp_v2 = puVar2[0xc];
    temp_v3 = *(int *)(temp_v0 + 0x18);
  }
  if (temp_v3 != 0) {
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    return;
  }
  if (temp_v2 == 0) {
    temp_v2 = 0x2010000;
  }
  FUN_004504d8(puVar1,temp_v0,temp_v2);
  return;
}
