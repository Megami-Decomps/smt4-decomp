/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00521984` (_code @ 0x521984, 0x304 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int FUN_004d8f18(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00521d14. */
/* Supplied declaration required: FUN_00521d90. */


unsigned int FUN_00521984(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar8;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int *temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  
  temp_v4 = param_1[3];
  temp_v5 = temp_v4 + 1;
  puVar8 = (unsigned int *)(param_1[1] + temp_v4 * 0x10);
  temp_v3 = ((int)puVar8 - param_1[1]) >> 4;
  if ((unsigned int)param_1[2] >= temp_v5) {
    temp_v2 = (unsigned int)(temp_v4 - temp_v3 != 0);
    temp_v9 = temp_v5 - temp_v2;
    for (puVar5 = puVar8 + temp_v2 * -4; puVar5 != puVar8; puVar5 = puVar5 + 4) {
      puVar4 = (unsigned int *)(param_1[1] + temp_v9 * 0x10);
      temp_v9 = temp_v9 + 1;
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        temp_v6 = puVar5[3];
        puVar4[3] = temp_v6;
        *(unsigned int **)(temp_v6 + 8) = puVar4;
        puVar4[2] = (unsigned int)puVar5;
        puVar5[3] = (unsigned int)puVar4;
      }
    }
    temp_v7 = temp_v3 + 1;
    FUN_00521d90(param_1[1] + temp_v7 * 0x10,param_1[1] + temp_v3 * 0x10,(temp_v4 - temp_v3) - temp_v2);
    if ((unsigned int)param_1[3] <= temp_v7) {
      temp_v7 = param_1[3];
    }
    FUN_00521d14(param_1,temp_v3,temp_v7);
  }
  else {
    temp_v7 = FUN_004d8f18(param_1[2],temp_v5);
    temp_v10 = (int *)*param_1;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v4 = temp_v11;
    temp_v2 = temp_v12;
    if (temp_v7 != 0) {
      temp_v13 = temp_v7 << 4;
      temp_v4 = (**(romwright_code **)*temp_v10)();
      temp_v2 = temp_v7;
      if (temp_v4 == 0) {
        (**(romwright_code **)(*temp_v10 + 8))
                  (temp_v10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                   temp_v13);
        if (temp_v5 == temp_v7) {
          temp_v11 = 0;
          (**(romwright_code **)(*temp_v10 + 4))(temp_v10,0);
          return 0;
        }
        temp_v2 = temp_v12;
        if (temp_v5 != 0) {
          temp_v11 = temp_v4;
          temp_v4 = (**(romwright_code **)*temp_v10)(temp_v10,temp_v5 * 0x10);
          temp_v2 = temp_v5;
          if (temp_v4 == 0) {
            (**(romwright_code **)(*temp_v10 + 8))
                      (temp_v10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                       temp_v5 * 0x10);
            temp_v11 = 0;
            (**(romwright_code **)(*temp_v10 + 4))(temp_v10,0);
            return 0;
          }
        }
      }
    }
    temp_v12 = temp_v2;
    temp_v11 = temp_v4;
    puVar8 = (unsigned int *)param_1[1];
    temp_v4 = 0;
    puVar5 = puVar8 + temp_v3 * 4;
    for (; puVar8 != puVar5; puVar8 = puVar8 + 4) {
      puVar4 = (unsigned int *)(temp_v11 + temp_v4 * 0x10);
      temp_v4 = temp_v4 + 1;
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = *puVar8;
        puVar4[1] = puVar8[1];
        temp_v9 = puVar8[3];
        puVar4[3] = temp_v9;
        *(unsigned int **)(temp_v9 + 8) = puVar4;
        puVar4[2] = (unsigned int)puVar8;
        puVar8[3] = (unsigned int)puVar4;
      }
    }
    temp_v9 = param_1[1];
    temp_v6 = param_1[3];
    temp_v4 = temp_v3;
    for (puVar8 = (unsigned int *)(temp_v9 + temp_v3 * 0x10);
        puVar8 != (unsigned int *)(temp_v9 + temp_v6 * 0x10); puVar8 = puVar8 + 4) {
      temp_v4 = temp_v4 + 1;
      puVar5 = (unsigned int *)(temp_v11 + temp_v4 * 0x10);
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        temp_v8 = puVar8[3];
        puVar5[3] = temp_v8;
        *(unsigned int **)(temp_v8 + 8) = puVar5;
        puVar5[2] = (unsigned int)puVar8;
        puVar8[3] = (unsigned int)puVar5;
      }
    }
    temp_v0 = param_1[1];
    param_1[1] = temp_v11;
    temp_v1 = param_1[2];
    param_1[2] = temp_v12;
    temp_v11 = temp_v0;
    temp_v12 = temp_v1;
    FUN_00521d14(&temp_v10,0,param_1[3]);
    (**(romwright_code **)(*temp_v10 + 4))(temp_v10,temp_v11);
  }
  param_1[3] = temp_v5;
  puVar8 = (unsigned int *)(param_1[1] + temp_v3 * 0x10);
  if (puVar8 != (unsigned int *)0x0) {
    *puVar8 = *param_2;
    puVar8[1] = param_2[1];
    temp_v3 = param_2[3];
    puVar8[3] = temp_v3;
    *(unsigned int **)(temp_v3 + 8) = puVar8;
    puVar8[2] = (unsigned int)param_2;
    param_2[3] = (unsigned int)puVar8;
  }
  return 1;
}
