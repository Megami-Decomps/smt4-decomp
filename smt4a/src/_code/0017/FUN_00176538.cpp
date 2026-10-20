/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00176538` (_code @ 0x176538, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00161dbc(unsigned int *, unsigned int *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00161dbc. */
extern int FUN_00172354(unsigned char *, unsigned int, unsigned int);


void FUN_00176538(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [12];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [12];
  int temp_v8;
  
  puVar7 = *(unsigned int **)(*(int *)(param_1 + 4) + 0xbc);
  puVar9 = *(unsigned int **)(*(int *)(param_1 + 4) + 0xc0);
  temp_v8 = param_1;
  if (puVar7 != puVar9) {
    temp_v1 = ((int)puVar9 - (int)puVar7) >> 2;
    FUN_00161dbc(puVar7,puVar9,temp_v1);
    puVar10 = puVar7;
    if (temp_v1 >= 0x11) {
      while (puVar4 = puVar10 + 1, puVar4 != puVar7 + 0x10) {
        temp_v3 = *puVar4;
        temp_v1 = FUN_00172354(temp_v7,temp_v3,*puVar7);
        if (temp_v1 != 0) {
          temp_v1 = ((int)puVar4 - (int)puVar7) >> 2;
          if (0 < temp_v1) {
            temp_v2 = 0;
            do {
              puVar10 = puVar4 + temp_v2;
              temp_v0 = temp_v2 - 1;
              temp_v1 = temp_v1 - 1;
              temp_v2 = temp_v2 - 1;
              *puVar10 = puVar4[temp_v0];
            } while (temp_v1 != 0);
          }
          *puVar7 = temp_v3;
          puVar10 = puVar4;
        }
        else {
          temp_v1 = FUN_00172354(temp_v6,temp_v3,*puVar10);
          puVar2 = puVar4;
          while (puVar1 = puVar10, temp_v1 != 0) {
            *puVar2 = *puVar1;
            temp_v1 = FUN_00172354(temp_v6,temp_v3,puVar1[-1]);
            puVar10 = puVar1 + -1;
            puVar2 = puVar1;
          }
          *puVar2 = temp_v3;
          puVar10 = puVar4;
        }
      }
      for (puVar7 = puVar7 + 0x10; puVar7 != puVar9; puVar7 = puVar7 + 1) {
        temp_v3 = *puVar7;
        temp_v1 = FUN_00172354(temp_v5,temp_v3,puVar7[-1]);
        puVar4 = puVar7 + -1;
        puVar10 = puVar7;
        while (puVar2 = puVar4, temp_v1 != 0) {
          *puVar10 = *puVar2;
          temp_v1 = FUN_00172354(temp_v5,temp_v3,puVar2[-1]);
          puVar4 = puVar2 + -1;
          puVar10 = puVar2;
        }
        *puVar10 = temp_v3;
      }
    }
    else {
      while (puVar4 = puVar10 + 1, puVar4 != puVar9) {
        temp_v3 = *puVar4;
        temp_v1 = FUN_00172354(temp_v5,temp_v3,*puVar7);
        if (temp_v1 != 0) {
          temp_v1 = ((int)puVar4 - (int)puVar7) >> 2;
          if (0 < temp_v1) {
            temp_v2 = 0;
            do {
              puVar10 = puVar4 + temp_v2;
              temp_v0 = temp_v2 - 1;
              temp_v1 = temp_v1 - 1;
              temp_v2 = temp_v2 - 1;
              *puVar10 = puVar4[temp_v0];
            } while (temp_v1 != 0);
          }
          *puVar7 = temp_v3;
          puVar10 = puVar4;
        }
        else {
          temp_v1 = FUN_00172354(temp_v4,temp_v3,*puVar10);
          puVar2 = puVar4;
          while (puVar1 = puVar10, temp_v1 != 0) {
            *puVar2 = *puVar1;
            temp_v1 = FUN_00172354(temp_v4,temp_v3,puVar1[-1]);
            puVar10 = puVar1 + -1;
            puVar2 = puVar1;
          }
          *puVar2 = temp_v3;
          puVar10 = puVar4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001767a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(temp_v8 + 0xc) + 0x14))
            (*(int **)(temp_v8 + 0xc),*(unsigned int *)(temp_v8 + 4));
  return;
}

} /* extern "C" */
