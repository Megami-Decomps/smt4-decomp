/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00197f58` (_code @ 0x197f58, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00197f58_arg0 fn_00197f58_arg0;
struct fn_00197f58_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 *field_0x8; /* +0x8 */
    void *field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    uint field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    void *field_0x20; /* +0x20 */
};

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;


int FUN_00197f58(fn_00197f58_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  void *pvVar6;
  int temp_v2;
  unsigned long long *puVar8;
  unsigned int *puVar9;
  void *pvVar10;
  romwright_code *pcVar11;
  unsigned int *puVar12;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  
  piVar2 = (int *)0x0;
  if (param_3 == 0) {
    piVar2 = *(int **)&param_1->field_0x18;
  }
  else if (param_3 == 1) {
    piVar2 = *(int **)&param_1->field_0x1c;
  }
  else if (param_3 == 2) {
    piVar2 = *(int **)(param_1 + 1);
  }
  else if (param_3 == 3) {
    piVar2 = param_1->field_0x20;
  }
  temp_v6 = (**(romwright_code **)(*piVar2 + 0xc))();
  temp_v0 = 0;
  temp_v1 = param_1->field_0x14 & 0x3fffffff;
  if ((int)temp_v1 <= ((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4) {
    if (temp_v1 == 0) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = temp_v1 << 1;
    }
    if ((param_1->field_0x14 & 0x3fffffff) < temp_v1) {
      if (((param_1->field_0x8 == (unsigned int *)0x0) ||
          ((param_1->field_0x14 & 0xc0000000) != 0x40000000)) ||
         (pcVar11 = *(romwright_code **)(*param_1->field_0x8 + 8),
         puVar4 = (unsigned int *)(*pcVar11)(param_1->field_0x8,temp_v1 << 4,0x20,pcVar11,param_5),
         puVar4 == (unsigned int *)0x0)) goto LAB_00198128;
      temp_v4 = 0;
      puVar5 = param_1->field_0xc;
      puVar12 = param_1->field_0x10;
      puVar9 = puVar4;
      if (puVar5 != puVar12) {
        do {
          if (puVar9 != (unsigned int *)0x0) {
            temp_v5 = puVar5[1];
            *puVar9 = *puVar5;
            puVar9[1] = temp_v5;
            puVar9[2] = puVar5[2];
            puVar9[3] = puVar5[3];
          }
          puVar5 = puVar5 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar5 != puVar12);
        temp_v4 = ((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4;
      }
      pvVar10 = param_1->field_0xc;
      if (pvVar10 != (void *)0x0) {
        pvVar6 = param_1->field_0x10;
        if (pvVar10 >= pvVar6) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (((int)pvVar6 - (int)pvVar10) & 0x1fU) >> 4;
        }
        for (temp_v2 = temp_v3 + 1; temp_v2 < (((int)pvVar6 - (int)pvVar10) >> 4) + 1; temp_v2 = temp_v2 + 2)
        {
        }
        param_1->field_0x10 = pvVar10;
        (**(romwright_code **)(*param_1->field_0x8 + 0xc))(param_1->field_0x8,pvVar10);
      }
      param_1->field_0x10 = puVar4 + temp_v4 * 4;
      param_1->field_0xc = puVar4;
      param_1->field_0x14 = (param_1->field_0x14 & 0xc0000000) | temp_v1;
    }
  }
  temp_v0 = 1;
  puVar8 = param_1->field_0x10;
  if (puVar8 != (unsigned long long *)0x0) {
    *puVar8 = temp_v6;
    *(unsigned int *)(puVar8 + 1) = 0;
    *(unsigned int *)((int)puVar8 + 0xc) = 0;
  }
  param_1->field_0x10 = (void *)((int)param_1->field_0x10 + 0x10);
LAB_00198128:
  if (temp_v0) {
    temp_v4 = (int)param_1->field_0x10 - 0x10;
  }
  else {
    temp_v4 = 0;
  }
  return temp_v4;
}
