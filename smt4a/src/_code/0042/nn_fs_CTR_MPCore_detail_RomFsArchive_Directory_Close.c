/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_RomFsArchive_Directory_Close` (_code @ 0x42ad98, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void nn_fs_CTR_MPCore_detail_RomFsArchive_Directory_Close(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v0 = param_1[1];
  nn_os_CriticalSection_Enter(temp_v0 + 0x124);
  *param_1 = *(int *)(temp_v0 + 0x118);
  *(int **)(temp_v0 + 0x118) = param_1;
  *(int *)(temp_v0 + 0x120) = *(int *)(temp_v0 + 0x120) - 1;
  nn_os_CriticalSection_Leave(temp_v0 + 0x124);
  return;
}
