/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fbc38` (_code @ 0x3fbc38, 0x394 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022c7d4(unsigned int *, unsigned int, int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_0022c004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022c7d4. */


unsigned int FUN_003fbc38(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar9;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v6 = param_1[1];
  temp_v3 = param_1[3];
  temp_v5 = temp_v3 + 1;
  temp_v1 = temp_v6 + temp_v3 * 0x10;
  temp_v2 = (temp_v1 - temp_v6) >> 4;
  if ((unsigned int)param_1[2] >= temp_v5) {
    temp_v4 = (unsigned int)(temp_v3 - temp_v2 != 0);
    temp_v3 = (temp_v3 - temp_v2) - temp_v4;
    if (temp_v4 != 0) {
      puVar4 = (unsigned int *)(temp_v6 + (temp_v5 - temp_v4) * 0x10);
      puVar1 = (unsigned int *)(temp_v1 + temp_v4 * -0x10);
      do {
        if (puVar4 != (unsigned int *)0x0) {
          *puVar4 = *puVar1;
          puVar4[1] = puVar1[1];
          temp_v1 = puVar1[3];
          puVar4[3] = temp_v1;
          *(unsigned int **)(temp_v1 + 8) = puVar4;
          puVar4[2] = (unsigned int)puVar1;
          puVar1[3] = (unsigned int)puVar4;
        }
        temp_v4 = temp_v4 - 1;
        puVar4 = puVar4 + 4;
        puVar1 = puVar1 + 4;
      } while (temp_v4 != 0);
    }
    temp_v4 = temp_v2 + 1;
    FUN_0022c7d4(param_1,temp_v4,temp_v2,temp_v3);
    if ((unsigned int)param_1[3] <= temp_v4) {
      temp_v4 = param_1[3];
    }
    temp_v1 = param_1[1];
    puVar4 = (unsigned int *)(temp_v1 + temp_v2 * 0x10);
    while (puVar4 < (unsigned int *)(temp_v1 + temp_v4 * 0x10)) {
      puVar1 = (unsigned int *)puVar4[2];
      if (puVar1 == (unsigned int *)0x0 || puVar1 == puVar4) {
        if (puVar4[1] != 0) {
          (**(romwright_code **)(*(int *)*puVar4 + 4))();
        }
      }
      else {
        puVar1[3] = puVar4[3];
        *(unsigned int *)(puVar4[3] + 8) = puVar4[2];
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      puVar4[1] = 0;
      puVar4 = puVar4 + 4;
    }
  }
  else {
    temp_v0 = FUN_0022c004(param_1[2],temp_v5);
    piVar9 = (int *)*param_1;
    puVar4 = (unsigned int *)0x0;
    temp_v4 = 0;
    if (temp_v0 != 0) {
      puVar4 = (unsigned int *)(**(romwright_code **)*piVar9)(piVar9);
      temp_v4 = temp_v0;
      if (puVar4 == (unsigned int *)0x0) {
        (**(romwright_code **)(*piVar9 + 8))
                  (piVar9,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                   temp_v0 << 4);
        if (temp_v5 == temp_v0) {
          (**(romwright_code **)(*piVar9 + 4))(piVar9);
          return 0;
        }
        temp_v4 = 0;
        if (temp_v5 != 0) {
          puVar4 = (unsigned int *)(**(romwright_code **)*piVar9)(piVar9);
          temp_v4 = temp_v5;
          if (puVar4 == (unsigned int *)0x0) {
            (**(romwright_code **)(*piVar9 + 8))
                      (piVar9,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                       temp_v5 * 0x10);
            (**(romwright_code **)(*piVar9 + 4))(piVar9);
            return 0;
          }
        }
      }
    }
    puVar1 = (unsigned int *)param_1[1];
    puVar3 = puVar4;
    for (temp_v1 = temp_v2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        temp_v3 = puVar1[3];
        puVar3[3] = temp_v3;
        *(unsigned int **)(temp_v3 + 8) = puVar3;
        puVar3[2] = (unsigned int)puVar1;
        puVar1[3] = (unsigned int)puVar3;
      }
      puVar1 = puVar1 + 4;
      puVar3 = puVar3 + 4;
    }
    temp_v1 = param_1[3] - temp_v2;
    if (temp_v1 != 0) {
      puVar1 = puVar4 + (temp_v2 + 1) * 4;
      puVar3 = (unsigned int *)(param_1[1] + temp_v2 * 0x10);
      do {
        if (puVar1 != (unsigned int *)0x0) {
          *puVar1 = *puVar3;
          puVar1[1] = puVar3[1];
          temp_v3 = puVar3[3];
          puVar1[3] = temp_v3;
          *(unsigned int **)(temp_v3 + 8) = puVar1;
          puVar1[2] = (unsigned int)puVar3;
          puVar3[3] = (unsigned int)puVar1;
        }
        temp_v1 = temp_v1 - 1;
        puVar1 = puVar1 + 4;
        puVar3 = puVar3 + 4;
      } while (temp_v1 != 0);
    }
    puVar1 = (unsigned int *)param_1[1];
    param_1[1] = (unsigned int)puVar4;
    param_1[2] = temp_v4;
    temp_v1 = param_1[3];
    puVar4 = puVar1;
    while (puVar4 < puVar1 + temp_v1 * 4) {
      puVar3 = (unsigned int *)puVar4[2];
      if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar4) {
        if (puVar4[1] != 0) {
          (**(romwright_code **)(*(int *)*puVar4 + 4))();
        }
      }
      else {
        puVar3[3] = puVar4[3];
        *(unsigned int *)(puVar4[3] + 8) = puVar4[2];
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      puVar4[1] = 0;
      puVar4 = puVar4 + 4;
    }
    (**(romwright_code **)(*piVar9 + 4))(piVar9,puVar1);
  }
  param_1[3] = temp_v5;
  puVar4 = (unsigned int *)(param_1[1] + temp_v2 * 0x10);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    temp_v2 = param_2[3];
    puVar4[3] = temp_v2;
    *(unsigned int **)(temp_v2 + 8) = puVar4;
    puVar4[2] = (unsigned int)param_2;
    param_2[3] = (unsigned int)puVar4;
  }
  return 1;
}

} /* extern "C" */
