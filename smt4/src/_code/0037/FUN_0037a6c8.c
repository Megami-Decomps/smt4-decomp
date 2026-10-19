/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a6c8` (_code @ 0x37a6c8, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned char DAT_00421b2c; /* 0x421b2c */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryGetSize. */
/* Supplied declaration required: nw_io_FileStream_FilePosition_Seek. */


/* WARNING: Removing unreachable block (ram,0x0037a764) */
/* WARNING: Removing unreachable block (ram,0x0037a760) */
/* WARNING: Removing unreachable block (ram,0x0037a76c) */
/* WARNING: Removing unreachable block (ram,0x0037a77c) */
/* WARNING: Removing unreachable block (ram,0x0037a788) */

unsigned int *
FUN_0037a6c8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
            unsigned int param_5,unsigned int param_6)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_00421b2c;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  builtin_strncpy((char *)(param_1 + 5),"h\fB",4);
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned char *)((int)param_1 + 0x51) = 0;
  temp_v3 = param_1[0xd];
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    temp_v4 = 0;
    uStack_1c = 0;
    temp_v0 = temp_v3 + 4;
    nn_fs_detail_FileBase_TryGetSize(temp_v0,&temp_v4);
    temp_v1 = temp_v0 & 0x80000000;
    *(unsigned int *)(temp_v3 + 0x18) = temp_v0;
    temp_v2 = 0;
    if (temp_v1 == 0) {
      temp_v2 = temp_v4;
    }
    if ((int)temp_v0 < 0) {
      pcVar3 = (romwright_code *)param_1[0x12];
      if (pcVar3 != (romwright_code *)0x0) {
        temp_v1 = param_1[0x13];
      }
      if (pcVar3 != (romwright_code *)0x0) {
        (*pcVar3)(*(unsigned int *)(param_1[0xd] + 0x18),temp_v1);
      }
      return param_1;
    }
  }
  else {
    temp_v3 = temp_v3 + 4;
    nn_fs_detail_FileBase_TryGetSize(temp_v3,&temp_v4);
    temp_v2 = temp_v4;
    if (temp_v3 < 0) {
      FUN_002bbb2c();
      temp_v2 = temp_v4;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = temp_v2;
  }
  param_1[0xe] = temp_v2;
  nw_io_FileStream_FilePosition_Seek(param_1 + 0xe,0);
  *(unsigned char *)((int)param_1 + 0x52) = 0;
  *(unsigned char *)(param_1 + 0x14) = 1;
  return param_1;
}
