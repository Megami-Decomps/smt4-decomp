/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015284c` (_code @ 0x15284c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_0015284c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = param_1 << 1;
  temp_v1 = (param_1 & 0x7fffffff) >> 0x13;
  temp_v0 = param_2 << 0xb;
  if (temp_v4 != 0 || param_2 != 0) {
    temp_v1 = temp_v1 + 0x7800;
  }
  temp_v2 = (param_1 << 0xb) | (param_2 >> 0x15);
  temp_v1 = (param_1 & 0x80000000) | (temp_v1 >> 1);
  if (temp_v4 != 0 || param_2 != 0) {
    temp_v2 = temp_v2 | 0x80000000;
  }
  if (temp_v4 >> 0x15 != 0) {
    if (temp_v4 >> 0x15 == -1) {
      temp_v1 = temp_v1 | 0x40000000;
    }
    return romwright_piece_4_4(temp_v2,temp_v1);
  }
  if ((temp_v2 & 0x80000000) == 0) {
    return romwright_piece_4_4(temp_v2,temp_v1);
  }
  temp_v3 = temp_v2 & 0x7fffffff;
  if (temp_v3 == 0) {
    if ((param_2 & 0x1fffff) >> 5 == 0) {
      temp_v0 = param_2 << 0x1b;
      temp_v4 = 0x10;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v0 >> 0x18 == 0) {
      temp_v0 = temp_v0 << 8;
      temp_v4 = temp_v4 + 8;
    }
    if (temp_v0 >> 0x1c == 0) {
      temp_v0 = temp_v0 << 4;
      temp_v4 = temp_v4 + 4;
    }
    if (temp_v0 >> 0x1e == 0) {
      temp_v0 = temp_v0 << 2;
      temp_v4 = temp_v4 + 2;
    }
    if (-1 < (int)temp_v0) {
      temp_v0 = temp_v0 << 1;
      temp_v4 = temp_v4 + 1;
    }
    return romwright_piece_4_4(temp_v0,(temp_v1 - 0x1f) - temp_v4);
  }
  if (temp_v3 >> 0x10 == 0) {
    temp_v3 = temp_v2 << 0x10;
    temp_v4 = 0x10;
  }
  else {
    temp_v4 = 0;
  }
  if (temp_v3 >> 0x18 == 0) {
    temp_v3 = temp_v3 << 8;
    temp_v4 = temp_v4 + 8;
  }
  if (temp_v3 >> 0x1c == 0) {
    temp_v3 = temp_v3 << 4;
    temp_v4 = temp_v4 + 4;
  }
  if (temp_v3 >> 0x1e == 0) {
    temp_v3 = temp_v3 << 2;
    temp_v4 = temp_v4 + 2;
  }
  if (-1 < (int)temp_v3) {
    temp_v4 = temp_v4 + 1;
  }
  if (-1 < (int)temp_v3) {
    temp_v3 = temp_v3 << 1;
  }
  return romwright_piece_4_4(temp_v3 | (temp_v0 >> ((0x20U - temp_v4) & 0xff)),(temp_v1 - temp_v4) + 1);
}

} /* extern "C" */
