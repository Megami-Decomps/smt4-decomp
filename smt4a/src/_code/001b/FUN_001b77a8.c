/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b77a8` (_code @ 0x1b77a8, 0x67c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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

extern unsigned char DAT_0055b848; /* 0x55b848 */
extern unsigned char DAT_0055bc98; /* 0x55bc98 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_005c4c38; /* 0x5c4c38 */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */
extern unsigned char DAT_0064c0dc; /* 0x64c0dc */
extern unsigned int DAT_0064c10c; /* 0x64c10c */
extern unsigned int DAT_0064c110; /* 0x64c110 */
extern unsigned int DAT_0064c114; /* 0x64c114 */
extern unsigned int DAT_0064c118; /* 0x64c118 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eba64. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_Skeleton_CreateCallbacks. */
/* Supplied declaration required: nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object. */


/* WARNING: Removing unreachable block (ram,0x001b7d64) */
/* WARNING: Removing unreachable block (ram,0x001b7d04) */
/* WARNING: Removing unreachable block (ram,0x001b7d0c) */
/* WARNING: Removing unreachable block (ram,0x001b7d14) */
/* WARNING: Removing unreachable block (ram,0x001b7d6c) */
/* WARNING: Removing unreachable block (ram,0x001b7d74) */
/* WARNING: Removing unreachable block (ram,0x001b7d28) */
/* WARNING: Removing unreachable block (ram,0x001b7d88) */

unsigned int *
FUN_001b77a8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,int *param_5)

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
      if (((DAT_005c4c38 & 1) == 0) &&
         (temp_v0 = FUN_002eba64(&DAT_005c4c38,(int)((unsigned long long)temp_v11 >> 0x20)), temp_v0 != 0)) {
        temp_v30 = 0x7e1;
        if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
          DAT_0064c054 = (unsigned int)temp_v12;
          DAT_0064c058 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          DAT_0064c05c = DAT_0064c058;
          DAT_0064c060 = DAT_0064c058;
          DAT_0064c064 = DAT_0064c058;
          DAT_0064c068 = DAT_0064c054;
          DAT_0064c06c = DAT_0064c058;
          DAT_0064c070 = DAT_0064c058;
          DAT_0064c074 = DAT_0064c058;
          DAT_0064c078 = DAT_0064c058;
          DAT_0064c07c = DAT_0064c054;
          DAT_0064c080 = DAT_0064c058;
        }
        nn_math_ARMv6_MTX34CopyAsm(&DAT_0064c0dc,&DAT_0064c054);
        DAT_0064c10c = (unsigned int)temp_v12;
        DAT_0064c118 = temp_v30;
        DAT_0064c110 = DAT_0064c10c;
        DAT_0064c114 = DAT_0064c10c;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v35,&DAT_0064c0dc);
      temp_v37 = DAT_0064c10c;
      uStack_c4 = DAT_0064c110;
      uStack_c0 = DAT_0064c114;
      temp_v38 = DAT_0064c118;
      temp_v2 = temp_v3 + 0x40;
      if (temp_v3 != 0) {
        nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v35);
        *(unsigned int *)(temp_v3 + 0x30) = temp_v37;
        *(unsigned int *)(temp_v3 + 0x34) = uStack_c4;
        *(unsigned int *)(temp_v3 + 0x38) = uStack_c0;
        *(unsigned int *)(temp_v3 + 0x3c) = temp_v38;
      }
      if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
        DAT_0064c054 = (unsigned int)temp_v12;
        DAT_0064c058 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        DAT_0064c05c = DAT_0064c058;
        DAT_0064c060 = DAT_0064c058;
        DAT_0064c064 = DAT_0064c058;
        DAT_0064c068 = DAT_0064c054;
        DAT_0064c06c = DAT_0064c058;
        DAT_0064c070 = DAT_0064c058;
        DAT_0064c074 = DAT_0064c058;
        DAT_0064c078 = DAT_0064c058;
        DAT_0064c07c = DAT_0064c054;
        DAT_0064c080 = DAT_0064c058;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v39,&DAT_0064c054);
      temp_v3 = temp_v27;
      temp_v7 = temp_v27 != 0;
      temp_v27 = temp_v27 + 0x30;
      if (temp_v7) {
        nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v39);
      }
      puVar3 = temp_v39;
      if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
        DAT_0064c054 = (unsigned int)temp_v12;
        DAT_0064c058 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        DAT_0064c05c = DAT_0064c058;
        DAT_0064c060 = DAT_0064c058;
        DAT_0064c064 = DAT_0064c058;
        DAT_0064c068 = DAT_0064c054;
        DAT_0064c06c = DAT_0064c058;
        DAT_0064c070 = DAT_0064c058;
        DAT_0064c074 = DAT_0064c058;
        DAT_0064c078 = DAT_0064c058;
        DAT_0064c07c = DAT_0064c054;
        DAT_0064c080 = DAT_0064c058;
      }
      nn_math_ARMv6_MTX34CopyAsm(puVar3,&DAT_0064c054);
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
    *temp_v41 = (unsigned int)&DAT_0055bc98;
    temp_v41[1] = (unsigned int)param_5;
    *(unsigned char *)(temp_v41 + 6) = 0;
    temp_v41[3] = 0;
    temp_v21 = temp_v5;
    temp_v23 = temp_v2;
    nw_gfx_Skeleton_CreateCallbacks(temp_v41,param_5,temp_v42,uStack_2c);
    param_5 = temp_v24;
    *puVar1 = (unsigned int)&DAT_0055b848;
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
