/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00515e14` (_code @ 0x515e14, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00515e14_arg0 fn_00515e14_arg0;
struct fn_00515e14_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    void *field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    uint field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    void *field_0x20; /* +0x20 */
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    byte field_0x28; /* +0x28 */
};

typedef int romwright_code();

unsigned long long *
FUN_00515e14(fn_00515e14_arg0 *param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s) */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  void *pvVar6;
  unsigned int *puVar7;
  int temp_v2;
  unsigned int *puVar9;
  unsigned long long *puVar10;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  temp_v1 = param_1->field_0x14;
  temp_v0 = temp_v1 & 0x3fffffff;
  if (((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4 >= (int)temp_v0) {
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 1;
    }
    else {
      temp_v0 = 1;
    }
    if (temp_v0 <= (temp_v1 & 0x3fffffff)) goto LAB_00515f70;
    piVar2 = param_1->field_0x8;
    temp_v3 = 0;
    if (((piVar2 != (int *)0x0) && ((temp_v1 & 0xc0000000) == 0x40000000)) &&
       (puVar3 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,temp_v0 << 4,0x20),
       puVar3 != (unsigned int *)0x0)) {
      puVar5 = param_1->field_0xc;
      puVar9 = param_1->field_0x10;
      puVar7 = puVar3;
      if (puVar5 != puVar9) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            temp_v4 = puVar5[1];
            *puVar7 = *puVar5;
            puVar7[1] = temp_v4;
            puVar7[2] = puVar5[2];
            puVar7[3] = puVar5[3];
          }
          puVar5 = puVar5 + 4;
          puVar7 = puVar7 + 4;
        } while (puVar5 != puVar9);
        puVar5 = param_1->field_0xc;
        temp_v3 = ((int)param_1->field_0x10 - (int)puVar5) >> 4;
      }
      if (puVar5 != (unsigned int *)0x0) {
        puVar7 = param_1->field_0x10;
        if (puVar5 < puVar7) {
          puVar9 = (unsigned int *)((int)puVar7 - (int)puVar5);
        }
        if (puVar5 < puVar7) {
          puVar9 = (unsigned int *)((int)puVar9 << 0x1b);
        }
        if (puVar5 < puVar7) {
          temp_v1 = (unsigned int)puVar9 >> 0x1f;
        }
        else {
          temp_v1 = 0;
        }
        for (temp_v2 = temp_v1 + 1; temp_v2 < (((int)puVar7 - (int)puVar5) >> 4) + 1; temp_v2 = temp_v2 + 2) {
        }
        param_1->field_0x10 = puVar5;
        (**(romwright_code **)(*(int *)param_1->field_0x8 + 0xc))();
      }
      param_1->field_0x10 = puVar3 + temp_v3 * 4;
      param_1->field_0xc = puVar3;
      param_1->field_0x14 = (param_1->field_0x14 & 0xc0000000) | temp_v0;
      goto LAB_00515f70;
    }
  }
  else {
LAB_00515f70:
    temp_v3 = 1;
    puVar3 = param_1->field_0x10;
    if (puVar3 != (unsigned int *)0x0) {
      temp_v4 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = temp_v4;
      puVar3[2] = param_2[2];
      puVar3[3] = param_2[3];
    }
    param_1->field_0x10 = (void *)((int)param_1->field_0x10 + 0x10);
  }
  if (temp_v3 == 0) {
    return (unsigned long long *)0x0;
  }
  pvVar6 = param_1->field_0x10;
  puVar10 = (unsigned long long *)((int)pvVar6 - 0x10);
  if (param_1->field_0x28 != 0) {
    if (param_3 != 1) {
      if ((~*(unsigned int *)(*(int *)((int)pvVar6 - 8) + 0x2c) & 4) != 0) {
        piVar2 = (int *)0x0;
        if (param_3 == 0) {
          piVar2 = *(int **)&param_1->field_0x18;
        }
        else if (param_3 == 2) {
          piVar2 = *(int **)&param_1->field_0x24;
        }
        else if (param_3 == 3) {
          piVar2 = param_1->field_0x20;
        }
        temp_v5 = (**(romwright_code **)(*piVar2 + 8))(piVar2,puVar10,param_4);
        *puVar10 = temp_v5;
        *(unsigned long long *)(*(int *)((int)pvVar6 - 8) + 0x78) = temp_v5;
        *(unsigned int *)(*(int *)((int)pvVar6 - 8) + 0x2c) =
             *(unsigned int *)(*(int *)((int)pvVar6 - 8) + 0x2c) | 4;
        return puVar10;
      }
      temp_v5 = *(unsigned long long *)(*(int *)((int)pvVar6 - 8) + 0x78);
      *puVar10 = temp_v5;
      return puVar10;
    }
    piVar2 = *(int **)&param_1->field_0x1c;
  }
  else {
    piVar2 = (int *)0x0;
    if (param_3 == 0) {
      piVar2 = *(int **)&param_1->field_0x18;
    }
    else {
      if (param_3 == 1) {
        piVar2 = *(int **)&param_1->field_0x1c;
        temp_v5 = (**(romwright_code **)(*piVar2 + 8))(piVar2,puVar10,param_4);
        *puVar10 = temp_v5;
        return puVar10;
      }
      if (param_3 == 2) {
        piVar2 = *(int **)&param_1->field_0x24;
      }
      else if (param_3 == 3) {
        piVar2 = param_1->field_0x20;
      }
    }
  }
  temp_v5 = (**(romwright_code **)(*piVar2 + 8))(piVar2,puVar10,param_4);
  *puVar10 = temp_v5;
  return puVar10;
}
