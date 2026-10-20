/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e238` (_code @ 0x13e238, 0x67c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfefc(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nw_gfx_Skeleton_CreateCallbacks(unsigned int *, int *, unsigned int, unsigned int);
int nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(int **);

typedef int romwright_code(...);
/* stack frame of param_5: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_5_stack;

extern unsigned char DAT_0042142c; /* 0x42142c */
extern unsigned char DAT_0042187c; /* 0x42187c */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_00476640; /* 0x476640 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */
extern unsigned char DAT_004efdf4; /* 0x4efdf4 */
extern unsigned int DAT_004efe24; /* 0x4efe24 */
extern unsigned int DAT_004efe28; /* 0x4efe28 */
extern unsigned int DAT_004efe2c; /* 0x4efe2c */
extern unsigned int DAT_004efe30; /* 0x4efe30 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002bfefc. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_Skeleton_CreateCallbacks. */
/* Supplied declaration required: nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object. */


/* WARNING: Removing unreachable block (ram,0x0013e7f4) */
/* WARNING: Removing unreachable block (ram,0x0013e794) */
/* WARNING: Removing unreachable block (ram,0x0013e79c) */
/* WARNING: Removing unreachable block (ram,0x0013e7a4) */
/* WARNING: Removing unreachable block (ram,0x0013e7fc) */
/* WARNING: Removing unreachable block (ram,0x0013e804) */
/* WARNING: Removing unreachable block (ram,0x0013e7b8) */
/* WARNING: Removing unreachable block (ram,0x0013e818) */

unsigned int *
FUN_0013e238(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,int *param_5)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int *temp_v24;
  int *temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  int *temp_v29;
  unsigned int temp_v30;
  int *temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  unsigned char temp_v35 [12];
  int temp_v36;
  unsigned int temp_v37;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int temp_v38;
  unsigned char temp_v39 [84];
  unsigned int temp_v40;
  unsigned int *temp_v41;
  int iStack_34;
  unsigned int temp_v42;
  unsigned int uStack_2c;
  unsigned int *puStack_28;
  
  iStack_34 = param_1;
  temp_v42 = param_2;
  uStack_2c = param_3;
  puStack_28 = param_4;
  temp_v11 = (**(romwright_code **)(*param_5 + 8))(param_5,0x60);
  temp_v41 = (unsigned int *)temp_v11;
  temp_v40 = *(unsigned int *)(param_1 + 0x18);
  if (temp_v40 == 0) {
    temp_v5 = 0;
  }
  else {
    temp_v12 = (**(romwright_code **)(*param_5 + 8))(param_5,temp_v40 << 6);
    temp_v11 = romwright_piece_4_4((int)((unsigned long long)temp_v12 >> 0x20),temp_v41);
    temp_v5 = (unsigned int)temp_v12;
  }
  temp_v41 = (unsigned int *)temp_v11;
  temp_v40 = temp_v40 & 0x3fffffff;
  temp_v2 = *(unsigned int *)(param_1 + 0x18);
  temp_v27 = temp_v40;
  if (temp_v2 == 0) {
    temp_v27 = 0;
  }
  temp_v25 = param_5;
  if (temp_v2 == 0) {
    temp_v26 = 0;
  }
  else {
    temp_v12 = (**(romwright_code **)(*param_5 + 8))(param_5,temp_v2 * 0x30);
    temp_v11 = romwright_piece_4_4((int)((unsigned long long)temp_v12 >> 0x20),temp_v41);
    temp_v27 = (unsigned int)temp_v12;
    temp_v26 = temp_v27;
  }
  temp_v41 = (unsigned int *)temp_v11;
  temp_v28 = temp_v2 & 0x3fffffff;
  temp_v2 = *(unsigned int *)(param_1 + 0x18);
  temp_v31 = param_5;
  if (temp_v2 == 0) {
    temp_v32 = 0;
  }
  else {
    temp_v12 = (**(romwright_code **)(*param_5 + 8))(param_5,temp_v2 * 0x30);
    temp_v11 = romwright_piece_4_4((int)((unsigned long long)temp_v12 >> 0x20),temp_v41);
    temp_v32 = (int)temp_v12;
  }
  temp_v41 = (unsigned int *)temp_v11;
  temp_v4 = 0;
  temp_v34 = temp_v2 & 0x3fffffff;
  temp_v2 = temp_v5;
  temp_v33 = temp_v32;
  if (0 < *(int *)(param_1 + 0x18)) {
    temp_v12 = 0x3f800000;
    temp_v3 = temp_v5;
    do {
      temp_v41 = (unsigned int *)temp_v11;
      if (((DAT_00476640 & 1) == 0) &&
         (temp_v0 = FUN_002bfefc(&DAT_00476640,(int)((unsigned long long)temp_v11 >> 0x20)), temp_v0 != 0)) {
        temp_v30 = 0x7e1;
        if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
          DAT_004efd6c = (unsigned int)temp_v12;
          DAT_004efd70 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          DAT_004efd74 = DAT_004efd70;
          DAT_004efd78 = DAT_004efd70;
          DAT_004efd7c = DAT_004efd70;
          DAT_004efd80 = DAT_004efd6c;
          DAT_004efd84 = DAT_004efd70;
          DAT_004efd88 = DAT_004efd70;
          DAT_004efd8c = DAT_004efd70;
          DAT_004efd90 = DAT_004efd70;
          DAT_004efd94 = DAT_004efd6c;
          DAT_004efd98 = DAT_004efd70;
        }
        nn_math_ARMv6_MTX34CopyAsm(&DAT_004efdf4,&DAT_004efd6c);
        DAT_004efe24 = (unsigned int)temp_v12;
        DAT_004efe30 = temp_v30;
        DAT_004efe28 = DAT_004efe24;
        DAT_004efe2c = DAT_004efe24;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v35,&DAT_004efdf4);
      temp_v37 = DAT_004efe24;
      uStack_c4 = DAT_004efe28;
      uStack_c0 = DAT_004efe2c;
      temp_v38 = DAT_004efe30;
      temp_v2 = temp_v3 + 0x40;
      if (temp_v3 != 0) {
        nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v35);
        *(unsigned int *)(temp_v3 + 0x30) = temp_v37;
        *(unsigned int *)(temp_v3 + 0x34) = uStack_c4;
        *(unsigned int *)(temp_v3 + 0x38) = uStack_c0;
        *(unsigned int *)(temp_v3 + 0x3c) = temp_v38;
      }
      if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
        DAT_004efd6c = (unsigned int)temp_v12;
        DAT_004efd70 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        DAT_004efd74 = DAT_004efd70;
        DAT_004efd78 = DAT_004efd70;
        DAT_004efd7c = DAT_004efd70;
        DAT_004efd80 = DAT_004efd6c;
        DAT_004efd84 = DAT_004efd70;
        DAT_004efd88 = DAT_004efd70;
        DAT_004efd8c = DAT_004efd70;
        DAT_004efd90 = DAT_004efd70;
        DAT_004efd94 = DAT_004efd6c;
        DAT_004efd98 = DAT_004efd70;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v39,&DAT_004efd6c);
      temp_v3 = temp_v27;
      temp_v7 = temp_v27 != 0;
      temp_v27 = temp_v27 + 0x30;
      if (temp_v7) {
        nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v39);
      }
      puVar3 = temp_v39;
      if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
        DAT_004efd6c = (unsigned int)temp_v12;
        DAT_004efd70 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        DAT_004efd74 = DAT_004efd70;
        DAT_004efd78 = DAT_004efd70;
        DAT_004efd7c = DAT_004efd70;
        DAT_004efd80 = DAT_004efd6c;
        DAT_004efd84 = DAT_004efd70;
        DAT_004efd88 = DAT_004efd70;
        DAT_004efd8c = DAT_004efd70;
        DAT_004efd90 = DAT_004efd70;
        DAT_004efd94 = DAT_004efd6c;
        DAT_004efd98 = DAT_004efd70;
      }
      nn_math_ARMv6_MTX34CopyAsm(puVar3,&DAT_004efd6c);
      temp_v7 = temp_v33 != 0;
      temp_v33 = temp_v33 + 0x30;
      if (temp_v7) {
        nn_math_ARMv6_MTX34CopyAsm();
        puVar3 = temp_v1;
      }
      temp_v11 = romwright_piece_4_4(puVar3,temp_v41);
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v2;
    } while (temp_v4 < *(int *)(param_1 + 0x18));
  }
  puVar1 = temp_v41;
  temp_v7 = temp_v41 != (unsigned int *)0x0;
  temp_v36 = 0;
  temp_v3 = temp_v2;
  temp_v6 = temp_v5;
  if (temp_v7) {
    temp_v29 = (int *)*param_4;
    temp_v8 = param_4[3];
    temp_v9 = param_4[1];
    temp_v10 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = temp_v8 & 0xc0000000;
    temp_v22 = temp_v40;
    temp_v36 = 1;
    temp_v24 = param_5;
    temp_v13 = temp_v25;
    temp_v14 = temp_v26;
    temp_v6 = 0;
    temp_v3 = 0;
    temp_v15 = temp_v27;
    temp_v26 = 0;
    temp_v16 = temp_v28;
    temp_v28 = temp_v28 & 0xc0000000;
    temp_v27 = 0;
    temp_v17 = temp_v31;
    temp_v18 = temp_v32;
    temp_v32 = 0;
    temp_v19 = temp_v33;
    temp_v33 = 0;
    temp_v20 = temp_v34;
    temp_v34 = temp_v34 & 0xc0000000;
    temp_v41[4] = 0;
    temp_v41[2] = param_1;
    temp_v41[5] = 0;
    *temp_v41 = (unsigned int)&DAT_0042187c;
    temp_v41[1] = (unsigned int)param_5;
    *(unsigned char *)(temp_v41 + 6) = 0;
    temp_v41[3] = 0;
    temp_v21 = temp_v5;
    temp_v23 = temp_v2;
    nw_gfx_Skeleton_CreateCallbacks(temp_v41,param_5,temp_v42,uStack_2c);
    param_5 = temp_v24;
    *puVar1 = (unsigned int)&DAT_0042142c;
    puVar1[7] = (unsigned int)temp_v29;
    puVar1[10] = temp_v8;
    puVar1[8] = temp_v9;
    puVar1[9] = temp_v10;
    puVar1[0xb] = (unsigned int)temp_v24;
    puVar1[0xc] = temp_v21;
    puVar1[0xd] = temp_v23;
    puVar1[0xe] = temp_v22;
    puVar1[0xf] = (unsigned int)temp_v13;
    puVar1[0x10] = temp_v14;
    puVar1[0x11] = temp_v15;
    puVar1[0x12] = temp_v16;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = temp_v16 & 0xc0000000;
    param_4 = (unsigned int *)0x0;
    puVar1[0x13] = (unsigned int)temp_v17;
    puVar1[0x14] = temp_v18;
    puVar1[0x15] = temp_v19;
    puVar1[0x16] = temp_v20;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v20 = temp_v20 & 0xc0000000;
    puVar1[0x17] = param_1;
    nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(&temp_v17);
    nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(&temp_v13);
  }
  if ((temp_v36 != 0) && (temp_v24 != (int *)0x0 && param_4 != (unsigned int *)0x0)) {
    (**(romwright_code **)(*temp_v24 + 0xc))();
  }
  if ((temp_v7) && (temp_v29 != (int *)0x0 && param_4 != (unsigned int *)0x0)) {
    (**(romwright_code **)(*temp_v29 + 0xc))();
  }
  nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(&temp_v31);
  temp_v5 = nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(&temp_v25);
  if (temp_v6 < temp_v3) {
    temp_v5 = temp_v3 - temp_v6;
  }
  if (temp_v6 < temp_v3) {
    temp_v5 = temp_v5 << 0x19;
  }
  if (temp_v6 < temp_v3) {
    temp_v5 = temp_v5 >> 0x1f;
  }
  else {
    temp_v5 = 0;
  }
  for (temp_v4 = temp_v5 + 1; temp_v4 < ((int)(temp_v3 - temp_v6) >> 6) + 1; temp_v4 = temp_v4 + 2) {
  }
  if (param_5 != (int *)0x0 && temp_v6 != 0) {
    (**(romwright_code **)(*param_5 + 0xc))();
  }
  return puVar1;
}

} /* extern "C" */
