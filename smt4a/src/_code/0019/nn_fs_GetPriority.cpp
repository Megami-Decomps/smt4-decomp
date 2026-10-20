/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_GetPriority` (_code @ 0x19fc50, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fs_ipc_FileSystem_GetPriority(int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_00188688(void);
/* Supplied declaration required: nn_fs_ipc_FileSystem_GetPriority. */


void nn_fs_GetPriority(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_00188688();
  nn_fs_ipc_FileSystem_GetPriority(&temp_v0,param_1);
  return;
}

} /* extern "C" */
