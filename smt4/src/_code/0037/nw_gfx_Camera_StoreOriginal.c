/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Camera_StoreOriginal` (_code @ 0x3721e0, 0x2c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003721e0_arg0 fn_003721e0_arg0;
struct fn_003721e0_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x260];
    void *field_0x26c; /* +0x26c */
    undefined4 field_0x270; /* +0x270 */
    undefined4 field_0x274; /* +0x274 */
    undefined4 field_0x278; /* +0x278 */
    undefined4 field_0x27c; /* +0x27c */
    undefined4 field_0x280; /* +0x280 */
    undefined4 field_0x284; /* +0x284 */
    undefined4 field_0x288; /* +0x288 */
    undefined4 field_0x28c; /* +0x28c */
    undefined4 field_0x290; /* +0x290 */
};

typedef int romwright_code();
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int nw_gfx_Camera_StoreOriginal(fn_003721e0_arg0 *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  void *pvVar3;
  unsigned char temp_v0;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v1;
  unsigned int *puVar8;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  puVar8 = param_1->field_0x8;
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,200,4);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    temp_v2 = puVar8[1];
    temp_v3 = puVar8[2];
    temp_v4 = puVar8[3];
    temp_v5 = puVar8[4];
    temp_v6 = puVar8[5];
    temp_v7 = puVar8[6];
    temp_v8 = puVar8[7];
    *puVar1 = *puVar8;
    puVar1[1] = temp_v2;
    puVar1[2] = temp_v3;
    puVar1[3] = temp_v4;
    puVar1[4] = temp_v5;
    puVar1[5] = temp_v6;
    puVar1[6] = temp_v7;
    puVar1[7] = temp_v8;
    temp_v2 = puVar8[9];
    temp_v3 = puVar8[10];
    temp_v4 = puVar8[0xb];
    puVar1[8] = puVar8[8];
    puVar1[9] = temp_v2;
    puVar1[10] = temp_v3;
    puVar1[0xb] = temp_v4;
    temp_v2 = puVar8[0xd];
    temp_v3 = puVar8[0xe];
    temp_v4 = puVar8[0xf];
    temp_v5 = puVar8[0x10];
    temp_v6 = puVar8[0x11];
    temp_v7 = puVar8[0x12];
    temp_v8 = puVar8[0x13];
    puVar1[0xc] = puVar8[0xc];
    puVar1[0xd] = temp_v2;
    puVar1[0xe] = temp_v3;
    puVar1[0xf] = temp_v4;
    puVar1[0x10] = temp_v5;
    puVar1[0x11] = temp_v6;
    puVar1[0x12] = temp_v7;
    puVar1[0x13] = temp_v8;
    puVar1[0x14] = puVar8[0x14];
    nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x15,puVar8 + 0x15);
    nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x21,puVar8 + 0x21);
    puVar1[0x2d] = puVar8[0x2d];
    puVar1[0x2e] = puVar8[0x2e];
    puVar1[0x2f] = puVar8[0x2f];
    puVar1[0x30] = puVar8[0x30];
    puVar1[0x31] = puVar8[0x31];
  }
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar2 = (unsigned int *)0x0;
  temp_v0 = puVar8[0x2d];
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) &&
         (puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4),
         puVar2 != (unsigned int *)0x0)) {
        if (puVar8[0x2f] != 0) {
          puVar5 = (unsigned int *)((int)puVar8 + puVar8[0x2f] + 0xbc);
        }
        else {
          puVar5 = (unsigned int *)0x0;
        }
        temp_v2 = puVar5[1];
        temp_v3 = puVar5[2];
        temp_v4 = puVar5[3];
        temp_v5 = puVar5[4];
        *puVar2 = *puVar5;
        puVar2[1] = temp_v2;
        puVar2[2] = temp_v3;
        puVar2[3] = temp_v4;
        puVar2[4] = temp_v5;
      }
    }
    else {
      puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x20,4);
      if (puVar2 != (unsigned int *)0x0) {
        if (puVar8[0x2f] != 0) {
          puVar5 = (unsigned int *)((int)puVar8 + puVar8[0x2f] + 0xbc);
        }
        else {
          puVar5 = (unsigned int *)0x0;
        }
        temp_v2 = puVar5[1];
        temp_v3 = puVar5[2];
        temp_v4 = puVar5[3];
        temp_v5 = puVar5[4];
        temp_v6 = puVar5[5];
        temp_v7 = puVar5[6];
        temp_v8 = puVar5[7];
        *puVar2 = *puVar5;
        puVar2[1] = temp_v2;
        puVar2[2] = temp_v3;
        puVar2[3] = temp_v4;
        puVar2[4] = temp_v5;
        puVar2[5] = temp_v6;
        puVar2[6] = temp_v7;
        puVar2[7] = temp_v8;
      }
    }
  }
  else {
    puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x18,4);
    if (puVar2 != (unsigned int *)0x0) {
      if (puVar8[0x2f] != 0) {
        puVar5 = (unsigned int *)((int)puVar8 + puVar8[0x2f] + 0xbc);
      }
      else {
        puVar5 = (unsigned int *)0x0;
      }
      temp_v2 = puVar5[1];
      temp_v3 = puVar5[2];
      temp_v4 = puVar5[3];
      temp_v5 = puVar5[4];
      temp_v6 = puVar5[5];
      *puVar2 = *puVar5;
      puVar2[1] = temp_v2;
      puVar2[2] = temp_v3;
      puVar2[3] = temp_v4;
      puVar2[4] = temp_v5;
      puVar2[5] = temp_v6;
    }
  }
  piVar6 = (int *)(puVar1 + 0x2f);
  if (puVar2 != (unsigned int *)0x0) {
    *piVar6 = (int)puVar2 - (int)piVar6;
  }
  else {
    *piVar6 = 0;
  }
  temp_v0 = puVar8[0x2e];
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) &&
         (puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x1c,4),
         puVar2 != (unsigned int *)0x0)) {
        temp_v1 = puVar8[0x30];
        if (temp_v1 != 0) {
          puVar8 = (unsigned int *)((int)puVar8 + temp_v1 + 0xc0);
        }
        else {
          puVar8 = (unsigned int *)0x0;
        }
        temp_v2 = puVar8[1];
        temp_v3 = puVar8[2];
        temp_v4 = puVar8[3];
        temp_v5 = puVar8[4];
        temp_v6 = puVar8[5];
        temp_v7 = puVar8[6];
        *puVar2 = *puVar8;
        puVar2[1] = temp_v2;
        puVar2[2] = temp_v3;
        puVar2[3] = temp_v4;
        puVar2[4] = temp_v5;
        puVar2[5] = temp_v6;
        puVar2[6] = temp_v7;
      }
    }
    else {
      puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x1c,4);
      if (puVar2 != (unsigned int *)0x0) {
        temp_v1 = puVar8[0x30];
        if (temp_v1 != 0) {
          puVar8 = (unsigned int *)((int)puVar8 + temp_v1 + 0xc0);
        }
        else {
          puVar8 = (unsigned int *)0x0;
        }
        temp_v2 = puVar8[1];
        temp_v3 = puVar8[2];
        temp_v4 = puVar8[3];
        temp_v5 = puVar8[4];
        temp_v6 = puVar8[5];
        temp_v7 = puVar8[6];
        *puVar2 = *puVar8;
        puVar2[1] = temp_v2;
        puVar2[2] = temp_v3;
        puVar2[3] = temp_v4;
        puVar2[4] = temp_v5;
        puVar2[5] = temp_v6;
        puVar2[6] = temp_v7;
      }
    }
  }
  else {
    puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar2 != (unsigned int *)0x0) {
      temp_v1 = puVar8[0x30];
      if (temp_v1 != 0) {
        puVar8 = (unsigned int *)(temp_v1 + (int)(puVar8 + 0x30));
      }
      else {
        puVar8 = (unsigned int *)0x0;
      }
      temp_v2 = *puVar8;
      temp_v3 = puVar8[1];
      temp_v5 = puVar8[2];
      temp_v4 = puVar8[3];
      puVar2[4] = puVar8[4];
      puVar2[3] = temp_v4;
      *puVar2 = temp_v2;
      puVar2[1] = temp_v3;
      puVar2[2] = temp_v5;
    }
  }
  piVar6 = (int *)(puVar1 + 0x30);
  if (puVar2 != (unsigned int *)0x0) {
    *piVar6 = (int)puVar2 - (int)piVar6;
  }
  else {
    *piVar6 = 0;
  }
  param_1->field_0x26c = puVar1;
  pvVar3 = param_1->field_0x8;
  temp_v2 = *(unsigned int *)((int)pvVar3 + 0x34);
  temp_v3 = *(unsigned int *)((int)pvVar3 + 0x38);
  temp_v4 = *(unsigned int *)((int)pvVar3 + 0x3c);
  temp_v5 = *(unsigned int *)((int)pvVar3 + 0x40);
  temp_v6 = *(unsigned int *)((int)pvVar3 + 0x44);
  temp_v7 = *(unsigned int *)((int)pvVar3 + 0x48);
  temp_v8 = *(unsigned int *)((int)pvVar3 + 0x4c);
  param_1->field_0x270 = *(unsigned int *)((int)pvVar3 + 0x30);
  param_1->field_0x274 = temp_v2;
  param_1->field_0x278 = temp_v3;
  param_1->field_0x27c = temp_v4;
  param_1->field_0x280 = temp_v5;
  param_1->field_0x284 = temp_v6;
  param_1->field_0x288 = temp_v7;
  param_1->field_0x28c = temp_v8;
  param_1->field_0x290 = *(unsigned int *)((int)pvVar3 + 0x50);
  return 0;
}
