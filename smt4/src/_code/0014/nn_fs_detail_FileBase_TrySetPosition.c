/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TrySetPosition` (_code @ 0x146540, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(long long *, unsigned int);


unsigned int nn_fs_detail_FileBase_TrySetPosition(unsigned int *param_1,long long param_2)

{
/* irregular: irregular input(s): in_r2, in_r3; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_r2;
  unsigned int in_r3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = 0xe0e046c1;
  if (-1 < (int)in_r3) {
    temp_v0 = param_1[4];
    if ((int)(in_r3 - (temp_v0 + (in_r2 < param_1[3]))) < 0 !=
        (SBORROW4(in_r3,temp_v0) != SBORROW4(in_r3 - temp_v0,(unsigned int)(in_r2 < param_1[3])))) {
      param_1[1] = in_r2;
      param_1[2] = in_r3;
      return 0;
    }
    temp_v0 = nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize
                      ((long long *)&temp_v2,*param_1 & 0xfffffffe);
    if ((int)temp_v0 >= 0) {
      param_1[4] = temp_v3;
      param_1[3] = temp_v2;
      if ((int)(temp_v3 - (in_r3 + (temp_v2 < in_r2))) < 0 ==
          (SBORROW4(temp_v3,in_r3) != SBORROW4(temp_v3 - in_r3,(unsigned int)(temp_v2 < in_r2)))) {
        param_1[1] = in_r2;
        param_1[2] = in_r3;
        return 0;
      }
    }
    else {
      param_1[3] = 0;
      param_1[4] = 0;
      temp_v1 = temp_v0;
    }
  }
  return temp_v1;
}
