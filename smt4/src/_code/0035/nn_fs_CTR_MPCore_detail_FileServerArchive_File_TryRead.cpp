#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int FUN_00239ab8(void);
extern unsigned int nn_fs_ipc_File_Read(unsigned int, int *, long long, unsigned int, unsigned int);


unsigned int nn_fs_CTR_MPCore_detail_FileServerArchive_File_TryRead
               (unsigned int param_1,int *param_2,long long param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = FUN_00239ab8();
  temp_v0 = nn_fs_ipc_File_Read((unsigned int)temp_v1,param_2,param_3,param_4,param_5);
  return temp_v0;
}

} /* extern "C" */
