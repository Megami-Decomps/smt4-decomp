/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522040` (_code @ 0x522040, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00522040_arg0 fn_00522040_arg0;
struct fn_00522040_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    undefined4 field_0x1c; /* +0x1c */
};

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(unsigned int, long long, unsigned int, unsigned int);


unsigned int FUN_00522040(fn_00522040_arg0 *param_1,unsigned int *param_2,unsigned int *param_3,int param_4,
                 int *param_5,int param_6)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v4;
  
  temp_v1 = param_1->field_0x10 + param_6;
  temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                    (param_1->field_0x1c,romwright_piece_4_4(0x18,&temp_v2),(unsigned int)&temp_v2,temp_v1);
  if ((-1 < (int)(temp_v0 & 0x80000000)) &&
     (((param_4 == 0 || param_5 == (int *)0x0 || (*param_5 = temp_v4, temp_v4 == 0)) ||
      (temp_v0 = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
                         (param_1->field_0x1c,romwright_piece_4_4(temp_v4,param_4),temp_v0 & 0x80000000,
                          temp_v1 + 0x18), -1 < (int)temp_v0)))) {
    temp_v0 = 0;
  }
  if (-1 < (int)temp_v0) {
    *param_2 = temp_v2;
    *param_3 = temp_v3;
    param_3[1] = uStack_30;
    param_3[2] = uStack_2c;
    temp_v0 = 0;
  }
  return temp_v0;
}
