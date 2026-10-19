/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5ef0` (_code @ 0x2c5ef0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

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
extern int FUN_002adc88(void);
/* Supplied declaration required: FUN_002b63c0. */
extern unsigned int func_0x0014e6f4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


long long FUN_002c5ef0(void)

{
/* irregular: 7 goto(s); irregular input(s): in_lr; 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int in_lr;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v5 = 0;
  do {
    temp_v0 = temp_v5 & 0xffff;
    FUN_002b63c0();
    if ((temp_v0 != 0) && ((*(unsigned char *)(temp_v0 + 7) & 0x80) != 0)) {
      temp_v6 = temp_v6 + 1;
      temp_v1 = FUN_002adc88();
      if ((*(unsigned char *)(temp_v1 + (temp_v5 & 0xffff) * 4 + 0x200) & 8) != 0) {
        temp_v7 = temp_v7 + 1;
      }
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 400);
  temp_v5 = temp_v7 * 100;
  if ((int)(temp_v5 | temp_v6) < 0) {
    temp_v4 = temp_v6 & 0x80000000;
    if ((int)temp_v4 < 0) {
      temp_v6 = -temp_v6;
    }
    temp_v0 = temp_v4 ^ ((int)temp_v5 >> 0x20);
    if (romwright_subpiece_4_1_0(temp_v5 >> 0x1f,0)) {
      temp_v5 = temp_v7 * -100;
    }
    temp_v1 = (int)temp_v0 >> 0x1f;
    temp_v3 = temp_v6;
    if (temp_v5 >> 4 < temp_v6) goto LAB_002c6130;
    if (temp_v5 >> 8 < temp_v6) goto LAB_002c6100;
    temp_v3 = temp_v6 << 6;
    temp_v4 = 0xfc000000;
    if (temp_v5 >> 8 < temp_v3) goto LAB_002c6100;
    temp_v3 = temp_v6 << 0xc;
    temp_v4 = 0xfff00000;
    if (temp_v5 >> 8 < temp_v3) goto LAB_002c6100;
    temp_v3 = temp_v6 << 0x12;
    temp_v4 = 0xffffc000;
    if (temp_v3 <= temp_v5 >> 8) {
      temp_v3 = temp_v6 << 0x18;
      temp_v4 = 0xffffff00;
    }
    temp_v8 = temp_v3 == 0;
    if (!temp_v8) {
      do {
        if (temp_v8) {
          temp_v3 = temp_v3 >> 6;
        }
LAB_002c6100:
        temp_v8 = temp_v3 <= temp_v5 >> 7;
        if (temp_v8) {
          temp_v5 = temp_v5 + temp_v3 * -0x80;
        }
        temp_v9 = temp_v3 <= temp_v5 >> 6;
        if (temp_v9) {
          temp_v5 = temp_v5 + temp_v3 * -0x40;
        }
        temp_v10 = temp_v3 <= temp_v5 >> 5;
        if (temp_v10) {
          temp_v5 = temp_v5 + temp_v3 * -0x20;
        }
        temp_v11 = temp_v3 <= temp_v5 >> 4;
        if (temp_v11) {
          temp_v5 = temp_v5 + temp_v3 * -0x10;
        }
        temp_v4 = (((temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10) * 2 +
                (unsigned int)temp_v11;
LAB_002c6130:
        temp_v8 = temp_v3 <= temp_v5 >> 3;
        if (temp_v8) {
          temp_v5 = temp_v5 + temp_v3 * -8;
        }
        temp_v6 = temp_v4 * 2 + (unsigned int)temp_v8;
        temp_v9 = temp_v3 <= temp_v5 >> 2;
        if (temp_v9) {
          temp_v5 = temp_v5 + temp_v3 * -4;
        }
        temp_v4 = temp_v6 * 2 + (unsigned int)temp_v9;
        temp_v8 = 1;
      } while (romwright_carry_4(temp_v6,temp_v6) || romwright_carry_4(temp_v6 * 2,(unsigned int)temp_v9));
      temp_v8 = temp_v3 <= temp_v5 >> 1;
      if (temp_v8) {
        temp_v5 = temp_v5 + temp_v3 * -2;
      }
      temp_v6 = temp_v5 - temp_v3;
      if (temp_v3 > temp_v5) {
        temp_v6 = temp_v5;
      }
      temp_v7 = (temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)(temp_v3 <= temp_v5);
      if (temp_v1 < 0) {
        temp_v7 = -temp_v7;
      }
      if ((unsigned char)((unsigned char)(temp_v0 >> 0x1e) & 1)) {
        temp_v6 = -temp_v6;
      }
      return romwright_piece_4_4(temp_v6,temp_v7);
    }
    temp_v7 = 0;
    if (temp_v1 < 0) {
      temp_v5 = -temp_v5;
    }
    temp_v2 = func_0x0014e6f4(0,0,temp_v4,temp_v7,temp_v5,in_lr);
    return romwright_piece_4_4(temp_v5,temp_v2);
  }
  if (temp_v5 >> 1 < temp_v6) {
    if (temp_v5 < temp_v6) {
      return (unsigned long long)temp_v5 << 0x20;
    }
    return romwright_piece_4_4(temp_v5 - temp_v6,1);
  }
  temp_v4 = 0;
  temp_v0 = temp_v6;
  if (temp_v6 <= temp_v5 >> 4) {
    if (temp_v6 <= temp_v5 >> 8) {
      if (temp_v5 >> 0xc < temp_v6) goto LAB_002c5fec;
      if (temp_v5 >> 0x10 < temp_v6) goto LAB_002c5fbc;
      temp_v0 = temp_v6 << 8;
      temp_v4 = 0xff000000;
      if (temp_v0 <= temp_v5 >> 0x10) {
        temp_v4 = 0xffff0000;
        temp_v0 = temp_v6 << 0x10;
      }
      if (temp_v5 >> 0xc < temp_v0) goto LAB_002c5fec;
      temp_v7 = -temp_v0;
      temp_v8 = 0;
      if (temp_v0 == 0) {
        temp_v2 = func_0x0014e6f4(0,0,temp_v4,temp_v7,temp_v5,in_lr);
        return romwright_piece_4_4(temp_v5,temp_v2);
      }
      do {
        if (temp_v8) {
          temp_v0 = temp_v0 >> 8;
        }
LAB_002c5fbc:
        temp_v8 = temp_v0 <= temp_v5 >> 0xf;
        if (temp_v8) {
          temp_v5 = temp_v5 + temp_v0 * -0x8000;
        }
        temp_v9 = temp_v0 <= temp_v5 >> 0xe;
        if (temp_v9) {
          temp_v5 = temp_v5 + temp_v0 * -0x4000;
        }
        temp_v10 = temp_v0 <= temp_v5 >> 0xd;
        if (temp_v10) {
          temp_v5 = temp_v5 + temp_v0 * -0x2000;
        }
        temp_v11 = temp_v0 <= temp_v5 >> 0xc;
        if (temp_v11) {
          temp_v5 = temp_v5 + temp_v0 * -0x1000;
        }
        temp_v4 = (((temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10) * 2 +
                (unsigned int)temp_v11;
LAB_002c5fec:
        temp_v8 = temp_v0 <= temp_v5 >> 0xb;
        if (temp_v8) {
          temp_v5 = temp_v5 + temp_v0 * -0x800;
        }
        temp_v9 = temp_v0 <= temp_v5 >> 10;
        if (temp_v9) {
          temp_v5 = temp_v5 + temp_v0 * -0x400;
        }
        temp_v10 = temp_v0 <= temp_v5 >> 9;
        if (temp_v10) {
          temp_v5 = temp_v5 + temp_v0 * -0x200;
        }
        temp_v6 = ((temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10;
        temp_v9 = temp_v0 <= temp_v5 >> 8;
        if (temp_v9) {
          temp_v5 = temp_v5 + temp_v0 * -0x100;
        }
        temp_v4 = temp_v6 * 2 + (unsigned int)temp_v9;
        temp_v8 = 1;
      } while (romwright_carry_4(temp_v6,temp_v6) || romwright_carry_4(temp_v6 * 2,(unsigned int)temp_v9));
    }
    temp_v8 = temp_v0 <= temp_v5 >> 7;
    if (temp_v8) {
      temp_v5 = temp_v5 + temp_v0 * -0x80;
    }
    temp_v9 = temp_v0 <= temp_v5 >> 6;
    if (temp_v9) {
      temp_v5 = temp_v5 + temp_v0 * -0x40;
    }
    temp_v10 = temp_v0 <= temp_v5 >> 5;
    if (temp_v10) {
      temp_v5 = temp_v5 + temp_v0 * -0x20;
    }
    temp_v11 = temp_v0 <= temp_v5 >> 4;
    if (temp_v11) {
      temp_v5 = temp_v5 + temp_v0 * -0x10;
    }
    temp_v4 = (((temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10) * 2 + (unsigned int)temp_v11;
  }
  temp_v8 = temp_v0 <= temp_v5 >> 3;
  if (temp_v8) {
    temp_v5 = temp_v5 + temp_v0 * -8;
  }
  temp_v9 = temp_v0 <= temp_v5 >> 2;
  if (temp_v9) {
    temp_v5 = temp_v5 + temp_v0 * -4;
  }
  temp_v10 = temp_v0 <= temp_v5 >> 1;
  if (temp_v10) {
    temp_v5 = temp_v5 + temp_v0 * -2;
  }
  temp_v6 = temp_v5 - temp_v0;
  if (temp_v0 > temp_v5) {
    temp_v6 = temp_v5;
  }
  return romwright_piece_4_4(temp_v6,(((temp_v4 * 2 + (unsigned int)temp_v8) * 2 + (unsigned int)temp_v9) * 2 + (unsigned int)temp_v10) * 2 +
                        (unsigned int)(temp_v0 <= temp_v5));
}
