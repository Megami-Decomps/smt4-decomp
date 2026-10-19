/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354d0c` (_code @ 0x354d0c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002bbb2c. */
extern unsigned int nn_fs_detail_FileBase_TrySeek(unsigned int, long long, int);


void FUN_00354d0c(int param_1)

{
/* irregular: irregular input(s): in_lr, in_stack_00000000; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_lr;
  int in_stack_00000000;
  
  temp_v0 = nn_fs_detail_FileBase_TrySeek
                    (param_1 + 4,romwright_piece_4_4(in_lr,in_stack_00000000),in_stack_00000000);
  if (-((int)temp_v0 >> 0x1f) != 0) {
    FUN_002bbb2c(temp_v0,0x354d28,-((int)temp_v0 >> 0x1f),in_stack_00000000);
    return;
  }
  return;
}
