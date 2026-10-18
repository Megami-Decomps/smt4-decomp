/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TrySeek` (_code @ 0x2ac788, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned int *nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(unsigned int *, unsigned int);
/* Supplied declaration required: nn_fs_detail_FileBase_TrySetPosition. */


unsigned int * nn_fs_detail_FileBase_TrySeek
                 (unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_5 != 0) {
    if (param_5 != 1) {
      if (param_5 != 2) {
        puVar1 = (unsigned int *)0xe0e046bd;
      }
      else {
        puVar1 = (unsigned int *)nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize
                                   (&temp_v1,*param_1 & 0xfffffffe);
        if ((int)puVar1 >= 0) {
          param_1[4] = temp_v2;
          param_1[3] = temp_v1;
        }
        else {
          param_1[3] = 0;
          param_1[4] = 0;
          temp_v2 = unaff_r4;
          temp_v1 = unaff_r5;
        }
        if (-1 < (int)puVar1) {
          temp_v0 = romwright_carry_4(param_3,temp_v1);
          param_3 = param_3 + temp_v1;
          param_4 = param_4 + temp_v2 + (unsigned int)temp_v0;
          param_2 = 0;
          nn_fs_detail_FileBase_TrySetPosition(param_1,param_2,param_3,param_4);
          return param_1;
        }
      }
      return puVar1;
    }
    param_2 = param_1[2];
    temp_v0 = romwright_carry_4(param_3,param_1[1]);
    param_3 = param_3 + param_1[1];
    param_4 = param_2 + param_4 + (unsigned int)temp_v0;
  }
  nn_fs_detail_FileBase_TrySetPosition(param_1,param_2,param_3,param_4);
  return param_1;
}
