/* NON_MATCHING: romwright 0.5.0 decompilation of `aeabi_uidivmod` (_code @ 0x2c6a20, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned int func_0x0014e6f4(unsigned int, unsigned int, int, unsigned int);


unsigned long long aeabi_uidivmod(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 goto(s) */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v3 = 0;
  temp_v1 = param_2;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_002c5fec;
        if (param_1 >> 0x10 < param_2) goto LAB_002c5fbc;
        temp_v1 = param_2 << 8;
        temp_v3 = -0x1000000;
        if (temp_v1 <= param_1 >> 0x10) {
          temp_v3 = -0x10000;
          temp_v1 = param_2 << 0x10;
        }
        if (param_1 >> 0xc < temp_v1) goto LAB_002c5fec;
        temp_v4 = 0;
        if (temp_v1 == 0) {
          temp_v0 = func_0x0014e6f4(0,0,temp_v3,0);
          return romwright_piece_4_4(param_1,temp_v0);
        }
        do {
          if (temp_v4) {
            temp_v1 = temp_v1 >> 8;
          }
LAB_002c5fbc:
          temp_v4 = temp_v1 <= param_1 >> 0xf;
          if (temp_v4) {
            param_1 = param_1 + temp_v1 * -0x8000;
          }
          temp_v5 = temp_v1 <= param_1 >> 0xe;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x4000;
          }
          temp_v6 = temp_v1 <= param_1 >> 0xd;
          if (temp_v6) {
            param_1 = param_1 + temp_v1 * -0x2000;
          }
          temp_v7 = temp_v1 <= param_1 >> 0xc;
          if (temp_v7) {
            param_1 = param_1 + temp_v1 * -0x1000;
          }
          temp_v3 = (((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 +
                  (unsigned int)temp_v7;
LAB_002c5fec:
          temp_v4 = temp_v1 <= param_1 >> 0xb;
          if (temp_v4) {
            param_1 = param_1 + temp_v1 * -0x800;
          }
          temp_v5 = temp_v1 <= param_1 >> 10;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x400;
          }
          temp_v6 = temp_v1 <= param_1 >> 9;
          if (temp_v6) {
            param_1 = param_1 + temp_v1 * -0x200;
          }
          temp_v2 = ((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6;
          temp_v5 = temp_v1 <= param_1 >> 8;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x100;
          }
          temp_v3 = temp_v2 * 2 + (unsigned int)temp_v5;
          temp_v4 = 1;
        } while (romwright_carry_4(temp_v2,temp_v2) || romwright_carry_4(temp_v2 * 2,(unsigned int)temp_v5));
      }
      temp_v4 = temp_v1 <= param_1 >> 7;
      if (temp_v4) {
        param_1 = param_1 + temp_v1 * -0x80;
      }
      temp_v5 = temp_v1 <= param_1 >> 6;
      if (temp_v5) {
        param_1 = param_1 + temp_v1 * -0x40;
      }
      temp_v6 = temp_v1 <= param_1 >> 5;
      if (temp_v6) {
        param_1 = param_1 + temp_v1 * -0x20;
      }
      temp_v3 = ((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6;
    }
    temp_v4 = temp_v1 <= param_1 >> 4;
    if (temp_v4) {
      param_1 = param_1 + temp_v1 * -0x10;
    }
    temp_v5 = temp_v1 <= param_1 >> 3;
    if (temp_v5) {
      param_1 = param_1 + temp_v1 * -8;
    }
    temp_v6 = temp_v1 <= param_1 >> 2;
    if (temp_v6) {
      param_1 = param_1 + temp_v1 * -4;
    }
    temp_v3 = ((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6;
  }
  temp_v4 = temp_v1 <= param_1 >> 1;
  if (temp_v4) {
    param_1 = param_1 + temp_v1 * -2;
  }
  temp_v2 = param_1 - temp_v1;
  if (temp_v1 > param_1) {
    temp_v2 = param_1;
  }
  return romwright_piece_4_4(temp_v2,(temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)(temp_v1 <= param_1));
}

} /* extern "C" */
