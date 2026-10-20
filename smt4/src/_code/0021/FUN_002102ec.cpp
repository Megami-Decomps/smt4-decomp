/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002102ec` (_code @ 0x2102ec, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3510(...);
int FUN_002c52f8(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002c3510. */
/* Supplied declaration required: FUN_002c52f8. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


int FUN_002102ec(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x18))(param_1,*(romwright_code **)(*param_1 + 0x18),param_2,0);
  FUN_002c3510();
  if (temp_v0 < 0) {
    temp_v1 = param_1[2];
  }
  else {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&temp_v2,param_3,param_4);
    if (temp_v2 == 0) {
      temp_v0 = -0x26ffba7a;
    }
    FUN_002c3510(temp_v0);
    if (-1 < temp_v0) {
      FUN_002c3510();
      return 0;
    }
    temp_v1 = param_1[2];
  }
  if ((temp_v1 & 0xfffffffe) != 0) {
    if ((temp_v1 & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(param_1[2] & 0xfffffffe);
    param_1[2] = 0;
  }
  return temp_v0;
}

} /* extern "C" */
