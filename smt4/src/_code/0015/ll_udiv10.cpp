/* NON_MATCHING: romwright 0.5.0 decompilation of `ll_udiv10` (_code @ 0x1527b4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long ll_udiv10(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = (param_1 >> 2) | (param_2 << 0x1e);
  temp_v0 = param_1 - temp_v2;
  temp_v1 = param_2 - ((param_2 >> 2) + (unsigned int)(param_1 < temp_v2));
  temp_v3 = (temp_v0 >> 4) | (temp_v1 * 0x10000000);
  temp_v2 = temp_v0 + temp_v3;
  temp_v1 = temp_v1 + (temp_v1 >> 4) + (unsigned int)romwright_carry_4(temp_v0,temp_v3);
  temp_v3 = (temp_v2 >> 8) | (temp_v1 * 0x1000000);
  temp_v0 = temp_v2 + temp_v3;
  temp_v1 = temp_v1 + (temp_v1 >> 8) + (unsigned int)romwright_carry_4(temp_v2,temp_v3);
  temp_v3 = (temp_v0 >> 0x10) | (temp_v1 * 0x10000);
  temp_v2 = temp_v0 + temp_v3;
  temp_v0 = temp_v1 + (temp_v1 >> 0x10) + (unsigned int)romwright_carry_4(temp_v0,temp_v3);
  temp_v1 = temp_v0 + romwright_carry_4(temp_v2,temp_v0);
  temp_v2 = ((temp_v2 + temp_v0) >> 3) | (temp_v1 * 0x20000000);
  temp_v0 = temp_v1 >> 3;
  if (-1 < (int)((param_2 - (param_1 < 10)) -
                ((((temp_v0 << 2) | ((temp_v1 & 7) >> 1)) + temp_v0 + (unsigned int)romwright_carry_4(temp_v2,temp_v2 * 4)) * 2 +
                 (unsigned int)romwright_carry_4(temp_v2 * 5,temp_v2 * 5) + (unsigned int)(param_1 - 10 < temp_v2 * 10)))) {
    return romwright_piece_4_4(temp_v0 + (0xfffffffe < temp_v2),temp_v2 + 1);
  }
  return romwright_piece_4_4(temp_v0,temp_v2);
}

} /* extern "C" */
