/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebda8` (_code @ 0x2ebda8, 0xf bytes) from smt4a.cxi.
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
extern unsigned int *FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192798. */
extern unsigned int func_0x001ab850(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int);


long long FUN_002ebda8(void)

{
/* irregular: 3 goto(s); irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int in_lr;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  
  puVar3 = (unsigned int *)FUN_00187180(0x37,0);
  FUN_00192798();
  temp_v2 = temp_v4;
  if (((puVar3 == (unsigned int *)0x0) || (temp_v2 = *puVar3, temp_v2 != 0x314c4254)) ||
     (temp_v3 = puVar3[2], temp_v2 = 0, temp_v3 == 0)) {
    return (unsigned long long)temp_v2 << 0x20;
  }
  temp_v0 = puVar3[1];
  temp_v5 = 0;
  temp_v2 = temp_v3;
  if (temp_v3 <= temp_v0 >> 2) {
    if (temp_v3 <= temp_v0 >> 5) {
      if (temp_v3 <= temp_v0 >> 8) {
        if (temp_v0 >> 0xc < temp_v3) goto LAB_002e4f30;
        if (temp_v0 >> 0x10 < temp_v3) goto LAB_002e4f00;
        temp_v2 = temp_v3 << 8;
        temp_v5 = -0x1000000;
        if (temp_v2 <= temp_v0 >> 0x10) {
          temp_v5 = -0x10000;
          temp_v2 = temp_v3 << 0x10;
        }
        if (temp_v0 >> 0xc < temp_v2) goto LAB_002e4f30;
        temp_v6 = 0;
        if (temp_v2 == 0) {
          temp_v1 = func_0x001ab850(0,0,temp_v5,0,temp_v0,in_lr);
          return romwright_piece_4_4(temp_v0,temp_v1);
        }
        do {
          if (temp_v6) {
            temp_v2 = temp_v2 >> 8;
          }
LAB_002e4f00:
          temp_v6 = temp_v2 <= temp_v0 >> 0xf;
          if (temp_v6) {
            temp_v0 = temp_v0 + temp_v2 * -0x8000;
          }
          temp_v7 = temp_v2 <= temp_v0 >> 0xe;
          if (temp_v7) {
            temp_v0 = temp_v0 + temp_v2 * -0x4000;
          }
          temp_v8 = temp_v2 <= temp_v0 >> 0xd;
          if (temp_v8) {
            temp_v0 = temp_v0 + temp_v2 * -0x2000;
          }
          temp_v9 = temp_v2 <= temp_v0 >> 0xc;
          if (temp_v9) {
            temp_v0 = temp_v0 + temp_v2 * -0x1000;
          }
          temp_v5 = (((temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8) * 2 +
                  (unsigned int)temp_v9;
LAB_002e4f30:
          temp_v6 = temp_v2 <= temp_v0 >> 0xb;
          if (temp_v6) {
            temp_v0 = temp_v0 + temp_v2 * -0x800;
          }
          temp_v7 = temp_v2 <= temp_v0 >> 10;
          if (temp_v7) {
            temp_v0 = temp_v0 + temp_v2 * -0x400;
          }
          temp_v8 = temp_v2 <= temp_v0 >> 9;
          if (temp_v8) {
            temp_v0 = temp_v0 + temp_v2 * -0x200;
          }
          temp_v3 = ((temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8;
          temp_v7 = temp_v2 <= temp_v0 >> 8;
          if (temp_v7) {
            temp_v0 = temp_v0 + temp_v2 * -0x100;
          }
          temp_v5 = temp_v3 * 2 + (unsigned int)temp_v7;
          temp_v6 = 1;
        } while (romwright_carry_4(temp_v3,temp_v3) || romwright_carry_4(temp_v3 * 2,(unsigned int)temp_v7));
      }
      temp_v6 = temp_v2 <= temp_v0 >> 7;
      if (temp_v6) {
        temp_v0 = temp_v0 + temp_v2 * -0x80;
      }
      temp_v7 = temp_v2 <= temp_v0 >> 6;
      if (temp_v7) {
        temp_v0 = temp_v0 + temp_v2 * -0x40;
      }
      temp_v8 = temp_v2 <= temp_v0 >> 5;
      if (temp_v8) {
        temp_v0 = temp_v0 + temp_v2 * -0x20;
      }
      temp_v5 = ((temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8;
    }
    temp_v6 = temp_v2 <= temp_v0 >> 4;
    if (temp_v6) {
      temp_v0 = temp_v0 + temp_v2 * -0x10;
    }
    temp_v7 = temp_v2 <= temp_v0 >> 3;
    if (temp_v7) {
      temp_v0 = temp_v0 + temp_v2 * -8;
    }
    temp_v8 = temp_v2 <= temp_v0 >> 2;
    if (temp_v8) {
      temp_v0 = temp_v0 + temp_v2 * -4;
    }
    temp_v5 = ((temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 + (unsigned int)temp_v8;
  }
  temp_v6 = temp_v2 <= temp_v0 >> 1;
  if (temp_v6) {
    temp_v0 = temp_v0 + temp_v2 * -2;
  }
  temp_v3 = temp_v0 - temp_v2;
  if (temp_v2 > temp_v0) {
    temp_v3 = temp_v0;
  }
  return romwright_piece_4_4(temp_v3,(temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)(temp_v2 <= temp_v0));
}
