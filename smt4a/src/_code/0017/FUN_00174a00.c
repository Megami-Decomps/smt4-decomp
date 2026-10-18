/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174a00` (_code @ 0x174a00, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryRead. */


int FUN_00174a00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  
  temp_v1 = param_4;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    temp_v0 = param_1 + 4;
    nn_fs_detail_FileBase_TryRead(temp_v0,param_4,param_2,param_3);
    *(int *)(param_1 + 0x18) = temp_v0;
    return (temp_v0 >> 0x1f) + 1;
  }
  param_1 = param_1 + 4;
  nn_fs_detail_FileBase_TryRead(param_1,&temp_v1,param_2,param_3);
  if (param_1 < 0) {
    FUN_0016e800();
  }
  *param_4 = (unsigned int)temp_v1;
  return 1;
}
