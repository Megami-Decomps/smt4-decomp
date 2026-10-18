/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_detail_FileBase_TryRead` (_code @ 0x1a02f8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile. */


void nn_fs_detail_FileBase_TryRead(unsigned int *param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  if (param_4 != 0) {
    while( 1 ) {
      puVar1 = &temp_v2;
      nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile
                (puVar1,*param_1 & 0xfffffffe,param_1[1],param_1[2],param_3,param_4);
      if ((int)puVar1 < 0) break;
      temp_v0 = param_1[1];
      temp_v1 = temp_v1 + temp_v2;
      param_1[1] = temp_v0 + temp_v2;
      param_1[2] = param_1[2] + ((int)temp_v2 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v0,temp_v2);
      if ((temp_v2 == param_4) || (temp_v2 == 0)) {
        *param_2 = temp_v1;
        break;
      }
      param_3 = param_3 + temp_v2;
      param_4 = param_4 - temp_v2;
    }
  }
  else {
    *param_2 = temp_v1;
  }
  return;
}
