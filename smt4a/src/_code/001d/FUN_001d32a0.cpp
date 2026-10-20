/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d32a0` (_code @ 0x1d32a0, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(unsigned int, unsigned int);
int SCARRY4(unsigned int, unsigned int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Removing unreachable block (ram,0x001d3cec) */
/* WARNING: Removing unreachable block (ram,0x001d3d00) */
/* WARNING: Removing unreachable block (ram,0x001d3bcc) */
/* WARNING: Removing unreachable block (ram,0x001d3bc8) */
/* WARNING: Removing unreachable block (ram,0x001d3bd0) */
/* WARNING: Removing unreachable block (ram,0x001d3b9c) */
/* WARNING: Removing unreachable block (ram,0x001d3bb4) */
/* WARNING: Removing unreachable block (ram,0x001d3bb8) */
/* WARNING: Removing unreachable block (ram,0x001d3bbc) */
/* WARNING: Removing unreachable block (ram,0x001d3bd4) */
/* WARNING: Removing unreachable block (ram,0x001d3bdc) */
/* WARNING: Removing unreachable block (ram,0x001d3bf0) */
/* WARNING: Removing unreachable block (ram,0x001d3ce4) */
/* WARNING: Removing unreachable block (ram,0x001d3d18) */
/* WARNING: Removing unreachable block (ram,0x001d3cf4) */

long long FUN_001d32a0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_OV; 17 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char in_OV;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = 0x7ff;
  temp_v0 = (param_2 >> 0x14) & 0x7ff;
  temp_v2 = temp_v0 == 0;
  if (!temp_v2) {
    temp_v1 = temp_v0 ^ 0x7ff;
    temp_v2 = temp_v1 == 0;
  }
  temp_v3 = temp_v2;
  if (!temp_v2) {
    in_OV = SBORROW4(temp_v1,param_3);
    temp_v3 = temp_v1 == param_3;
  }
  temp_v2 = !temp_v2 && (int)(temp_v1 - param_3) < 0;
  if (!temp_v3 && temp_v2 == (unsigned char)in_OV) {
    in_OV = SCARRY4(param_3,temp_v0);
    temp_v2 = (int)(param_3 + temp_v0) < 0;
    temp_v3 = param_3 + temp_v0 == 0;
  }
  if (!temp_v3 && temp_v2 == (unsigned char)in_OV) {
    return romwright_piece_4_4(param_2 + param_3 * 0x100000,param_1);
  }
  if (temp_v0 == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      param_2 = 0;
    }
    return (unsigned long long)param_2 << 0x20;
  }
  if (temp_v1 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return romwright_piece_4_4(param_2,param_1);
    }
    return 0x7ff8000000000000;
  }
  if ((int)param_3 >= 0) {
    temp_v0 = (param_2 & 0x80000000) | 0x7ff00000;
  }
  else {
    temp_v0 = 0;
  }
  return (unsigned long long)temp_v0 << 0x20;
}

} /* extern "C" */
