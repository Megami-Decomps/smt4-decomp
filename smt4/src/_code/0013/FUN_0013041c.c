/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013041c` (_code @ 0x13041c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002bbb2c. */
extern unsigned int nn_fs_detail_FileBase_TrySeek(unsigned int, long long, int);


int FUN_0013041c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  
  if (param_3 == 0) {
    temp_v0 = 0;
  }
  else if (param_3 == 1) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = param_1;
    if (param_3 == 2) {
      temp_v0 = 2;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    temp_v1 = nn_fs_detail_FileBase_TrySeek(param_1 + 4,romwright_piece_4_4(unaff_r4,temp_v0),param_2);
    if ((int)temp_v1 < 0) {
      FUN_002bbb2c(temp_v1,0x13048c);
    }
    return 1;
  }
  temp_v1 = nn_fs_detail_FileBase_TrySeek(param_1 + 4,romwright_piece_4_4(unaff_r4,temp_v0),param_2);
  *(unsigned int *)(param_1 + 0x18) = temp_v1;
  return ((int)temp_v1 >> 0x1f) + 1;
}
