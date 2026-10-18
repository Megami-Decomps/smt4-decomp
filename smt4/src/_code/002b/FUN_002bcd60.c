/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcd60` (_code @ 0x2bcd60, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Removing unreachable block (ram,0x002bcdd0) */
/* WARNING: Removing unreachable block (ram,0x002bcdc8) */
/* WARNING: Removing unreachable block (ram,0x002bcdb8) */
/* WARNING: Removing unreachable block (ram,0x002bcda8) */
/* WARNING: Removing unreachable block (ram,0x002bcdc4) */
/* WARNING: Removing unreachable block (ram,0x002bcdcc) */
/* WARNING: Removing unreachable block (ram,0x002bcdd4) */
/* WARNING: Removing unreachable block (ram,0x002bcdd8) */

unsigned long long FUN_002bcd60(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v0 = 0x70;
  temp_v1 = *param_2;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  temp_v4 = param_2[3];
  HintPreloadData(param_2 + 0x14);
  temp_v5 = param_2[4];
  temp_v6 = param_2[5];
  temp_v7 = param_2[6];
  temp_v8 = param_2[7];
  param_2 = param_2 + 8;
  while( 1 ) {
    *param_1 = temp_v1;
    param_1[1] = temp_v2;
    param_1[2] = temp_v3;
    param_1[3] = temp_v4;
    temp_v9 = temp_v0 >= 0x20;
    temp_v0 = temp_v0 - 0x20;
    param_1[4] = temp_v5;
    param_1[5] = temp_v6;
    param_1[6] = temp_v7;
    param_1[7] = temp_v8;
    puVar1 = param_1 + 8;
    if (temp_v9) {
      temp_v1 = *param_2;
      temp_v2 = param_2[1];
      temp_v3 = param_2[2];
      temp_v4 = param_2[3];
      param_2 = param_2 + 4;
    }
    HintPreloadData(param_2 + 0x10);
    if (!temp_v9) break;
    temp_v5 = *param_2;
    temp_v6 = param_2[1];
    temp_v7 = param_2[2];
    temp_v8 = param_2[3];
    param_2 = param_2 + 4;
    param_1 = puVar1;
  }
  if ((unsigned char)((unsigned char)(temp_v0 >> 4) & 1)) {
    temp_v1 = *param_2;
    temp_v2 = param_2[1];
    temp_v3 = param_2[2];
    temp_v4 = param_2[3];
    param_2 = param_2 + 4;
    *puVar1 = temp_v1;
    param_1[9] = temp_v2;
    param_1[10] = temp_v3;
    param_1[0xb] = temp_v4;
    puVar1 = param_1 + 0xc;
  }
  return romwright_piece_4_4(param_2,puVar1);
}
