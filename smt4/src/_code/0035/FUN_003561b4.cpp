/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003561b4` (_code @ 0x3561b4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fs_ipc_File_SetPriority(int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_00239ab8(void);
/* Supplied declaration required: nn_fs_ipc_File_SetPriority. */


void FUN_003561b4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_00239ab8();
  nn_fs_ipc_File_SetPriority(&temp_v0,param_2);
  return;
}

} /* extern "C" */
