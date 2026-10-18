/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TrySetPosition` (_code @ 0x146540, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(unsigned int *, unsigned int);


long long nn_fs_detail_FileBase_TrySetPosition(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = -0x1f1fb93f;
  if ((int)param_4 < 0) {
    return romwright_piece_4_4(param_2,temp_v1);
  }
  temp_v2 = param_1[3];
  temp_v0 = param_1[4];
  temp_v3 = param_3 - temp_v2;
  if ((int)(param_4 - (temp_v0 + (param_3 < temp_v2))) < 0 ==
      (SBORROW4(param_4,temp_v0) != SBORROW4(param_4 - temp_v0,(unsigned int)(param_3 < temp_v2)))) {
    temp_v1 = nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(&temp_v4,*param_1 & 0xfffffffe);
    if (temp_v1 >= 0) {
      param_1[4] = temp_v5;
      param_1[3] = temp_v4;
    }
    else {
      param_1[3] = 0;
      param_1[4] = 0;
      temp_v5 = unaff_r5;
      temp_v4 = unaff_r6;
    }
    param_2 = -(temp_v1 >> 0x1f);
    if ((param_2 != 0) ||
       (temp_v3 = 0, temp_v1 = -0x1f1fb93f,
       (int)(temp_v5 - (param_4 + (temp_v4 < param_3))) < 0 !=
       (SBORROW4(temp_v5,param_4) != SBORROW4(temp_v5 - param_4,(unsigned int)(temp_v4 < param_3))))) {
      return romwright_piece_4_4(param_2,temp_v1);
    }
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (unsigned long long)temp_v3 << 0x20;
}
