/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TryGetSize` (_code @ 0x2bb54c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(long long *, unsigned int);


unsigned int nn_fs_detail_FileBase_TryGetSize(unsigned int *param_1,long long *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_14;
  
  temp_v0 = nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize
                    ((long long *)&temp_v1,*param_1 & 0xfffffffe);
  if ((int)temp_v0 >= 0) {
    param_1[3] = temp_v1;
    param_1[4] = uStack_14;
    *(unsigned int *)param_2 = temp_v1;
    *(unsigned int *)((int)param_2 + 4) = uStack_14;
  }
  else {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return temp_v0;
}
