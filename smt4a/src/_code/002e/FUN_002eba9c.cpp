/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eba9c` (_code @ 0x2eba9c, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


long long FUN_002eba9c(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_2[1];
  temp_v0 = param_1[1];
  temp_v2 = (temp_v1 - temp_v0) - (unsigned int)(*param_1 > *param_2);
  if (temp_v1 <= temp_v0 && (unsigned int)(*param_1 <= *param_2) <= temp_v1 - temp_v0) {
    return romwright_piece_4_4(temp_v2,1);
  }
  return (unsigned long long)temp_v2 << 0x20;
}

} /* extern "C" */
