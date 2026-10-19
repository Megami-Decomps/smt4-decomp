/* NON_MATCHING: romwright 0.5.0 decompilation of `aeabi_idivmod` (_code @ 0x2c5f60, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned int func_0x0014e6f4(unsigned int, unsigned int, unsigned int, int);


long long aeabi_idivmod(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  
  if ((int)(param_1 | param_2) < 0) {
    temp_v3 = param_2 & 0x80000000;
    if ((int)temp_v3 < 0) {
      param_2 = -param_2;
    }
    temp_v6 = temp_v3 ^ ((int)param_1 >> 0x20);
    if (romwright_subpiece_4_1_0(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    temp_v0 = (int)temp_v6 >> 0x1f;
    temp_v4 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_002c6130;
    if (param_1 >> 8 < param_2) goto LAB_002c6100;
    temp_v4 = param_2 << 6;
    temp_v3 = 0xfc000000;
    if (param_1 >> 8 < temp_v4) goto LAB_002c6100;
    temp_v4 = param_2 << 0xc;
    temp_v3 = 0xfff00000;
    if (param_1 >> 8 < temp_v4) goto LAB_002c6100;
    temp_v4 = param_2 << 0x12;
    temp_v3 = 0xffffc000;
    if (temp_v4 <= param_1 >> 8) {
      temp_v4 = param_2 << 0x18;
      temp_v3 = 0xffffff00;
    }
    temp_v7 = temp_v4 == 0;
    if (!temp_v7) {
      do {
        if (temp_v7) {
          temp_v4 = temp_v4 >> 6;
        }
LAB_002c6100:
        temp_v7 = temp_v4 <= param_1 >> 7;
        if (temp_v7) {
          param_1 = param_1 + temp_v4 * -0x80;
        }
        temp_v8 = temp_v4 <= param_1 >> 6;
        if (temp_v8) {
          param_1 = param_1 + temp_v4 * -0x40;
        }
        temp_v9 = temp_v4 <= param_1 >> 5;
        if (temp_v9) {
          param_1 = param_1 + temp_v4 * -0x20;
        }
        temp_v10 = temp_v4 <= param_1 >> 4;
        if (temp_v10) {
          param_1 = param_1 + temp_v4 * -0x10;
        }
        temp_v3 = (((temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 +
                (unsigned int)temp_v10;
LAB_002c6130:
        temp_v7 = temp_v4 <= param_1 >> 3;
        if (temp_v7) {
          param_1 = param_1 + temp_v4 * -8;
        }
        temp_v5 = temp_v3 * 2 + (unsigned int)temp_v7;
        temp_v8 = temp_v4 <= param_1 >> 2;
        if (temp_v8) {
          param_1 = param_1 + temp_v4 * -4;
        }
        temp_v3 = temp_v5 * 2 + (unsigned int)temp_v8;
        temp_v7 = 1;
      } while (romwright_carry_4(temp_v5,temp_v5) || romwright_carry_4(temp_v5 * 2,(unsigned int)temp_v8));
      temp_v7 = temp_v4 <= param_1 >> 1;
      if (temp_v7) {
        param_1 = param_1 + temp_v4 * -2;
      }
      temp_v5 = param_1 - temp_v4;
      if (temp_v4 > param_1) {
        temp_v5 = param_1;
      }
      temp_v1 = (temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)(temp_v4 <= param_1);
      if (temp_v0 < 0) {
        temp_v1 = -temp_v1;
      }
      if ((unsigned char)((unsigned char)(temp_v6 >> 0x1e) & 1)) {
        temp_v5 = -temp_v5;
      }
      return romwright_piece_4_4(temp_v5,temp_v1);
    }
    temp_v1 = 0;
    if (temp_v0 < 0) {
      param_1 = -param_1;
    }
    temp_v2 = func_0x0014e6f4(0,0,temp_v3,temp_v1);
    return romwright_piece_4_4(param_1,temp_v2);
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (unsigned long long)param_1 << 0x20;
    }
    return romwright_piece_4_4(param_1 - param_2,1);
  }
  temp_v3 = 0;
  temp_v6 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_002c5fec;
      if (param_1 >> 0x10 < param_2) goto LAB_002c5fbc;
      temp_v6 = param_2 << 8;
      temp_v3 = 0xff000000;
      if (temp_v6 <= param_1 >> 0x10) {
        temp_v3 = 0xffff0000;
        temp_v6 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < temp_v6) goto LAB_002c5fec;
      temp_v1 = -temp_v6;
      temp_v7 = 0;
      if (temp_v6 == 0) {
        temp_v2 = func_0x0014e6f4(0,0,temp_v3,temp_v1);
        return romwright_piece_4_4(param_1,temp_v2);
      }
      do {
        if (temp_v7) {
          temp_v6 = temp_v6 >> 8;
        }
LAB_002c5fbc:
        temp_v7 = temp_v6 <= param_1 >> 0xf;
        if (temp_v7) {
          param_1 = param_1 + temp_v6 * -0x8000;
        }
        temp_v8 = temp_v6 <= param_1 >> 0xe;
        if (temp_v8) {
          param_1 = param_1 + temp_v6 * -0x4000;
        }
        temp_v9 = temp_v6 <= param_1 >> 0xd;
        if (temp_v9) {
          param_1 = param_1 + temp_v6 * -0x2000;
        }
        temp_v10 = temp_v6 <= param_1 >> 0xc;
        if (temp_v10) {
          param_1 = param_1 + temp_v6 * -0x1000;
        }
        temp_v3 = (((temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 +
                (unsigned int)temp_v10;
LAB_002c5fec:
        temp_v7 = temp_v6 <= param_1 >> 0xb;
        if (temp_v7) {
          param_1 = param_1 + temp_v6 * -0x800;
        }
        temp_v8 = temp_v6 <= param_1 >> 10;
        if (temp_v8) {
          param_1 = param_1 + temp_v6 * -0x400;
        }
        temp_v9 = temp_v6 <= param_1 >> 9;
        if (temp_v9) {
          param_1 = param_1 + temp_v6 * -0x200;
        }
        temp_v4 = ((temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9;
        temp_v8 = temp_v6 <= param_1 >> 8;
        if (temp_v8) {
          param_1 = param_1 + temp_v6 * -0x100;
        }
        temp_v3 = temp_v4 * 2 + (unsigned int)temp_v8;
        temp_v7 = 1;
      } while (romwright_carry_4(temp_v4,temp_v4) || romwright_carry_4(temp_v4 * 2,(unsigned int)temp_v8));
    }
    temp_v7 = temp_v6 <= param_1 >> 7;
    if (temp_v7) {
      param_1 = param_1 + temp_v6 * -0x80;
    }
    temp_v8 = temp_v6 <= param_1 >> 6;
    if (temp_v8) {
      param_1 = param_1 + temp_v6 * -0x40;
    }
    temp_v9 = temp_v6 <= param_1 >> 5;
    if (temp_v9) {
      param_1 = param_1 + temp_v6 * -0x20;
    }
    temp_v10 = temp_v6 <= param_1 >> 4;
    if (temp_v10) {
      param_1 = param_1 + temp_v6 * -0x10;
    }
    temp_v3 = (((temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10;
  }
  temp_v7 = temp_v6 <= param_1 >> 3;
  if (temp_v7) {
    param_1 = param_1 + temp_v6 * -8;
  }
  temp_v8 = temp_v6 <= param_1 >> 2;
  if (temp_v8) {
    param_1 = param_1 + temp_v6 * -4;
  }
  temp_v9 = temp_v6 <= param_1 >> 1;
  if (temp_v9) {
    param_1 = param_1 + temp_v6 * -2;
  }
  temp_v4 = param_1 - temp_v6;
  if (temp_v6 > param_1) {
    temp_v4 = param_1;
  }
  return romwright_piece_4_4(temp_v4,(((temp_v3 * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 +
                        (unsigned int)(temp_v6 <= param_1));
}
