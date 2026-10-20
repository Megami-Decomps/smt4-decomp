/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e57c8` (_code @ 0x2e57c8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001026b4(unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001026b4. */


unsigned long long FUN_002e57c8(unsigned int param_1)

{
/* irregular: irregular input(s): in_stack_00000000; 2 native warning(s); review required */
  unsigned int in_stack_00000000;
  
  FUN_001026b4(param_1);
  return romwright_piece_4_4(in_stack_00000000,param_1);
}

} /* extern "C" */
