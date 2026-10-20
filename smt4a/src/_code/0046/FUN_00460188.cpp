/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460188` (_code @ 0x460188, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(unsigned int, int);
int nw_io_FileStream_FilePosition_Skip(int);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0016e800. */
extern unsigned int nn_fs_detail_FileBase_TryRead(unsigned int, int *, unsigned int, unsigned int);
extern unsigned int nn_fs_detail_FileBase_TrySeek(unsigned int, long long, int);
/* Supplied declaration required: nw_io_FileStream_FilePosition_Skip. */


int FUN_00460188(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_stack_ffffffe4; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_stack_ffffffe4;
  
  temp_v0 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  if (temp_v0 < *(int *)(param_1 + 0x3c) + param_3) {
    param_3 = ((temp_v0 - *(int *)(param_1 + 0x3c)) + 0x1f) & 0xffffffe0;
  }
  temp_v2 = *(int *)(param_1 + 0x34);
  temp_v4 = 0;
  if (*(unsigned char *)(temp_v2 + 0x1c) != 0) {
    temp_v0 = nn_fs_detail_FileBase_TrySeek
                      (temp_v2 + 4,(unsigned long long)in_stack_ffffffe4 << 0x20,(unsigned int)*(unsigned char *)(temp_v2 + 0x1c))
    ;
    *(unsigned int *)(temp_v2 + 0x18) = temp_v0;
    if ((int)temp_v0 < 0) {
      pcVar3 = *(romwright_code **)(param_1 + 0x48);
      temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18);
      if (pcVar3 != (romwright_code *)0x0) {
        (*pcVar3)(temp_v1,*(unsigned int *)(param_1 + 0x4c));
      }
      return -1;
    }
  }
  else {
    temp_v0 = nn_fs_detail_FileBase_TrySeek(temp_v2 + 4,(unsigned long long)in_stack_ffffffe4 << 0x20,0);
    if ((int)temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x460208);
    }
  }
  temp_v2 = 0;
  temp_v3 = *(int *)(param_1 + 0x34);
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    temp_v0 = nn_fs_detail_FileBase_TryRead(temp_v3 + 4,(int *)&in_stack_ffffffe4,param_2,param_3);
    *(unsigned int *)(temp_v3 + 0x18) = temp_v0;
    if ((int)temp_v0 < 0) {
      pcVar3 = *(romwright_code **)(param_1 + 0x48);
      temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18);
      if (pcVar3 != (romwright_code *)0x0) {
        (*pcVar3)(temp_v1,*(unsigned int *)(param_1 + 0x4c));
      }
      return -1;
    }
  }
  else {
    temp_v0 = nn_fs_detail_FileBase_TryRead(temp_v3 + 4,(int *)&temp_v4,param_2,param_3);
    temp_v2 = temp_v4;
    if ((int)temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x46027c);
      temp_v2 = temp_v4;
    }
  }
  if (0 < temp_v2) {
    nw_io_FileStream_FilePosition_Skip(param_1 + 0x38);
  }
  return temp_v2;
}

} /* extern "C" */
