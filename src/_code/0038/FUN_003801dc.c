/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003801dc` (_code @ 0x3801dc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif


int FUN_003801dc(int param_1,int param_2,unsigned int *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_2);
  if (*pcVar1 != -2) {
    *param_3 = 1;
  }
  else {
    param_2 = param_2 + 3;
    *param_3 = (unsigned int)romwright_piece_1_1(pcVar1[1],pcVar1[2]);
  }
  return param_2;
}
