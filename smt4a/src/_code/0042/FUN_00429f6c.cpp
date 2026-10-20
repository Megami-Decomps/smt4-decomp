#include "romwright_types.h"

extern "C" {

extern unsigned int nn_fs_detail_FileBase_TryRead(unsigned int, int *, unsigned int, unsigned int);


void FUN_00429f6c(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  nn_fs_detail_FileBase_TryRead(param_1 + 4,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
