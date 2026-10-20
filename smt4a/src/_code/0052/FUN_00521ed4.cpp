/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00521ed4` (_code @ 0x521ed4, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_uidivmod(unsigned int, int);

/* stack frame of param_7: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_7_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned long long FUN_00102c58(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: __aeabi_uidivmod. */
extern unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(unsigned int, long long, unsigned int, unsigned int);


unsigned int FUN_00521ed4(int *param_1,int *param_2,unsigned int *param_3,int *param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar3;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned char temp_v6 [256];
  int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_58;
  unsigned int uStack_54;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int *temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int *piStack_34;
  int *temp_v16;
  unsigned int *temp_v17;
  int *piStack_28;
  
  temp_v11 = param_6;
  temp_v13 = 0;
  temp_v12 = param_4;
  piStack_34 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  piStack_28 = param_4;
  __aeabi_uidivmod(param_5,param_1[2]);
  temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                    (param_1[3],romwright_piece_4_4(4,&temp_v14),4,*param_1 + temp_v2 * 4);
  puVar3 = (unsigned char *)(temp_v0 & 0x80000000);
  if (-1 < (int)puVar3) {
    if (temp_v14 != -1) {
      temp_v15 = param_7 >> 1;
      temp_v3 = temp_v14;
      do {
        temp_v1 = param_1[4];
        temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                          (param_1[7],romwright_piece_4_4(0x18,&temp_v7),(unsigned int)puVar3,temp_v1 + temp_v3);
        temp_v4 = 0;
        if ((-1 < (int)temp_v0) &&
           ((temp_v4 = temp_v10, temp_v10 == 0 ||
            (temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                               (param_1[7],romwright_piece_4_4(temp_v10,temp_v6),0,temp_v1 + temp_v3 + 0x18),
            -1 < (int)temp_v0)))) {
          temp_v0 = 0;
        }
        if ((int)temp_v0 < 0) goto LAB_00522000;
        puVar3 = temp_v6;
        if (*temp_v12 == temp_v7 && param_7 == temp_v4) {
          temp_v5 = FUN_00102c58(temp_v11,puVar3,temp_v15);
          puVar3 = (unsigned char *)((unsigned long long)temp_v5 >> 0x20);
          if ((int)temp_v5 == 0) {
            temp_v0 = 0;
            temp_v13 = temp_v3;
            goto LAB_00522000;
          }
        }
        temp_v3 = temp_v9;
      } while (temp_v9 != -1);
    }
    temp_v0 = 0xc880446f;
  }
LAB_00522000:
  if (-1 < (int)temp_v0) {
    *temp_v16 = temp_v13;
    *temp_v17 = temp_v8;
    temp_v17[1] = uStack_58;
    temp_v17[2] = uStack_54;
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
