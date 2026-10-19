/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_CreateMaterials` (_code @ 0x370a94, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00370a94_arg0 fn_00370a94_arg0;
struct fn_00370a94_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x154];
    void *field_0x160; /* +0x160 */
    int field_0x164; /* +0x164 */
    undefined4 *field_0x168; /* +0x168 */
    uint field_0x16c; /* +0x16c */
    unsigned char pad_0x170[0x18];
    int field_0x188; /* +0x188 */
    unsigned char pad_0x18c[0x6b];
    byte field_0x1f7; /* +0x1f7 */
    unsigned char pad_0x1f8[0x20];
    void *field_0x218; /* +0x218 */
};

typedef int romwright_code();
/* Supplied declaration required: nw_gfx_Material_Create. */


int nw_gfx_Model_CreateMaterials(fn_00370a94_arg0 *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  void *pvVar9;
  unsigned int temp_v6;
  
  temp_v4 = 0;
  if ((~param_1->field_0x1f7 & 1) != 0) {
    pvVar9 = param_1->field_0x8;
    temp_v6 = *(unsigned int *)((int)pvVar9 + 0xbc);
    if (temp_v6 != 0) {
      puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v6 << 2,4);
      if (puVar1 == (unsigned int *)0x0) {
        temp_v4 = -0x80000000;
      }
      if (-1 < temp_v4) {
        param_1->field_0x168 = (unsigned int *)param_1->field_0x164;
        if (param_1->field_0x160 != (int *)0x0 &&
            (unsigned int *)param_1->field_0x164 != (unsigned int *)0x0) {
          (**(romwright_code **)(*(int *)param_1->field_0x160 + 0xc))();
        }
        param_1->field_0x164 = (int)puVar1;
        param_1->field_0x160 = param_2;
        param_1->field_0x16c = temp_v6 & 0x3fffffff;
        param_1->field_0x168 = puVar1;
        temp_v0 = param_1->field_0x188;
        temp_v5 = 0;
        if (temp_v5 < (int)temp_v6) {
          do {
            if (*(int *)((int)pvVar9 + 0xc0) != 0) {
              temp_v1 = (int)pvVar9 + *(int *)((int)pvVar9 + 0xc0) + 0xc0;
            }
            else {
              temp_v1 = 0;
            }
            temp_v2 = 0;
            if (temp_v1 != 0) {
              piVar4 = (int *)(temp_v1 + temp_v5 * 0x10 + 0x28);
              temp_v2 = *piVar4;
              if (temp_v2 == 0) {
                temp_v2 = 0;
              }
              else {
                temp_v2 = (int)piVar4 + temp_v2;
              }
            }
            nw_gfx_Material_Create(temp_v2,temp_v0 != 0,param_1,param_2);
            if (temp_v2 == 0) {
              temp_v4 = -0x80000000;
            }
            if (temp_v4 < 0) {
              return temp_v4;
            }
            piVar4 = (int *)param_1->field_0x168;
            temp_v5 = temp_v5 + 1;
            param_1->field_0x168 = (undefined4 *)(piVar4 + 1);
            if (piVar4 != (int *)0x0) {
              *piVar4 = temp_v2;
            }
          } while (temp_v5 < (int)temp_v6);
        }
      }
    }
  }
  else {
    param_1->field_0x188 = *(int *)(*(int *)((int)param_1->field_0x218 + 0x14) + 0x188);
    temp_v0 = *(int *)((int)param_1->field_0x218 + 0x14);
    temp_v6 = (*(int *)(temp_v0 + 0x168) - *(int *)(temp_v0 + 0x164)) >> 2;
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v6 << 2,4);
    if (puVar1 == (unsigned int *)0x0) {
      temp_v4 = -0x80000000;
    }
    if (-1 < temp_v4) {
      param_1->field_0x168 = (unsigned int *)param_1->field_0x164;
      if (param_1->field_0x160 != (int *)0x0 &&
          (unsigned int *)param_1->field_0x164 != (unsigned int *)0x0) {
        (**(romwright_code **)(*(int *)param_1->field_0x160 + 0xc))();
      }
      param_1->field_0x164 = (int)puVar1;
      param_1->field_0x160 = param_2;
      param_1->field_0x16c = temp_v6 & 0x3fffffff;
      temp_v0 = 0;
      param_1->field_0x168 = puVar1;
      if (0 < (int)temp_v6) {
        do {
          puVar1 = param_1->field_0x168;
          temp_v3 = *(unsigned int *)
                   (*(int *)(*(int *)((int)param_1->field_0x218 + 0x14) + 0x164) + temp_v0 * 4);
          param_1->field_0x168 = puVar1 + 1;
          temp_v0 = temp_v0 + 1;
          if (puVar1 != (unsigned int *)0x0) {
            *puVar1 = temp_v3;
          }
        } while (temp_v0 < (int)temp_v6);
      }
    }
  }
  return temp_v4;
}
