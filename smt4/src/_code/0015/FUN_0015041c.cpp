/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015041c` (_code @ 0x15041c, 0x318 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1828(...);
int FUN_002c2390(int);
int nn_math_ARMv6_MTX34MultAsm(...);
int nnnstdMemCpy(...);
int nw_gfx_internal_NWCopyMtx34Reverse(...);
int nw_gfx_internal_NWCopyVec3Reverse(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int spB4; /* 0xb4: local_b4 */
} param_4_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_002a1828. */
/* Supplied declaration required: FUN_002c2390. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nnnstdMemCpy. */
extern unsigned int nw_gfx_TransformNode_InverseWorldMatrix(int);
/* Supplied declaration required: nw_gfx_internal_NWCopyMtx34Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec3Reverse. */


void FUN_0015041c(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar8;
  unsigned char temp_v5 [56];
  unsigned char temp_v6 [48];
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_3 != 0) {
    temp_v4 = *(int *)(*(int *)(param_2 + 0x22c) + param_4 * 4);
    puVar8 = *(unsigned int **)(temp_v4 + 8);
    if ((puVar8 != (unsigned int *)0x0) && ((~*puVar8 & 0x40000001) != 0)) {
      puVar8 = (unsigned int *)0x0;
    }
    temp_v3 = *(int *)(*(int *)(param_2 + 0x240) + param_4 * 4);
    temp_v10 = param_1;
    iStack_30 = param_2;
    iStack_2c = param_3;
    iStack_28 = param_4;
    if (*(char *)((int)puVar8 + 0x51) != '\0') {
      FUN_002c2390(temp_v3);
    }
    temp_v0 = temp_v3 + (unsigned int)(*(char *)(temp_v3 + 0x30) != '\0') * 4;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x14);
    nnnstdMemCpy(DAT_004652a0,*(unsigned int *)(temp_v0 + 0xc),temp_v2);
    puVar5 = (unsigned int *)((temp_v2 & 0xfffffffc) + (int)DAT_004652a0);
    DAT_004652a0 = puVar5;
    *puVar5 = 0x80000006;
    puVar5[1] = 0x804f02c0;
    puVar5[2] = 0;
    puVar5[3] = *(unsigned int *)(param_3 + 0x28);
    puVar5[4] = *(unsigned int *)(param_3 + 0x24);
    puVar5[5] = *(unsigned int *)(param_3 + 0x20);
    temp_v0 = *(int *)(*(int *)(temp_v10 + 8) + 0xa4);
    puVar5[6] = 0x80000019;
    puVar5[7] = 0xf02c0;
    puVar2 = *(unsigned int **)(temp_v4 + 8);
    if ((puVar2 != (unsigned int *)0x0) && ((~*puVar2 & 0x40000001) != 0)) {
      puVar2 = (unsigned int *)0x0;
    }
    if ((char)puVar2[0x14] != '\0') {
      FUN_002a1828(puVar5 + 8,temp_v0 + 0x148,0x3bf02c1);
      nw_gfx_internal_NWCopyMtx34Reverse(puVar5 + 0x15,temp_v0 + 0x178);
      puVar5[0x21] = 0;
      puVar5[0x22] = 0;
      puVar5[0x23] = 0;
      puVar5[0x24] = 0x3f800000;
      puVar5[0x25] = 0;
      puVar5[0x26] = 0;
      puVar5[0x27] = 0x3f800000;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2a] = 0x3f800000;
      puVar5[0x2b] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0x3f800000;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      puVar5[0x33] = 0x3f800000;
      puVar5[0x34] = 0;
      puVar5[0x35] = 0;
      puVar5[0x36] = 0x3f800000;
      puVar5[0x37] = 0;
      puVar5[0x38] = 0;
    }
    else {
      nn_math_ARMv6_MTX34MultAsm(temp_v6,temp_v0 + 0x148,param_2 + 0x8c);
      FUN_002a1828(puVar5 + 8,temp_v6,0x3bf02c1);
      temp_v1 = nw_gfx_TransformNode_InverseWorldMatrix(param_2);
      nn_math_ARMv6_MTX34MultAsm(temp_v5,temp_v1,temp_v0 + 0x178);
      nw_gfx_internal_NWCopyMtx34Reverse(puVar5 + 0x15,temp_v5);
      temp_v1 = nw_gfx_TransformNode_InverseWorldMatrix(param_2);
      nw_gfx_internal_NWCopyMtx34Reverse(puVar5 + 0x21,temp_v1);
      nw_gfx_internal_NWCopyMtx34Reverse(puVar5 + 0x2d,param_2 + 0x8c);
    }
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v2 = puVar8[0x11];
    if (temp_v2 != 0) {
      temp_v0 = temp_v2 + (int)(puVar8 + 0x11);
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      temp_v7 = *(unsigned int *)(temp_v0 + 8);
      temp_v8 = *(unsigned int *)(temp_v0 + 0xc);
      temp_v9 = *(unsigned int *)(temp_v0 + 0x10);
    }
    nw_gfx_internal_NWCopyVec3Reverse(puVar5 + 0x39,&temp_v7);
    nw_gfx_internal_NWCopyVec3Reverse(puVar5 + 0x3d,temp_v4 + 0x74);
    nw_gfx_internal_NWCopyVec3Reverse(puVar5 + 0x41,temp_v4 + 0x80);
    puVar5[0x45] = 0;
    puVar5[0x46] = *(unsigned int *)(*(int *)(temp_v4 + 0x4c) + 0xcc);
    puVar5[0x47] = 0xf0228;
    temp_v2 = *(unsigned int *)(temp_v3 + (unsigned int)(*(char *)(temp_v3 + 0x30) != '\0') * 4 + 0x200);
    if ((temp_v0 != 0) && (*(char *)(temp_v0 + 4) == '\0')) {
      temp_v2 = temp_v2 + (*(int *)(*(int *)(temp_v4 + 0x4c) + 200) -
                      *(int *)(*(int *)(temp_v4 + 0x4c) + 0xcc)) * 2;
    }
    puVar5[0x48] = temp_v2 | 0x80000000;
    puVar5[0x49] = 0xf0227;
    DAT_004652a0 = DAT_004652a0 + 0x4a;
    temp_v2 = *(unsigned int *)(temp_v3 + 0x28);
    nnnstdMemCpy(DAT_004652a0,*(unsigned int *)(temp_v3 + 0x24));
    DAT_004652a0 = (unsigned int *)((int)DAT_004652a0 + (temp_v2 & 0xfffffffc));
    temp_v2 = *(unsigned int *)(temp_v3 + 0x20);
    nnnstdMemCpy(DAT_004652a0,*(unsigned int *)(temp_v3 + 0x1c),temp_v2);
    DAT_004652a0 = (unsigned int *)((int)DAT_004652a0 + (temp_v2 & 0xfffffffc));
  }
  return;
}

} /* extern "C" */
