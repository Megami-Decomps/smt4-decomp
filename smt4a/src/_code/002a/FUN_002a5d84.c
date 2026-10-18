/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5d84` (_code @ 0x2a5d84, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif


unsigned int FUN_002a5d84(char *param_1,unsigned int *param_2,short *param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  if ((*param_1 == 'L') && (param_1[1] == '2')) {
    temp_v3 = *(unsigned short *)(param_1 + 2);
    temp_v7 = *(unsigned int *)(param_1 + 4);
    temp_v0 = param_1[7];
    temp_v4 = ((temp_v7 >> 8) & 0xff) << 0x10;
    temp_v5 = ((temp_v7 >> 0x10) & 0xff) << 8;
    temp_v1 = param_1[10];
    temp_v8 = (temp_v7 << 0x18) | temp_v4 | temp_v5 | (unsigned int)temp_v0;
    temp_v2 = param_1[0xb];
    temp_v6 = ((unsigned int)(unsigned char)param_1[8] << 0x18) | ((unsigned int)(unsigned char)param_1[9] << 0x10);
    param_2[1] = temp_v8;
    *param_2 = temp_v6 | ((unsigned int)temp_v1 << 8) | (unsigned int)temp_v2;
    if ((int)temp_v8 < 0) {
      temp_v8 = ((temp_v7 << 0x18) & 0x7fffffff) | temp_v4 | temp_v5 | (unsigned int)temp_v0;
    }
    *param_3 = ((*(unsigned short *)(param_1 + 0xc) << 8) | (*(unsigned short *)(param_1 + 0xc) >> 8)) + 1;
    if ((((temp_v3 & 0xff) << 8) | (unsigned int)(temp_v3 >> 8)) ==
        ((temp_v8 >> 0x10) ^ 0xaaaa ^ (temp_v8 & 0xffff) ^ (temp_v6 >> 0x10) ^ (unsigned int)romwright_piece_1_1(temp_v1,temp_v2)
        )) {
      return 1;
    }
  }
  return 0;
}
