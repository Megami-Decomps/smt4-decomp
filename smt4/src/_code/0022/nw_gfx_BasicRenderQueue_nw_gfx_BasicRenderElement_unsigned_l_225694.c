/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En` (_code @ 0x225694, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00225694_arg0 fn_00225694_arg0;
struct fn_00225694_arg0 {
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
nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En
          (fn_00225694_arg0 *param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 unstructured edge(s); 1 goto(s) */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  void *pvVar7;
  unsigned int temp_v2;
  unsigned int *puVar9;
  unsigned long long *puVar10;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  temp_v2 = param_1->field_0x14;
  temp_v1 = temp_v2 & 0x3fffffff;
  if (((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4 >= (int)temp_v1) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if (temp_v1 > (temp_v2 & 0x3fffffff)) {
      piVar3 = param_1->field_0x8;
      temp_v0 = 0;
      if ((piVar3 == (int *)0x0) || ((temp_v2 & 0xc0000000) != 0x40000000)) goto LAB_002257e4;
      puVar4 = (unsigned int *)(**(romwright_code **)(*piVar3 + 8))(piVar3,temp_v1 << 4,0x20);
      puVar5 = param_1->field_0xc;
      puVar9 = param_1->field_0x10;
      temp_v3 = 0;
      puVar6 = puVar4;
      if (puVar5 != puVar9) {
        do {
          if (puVar6 != (unsigned int *)0x0) {
            temp_v4 = puVar5[1];
            *puVar6 = *puVar5;
            puVar6[1] = temp_v4;
            puVar6[2] = puVar5[2];
            puVar6[3] = puVar5[3];
          }
          puVar5 = puVar5 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar5 != puVar9);
        temp_v3 = ((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4;
      }
      if (param_1->field_0xc != (void *)0x0) {
        (**(romwright_code **)(*(int *)param_1->field_0x8 + 0xc))();
      }
      param_1->field_0x10 = puVar4 + temp_v3 * 4;
      param_1->field_0xc = puVar4;
      param_1->field_0x14 = (param_1->field_0x14 & 0xc0000000) | temp_v1;
    }
  }
  temp_v0 = 1;
  puVar6 = param_1->field_0x10;
  if (puVar6 != (unsigned int *)0x0) {
    temp_v4 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = temp_v4;
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
  }
  param_1->field_0x10 = (void *)((int)param_1->field_0x10 + 0x10);
LAB_002257e4:
  if (!temp_v0) {
    return (unsigned long long *)0x0;
  }
  pvVar7 = param_1->field_0x10;
  puVar10 = (unsigned long long *)((int)pvVar7 - 0x10);
  if (param_1->field_0x28 != 0) {
    if (param_3 != 1) {
      if ((~*(unsigned int *)(*(int *)((int)pvVar7 - 8) + 0x2c) & 4) != 0) {
        piVar3 = (int *)0x0;
        if (param_3 == 0) {
          piVar3 = *(int **)&param_1->field_0x18;
        }
        else if (param_3 == 2) {
          piVar3 = *(int **)&param_1->field_0x24;
        }
        else if (param_3 == 3) {
          piVar3 = param_1->field_0x20;
        }
        temp_v5 = (**(romwright_code **)(*piVar3 + 8))(piVar3,puVar10,param_4);
        *puVar10 = temp_v5;
        *(unsigned long long *)(*(int *)((int)pvVar7 - 8) + 0x78) = temp_v5;
        *(unsigned int *)(*(int *)((int)pvVar7 - 8) + 0x2c) =
             *(unsigned int *)(*(int *)((int)pvVar7 - 8) + 0x2c) | 4;
        return puVar10;
      }
      temp_v5 = *(unsigned long long *)(*(int *)((int)pvVar7 - 8) + 0x78);
      *puVar10 = temp_v5;
      return puVar10;
    }
    piVar3 = *(int **)&param_1->field_0x1c;
  }
  else {
    piVar3 = (int *)0x0;
    if (param_3 == 0) {
      piVar3 = *(int **)&param_1->field_0x18;
    }
    else {
      if (param_3 == 1) {
        piVar3 = *(int **)&param_1->field_0x1c;
        temp_v5 = (**(romwright_code **)(*piVar3 + 8))(piVar3,puVar10,param_4);
        *puVar10 = temp_v5;
        return puVar10;
      }
      if (param_3 == 2) {
        piVar3 = *(int **)&param_1->field_0x24;
      }
      else if (param_3 == 3) {
        piVar3 = param_1->field_0x20;
      }
    }
  }
  temp_v5 = (**(romwright_code **)(*piVar3 + 8))(piVar3,puVar10,param_4);
  *puVar10 = temp_v5;
  return puVar10;
}
