/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fc240` (_code @ 0x3fc240, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
} param_7_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_00100c90(unsigned int, int *, unsigned int, int, int *, unsigned int);
/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes. */


void FUN_003fc240(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,int *param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int *piVar8;
  int *piVar9;
  unsigned int temp_v8;
  int aiStack_190 [64];
  int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  unsigned int temp_v18 [4];
  unsigned int *puStack_34;
  unsigned int *temp_v19;
  unsigned int *temp_v20;
  int *piStack_28;
  
  temp_v16 = 0;
  temp_v14 = param_6;
  temp_v17 = param_4;
  puStack_34 = param_1;
  temp_v19 = param_2;
  temp_v20 = param_3;
  piStack_28 = param_4;
  aeabi_uidivmod(param_5,param_1[2]);
  temp_v0 = param_1[3];
  nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
            (temp_v0,4,*param_1 + temp_v2 * 4,param_1[1] + (unsigned int)romwright_carry_4(*param_1,temp_v2 * 4),
             temp_v18,4);
  if (-1 < (int)temp_v0) {
    if (temp_v18[0] != 0xffffffff) {
      temp_v15 = param_7 >> 1;
      temp_v6 = temp_v18[0];
      do {
        temp_v3 = param_1[4];
        temp_v5 = param_1[5];
        piVar9 = aiStack_190;
        temp_v8 = 0x20;
        temp_v4 = temp_v3 + temp_v6;
        temp_v0 = param_1[7];
        piVar8 = &temp_v9;
        nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes();
        temp_v7 = 0;
        if (-1 < (int)temp_v0) {
          temp_v7 = temp_v13;
          if (temp_v13 != 0) {
            temp_v0 = param_1[7];
            temp_v8 = temp_v13;
            nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                      (temp_v0,0,temp_v4 + 0x20,temp_v5 + romwright_carry_4(temp_v3,temp_v6) + (unsigned int)(0xffffffdf < temp_v4)
                       ,piVar9,temp_v13);
            piVar8 = piVar9;
            if ((int)temp_v0 >= 0) {
              temp_v0 = 0;
            }
          }
          else {
            temp_v0 = 0;
          }
        }
        if ((int)temp_v0 < 0) goto LAB_003fc370;
        if ((*temp_v17 == temp_v9 && param_7 == temp_v7) &&
           (temp_v1 = FUN_00100c90(temp_v14,aiStack_190,temp_v15,temp_v9,piVar8,temp_v8), temp_v1 == 0))
        {
          temp_v0 = 0;
          temp_v16 = temp_v6;
          goto LAB_003fc370;
        }
        temp_v6 = temp_v12;
      } while (temp_v12 != 0xffffffff);
    }
    temp_v0 = 0xc880446f;
  }
LAB_003fc370:
  if (-1 < (int)temp_v0) {
    *temp_v19 = temp_v16;
    temp_v20[4] = temp_v11;
    *temp_v20 = temp_v10;
    temp_v20[1] = uStack_88;
    temp_v20[2] = uStack_84;
    temp_v20[3] = uStack_80;
  }
  return;
}
