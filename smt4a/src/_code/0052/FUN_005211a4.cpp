/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005211a4` (_code @ 0x5211a4, 0x564 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern int containerGrowCapacity(unsigned int, unsigned int);


unsigned int FUN_005211a4(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  int temp_v7;
  int *piVar12;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  
  puVar1 = (unsigned int *)*param_2;
  puVar9 = (unsigned int *)*param_3;
  if (puVar1 == puVar9) {
    return 1;
  }
  temp_v4 = param_1[2];
  temp_v10 = ((int)puVar9 - (int)puVar1) >> 4;
  temp_v5 = param_1[3] + temp_v10;
  if (temp_v4 >= temp_v5) {
    temp_v0 = param_1[3] + param_1[4];
    if (temp_v4 <= temp_v0) {
      temp_v0 = temp_v0 - temp_v4;
    }
    if (temp_v4 >= temp_v0 + temp_v10) {
      do {
        puVar7 = (unsigned int *)(param_1[1] + temp_v0 * 0x10);
        temp_v0 = temp_v0 + 1;
        if (puVar7 != (unsigned int *)0x0) {
          *puVar7 = *puVar1;
          puVar7[1] = puVar1[1];
          temp_v10 = puVar1[3];
          puVar7[3] = temp_v10;
          *(unsigned int **)(temp_v10 + 8) = puVar7;
          puVar7[2] = (unsigned int)puVar1;
          puVar1[3] = (unsigned int)puVar7;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar9);
    }
    else {
      temp_v6 = temp_v4 - temp_v0;
      puVar9 = puVar1 + temp_v6 * 4;
      for (; puVar1 != puVar9; puVar1 = puVar1 + 4) {
        puVar7 = (unsigned int *)(param_1[1] + temp_v0 * 0x10);
        temp_v0 = temp_v0 + 1;
        if (puVar7 != (unsigned int *)0x0) {
          *puVar7 = *puVar1;
          puVar7[1] = puVar1[1];
          temp_v7 = puVar1[3];
          puVar7[3] = temp_v7;
          *(unsigned int **)(temp_v7 + 8) = puVar7;
          puVar7[2] = (unsigned int)puVar1;
          puVar1[3] = (unsigned int)puVar7;
        }
      }
      temp_v7 = 0;
      temp_v1 = *param_2;
      for (puVar1 = (unsigned int *)(temp_v1 + temp_v6 * 0x10);
          puVar1 != (unsigned int *)(temp_v1 + temp_v10 * 0x10); puVar1 = puVar1 + 4) {
        puVar9 = (unsigned int *)(param_1[1] + temp_v7 * 0x10);
        temp_v7 = temp_v7 + 1;
        if (puVar9 != (unsigned int *)0x0) {
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          temp_v6 = puVar1[3];
          puVar9[3] = temp_v6;
          *(unsigned int **)(temp_v6 + 8) = puVar9;
          puVar9[2] = (unsigned int)puVar1;
          puVar1[3] = (unsigned int)puVar9;
        }
      }
    }
  }
  else {
    temp_v0 = param_1[5] - 1;
    temp_v8 = (temp_v5 + temp_v0) & ~temp_v0;
    temp_v10 = containerGrowCapacity(temp_v4,temp_v5);
    temp_v0 = (temp_v10 + temp_v0) & ~temp_v0;
    temp_v10 = 0;
    piVar12 = (int *)*param_1;
    temp_v6 = 0;
    temp_v4 = 0;
    if (temp_v0 != 0) {
      temp_v6 = (**(romwright_code **)*piVar12)(piVar12);
      temp_v4 = temp_v0;
      if (temp_v6 == 0) {
        (**(romwright_code **)(*piVar12 + 8))
                  (piVar12,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                   temp_v0 << 4);
        if (temp_v8 == temp_v0) {
          (**(romwright_code **)(*piVar12 + 4))(piVar12,0);
          return 0;
        }
        temp_v4 = 0;
        if (temp_v8 != 0) {
          temp_v6 = (**(romwright_code **)*piVar12)(piVar12);
          temp_v4 = temp_v8;
          if (temp_v6 == 0) {
            (**(romwright_code **)(*piVar12 + 8))
                      (piVar12,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                       temp_v8 << 4);
            (**(romwright_code **)(*piVar12 + 4))(piVar12,0);
            return 0;
          }
        }
      }
    }
    temp_v7 = param_1[3];
    if (temp_v7 != 0) {
      temp_v1 = param_1[4];
      temp_v2 = param_1[1];
      temp_v0 = param_1[2];
      puVar1 = (unsigned int *)(temp_v2 + temp_v1 * 0x10);
      if (temp_v0 >= (unsigned int)(temp_v1 + temp_v7)) {
        puVar9 = puVar1 + temp_v7 * 4;
        for (; puVar1 != puVar9; puVar1 = puVar1 + 4) {
          puVar7 = (unsigned int *)(temp_v6 + temp_v10 * 0x10);
          temp_v10 = temp_v10 + 1;
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar1;
            puVar7[1] = puVar1[1];
            temp_v7 = puVar1[3];
            puVar7[3] = temp_v7;
            *(unsigned int **)(temp_v7 + 8) = puVar7;
            puVar7[2] = (unsigned int)puVar1;
            puVar1[3] = (unsigned int)puVar7;
          }
        }
        temp_v10 = param_1[4];
        temp_v7 = param_1[3];
        temp_v1 = param_1[1];
        puVar1 = (unsigned int *)(temp_v1 + temp_v10 * 0x10);
        while (puVar1 < (unsigned int *)(temp_v1 + (temp_v7 + temp_v10) * 0x10)) {
          puVar9 = (unsigned int *)puVar1[2];
          if (puVar9 == (unsigned int *)0x0 || puVar9 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar9[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
      }
      else {
        temp_v1 = temp_v0 - temp_v1;
        temp_v7 = temp_v7 - temp_v1;
        temp_v10 = 0;
        for (; puVar1 != (unsigned int *)(temp_v2 + temp_v0 * 0x10); puVar1 = puVar1 + 4) {
          puVar9 = (unsigned int *)(temp_v6 + temp_v10 * 0x10);
          temp_v10 = temp_v10 + 1;
          if (puVar9 != (unsigned int *)0x0) {
            *puVar9 = *puVar1;
            puVar9[1] = puVar1[1];
            temp_v9 = puVar1[3];
            puVar9[3] = temp_v9;
            *(unsigned int **)(temp_v9 + 8) = puVar9;
            puVar9[2] = (unsigned int)puVar1;
            puVar1[3] = (unsigned int)puVar9;
          }
        }
        puVar1 = (unsigned int *)param_1[1];
        puVar9 = puVar1 + temp_v7 * 4;
        for (; puVar1 != puVar9; puVar1 = puVar1 + 4) {
          puVar7 = (unsigned int *)(temp_v6 + temp_v1 * 0x10);
          temp_v1 = temp_v1 + 1;
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar1;
            puVar7[1] = puVar1[1];
            temp_v10 = puVar1[3];
            puVar7[3] = temp_v10;
            *(unsigned int **)(temp_v10 + 8) = puVar7;
            puVar7[2] = (unsigned int)puVar1;
            puVar1[3] = (unsigned int)puVar7;
          }
        }
        temp_v10 = param_1[1];
        puVar1 = (unsigned int *)(temp_v10 + param_1[4] * 0x10);
        while (puVar1 < (unsigned int *)(temp_v10 + temp_v0 * 0x10)) {
          puVar9 = (unsigned int *)puVar1[2];
          if (puVar9 == (unsigned int *)0x0 || puVar9 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar9[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
        puVar9 = (unsigned int *)param_1[1];
        puVar1 = puVar9;
        while (puVar1 < puVar9 + temp_v7 * 4) {
          puVar7 = (unsigned int *)puVar1[2];
          if (puVar7 == (unsigned int *)0x0 || puVar7 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar7[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
      }
    }
    temp_v3 = param_1[1];
    param_1[1] = temp_v6;
    param_1[2] = temp_v4;
    (**(romwright_code **)(*piVar12 + 4))(piVar12,temp_v3);
    temp_v10 = param_1[3];
    puVar9 = (unsigned int *)*param_3;
    for (puVar1 = (unsigned int *)*param_2; puVar1 != puVar9; puVar1 = puVar1 + 4) {
      puVar7 = (unsigned int *)(param_1[1] + temp_v10 * 0x10);
      temp_v10 = temp_v10 + 1;
      if (puVar7 != (unsigned int *)0x0) {
        *puVar7 = *puVar1;
        puVar7[1] = puVar1[1];
        temp_v6 = puVar1[3];
        puVar7[3] = temp_v6;
        *(unsigned int **)(temp_v6 + 8) = puVar7;
        puVar7[2] = (unsigned int)puVar1;
        puVar1[3] = (unsigned int)puVar7;
      }
    }
    param_1[4] = 0;
  }
  param_1[3] = temp_v5;
  return 1;
}

} /* extern "C" */
