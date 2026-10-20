/* NON_MATCHING: romwright 0.5.0 decompilation of `n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF` (_code @ 0x239c54, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fc0d4(void);
int FUN_003fc240(unsigned int, unsigned char [4], unsigned char [20], unsigned int *, unsigned int, unsigned short *, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

/* Supplied declaration required: FUN_003fc0d4. */
/* Supplied declaration required: FUN_003fc240. */


void n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned short *puVar6;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [20];
  unsigned char temp_v7 [4];
  
  temp_v1 = ((int)(param_4[1] * 2) >> 1) - 1;
  if (0 < temp_v1) {
    for (temp_v1 = temp_v1 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    }
  }
  temp_v2 = param_1;
  FUN_003fc0d4();
  if ((int)temp_v2 < 0) {
    temp_v4 = (temp_v2 & 0x3fc00) >> 10;
    temp_v5 = temp_v4 == 0x11;
    if (temp_v5) {
      temp_v4 = temp_v2 & 0x3ff;
    }
    if (temp_v5 && temp_v4 == 0x6f) {
      temp_v4 = param_4[1];
      puVar6 = (unsigned short *)param_4[2];
      temp_v2 = *param_4 ^ 0x75bcd15;
      temp_v1 = (int)(temp_v4 * 2) >> 1;
      temp_v3 = temp_v1 - 1;
      if (0 < temp_v3) {
        puVar4 = puVar6 + -1;
        if (-1 < (int)(temp_v4 << 0x1f)) {
          temp_v2 = (unsigned int)*puVar6 ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
          puVar4 = puVar6;
        }
        temp_v0 = puVar4[1];
        for (temp_v3 = temp_v3 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          temp_v2 = (unsigned int)temp_v0 ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
          temp_v0 = puVar4[3];
          temp_v2 = (unsigned int)puVar4[2] ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
          puVar4 = puVar4 + 2;
        }
      }
      temp_v1 = temp_v1 - 1;
      if (-1 < temp_v1) {
        temp_v2 = (unsigned int)puVar6[temp_v1] ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
      }
      FUN_003fc240(param_1 + 0x28,temp_v7,temp_v6,param_4,temp_v2,puVar6,temp_v4 << 1);
    }
  }
  return;
}

} /* extern "C" */
