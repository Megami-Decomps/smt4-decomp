/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103714` (_code @ 0x103714, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002e7258. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryRead. */


unsigned int FUN_00103714(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  nn_fs_detail_FileBase_TryRead(param_1 + 4,&temp_v0,param_2,param_3);
  FUN_002e7258();
  return temp_v0;
}
