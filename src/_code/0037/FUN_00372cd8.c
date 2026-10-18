/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372cd8` (_code @ 0x372cd8, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_00372e84. */
/* Supplied declaration required: FUN_003733e4. */


int FUN_00372cd8(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int **ppiVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int *puVar6;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v3 = 0;
  temp_v4 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x188);
  if (*(int *)(param_1 + 0x24) != 0) {
    temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x24) << 2,4);
    if (temp_v1 == 0) {
      temp_v3 = -0x80000000;
    }
    if (-1 < temp_v3) {
      ppiVar3 = (int **)(param_1 + 0xc);
      temp_v0 = *(unsigned int *)(param_1 + 0x24) & 0x3fffffff;
      temp_v7 = param_2;
      temp_v8 = temp_v1;
      temp_v9 = temp_v1;
      temp_v10 = temp_v0;
      if (ppiVar3 != &temp_v7) {
        temp_v8 = *(unsigned int *)(param_1 + 0x10);
        temp_v9 = *(unsigned int *)(param_1 + 0x14);
        temp_v10 = *(unsigned int *)(param_1 + 0x18);
        temp_v7 = *ppiVar3;
        *(unsigned int *)(param_1 + 0x10) = temp_v1;
        *ppiVar3 = param_2;
        *(unsigned int *)(param_1 + 0x14) = temp_v1;
        *(unsigned int *)(param_1 + 0x18) = temp_v0;
      }
      puVar4 = &temp_v8;
      if (temp_v8 < temp_v9) {
        puVar4 = (unsigned int *)(temp_v9 - temp_v8);
      }
      if (temp_v8 < temp_v9) {
        puVar4 = (unsigned int *)((int)puVar4 << 0x1d);
      }
      if (temp_v8 < temp_v9) {
        temp_v1 = (unsigned int)puVar4 >> 0x1f;
      }
      else {
        temp_v1 = 0;
      }
      for (temp_v2 = temp_v1 + 1; temp_v2 < ((int)(temp_v9 - temp_v8) >> 2) + 1; temp_v2 = temp_v2 + 2) {
      }
      temp_v9 = temp_v8;
      if (temp_v7 != (int *)0x0 && temp_v8 != 0) {
        (**(romwright_code **)(*temp_v7 + 0xc))();
      }
      temp_v2 = 0;
      if (temp_v2 < *(int *)(param_1 + 0x24)) {
        do {
          if (temp_v3 < 0) {
            return temp_v3;
          }
          FUN_00372e84(&temp_v5,param_1,param_2,temp_v4);
          if (temp_v6 < 0) {
            FUN_003733e4(param_2,temp_v5);
            temp_v3 = -0x80000000;
          }
          else {
            puVar6 = *(unsigned int **)(param_1 + 0x14);
            *(unsigned int **)(param_1 + 0x14) = puVar6 + 1;
            if (puVar6 != (unsigned int *)0x0) {
              *puVar6 = temp_v5;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(int *)(param_1 + 0x24));
      }
    }
  }
  return temp_v3;
}
