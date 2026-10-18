/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd390` (_code @ 0x1cd390, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001c57ac. */


unsigned long long FUN_001cd390(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = (param_3 >> 0xb) | (param_2 << 0x15);
  FUN_001c57ac(param_1,param_2 >> 0xb,temp_v1,param_4 - 0x3c01);
  if ((param_1 & 0x7fffffff) + 1 < 0x800) {
    return romwright_piece_4_4(temp_v1,temp_v0 + param_1 * 0x100000);
  }
  return 0x7ff00000;
}
