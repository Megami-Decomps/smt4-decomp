/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb6c4` (_code @ 0x2bb6c4, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002c52f8. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


void FUN_002bb6c4(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [8];
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,*(romwright_code **)(*param_1 + 8),0,0,0);
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v0 < 0) {
      FUN_002bb648(temp_v0,0x2bb730);
    }
  }
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1,param_2,0x14,1);
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v0 < 0) {
      FUN_002bb648(temp_v0,0x2bb794);
    }
  }
  if ((param_1[2] & 0xfffffffeU) != 0) {
    if ((param_1[2] & 1U) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
    param_1[2] = 0;
  }
  return;
}
