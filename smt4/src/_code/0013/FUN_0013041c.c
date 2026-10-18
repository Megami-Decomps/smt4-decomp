/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013041c` (_code @ 0x13041c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: nn_fs_detail_FileBase_TrySeek. */


int FUN_0013041c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_3 == 0) {
    temp_v0 = 0;
  }
  else if (param_3 == 1) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = param_1;
    if (param_3 == 2) {
      temp_v0 = 2;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    param_1 = param_1 + 4;
    nn_fs_detail_FileBase_TrySeek(param_1,param_2,param_2,param_2 >> 0x1f,temp_v0);
    if (param_1 < 0) {
      FUN_002bbb2c();
    }
    return 1;
  }
  temp_v1 = param_1 + 4;
  nn_fs_detail_FileBase_TrySeek(temp_v1,param_2,param_2,param_2 >> 0x1f,temp_v0);
  *(int *)(param_1 + 0x18) = temp_v1;
  return (temp_v1 >> 0x1f) + 1;
}
