/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139e40` (_code @ 0x139e40, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128174(void);
int FUN_001398f8(...);
int FUN_002a84e8(void);
int FUN_002ad888(void);
int FUN_002bb648(...);
int FUN_002c52f8(void);

typedef int romwright_code(...);
extern unsigned int DAT_00471b60; /* 0x471b60 */

/* Supplied declaration required: FUN_00128174. */
/* Supplied declaration required: FUN_001398f8. */
/* Supplied declaration required: FUN_002a84e8. */
/* Supplied declaration required: FUN_002ad888. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002c52f8. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned int FUN_00139e40(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  temp_v0 = FUN_001398f8();
  temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
  if (temp_v1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v1 < 0) {
      FUN_002bb648(temp_v1,0x139eb0);
    }
  }
  if (*param_2 != 0x4f00) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    temp_v2 = DAT_00471b60;
    FUN_002ad888();
    FUN_002a84e8();
    if ((((temp_v2 & 0x3fc00) != 0x4400) || ((temp_v2 & 0x3ff) < 100)) || ((temp_v2 & 0x3ff) >= 0xb4)) {
      if ((int)temp_v2 < 0) {
        FUN_002bb648();
      }
    }
    FUN_00128174();
    temp_v0 = 1;
    FUN_001398f8(param_1);
    temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&uStack_20,param_2,0x14);
    if (temp_v1 < 0) {
      if ((param_1[2] & 0xfffffffeU) != 0) {
        if ((param_1[2] & 1U) != 0) {
          FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
        param_1[2] = 0;
      }
      if (temp_v1 < 0) {
        FUN_002bb648(temp_v1,0x139f9c);
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
