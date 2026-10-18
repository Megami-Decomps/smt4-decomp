/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_FileServerArchive_File_TryRead` (_code @ 0x356244, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned int FUN_00239ab8(void);
/* Supplied declaration required: nn_fs_ipc_File_Read. */


void nn_fs_CTR_MPCore_detail_FileServerArchive_File_TryRead
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = FUN_00239ab8();
  nn_fs_ipc_File_Read(temp_v0,param_2,param_3,param_4,param_5,param_6);
  return;
}
