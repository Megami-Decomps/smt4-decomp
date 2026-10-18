/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6c10` (_code @ 0x2c6c10, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int func_0x0014e604(unsigned int, unsigned int, int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c61b4) */

unsigned long long FUN_002c6c10(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short in_lr;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v2 = 0;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_2 <= param_1 >> 0x10) {
          temp_v2 = -0x1000000;
          temp_v1 = param_2 << 8;
          if (param_2 << 8 <= param_1 >> 0x10) {
            temp_v2 = -0x10000;
            temp_v1 = param_2 << 0x10;
          }
          param_2 = temp_v1;
          if (param_1 >> 0xc < param_2) {
            halt_baddata();
          }
          if (param_2 == 0) {
            temp_v0 = func_0x0014e604(0,0,temp_v2,0);
            return romwright_piece_4_4(param_1,temp_v0);
          }
        }
        temp_v3 = param_2 <= param_1 >> 0xf;
        if (temp_v3) {
          param_1 = param_1 + param_2 * -0x8000;
        }
        if (param_1 >> 0xe < param_2) {
          *(unsigned short *)(2 - (temp_v2 * 2 + (unsigned int)temp_v3)) = in_lr;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      temp_v3 = param_2 <= param_1 >> 7;
      if (temp_v3) {
        param_1 = param_1 + param_2 * -0x80;
      }
      temp_v4 = param_2 <= param_1 >> 6;
      if (temp_v4) {
        param_1 = param_1 + param_2 * -0x40;
      }
      temp_v5 = param_2 <= param_1 >> 5;
      if (temp_v5) {
        param_1 = param_1 + param_2 * -0x20;
      }
      temp_v2 = ((unsigned int)temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5;
    }
    temp_v3 = param_2 <= param_1 >> 4;
    if (temp_v3) {
      param_1 = param_1 + param_2 * -0x10;
    }
    temp_v4 = param_2 <= param_1 >> 3;
    if (temp_v4) {
      param_1 = param_1 + param_2 * -8;
    }
    temp_v5 = param_2 <= param_1 >> 2;
    if (temp_v5) {
      param_1 = param_1 + param_2 * -4;
    }
    temp_v2 = ((temp_v2 * 2 + (unsigned int)temp_v3) * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5;
  }
  temp_v3 = param_2 <= param_1 >> 1;
  if (temp_v3) {
    param_1 = param_1 + param_2 * -2;
  }
  temp_v1 = param_1 - param_2;
  if (param_2 > param_1) {
    temp_v1 = param_1;
  }
  return romwright_piece_4_4(temp_v1,(temp_v2 * 2 + (unsigned int)temp_v3) * 2 + (unsigned int)(param_2 <= param_1));
}
