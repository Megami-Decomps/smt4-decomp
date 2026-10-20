/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001035b8` (_code @ 0x1035b8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6fb0(int *, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6fb0. */


unsigned long long FUN_001035b8(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  temp_v0 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_002e6fb0(&temp_v0,param_1,param_2);
  return romwright_piece_4_4(temp_v0,(temp_v0 >> 0x1f) + 1);
}

} /* extern "C" */
