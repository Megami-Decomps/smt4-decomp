/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c294` (_code @ 0x22c294, 0x460 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned int FUN_0022c198(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022c968. */


unsigned int FUN_0022c294(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar9;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v0 = param_1[3];
  temp_v6 = param_1[1];
  temp_v3 = temp_v6 + temp_v0 * 0x10;
  if (temp_v0 < param_2) {
    param_2 = param_2 - temp_v0;
    if (param_2 != 0) {
      temp_v5 = temp_v0 + param_2;
      temp_v4 = (temp_v3 - temp_v6) >> 4;
      if ((unsigned int)param_1[2] >= temp_v5) {
        temp_v0 = temp_v0 - temp_v4;
        temp_v2 = temp_v0;
        if (param_2 <= temp_v0) {
          temp_v2 = param_2;
        }
        temp_v1 = temp_v0 - temp_v2;
        if (temp_v2 != 0) {
          puVar3 = (unsigned int *)(temp_v6 + (temp_v5 - temp_v2) * 0x10);
          puVar1 = (unsigned int *)(temp_v3 + temp_v2 * -0x10);
          do {
            if (puVar3 != (unsigned int *)0x0) {
              *puVar3 = *puVar1;
              puVar3[1] = puVar1[1];
              temp_v3 = puVar1[3];
              puVar3[3] = temp_v3;
              *(unsigned int **)(temp_v3 + 8) = puVar3;
              puVar3[2] = (unsigned int)puVar1;
              puVar1[3] = (unsigned int)puVar3;
            }
            temp_v2 = temp_v2 - 1;
            puVar3 = puVar3 + 4;
            puVar1 = puVar1 + 4;
          } while (temp_v2 != 0);
        }
        temp_v0 = temp_v4 + param_2;
        FUN_0022c968(param_1,temp_v0,temp_v4,temp_v1);
        if ((unsigned int)param_1[3] <= temp_v0) {
          temp_v0 = param_1[3];
        }
        temp_v3 = param_1[1];
        puVar3 = (unsigned int *)(temp_v3 + temp_v4 * 0x10);
        while (puVar3 < (unsigned int *)(temp_v3 + temp_v0 * 0x10)) {
          puVar1 = (unsigned int *)puVar3[2];
          if (puVar1 == (unsigned int *)0x0 || puVar1 == puVar3) {
            if (puVar3[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar3 + 4))();
            }
          }
          else {
            puVar1[3] = puVar3[3];
            *(unsigned int *)(puVar3[3] + 8) = puVar3[2];
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          puVar3[1] = 0;
          puVar3 = puVar3 + 4;
        }
      }
      else {
        temp_v2 = FUN_0022c198(param_1[2],temp_v5);
        piVar9 = (int *)*param_1;
        puVar3 = (unsigned int *)0x0;
        temp_v0 = 0;
        if (temp_v2 != 0) {
          puVar3 = (unsigned int *)(**(romwright_code **)*piVar9)(piVar9);
          temp_v0 = temp_v2;
          if (puVar3 == (unsigned int *)0x0) {
            (**(romwright_code **)(*piVar9 + 8))
                      (piVar9,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                       temp_v2 << 4);
            if (temp_v5 == temp_v2) {
              (**(romwright_code **)(*piVar9 + 4))(piVar9);
              return 0;
            }
            temp_v0 = 0;
            if (temp_v5 != 0) {
              puVar3 = (unsigned int *)(**(romwright_code **)*piVar9)(piVar9);
              temp_v0 = temp_v5;
              if (puVar3 == (unsigned int *)0x0) {
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
        puVar2 = puVar3;
        for (temp_v3 = temp_v4; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          if (puVar2 != (unsigned int *)0x0) {
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            temp_v6 = puVar1[3];
            puVar2[3] = temp_v6;
            *(unsigned int **)(temp_v6 + 8) = puVar2;
            puVar2[2] = (unsigned int)puVar1;
            puVar1[3] = (unsigned int)puVar2;
          }
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 4;
        }
        temp_v3 = param_1[3] - temp_v4;
        if (temp_v3 != 0) {
          puVar1 = puVar3 + (temp_v4 + param_2) * 4;
          puVar2 = (unsigned int *)(param_1[1] + temp_v4 * 0x10);
          do {
            if (puVar1 != (unsigned int *)0x0) {
              *puVar1 = *puVar2;
              puVar1[1] = puVar2[1];
              temp_v6 = puVar2[3];
              puVar1[3] = temp_v6;
              *(unsigned int **)(temp_v6 + 8) = puVar1;
              puVar1[2] = (unsigned int)puVar2;
              puVar2[3] = (unsigned int)puVar1;
            }
            temp_v3 = temp_v3 - 1;
            puVar1 = puVar1 + 4;
            puVar2 = puVar2 + 4;
          } while (temp_v3 != 0);
        }
        puVar1 = (unsigned int *)param_1[1];
        param_1[1] = (unsigned int)puVar3;
        param_1[2] = temp_v0;
        temp_v3 = param_1[3];
        puVar3 = puVar1;
        while (puVar3 < puVar1 + temp_v3 * 4) {
          puVar2 = (unsigned int *)puVar3[2];
          if (puVar2 == (unsigned int *)0x0 || puVar2 == puVar3) {
            if (puVar3[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar3 + 4))();
            }
          }
          else {
            puVar2[3] = puVar3[3];
            *(unsigned int *)(puVar3[3] + 8) = puVar3[2];
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          puVar3[1] = 0;
          puVar3 = puVar3 + 4;
        }
        (**(romwright_code **)(*piVar9 + 4))(piVar9,puVar1);
      }
      param_1[3] = temp_v5;
      do {
        puVar3 = (unsigned int *)(param_1[1] + temp_v4 * 0x10);
        temp_v4 = temp_v4 + 1;
        if (puVar3 != (unsigned int *)0x0) {
          *puVar3 = *param_3;
          puVar3[1] = param_3[1];
          temp_v3 = param_3[3];
          puVar3[3] = temp_v3;
          *(unsigned int **)(temp_v3 + 8) = puVar3;
          puVar3[2] = (unsigned int)param_3;
          param_3[3] = (unsigned int)puVar3;
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  else {
    temp_v4 = temp_v6 + param_2 * 0x10;
    if (temp_v4 != temp_v3) {
      temp_v1 = temp_v0 - ((temp_v3 - temp_v4) >> 4);
      temp_v3 = (temp_v3 - temp_v6) >> 4;
      FUN_0022c968(param_1,(temp_v4 - temp_v6) >> 4,temp_v3,temp_v0 - temp_v3);
      temp_v6 = param_1[1];
      temp_v3 = param_1[3];
      puVar3 = (unsigned int *)(temp_v6 + temp_v1 * 0x10);
      while (puVar3 < (unsigned int *)(temp_v6 + temp_v3 * 0x10)) {
        puVar1 = (unsigned int *)puVar3[2];
        if (puVar1 == (unsigned int *)0x0 || puVar1 == puVar3) {
          if (puVar3[1] != 0) {
            (**(romwright_code **)(*(int *)*puVar3 + 4))();
          }
        }
        else {
          puVar1[3] = puVar3[3];
          *(unsigned int *)(puVar3[3] + 8) = puVar3[2];
          puVar3[2] = 0;
          puVar3[3] = 0;
        }
        puVar3[1] = 0;
        puVar3 = puVar3 + 4;
      }
      param_1[3] = temp_v1;
    }
  }
  return 1;
}
