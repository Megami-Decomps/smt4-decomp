/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_FileServerArchive_Directory_TryRead` (_code @ 0x42ba04, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0016e800. */
extern unsigned int nn_fs_ipc_Directory_Read(unsigned int, int *, unsigned int, int);


unsigned int nn_fs_CTR_MPCore_detail_FileServerArchive_Directory_TryRead
               (int param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 4) == 0) {
    temp_v1 = param_4;
    FUN_0016e800(0xe0a046da,0x42ba2c);
  }
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = nn_fs_ipc_Directory_Read((unsigned int)&temp_v1,param_2,param_3,param_4);
  return temp_v0;
}

} /* extern "C" */
