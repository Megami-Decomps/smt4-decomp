/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TrySeek` (_code @ 0x1886dc, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int FUN_001a0050(unsigned int *, unsigned int);
extern unsigned int nn_fs_detail_FileBase_TrySetPosition(unsigned int, long long);


unsigned int nn_fs_detail_FileBase_TrySeek(unsigned int *param_1,long long param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (((int)param_2 != 0) && ((int)param_2 != 1)) {
    if ((int)param_2 != 2) {
      temp_v0 = 0xe0e046bd;
    }
    else {
      temp_v0 = FUN_001a0050(&temp_v1,*param_1 & 0xfffffffe);
      if (-1 < (int)temp_v0) {
        param_1[4] = temp_v2;
        param_1[3] = temp_v1;
        temp_v0 = nn_fs_detail_FileBase_TrySetPosition((unsigned int)param_1,param_2);
        return temp_v0;
      }
      param_1[3] = 0;
      param_1[4] = 0;
    }
    return temp_v0;
  }
  temp_v0 = nn_fs_detail_FileBase_TrySetPosition((unsigned int)param_1,param_2);
  return temp_v0;
}

} /* extern "C" */
