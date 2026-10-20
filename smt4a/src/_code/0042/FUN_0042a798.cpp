/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a798` (_code @ 0x42a798, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00522304(int, unsigned char [12], unsigned char [16], unsigned char [12]);
int n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF(int, unsigned char [4], int *, unsigned char [12]);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

/* Supplied declaration required: FUN_00522304. */
/* Supplied declaration required: n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF. */
extern unsigned int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(int);


void FUN_0042a798(int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int unaff_r5;
  unsigned int unaff_r6;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_50;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [12];
  unsigned char temp_v6 [12];
  unsigned char temp_v7 [16];
  
  temp_v1 = param_1 + 0x20;
  if (*param_3 == 4) {
    temp_v3 = param_3[1];
  }
  else {
    temp_v3 = 0;
  }
  temp_v2 = 1;
  temp_v0 = temp_v1;
  FUN_00522304(temp_v1,temp_v6,temp_v7,temp_v5);
  if (-1 < temp_v0) {
    unaff_r5 = -1;
    unaff_r6 = 0xffffffff;
    n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
              (temp_v1,temp_v4,&temp_v2,temp_v5);
    temp_v0 = temp_v1;
    if (-1 < temp_v1) {
      temp_v0 = 0;
      unaff_r5 = temp_v3;
      unaff_r6 = uStack_50;
    }
  }
  if (-1 < temp_v0) {
    puVar2 = (unsigned int *)
             nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                       (param_1 + 0xf4);
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = (unsigned int)"귨B궘B";
      puVar2[1] = param_1;
      puVar2[2] = unaff_r5;
      puVar2[3] = unaff_r6;
      puVar2[5] = *(unsigned int *)(param_1 + 4);
    }
    *param_2 = (unsigned int)puVar2;
  }
  return;
}

} /* extern "C" */
