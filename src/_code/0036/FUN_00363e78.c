/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363e78` (_code @ 0x363e78, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00363e78_arg0 fn_00363e78_arg0;
struct fn_00363e78_arg0 {
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
/* Supplied declaration required: FUN_002c00b4. */


unsigned int FUN_00363e78(fn_00363e78_arg0 *param_1,int *param_2)

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
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x134,4);
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
    FUN_002c00b4(puVar1 + 0x15,puVar3 + 0x15);
    FUN_002c00b4(puVar1 + 0x21,puVar3 + 0x21);
    *(unsigned char *)(puVar1 + 0x2d) = *(unsigned char *)(puVar3 + 0x2d);
    *(unsigned short *)((int)puVar1 + 0xb5) = *(unsigned short *)((int)puVar3 + 0xb5);
    *(unsigned char *)((int)puVar1 + 0xb7) = *(unsigned char *)((int)puVar3 + 0xb7);
    puVar1[0x2e] = puVar3[0x2e];
    temp_v0 = puVar3[0x30];
    temp_v1 = puVar3[0x31];
    temp_v2 = puVar3[0x32];
    puVar1[0x2f] = puVar3[0x2f];
    puVar1[0x30] = temp_v0;
    puVar1[0x31] = temp_v1;
    puVar1[0x32] = temp_v2;
    temp_v0 = puVar3[0x34];
    temp_v1 = puVar3[0x35];
    temp_v2 = puVar3[0x36];
    puVar1[0x33] = puVar3[0x33];
    puVar1[0x34] = temp_v0;
    puVar1[0x35] = temp_v1;
    puVar1[0x36] = temp_v2;
    temp_v0 = puVar3[0x38];
    temp_v1 = puVar3[0x39];
    temp_v2 = puVar3[0x3a];
    puVar1[0x37] = puVar3[0x37];
    puVar1[0x38] = temp_v0;
    puVar1[0x39] = temp_v1;
    puVar1[0x3a] = temp_v2;
    temp_v0 = puVar3[0x3c];
    temp_v1 = puVar3[0x3d];
    temp_v2 = puVar3[0x3e];
    puVar1[0x3b] = puVar3[0x3b];
    puVar1[0x3c] = temp_v0;
    puVar1[0x3d] = temp_v1;
    puVar1[0x3e] = temp_v2;
    puVar1[0x3f] = puVar3[0x3f];
    puVar1[0x40] = puVar3[0x40];
    puVar1[0x41] = puVar3[0x41];
    puVar1[0x42] = puVar3[0x42];
    temp_v0 = puVar3[0x44];
    temp_v1 = puVar3[0x45];
    puVar1[0x43] = puVar3[0x43];
    puVar1[0x44] = temp_v0;
    puVar1[0x45] = temp_v1;
    puVar1[0x46] = puVar3[0x46];
    puVar1[0x47] = puVar3[0x47];
    puVar1[0x48] = puVar3[0x48];
    puVar1[0x49] = puVar3[0x49];
    puVar1[0x4a] = puVar3[0x4a];
    puVar1[0x4b] = puVar3[0x4b];
    *(unsigned char *)(puVar1 + 0x4c) = *(unsigned char *)(puVar3 + 0x4c);
    *(unsigned short *)((int)puVar1 + 0x131) = *(unsigned short *)((int)puVar3 + 0x131);
    *(unsigned char *)((int)puVar1 + 0x133) = *(unsigned char *)((int)puVar3 + 0x133);
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
