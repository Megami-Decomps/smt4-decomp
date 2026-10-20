/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbe94` (_code @ 0x2cbe94, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254884(int, unsigned char [500], int);
int FUN_002bb5a4(int *, unsigned char [500], int);
int FUN_002c3510(...);
int FUN_002c52f8(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00254884. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002c3510. */
/* Supplied declaration required: FUN_002c52f8. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


int * FUN_002cbe94(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [500];
  
  FUN_00254884(param_2,temp_v0,0);
  if (param_2 == 0) {
    FUN_002c3510();
    return (int *)0xe0e046bc;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  piVar1 = param_1 + 2;
  param_1[4] = 0;
  FUN_002bb5a4(piVar1,temp_v0,6);
  if ((int)piVar1 < 0) {
    FUN_002c3510(piVar1);
    return piVar1;
  }
  piVar1 = (int *)(**(romwright_code **)(*param_1 + 0x3c))(param_1,*(romwright_code **)(*param_1 + 0x3c),param_3,0);
  FUN_002c3510();
  if ((int)piVar1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    return piVar1;
  }
  FUN_002c3510();
  return (int *)0x0;
}

} /* extern "C" */
