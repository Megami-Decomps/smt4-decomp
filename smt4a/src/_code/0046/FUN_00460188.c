/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460188` (_code @ 0x460188, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryRead. */
/* Supplied declaration required: nn_fs_detail_FileBase_TrySeek. */
/* Supplied declaration required: nw_io_FileStream_FilePosition_Skip. */


int FUN_00460188(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5 [2];
  
  temp_v0 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  if (temp_v0 < *(int *)(param_1 + 0x3c) + param_3) {
    param_3 = ((temp_v0 - *(int *)(param_1 + 0x3c)) + 0x1f) & 0xffffffe0;
  }
  temp_v3 = *(int *)(param_1 + 0x34);
  temp_v4 = 0;
  temp_v1 = temp_v3 + 4;
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    nn_fs_detail_FileBase_TrySeek();
    *(int *)(temp_v3 + 0x18) = temp_v1;
    if (temp_v1 < 0) {
      pcVar4 = *(romwright_code **)(param_1 + 0x48);
      temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18);
      if (pcVar4 != (romwright_code *)0x0) {
        (*pcVar4)(temp_v2,*(unsigned int *)(param_1 + 0x4c));
      }
      return -1;
    }
  }
  else {
    nn_fs_detail_FileBase_TrySeek();
    if (temp_v1 < 0) {
      FUN_0016e800();
    }
  }
  temp_v5[0] = 0;
  temp_v3 = *(int *)(param_1 + 0x34);
  temp_v1 = temp_v3 + 4;
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    nn_fs_detail_FileBase_TryRead(temp_v1,temp_v5,param_2,param_3);
    *(int *)(temp_v3 + 0x18) = temp_v1;
    if (temp_v1 < 0) {
      pcVar4 = *(romwright_code **)(param_1 + 0x48);
      temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18);
      if (pcVar4 != (romwright_code *)0x0) {
        (*pcVar4)(temp_v2,*(unsigned int *)(param_1 + 0x4c));
      }
      return -1;
    }
  }
  else {
    nn_fs_detail_FileBase_TryRead(temp_v1,&temp_v4,param_2,param_3);
    if (temp_v1 < 0) {
      FUN_0016e800();
    }
    temp_v5[0] = temp_v4;
  }
  if (0 < temp_v5[0]) {
    nw_io_FileStream_FilePosition_Skip(param_1 + 0x38);
  }
  return temp_v5[0];
}
