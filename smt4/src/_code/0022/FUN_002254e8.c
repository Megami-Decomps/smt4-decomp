/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002254e8` (_code @ 0x2254e8, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

/* Supplied declaration required: FUN_00239b94. */
/* Supplied declaration required: n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF. */
extern unsigned int nn_dbm_RomPathTool_GetParentDirectoryName(unsigned int, unsigned int, unsigned int);


void FUN_002254e8(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  
  temp_v0 = param_8;
  temp_v1 = param_1;
  FUN_00239b94(param_1,&temp_v3,temp_v4,0,0,param_5);
  if (-1 < temp_v1) {
    *param_3 = temp_v3;
    temp_v2 = nn_dbm_RomPathTool_GetParentDirectoryName((unsigned int)(param_3 + 1),(unsigned int)&param_6,temp_v0);
    if (-1 < (int)temp_v2) {
      n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
                (param_1,param_2,param_4,param_3);
    }
  }
  return;
}
