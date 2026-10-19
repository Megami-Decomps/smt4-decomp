/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_FileServerArchive_File_TryWrite` (_code @ 0x42b824, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned int FUN_0050096c(void);
extern unsigned int nn_fs_ipc_File_Write(unsigned int *, int *, unsigned int, unsigned int, long long, unsigned int);


unsigned int nn_fs_CTR_MPCore_detail_FileServerArchive_File_TryWrite
               (unsigned int param_1,int *param_2,long long param_3,unsigned int param_4,unsigned int param_5,
               unsigned char param_6)

{
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = FUN_0050096c();
  temp_v0 = nn_fs_ipc_File_Write
                    (temp_v1,param_2,param_4,param_5,param_3,
                     (unsigned int)param_6 | ((unsigned int)param_6 << 0x10));
  return temp_v0;
}
