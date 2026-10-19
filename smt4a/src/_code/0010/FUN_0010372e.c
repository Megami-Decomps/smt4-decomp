/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010372e` (_code @ 0x10372e, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e7258. */
extern unsigned int nn_fs_detail_FileBase_TrySeek(unsigned int, long long, int);


void FUN_0010372e(int param_1)

{
/* irregular: irregular input(s): in_stack_00000000; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int unaff_r4;
  int in_stack_00000000;
  
  temp_v0 = nn_fs_detail_FileBase_TrySeek
                    (param_1 + 4,romwright_piece_4_4(unaff_r4,in_stack_00000000),in_stack_00000000);
  FUN_002e7258(temp_v0,0x103736);
  return;
}
