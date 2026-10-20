/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036865c` (_code @ 0x36865c, 0x3cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0036865c_arg0 fn_0036865c_arg0;
struct fn_0036865c_arg0 {
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

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int libc_strlen(unsigned int);
extern int nw_ut_ResDicPatricia_Get(unsigned int *, unsigned int, unsigned int);


unsigned int FUN_0036865c(fn_0036865c_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v7 = *(unsigned int *)(*(int *)(param_2 + 8) + 0x10);
  temp_v10 = param_4;
  if ((int)temp_v7 < (param_1->field_0x18 - (int)param_1->field_0x14) >> 2) {
    temp_v6 = temp_v7;
    if ((int)temp_v7 < 0) {
      temp_v6 = 0;
    }
    param_1->field_0x18 = (undefined4)(param_1->field_0x14 + temp_v6);
  }
  else {
    temp_v9 = param_1->field_0x1c;
    temp_v6 = temp_v7;
    if ((int)(temp_v9 & 0x3fffffff) < (int)temp_v7) {
      piVar2 = (int *)param_1->field_0x10;
      if ((piVar2 == (int *)0x0) || ((temp_v9 & 0xc0000000) != 0x40000000)) {
        temp_v6 = temp_v9 & 0x3fffffff;
      }
      else {
        puVar6 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,temp_v7 << 2,0x20);
        puVar9 = param_1->field_0x14;
        puVar10 = (unsigned int *)param_1->field_0x18;
        temp_v8 = 0;
        puVar7 = puVar6;
        if (puVar9 != puVar10) {
          do {
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar9;
            }
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar9 != puVar10);
          puVar9 = param_1->field_0x14;
          temp_v8 = (param_1->field_0x18 - (int)puVar9) >> 2;
        }
        if (puVar9 != (unsigned int *)0x0) {
          (**(romwright_code **)(*(int *)param_1->field_0x10 + 0xc))();
        }
        param_1->field_0x18 = (undefined4)(puVar6 + temp_v8);
        param_1->field_0x14 = puVar6;
        param_1->field_0x1c = (param_1->field_0x1c & 0xc0000000) | temp_v7;
      }
    }
    param_1->field_0x18 = (undefined4)(param_1->field_0x14 + temp_v6);
  }
  temp_v6 = *(unsigned int *)((int)param_1->field_0x54 + 0x18);
  if ((int)temp_v6 < (param_1->field_0x28 - (int)param_1->field_0x24) >> 2) {
    temp_v9 = temp_v6;
    if ((int)temp_v6 < 0) {
      temp_v9 = 0;
    }
    param_1->field_0x28 = (undefined4)(param_1->field_0x24 + temp_v9);
  }
  else {
    temp_v9 = temp_v6;
    if ((int)(param_1->field_0x2c & 0x3fffffff) < (int)temp_v6) {
      if ((param_1->field_0x20 == (unsigned int *)0x0) ||
         ((param_1->field_0x2c & 0xc0000000) != 0x40000000)) {
        temp_v9 = param_1->field_0x2c & 0x3fffffff;
      }
      else {
        puVar6 = (unsigned int *)
                 (**(romwright_code **)(*param_1->field_0x20 + 8))(param_1->field_0x20,temp_v6 << 2,0x20);
        puVar9 = param_1->field_0x24;
        puVar10 = (unsigned int *)param_1->field_0x28;
        temp_v8 = 0;
        puVar7 = puVar6;
        if (puVar9 != puVar10) {
          do {
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar9;
            }
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar9 != puVar10);
          puVar9 = param_1->field_0x24;
          temp_v8 = (param_1->field_0x28 - (int)puVar9) >> 2;
        }
        if (puVar9 != (unsigned int *)0x0) {
          (**(romwright_code **)(*param_1->field_0x20 + 0xc))();
        }
        param_1->field_0x28 = (undefined4)(puVar6 + temp_v8);
        param_1->field_0x24 = puVar6;
        param_1->field_0x2c = (param_1->field_0x2c & 0xc0000000) | temp_v6;
      }
    }
    param_1->field_0x28 = (undefined4)(param_1->field_0x24 + temp_v9);
  }
  temp_v8 = 0;
  temp_v9 = temp_v7;
  if (0 < (int)temp_v7) {
    temp_v0 = 0;
    do {
      temp_v7 = temp_v7 - 1;
      puVar9 = param_1->field_0x14 + temp_v0;
      temp_v0 = temp_v0 + 1;
      *puVar9 = 0xffffffff;
      temp_v9 = 0;
    } while (temp_v7 != 0);
  }
  temp_v0 = 0;
  if (0 < (int)temp_v6) {
    temp_v7 = 0;
    do {
      piVar2 = (int *)((int)param_1->field_0x54 + 0x1c);
      temp_v4 = *piVar2;
      temp_v1 = temp_v7;
      if (temp_v4 != 0) {
        temp_v1 = (int)piVar2 + temp_v4;
      }
      temp_v2 = 0;
      if (temp_v1 != 0) {
        piVar2 = (int *)(temp_v1 + temp_v0 * 0x10 + 0x28);
        temp_v4 = *piVar2;
        temp_v2 = temp_v7;
        if (temp_v4 != 0) {
          temp_v2 = (int)piVar2 + temp_v4;
        }
      }
      temp_v4 = *(int *)(temp_v2 + 4);
      if (temp_v4 != 0) {
        temp_v9 = temp_v4 + (int)(temp_v2 + 4);
      }
      if (temp_v4 == 0) {
        temp_v9 = temp_v7;
      }
      piVar2 = (int *)(*(int *)(param_2 + 8) + 0x14);
      temp_v4 = *piVar2;
      temp_v10 = temp_v7;
      if (temp_v4 != 0) {
        temp_v10 = (int)piVar2 + temp_v4;
      }
      if (!(temp_v10 == 0 || temp_v9 == 0)) {
        temp_v3 = libc_strlen(temp_v9);
        temp_v4 = nw_ut_ResDicPatricia_Get(&temp_v10,temp_v9,temp_v3);
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
        param_1->field_0x14[temp_v4] = temp_v0;
        param_1->field_0x24[temp_v0] = temp_v4;
        piVar2 = (int *)(*(int *)(param_2 + 8) + 0x14);
        temp_v5 = *piVar2;
        temp_v1 = temp_v7;
        if (temp_v5 != 0) {
          temp_v1 = (int)piVar2 + temp_v5;
        }
        temp_v2 = 0;
        if (temp_v1 != 0) {
          piVar2 = (int *)(temp_v1 + temp_v4 * 0x10 + 0x28);
          temp_v4 = *piVar2;
          temp_v2 = temp_v7;
          if (temp_v4 != 0) {
            temp_v2 = temp_v4 + (int)piVar2;
          }
        }
        temp_v4 = *(int *)(temp_v2 + 0x18);
        switch(*(unsigned int *)(temp_v2 + 0x10)) {
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
        param_1->field_0x24[temp_v0] = 0xffffffff;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)temp_v6);
  }
  param_1->field_0x8 = param_2;
  if (*(int *)((int)param_1->field_0x54 + 0x18) == temp_v8) {
    temp_v3 = 0;
  }
  else if (temp_v8 == 0) {
    temp_v3 = 0x80000002;
  }
  else {
    temp_v3 = 1;
  }
  return temp_v3;
}

} /* extern "C" */
