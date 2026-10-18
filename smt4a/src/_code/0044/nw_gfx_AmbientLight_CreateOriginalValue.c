/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AmbientLight_CreateOriginalValue` (_code @ 0x443ee8, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00443ee8_arg0 fn_00443ee8_arg0;
struct fn_00443ee8_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x13c];
    void *field_0x148; /* +0x148 */
    undefined4 field_0x14c; /* +0x14c */
    undefined4 field_0x150; /* +0x150 */
    undefined4 field_0x154; /* +0x154 */
    undefined4 field_0x158; /* +0x158 */
    undefined4 field_0x15c; /* +0x15c */
    undefined4 field_0x160; /* +0x160 */
    undefined4 field_0x164; /* +0x164 */
    undefined4 field_0x168; /* +0x168 */
    undefined4 field_0x16c; /* +0x16c */
};

typedef int romwright_code();
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int nw_gfx_AmbientLight_CreateOriginalValue(fn_00443ee8_arg0 *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  void *pvVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0xd0,4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar3 = param_1->field_0x8;
    temp_v0 = puVar3[1];
    temp_v1 = puVar3[2];
    temp_v2 = puVar3[3];
    temp_v3 = puVar3[4];
    temp_v4 = puVar3[5];
    temp_v5 = puVar3[6];
    temp_v6 = puVar3[7];
    *puVar1 = *puVar3;
    puVar1[1] = temp_v0;
    puVar1[2] = temp_v1;
    puVar1[3] = temp_v2;
    puVar1[4] = temp_v3;
    puVar1[5] = temp_v4;
    puVar1[6] = temp_v5;
    puVar1[7] = temp_v6;
    temp_v0 = puVar3[9];
    temp_v1 = puVar3[10];
    temp_v2 = puVar3[0xb];
    puVar1[8] = puVar3[8];
    puVar1[9] = temp_v0;
    puVar1[10] = temp_v1;
    puVar1[0xb] = temp_v2;
    temp_v0 = puVar3[0xd];
    temp_v1 = puVar3[0xe];
    temp_v2 = puVar3[0xf];
    temp_v3 = puVar3[0x10];
    temp_v4 = puVar3[0x11];
    temp_v5 = puVar3[0x12];
    temp_v6 = puVar3[0x13];
    puVar1[0xc] = puVar3[0xc];
    puVar1[0xd] = temp_v0;
    puVar1[0xe] = temp_v1;
    puVar1[0xf] = temp_v2;
    puVar1[0x10] = temp_v3;
    puVar1[0x11] = temp_v4;
    puVar1[0x12] = temp_v5;
    puVar1[0x13] = temp_v6;
    puVar1[0x14] = puVar3[0x14];
    nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x15,puVar3 + 0x15);
    nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x21,puVar3 + 0x21);
    *(unsigned char *)(puVar1 + 0x2d) = *(unsigned char *)(puVar3 + 0x2d);
    *(unsigned short *)((int)puVar1 + 0xb5) = *(unsigned short *)((int)puVar3 + 0xb5);
    *(unsigned char *)((int)puVar1 + 0xb7) = *(unsigned char *)((int)puVar3 + 0xb7);
    temp_v0 = puVar3[0x2f];
    temp_v1 = puVar3[0x30];
    temp_v2 = puVar3[0x31];
    puVar1[0x2e] = puVar3[0x2e];
    puVar1[0x2f] = temp_v0;
    puVar1[0x30] = temp_v1;
    puVar1[0x31] = temp_v2;
    puVar1[0x32] = puVar3[0x32];
    *(unsigned char *)(puVar1 + 0x33) = *(unsigned char *)(puVar3 + 0x33);
    *(unsigned short *)((int)puVar1 + 0xcd) = *(unsigned short *)((int)puVar3 + 0xcd);
    *(unsigned char *)((int)puVar1 + 0xcf) = *(unsigned char *)((int)puVar3 + 0xcf);
  }
  param_1->field_0x148 = puVar1;
  pvVar2 = param_1->field_0x8;
  temp_v0 = *(unsigned int *)((int)pvVar2 + 0x34);
  temp_v1 = *(unsigned int *)((int)pvVar2 + 0x38);
  temp_v2 = *(unsigned int *)((int)pvVar2 + 0x3c);
  temp_v3 = *(unsigned int *)((int)pvVar2 + 0x40);
  temp_v4 = *(unsigned int *)((int)pvVar2 + 0x44);
  temp_v5 = *(unsigned int *)((int)pvVar2 + 0x48);
  temp_v6 = *(unsigned int *)((int)pvVar2 + 0x4c);
  param_1->field_0x14c = *(unsigned int *)((int)pvVar2 + 0x30);
  param_1->field_0x150 = temp_v0;
  param_1->field_0x154 = temp_v1;
  param_1->field_0x158 = temp_v2;
  param_1->field_0x15c = temp_v3;
  param_1->field_0x160 = temp_v4;
  param_1->field_0x164 = temp_v5;
  param_1->field_0x168 = temp_v6;
  param_1->field_0x16c = *(unsigned int *)((int)pvVar2 + 0x50);
  return 0;
}
