/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afce0` (_code @ 0x3afce0, 0x258 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_003fba74. */
/* Supplied declaration required: FUN_003fbe64. */


void FUN_003afce0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int unaff_r6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [12];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    temp_v6 = *(unsigned int *)(param_1 + 0x40);
    temp_v7 = *(int *)(param_1 + 0x48) != 0;
    if (temp_v7) {
      temp_v0 = *(int *)(param_1 + 0x34);
    }
    else {
      param_2 = 0;
      temp_v0 = 0;
    }
    temp_v4 = 0;
    if (temp_v7) {
      param_2 = temp_v0 + temp_v6 * 0x10;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x44);
      temp_v0 = 0;
    }
    else {
      temp_v1 = *(unsigned int *)(param_1 + 0x44);
      if (temp_v1 != 0) {
        unaff_r6 = *(unsigned int *)(param_1 + 0x3c);
      }
      if (!(temp_v1 != 0 && temp_v1 != unaff_r6)) {
        temp_v0 = *(int *)(param_1 + 0x34);
        temp_v1 = *(unsigned int *)(param_1 + 0x3c);
      }
      else {
        temp_v0 = *(int *)(param_1 + 0x34) + temp_v1 * 0x10;
        if (temp_v1 <= *(unsigned int *)(param_1 + 0x40)) {
          temp_v1 = temp_v1 + unaff_r6;
        }
      }
    }
    if (param_2 != temp_v0 || temp_v6 != temp_v1) {
      do {
        temp_v0 = param_2 + 0x10;
        temp_v6 = temp_v6 + 1;
        temp_v4 = temp_v4 + *(int *)(*(int *)(param_2 + 4) + 0xc);
        param_2 = temp_v0;
        if (*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0x10 == temp_v0) {
          param_2 = *(int *)(param_1 + 0x34);
        }
        temp_v1 = *(unsigned int *)(param_1 + 0x44);
        if (*(int *)(param_1 + 0x48) == 0) {
          temp_v0 = 0;
        }
        else {
          if (temp_v1 != 0) {
            unaff_r6 = *(unsigned int *)(param_1 + 0x3c);
          }
          if (!(temp_v1 != 0 && temp_v1 != unaff_r6)) {
            temp_v0 = *(int *)(param_1 + 0x34);
            temp_v1 = *(unsigned int *)(param_1 + 0x3c);
          }
          else if (*(unsigned int *)(param_1 + 0x40) < temp_v1) {
            unaff_r6 = *(unsigned int *)(param_1 + 0x34);
            temp_v0 = unaff_r6 + temp_v1 * 0x10;
          }
          else {
            temp_v0 = *(int *)(param_1 + 0x34) + temp_v1 * 0x10;
            temp_v1 = temp_v1 + unaff_r6;
          }
        }
      } while (param_2 != temp_v0 || temp_v6 != temp_v1);
    }
    temp_v0 = param_1 + 0x20;
    FUN_003fbe64(temp_v0,param_1 + 0x4c);
    if (temp_v0 != 0) {
      temp_v2 = param_1 + 4;
      temp_v7 = *(int *)(param_1 + 0x1c) != 0;
      temp_v0 = 0;
      if (temp_v7) {
        temp_v0 = *(int *)(param_1 + 8);
      }
      if (!temp_v7) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = temp_v0 + *(int *)(param_1 + 0x14);
      }
      temp_v6 = temp_v0 + temp_v4;
      if ((unsigned int)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) <= temp_v6) {
        temp_v6 = temp_v6 - *(int *)(param_1 + 0x10);
      }
      temp_v5 = *(int *)(param_1 + 8);
      temp_v0 = *(int *)(*(int *)(param_1 + 0x50) + 0xc);
      temp_v6 = temp_v6 + temp_v0;
      if ((unsigned int)(temp_v5 + *(int *)(param_1 + 0x10)) <= temp_v6) {
        temp_v6 = temp_v6 - *(int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v5 + *(int *)(param_1 + 0x14);
      }
      temp_v1 = temp_v3 + temp_v4;
      if ((unsigned int)(temp_v5 + *(int *)(param_1 + 0x10)) <= temp_v1) {
        temp_v1 = temp_v1 - *(int *)(param_1 + 0x10);
      }
      FUN_003fba74(temp_v8,temp_v2,temp_v2,temp_v1,*(int *)(param_1 + 0x14) + temp_v4,temp_v2,temp_v6,
                   *(int *)(param_1 + 0x14) + temp_v4 + temp_v0);
      puVar7 = (unsigned int *)(param_1 + 0x4c);
      puVar4 = *(unsigned int **)(param_1 + 0x54);
      if (puVar4 == (unsigned int *)0x0 || puVar4 == puVar7) {
        if (*(int *)(param_1 + 0x50) != 0) {
          (**(romwright_code **)(*(int *)*puVar7 + 4))();
        }
      }
      else {
        puVar4[3] = *(unsigned int *)(param_1 + 0x58);
        *(unsigned int *)(*(int *)(param_1 + 0x58) + 8) = *(unsigned int *)(param_1 + 0x54);
        *(unsigned int *)(param_1 + 0x54) = 0;
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned int **)(param_1 + 0x58) = puVar7;
      *(unsigned int **)(param_1 + 0x54) = puVar7;
    }
  }
  return;
}
