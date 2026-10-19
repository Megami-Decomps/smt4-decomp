/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile` (_code @ 0x16ced0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_001884c8. */


unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile
               (int *param_1,unsigned int *param_2,long long param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 == (unsigned int *)0x0 || (int)param_3 == 0) {
    temp_v0 = 0xe0e046bc;
  }
  else {
    FUN_001884c8(1);
    temp_v0 = (**(romwright_code **)*param_2)(param_2,param_1,param_4,param_5,param_3);
  }
  return temp_v0;
}
