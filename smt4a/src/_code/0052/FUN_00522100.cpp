/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522100` (_code @ 0x522100, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_uidivmod(unsigned int, int);

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

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00102c58(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: aeabi_uidivmod. */
extern unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(unsigned int, long long, unsigned int, unsigned int);


unsigned int FUN_00522100(int *param_1,int *param_2,unsigned int *param_3,int *param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [256];
  int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int *temp_v15;
  int temp_v16 [4];
  int *piStack_34;
  int *temp_v17;
  unsigned int *temp_v18;
  int *piStack_28;
  
  temp_v14 = 0;
  temp_v12 = param_6;
  temp_v15 = param_4;
  piStack_34 = param_1;
  temp_v17 = param_2;
  temp_v18 = param_3;
  piStack_28 = param_4;
  aeabi_uidivmod(param_5,param_1[2]);
  temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                    (param_1[3],romwright_piece_4_4(4,temp_v16),4,*param_1 + temp_v2 * 4);
  if (-1 < (int)temp_v0) {
    if (temp_v16[0] != -1) {
      temp_v13 = param_7 >> 1;
      temp_v4 = temp_v16[0];
      do {
        temp_v3 = param_1[4] + temp_v4;
        temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                          (param_1[7],romwright_piece_4_4(0x20,&temp_v7),param_1[4],temp_v3);
        temp_v5 = 0;
        if ((-1 < (int)temp_v0) &&
           ((temp_v5 = temp_v11, temp_v11 == 0 ||
            (temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                               (param_1[7],romwright_piece_4_4(temp_v11,temp_v6),0,temp_v3 + 0x20),
            -1 < (int)temp_v0)))) {
          temp_v0 = 0;
        }
        if ((int)temp_v0 < 0) goto LAB_00522230;
        if ((*temp_v15 == temp_v7 && param_7 == temp_v5) &&
           (temp_v1 = FUN_00102c58(temp_v12,temp_v6,temp_v13), temp_v1 == 0)) {
          temp_v0 = 0;
          temp_v14 = temp_v4;
          goto LAB_00522230;
        }
        temp_v4 = temp_v10;
      } while (temp_v10 != -1);
    }
    temp_v0 = 0xc880446f;
  }
LAB_00522230:
  if (-1 < (int)temp_v0) {
    *temp_v17 = temp_v14;
    temp_v18[4] = temp_v9;
    *temp_v18 = temp_v8;
    temp_v18[1] = uStack_88;
    temp_v18[2] = uStack_84;
    temp_v18[3] = uStack_80;
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
