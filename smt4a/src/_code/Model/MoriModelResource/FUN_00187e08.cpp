/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187e08` (_code @ 0x187e08, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(...);
int FUN_0017cf74(...);
int FUN_0019d4d8(...);
int FUN_001b15cc(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0017cf74. */
/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: FUN_001b15cc. */


void FUN_00187e08(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 6 goto(s); 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = 0;
  temp_v5 = 6;
  piVar1 = (int *)(param_2 + 0x20);
  piVar4 = (int *)(param_2 + 8);
  do {
    temp_v2 = *piVar1;
    piVar1 = piVar1 + 1;
    temp_v3 = 0;
    if (temp_v2 != 0) {
      temp_v3 = *piVar4 + param_2;
    }
    piVar4 = piVar4 + 1;
    *(int *)(param_1 + 0x5c + temp_v1 * 4) = temp_v3;
    temp_v5 = temp_v5 - 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v5 != 0);
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  temp_v4 = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    temp_v4 = *(unsigned int *)(param_1 + 0x68);
    if (param_4 != 0x10000) {
      if (param_4 != 0x20000) {
        if (param_4 != 0x30000) goto LAB_00187ea0;
        temp_v0 = *(unsigned int *)(param_2 + 0x2c);
        temp_v1 = 0x30000;
      }
      else {
        temp_v0 = *(unsigned int *)(param_2 + 0x2c);
        temp_v1 = 0x20000;
      }
      FUN_001630d4(temp_v1,0x100,0,temp_v0,1);
      if (temp_v1 != 0) {
        *(int *)(param_1 + 0x68) = temp_v1;
        *(int *)(param_1 + 0x44) = temp_v1;
        goto LAB_00187ea4;
      }
    }
LAB_00187ea0:
    param_4 = 0x10000;
  }
LAB_00187ea4:
  if (*(int *)(param_2 + 0x30) != 0 && param_5 != 0x10000) {
    if (param_5 != 0x20000) {
      if (param_5 == 0x30000) {
        temp_v0 = *(unsigned int *)(param_2 + 0x30);
        temp_v1 = 0x30000;
        FUN_001630d4(temp_v1,0x100,0,temp_v0,1);
        if (temp_v1 != 0) {
          *(int *)(param_1 + 0x6c) = temp_v1;
          *(int *)(param_1 + 0x48) = temp_v1;
        }
      }
    }
    else {
      temp_v0 = *(unsigned int *)(param_2 + 0x30);
      temp_v1 = 0x20000;
      FUN_001630d4(temp_v1,0x100,0,temp_v0,1);
      if (temp_v1 != 0) {
        *(int *)(param_1 + 0x6c) = temp_v1;
        *(int *)(param_1 + 0x48) = temp_v1;
      }
    }
  }
  temp_v0 = 0x10000;
  FUN_0019d4d8(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x38),4,1);
  *(unsigned int *)(param_1 + 0x74) = temp_v0;
  *(unsigned int *)(param_1 + 0x4c) = temp_v0;
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 100);
  if (*(int *)(param_2 + 0x28) != 0) {
    if (param_3 != 0x10000) {
      if (param_3 != 0x20000) {
        if (param_3 != 0x30000) goto LAB_00187f20;
        temp_v0 = *(unsigned int *)(param_2 + 0x28);
        temp_v1 = 0x30000;
      }
      else {
        temp_v0 = *(unsigned int *)(param_2 + 0x28);
        temp_v1 = 0x20000;
      }
      FUN_001630d4(temp_v1,0x100,0,temp_v0,1);
      if (temp_v1 != 0) {
        *(int *)(param_1 + 100) = temp_v1;
        *(int *)(param_1 + 0x50) = temp_v1;
        goto LAB_00187f24;
      }
    }
LAB_00187f20:
    param_3 = 0x10000;
  }
LAB_00187f24:
  temp_v0 = 0x10000;
  FUN_0019d4d8(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x3c),0x10,1);
  *(unsigned int *)(param_1 + 0x78) = temp_v0;
  *(unsigned int *)(param_1 + 0x80) = temp_v0;
  *(unsigned int *)(param_1 + 0x58) = temp_v0;
  temp_v1 = param_3;
  if (*(int *)(param_2 + 0x3c) != 0) {
    if (param_3 != 0x10000) {
      if (param_3 != 0x20000) {
        if (param_3 != 0x30000) goto LAB_00187f84;
        temp_v0 = *(unsigned int *)(param_2 + 0x3c);
        temp_v5 = 0x30000;
      }
      else {
        temp_v0 = *(unsigned int *)(param_2 + 0x3c);
        temp_v5 = 0x20000;
      }
      FUN_001630d4(temp_v5,0x100,0,temp_v0,1);
      if (temp_v5 != 0) {
        *(int *)(param_1 + 0x78) = temp_v5;
        *(int *)(param_1 + 0x54) = temp_v5;
        goto LAB_00187f88;
      }
    }
LAB_00187f84:
    temp_v1 = 0x10000;
  }
LAB_00187f88:
  temp_v5 = param_1 + 0x5c;
  FUN_001b15cc(param_1 + 0xc,param_2);
  if (param_4 != 0x10000) {
    temp_v5 = *(int *)(param_2 + 0x2c);
  }
  if (param_4 != 0x10000 && temp_v5 != 0) {
    FUN_0017cf74(temp_v4,*(unsigned int *)(param_1 + 0x68));
  }
  temp_v5 = *(int *)(param_2 + 0x30);
  if (temp_v5 != 0 && param_5 != 0x10000) {
    FUN_0017cf74(0,*(unsigned int *)(param_1 + 0x6c));
  }
  if (param_3 != 0x10000) {
    temp_v5 = *(int *)(param_2 + 0x28);
  }
  if (param_3 != 0x10000 && temp_v5 != 0) {
    FUN_0017cf74(*(unsigned int *)(param_1 + 0x7c),*(unsigned int *)(param_1 + 100));
  }
  if (temp_v1 != 0x10000) {
    temp_v5 = *(int *)(param_2 + 0x3c);
  }
  if (temp_v1 == 0x10000 || temp_v5 == 0) {
    return;
  }
  FUN_0017cf74(*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x78));
  return;
}

} /* extern "C" */
