/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bc94` (_code @ 0x10bc94, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002f5a04. */


unsigned long long FUN_0010bc94(void)

{
/* irregular: irregular input(s): in_stack_00000000; 2 native warning(s); review required */
  unsigned int in_stack_00000000;
  
  FUN_002f5a04();
  return romwright_piece_4_4(in_stack_00000000,1);
}
