/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_RomFsArchive_Directory_TryRead` (_code @ 0x3559ec, 0x308 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00239b94(...);

/* stack frame of param_4: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00239b94. */
extern unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(unsigned int, long long, unsigned int, unsigned int);


unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_Directory_TryRead
               (int param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int temp_v10 [3];
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13 [2];
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int iStack_34;
  int *temp_v21;
  int iStack_2c;
  int iStack_28;
  
  temp_v3 = 0;
  iStack_34 = param_1;
  temp_v21 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (0 < param_4) {
    do {
      temp_v4 = param_3 + temp_v3 * 0x228;
      temp_v1 = *(int *)(param_1 + 4) + 0x20;
      temp_v5 = 0x4414;
      if ((*(int *)(param_1 + 8) != -1) &&
         (FUN_00239b94(temp_v1,temp_v13,temp_v10,temp_v4,&temp_v12,*(int *)(param_1 + 8)), temp_v5 = temp_v1
         , -1 < (int)temp_v1)) {
        *(unsigned short *)(temp_v4 + (temp_v12 & 0xfffffffe)) = 0;
        *(int *)(param_1 + 8) = temp_v10[0];
        temp_v5 = 0;
      }
      if ((((temp_v5 & 0x3fc00) == 0x4400) && ((temp_v5 & 0x3ff) >= 0x14)) && ((temp_v5 & 0x3ff) < 0x1e))
      break;
      temp_v3 = temp_v3 + 1;
      *(unsigned char *)(temp_v4 + 0x21c) = 1;
      *(unsigned char *)(temp_v4 + 0x21a) = 0;
    } while (temp_v3 < param_4);
  }
  do {
    if (param_4 <= temp_v3) {
      *temp_v21 = temp_v3;
      return 0;
    }
    temp_v5 = *(unsigned int *)(param_1 + 0xc);
    temp_v4 = *(int *)(param_1 + 4);
    temp_v6 = param_3 + temp_v3 * 0x228;
    if (temp_v5 == 0xffffffff) {
      temp_v1 = 0x4414;
    }
    else {
      temp_v14 = 0;
      temp_v12 = *(int *)(temp_v4 + 0x58) + temp_v5;
      temp_v13[0] = temp_v6;
      temp_v1 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                        (*(unsigned int *)(temp_v4 + 100),romwright_piece_4_4(0x20,&temp_v15),(unsigned int)&temp_v15,temp_v12);
      if ((-1 < (int)temp_v1) &&
         (((temp_v13[0] == 0 || (temp_v14 = temp_v19, temp_v19 == 0)) ||
          (temp_v1 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                             (*(unsigned int *)(temp_v4 + 100),romwright_piece_4_4(temp_v19,temp_v13[0]),temp_v19,
                              temp_v12 + 0x20), -1 < (int)temp_v1)))) {
        temp_v1 = 0;
      }
      if (-1 < (int)temp_v1) {
        temp_v20 = temp_v16;
        temp_v1 = 0;
      }
      if (-1 < (int)temp_v1) {
        temp_v1 = 0;
        *(unsigned short *)(temp_v6 + (temp_v14 & 0xfffffffe)) = 0;
        *(unsigned int *)(param_1 + 0xc) = temp_v20;
      }
    }
    if ((((temp_v1 & 0x3fc00) == 0x4400) && ((temp_v1 & 0x3ff) >= 0x14)) && ((temp_v1 & 0x3ff) < 0x1e)) {
      *temp_v21 = temp_v3;
      return 0;
    }
    temp_v2 = *(int *)(param_1 + 4);
    temp_v7 = temp_v2 + 0x20;
    temp_v1 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                      (*(unsigned int *)(temp_v2 + 100),romwright_piece_4_4(0x20,&temp_v15),
                       *(int *)(temp_v2 + 0x5c) + (unsigned int)romwright_carry_4(*(unsigned int *)(temp_v2 + 0x58),temp_v5),
                       *(unsigned int *)(temp_v2 + 0x58) + temp_v5);
    if ((temp_v1 & 0x80000000) == 0) {
      temp_v1 = 0;
    }
    temp_v4 = temp_v4 + 0x20;
    if (-1 < (int)temp_v1) {
      temp_v11 = temp_v15;
      temp_v13[0] = temp_v18;
      temp_v1 = 0;
      temp_v4 = temp_v17;
    }
    if ((int)temp_v1 < 0) {
      temp_v0 = (temp_v1 & 0x3fc00) >> 10;
      temp_v8 = temp_v0 == 0x11;
      if (temp_v8) {
        temp_v0 = temp_v1 & 0x3ff;
      }
      if (temp_v8 && temp_v0 == 0x6f) {
        FUN_00239b94(temp_v7,&temp_v11,&temp_v15,0,0,temp_v5);
        if ((temp_v7 & 0x80000000) == 0) {
          temp_v1 = 0xe0c04702;
        }
        else {
          temp_v5 = (temp_v7 & 0x3fc00) >> 10;
          temp_v8 = temp_v5 == 0x11;
          if (temp_v8) {
            temp_v5 = temp_v7 & 0x3ff;
          }
          temp_v1 = temp_v7;
          if (temp_v8 && temp_v5 == 0x6f) {
            temp_v1 = 0xc8804470;
          }
        }
      }
    }
    if (-1 < (int)temp_v1) {
      temp_v9 = temp_v13[0];
      temp_v1 = 0;
      temp_v10[0] = temp_v4;
    }
    if ((int)temp_v1 < 0) {
      return temp_v1;
    }
    temp_v3 = temp_v3 + 1;
    *(int *)(temp_v6 + 0x224) = temp_v9;
    *(int *)(temp_v6 + 0x220) = temp_v10[0];
    *(unsigned char *)(temp_v6 + 0x21c) = 0;
    *(unsigned char *)(temp_v6 + 0x21a) = 0;
  } while( 1 );
}

} /* extern "C" */
