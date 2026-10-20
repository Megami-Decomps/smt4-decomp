/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003717a0` (_code @ 0x3717a0, 0x364 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003717a0_arg0 fn_003717a0_arg0;
struct fn_003717a0_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x16c];
    void *field_0x178; /* +0x178 */
    undefined4 field_0x17c; /* +0x17c */
    void *field_0x180; /* +0x180 */
    uint field_0x184; /* +0x184 */
    unsigned char pad_0x188[0x6f];
    byte field_0x1f7; /* +0x1f7 */
    unsigned char pad_0x1f8[0x10];
    void *field_0x208; /* +0x208 */
    int field_0x20c; /* +0x20c */
    int field_0x210; /* +0x210 */
    uint field_0x214; /* +0x214 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;


int FUN_003717a0(fn_003717a0_arg0 *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  char temp_v0;
  void *pvVar2;
  void *pvVar3;
  int temp_v1;
  int *piVar5;
  unsigned int *puVar6;
  void *pvVar7;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar10;
  int *piVar11;
  int temp_v4;
  unsigned int temp_v5;
  void *pvVar14;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v6 = 0;
  pvVar14 = param_1->field_0x8;
  if ((~param_1->field_0x1f7 & 2) != 0) {
    temp_v5 = *(unsigned int *)((int)pvVar14 + 0xcc);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v2 = 0;
    pvVar2 = (void *)(**(romwright_code **)(*param_2 + 8))
                               (param_2,temp_v5 << 3,4,*(romwright_code **)(*param_2 + 8),param_4);
    if (pvVar2 == (void *)0x0) {
      temp_v6 = -0x80000000;
    }
    if (temp_v6 < 0) {
      return temp_v6;
    }
    pvVar3 = param_1->field_0x180;
    pvVar7 = (void *)param_1->field_0x17c;
    if (pvVar7 < pvVar3) {
      temp_v2 = (int)pvVar3 - (int)pvVar7;
    }
    if (pvVar7 < pvVar3) {
      temp_v2 = temp_v2 << 0x1c;
    }
    if (pvVar7 < pvVar3) {
      temp_v2 = temp_v2 >> 0x1f;
    }
    else {
      temp_v2 = 0;
    }
    for (temp_v3 = temp_v2 + 1; temp_v3 < (((int)pvVar3 - (int)pvVar7) >> 3) + 1; temp_v3 = temp_v3 + 2) {
    }
    param_1->field_0x180 = pvVar7;
    if (param_1->field_0x178 != (int *)0x0 && pvVar7 != (void *)0x0) {
      (**(romwright_code **)(*(int *)param_1->field_0x178 + 0xc))();
    }
    param_1->field_0x178 = param_2;
    param_1->field_0x17c = (undefined4)pvVar2;
    param_1->field_0x184 = (param_1->field_0x184 & 0xc0000000) | temp_v5;
    param_1->field_0x180 = pvVar2;
    temp_v3 = 0;
    param_1->field_0x184 = param_1->field_0x184 & 0x3fffffff;
    if (0 < (int)temp_v5) {
      do {
        if (*(int *)((int)pvVar14 + 0xd0) != 0) {
          temp_v1 = (int)pvVar14 + *(int *)((int)pvVar14 + 0xd0) + 0xd0;
        }
        else {
          temp_v1 = 0;
        }
        puVar6 = (unsigned int *)0x0;
        if (temp_v1 != 0) {
          piVar5 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
          temp_v1 = *piVar5;
          if (temp_v1 == 0) {
            puVar6 = (unsigned int *)0x0;
          }
          else {
            puVar6 = (unsigned int *)((int)piVar5 + temp_v1);
          }
        }
        puVar10 = (unsigned int *)param_1->field_0x180;
        temp_v7 = *puVar6;
        temp_v8 = puVar6[1];
        param_1->field_0x180 = puVar10 + 2;
        if (puVar10 != (unsigned int *)0x0) {
          *puVar10 = temp_v7;
          puVar10[1] = temp_v8;
        }
        if (*(int *)((int)pvVar14 + 0xd0) != 0) {
          temp_v1 = (int)pvVar14 + *(int *)((int)pvVar14 + 0xd0) + 0xd0;
        }
        else {
          temp_v1 = 0;
        }
        piVar5 = (int *)0x0;
        if (temp_v1 != 0) {
          piVar5 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
          temp_v1 = *piVar5;
          if (temp_v1 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)((int)piVar5 + temp_v1);
          }
        }
        piVar11 = (int *)(param_1->field_0x17c + temp_v3 * 8);
        temp_v9 = *piVar5 == 0;
        if (!temp_v9) {
          piVar5 = (int *)((int)piVar5 + *piVar5);
          temp_v9 = piVar5 == (int *)0x0;
        }
        if (!temp_v9) {
          *piVar11 = (int)piVar5 - (int)piVar11;
        }
        else {
          *piVar11 = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)temp_v5);
    }
  }
  else {
    temp_v3 = *(int *)(*(int *)(*(int *)(param_1 + 1) + 0x18) + 0x17c);
    temp_v5 = (*(int *)(*(int *)(*(int *)(param_1 + 1) + 0x18) + 0x180) - temp_v3) >> 3;
    pvVar7 = (void *)0x0;
    pvVar2 = param_1->field_0x180;
    pvVar3 = (void *)param_1->field_0x17c;
    if (pvVar3 < pvVar2) {
      param_3 = (int)pvVar2 - (int)pvVar3;
    }
    if (pvVar3 < pvVar2) {
      param_3 = param_3 << 0x1c;
    }
    if (pvVar3 < pvVar2) {
      param_3 = param_3 >> 0x1f;
    }
    else {
      param_3 = 0;
    }
    for (temp_v1 = param_3 + 1; temp_v1 < (((int)pvVar2 - (int)pvVar3) >> 3) + 1; temp_v1 = temp_v1 + 2) {
    }
    param_1->field_0x180 = pvVar3;
    if (param_1->field_0x178 != (int *)0x0 && pvVar3 != (void *)0x0) {
      (**(romwright_code **)(*(int *)param_1->field_0x178 + 0xc))();
    }
    param_1->field_0x178 = pvVar7;
    param_1->field_0x17c = temp_v3;
    param_1->field_0x184 = (param_1->field_0x184 & 0xc0000000) | temp_v5;
    param_1->field_0x184 = param_1->field_0x184 & 0x3fffffff;
    param_1->field_0x180 = (void *)(param_1->field_0x17c + temp_v5 * 8);
  }
  if (temp_v5 != 0) {
    temp_v3 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v5,4);
    if (temp_v3 == 0) {
      temp_v6 = -0x80000000;
    }
    if (-1 < temp_v6) {
      param_1->field_0x210 = param_1->field_0x20c;
      if (param_1->field_0x208 != (int *)0x0 && param_1->field_0x20c != 0) {
        (**(romwright_code **)(*(int *)param_1->field_0x208 + 0xc))();
      }
      param_1->field_0x208 = param_2;
      param_1->field_0x20c = temp_v3;
      param_1->field_0x214 = temp_v5 & 0x3fffffff;
      temp_v1 = 0;
      param_1->field_0x210 = temp_v3;
      if (0 < (int)temp_v5) {
        do {
          if (*(int *)((int)pvVar14 + 0xd0) != 0) {
            temp_v3 = (int)pvVar14 + *(int *)((int)pvVar14 + 0xd0) + 0xd0;
          }
          else {
            temp_v3 = 0;
          }
          temp_v4 = 0;
          if (temp_v3 != 0) {
            piVar5 = (int *)(temp_v3 + temp_v1 * 0x10 + 0x28);
            temp_v4 = *piVar5;
            if (temp_v4 == 0) {
              temp_v4 = 0;
            }
            else {
              temp_v4 = (int)piVar5 + temp_v4;
            }
          }
          temp_v0 = *(char *)(temp_v4 + 4);
          temp_v1 = temp_v1 + 1;
          temp_v3 = param_1->field_0x210;
          param_1->field_0x210 = temp_v3 + 1;
          if (temp_v3 != 0) {
            *(unsigned char *)temp_v3 = temp_v0 != '\0';
          }
        } while (temp_v1 < (int)temp_v5);
      }
    }
  }
  return temp_v6;
}

} /* extern "C" */
