/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004498ec` (_code @ 0x4498ec, 0x3f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004498ec_arg0 fn_004498ec_arg0;
struct fn_004498ec_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    void *field_0x10; /* +0x10 */
    undefined4 *field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    uint field_0x1c; /* +0x1c */
    undefined4 *field_0x20; /* +0x20 */
    undefined4 *field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    uint field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x24];
    void *field_0x54; /* +0x54 */
};

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int FUN_002e3390(unsigned int);
extern int nw_ut_ResDicPatricia_Get(unsigned int *, unsigned int, unsigned int);


unsigned int FUN_004498ec(fn_004498ec_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar7;
  int temp_v3;
  unsigned int *puVar9;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v6 = *(unsigned int *)(*(int *)(param_2 + 8) + 0x10);
  temp_v10 = param_4;
  if ((int)temp_v6 < (param_1->field_0x18 - (int)param_1->field_0x14) >> 2) {
    temp_v7 = temp_v6;
    if ((int)temp_v6 < 0) {
      temp_v7 = 0;
    }
    param_1->field_0x18 = param_1->field_0x14 + temp_v7;
  }
  else {
    temp_v7 = temp_v6;
    if ((int)(param_1->field_0x1c & 0x3fffffff) < (int)temp_v6) {
      piVar3 = param_1->field_0x10;
      if (((piVar3 != (int *)0x0) && ((param_1->field_0x1c & 0xc0000000) == 0x40000000)) &&
         (puVar1 = (unsigned int *)(**(romwright_code **)(*piVar3 + 8))(piVar3,temp_v6 << 2,0x20),
         puVar1 != (unsigned int *)0x0)) {
        temp_v8 = 0;
        puVar2 = param_1->field_0x14;
        puVar9 = (unsigned int *)param_1->field_0x18;
        puVar7 = puVar1;
        if (puVar2 != puVar9) {
          do {
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar2;
            }
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar9);
          temp_v8 = (param_1->field_0x18 - (int)param_1->field_0x14) >> 2;
        }
        if (param_1->field_0x14 != (unsigned int *)0x0) {
          param_1->field_0x18 = param_1->field_0x14;
          (**(romwright_code **)(*(int *)param_1->field_0x10 + 0xc))();
        }
        param_1->field_0x18 = puVar1 + temp_v8;
        param_1->field_0x14 = puVar1;
        param_1->field_0x1c = (param_1->field_0x1c & 0xc0000000) | temp_v6;
      }
      else {
        temp_v7 = param_1->field_0x1c & 0x3fffffff;
      }
    }
    param_1->field_0x18 = param_1->field_0x14 + temp_v7;
  }
  temp_v7 = *(unsigned int *)((int)param_1->field_0x54 + 0x18);
  if ((int)temp_v7 < (param_1->field_0x28 - (int)param_1->field_0x24) >> 2) {
    temp_v9 = temp_v7;
    if ((int)temp_v7 < 0) {
      temp_v9 = 0;
    }
    param_1->field_0x28 = param_1->field_0x24 + temp_v9;
  }
  else {
    temp_v9 = temp_v7;
    if ((int)(param_1->field_0x2c & 0x3fffffff) < (int)temp_v7) {
      if (((param_1->field_0x20 != (unsigned int *)0x0) &&
          ((param_1->field_0x2c & 0xc0000000) == 0x40000000)) &&
         (puVar1 = (unsigned int *)
                   (**(romwright_code **)(*param_1->field_0x20 + 8))(param_1->field_0x20,temp_v7 << 2,0x20),
         puVar1 != (unsigned int *)0x0)) {
        temp_v8 = 0;
        puVar2 = param_1->field_0x24;
        puVar9 = (unsigned int *)param_1->field_0x28;
        puVar7 = puVar1;
        if (puVar2 != puVar9) {
          do {
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar2;
            }
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar9);
          temp_v8 = (param_1->field_0x28 - (int)param_1->field_0x24) >> 2;
        }
        if (param_1->field_0x24 != (unsigned int *)0x0) {
          param_1->field_0x28 = param_1->field_0x24;
          (**(romwright_code **)(*param_1->field_0x20 + 0xc))();
        }
        param_1->field_0x28 = puVar1 + temp_v8;
        param_1->field_0x24 = puVar1;
        param_1->field_0x2c = (param_1->field_0x2c & 0xc0000000) | temp_v7;
      }
      else {
        temp_v9 = param_1->field_0x2c & 0x3fffffff;
      }
    }
    param_1->field_0x28 = param_1->field_0x24 + temp_v9;
  }
  temp_v8 = 0;
  temp_v9 = temp_v6;
  if (0 < (int)temp_v6) {
    temp_v3 = 0;
    do {
      temp_v6 = temp_v6 - 1;
      puVar1 = param_1->field_0x14 + temp_v3;
      temp_v3 = temp_v3 + 1;
      *puVar1 = 0xffffffff;
      temp_v9 = 0;
    } while (temp_v6 != 0);
  }
  temp_v3 = 0;
  if (0 < (int)temp_v7) {
    temp_v6 = 0;
    do {
      piVar3 = (int *)((int)param_1->field_0x54 + 0x1c);
      temp_v4 = *piVar3;
      temp_v0 = temp_v6;
      if (temp_v4 != 0) {
        temp_v0 = (int)piVar3 + temp_v4;
      }
      temp_v1 = 0;
      if (temp_v0 != 0) {
        piVar3 = (int *)(temp_v0 + temp_v3 * 0x10 + 0x28);
        temp_v4 = *piVar3;
        temp_v1 = temp_v6;
        if (temp_v4 != 0) {
          temp_v1 = (int)piVar3 + temp_v4;
        }
      }
      temp_v4 = *(int *)(temp_v1 + 4);
      if (temp_v4 != 0) {
        temp_v9 = temp_v4 + (int)(temp_v1 + 4);
      }
      if (temp_v4 == 0) {
        temp_v9 = temp_v6;
      }
      piVar3 = (int *)(*(int *)(param_2 + 8) + 0x14);
      temp_v4 = *piVar3;
      temp_v10 = temp_v6;
      if (temp_v4 != 0) {
        temp_v10 = (int)piVar3 + temp_v4;
      }
      if (!(temp_v10 == 0 || temp_v9 == 0)) {
        temp_v2 = FUN_002e3390(temp_v9);
        temp_v4 = nw_ut_ResDicPatricia_Get(&temp_v10,temp_v9,temp_v2);
        if (temp_v4 != 0) {
          temp_v4 = (int)((temp_v4 - temp_v10) - 0x1c) >> 4;
        }
        else {
          temp_v4 = -1;
        }
      }
      else {
        temp_v4 = -1;
      }
      if (temp_v4 != -1) {
        temp_v8 = temp_v8 + 1;
        param_1->field_0x14[temp_v4] = temp_v3;
        param_1->field_0x24[temp_v3] = temp_v4;
        piVar3 = (int *)(*(int *)(param_2 + 8) + 0x14);
        temp_v5 = *piVar3;
        temp_v0 = temp_v6;
        if (temp_v5 != 0) {
          temp_v0 = (int)piVar3 + temp_v5;
        }
        temp_v1 = 0;
        if (temp_v0 != 0) {
          piVar3 = (int *)(temp_v0 + temp_v4 * 0x10 + 0x28);
          temp_v4 = *piVar3;
          temp_v1 = temp_v6;
          if (temp_v4 != 0) {
            temp_v1 = temp_v4 + (int)piVar3;
          }
        }
        temp_v4 = *(int *)(temp_v1 + 0x18);
        switch(*(unsigned int *)(temp_v1 + 0x10)) {
        case 1:
          *(unsigned int *)(temp_v4 + 0x2b4) = 0;
          break;
        case 2:
          *(unsigned int *)(temp_v4 + 0x2b0) = 0;
          *(unsigned int *)(temp_v4 + 0x2ac) = 0;
          break;
        case 3:
          *(unsigned int *)(temp_v4 + 0x2b0) = 0;
          break;
        case 4:
          *(unsigned int *)(temp_v4 + 0x2d0) = 0;
          break;
        case 5:
          *(unsigned int *)(temp_v4 + 0x2a8) = 0;
        }
      }
      else {
        param_1->field_0x24[temp_v3] = 0xffffffff;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)temp_v7);
  }
  param_1->field_0x8 = param_2;
  if (*(int *)((int)param_1->field_0x54 + 0x18) == temp_v8) {
    temp_v2 = 0;
  }
  else if (temp_v8 == 0) {
    temp_v2 = 0x80000002;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}
