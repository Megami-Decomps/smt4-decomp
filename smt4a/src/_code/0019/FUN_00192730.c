/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192730` (_code @ 0x192730, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned long long FUN_00187180(unsigned int, unsigned int);
extern unsigned int func_0x001ab850(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int);


long long FUN_00192730(void)

{
/* irregular: 3 goto(s); irregular input(s): in_lr */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_lr;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned long long temp_v9;
  
  temp_v9 = FUN_00187180(0x18,0);
  temp_v2 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
  puVar1 = (unsigned int *)temp_v9;
  if (((puVar1 == (unsigned int *)0x0) || (temp_v2 = *puVar1, temp_v2 != 0x314c4254)) ||
     (temp_v3 = puVar1[2], temp_v2 = 0, temp_v3 == 0)) {
    return (unsigned long long)temp_v2 << 0x20;
  }
  temp_v0 = puVar1[1];
  temp_v4 = 0;
  temp_v2 = temp_v3;
  if (temp_v3 <= temp_v0 >> 2) {
    if (temp_v3 <= temp_v0 >> 5) {
      if (temp_v3 <= temp_v0 >> 8) {
        if (temp_v0 >> 0xc < temp_v3) goto LAB_002e4f30;
        if (temp_v0 >> 0x10 < temp_v3) goto LAB_002e4f00;
        temp_v2 = temp_v3 << 8;
        temp_v4 = -0x1000000;
        if (temp_v2 <= temp_v0 >> 0x10) {
          temp_v4 = -0x10000;
          temp_v2 = temp_v3 << 0x10;
        }
        if (temp_v0 >> 0xc < temp_v2) goto LAB_002e4f30;
        temp_v5 = 0;
        if (temp_v2 == 0) {
          temp_v1 = func_0x001ab850(0,0,temp_v4,0,temp_v0,in_lr);
          return romwright_piece_4_4(temp_v0,temp_v1);
        }
        do {
          if (temp_v5) {
            temp_v2 = temp_v2 >> 8;
          }
LAB_002e4f00:
          temp_v5 = temp_v2 <= temp_v0 >> 0xf;
          if (temp_v5) {
            temp_v0 = temp_v0 + temp_v2 * -0x8000;
          }
          temp_v6 = temp_v2 <= temp_v0 >> 0xe;
          if (temp_v6) {
            temp_v0 = temp_v0 + temp_v2 * -0x4000;
          }
          temp_v7 = temp_v2 <= temp_v0 >> 0xd;
          if (temp_v7) {
            temp_v0 = temp_v0 + temp_v2 * -0x2000;
          }
          temp_v8 = temp_v2 <= temp_v0 >> 0xc;
          if (temp_v8) {
            temp_v0 = temp_v0 + temp_v2 * -0x1000;
          }
          temp_v4 = (((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 +
                  (unsigned int)temp_v8;
LAB_002e4f30:
          temp_v5 = temp_v2 <= temp_v0 >> 0xb;
          if (temp_v5) {
            temp_v0 = temp_v0 + temp_v2 * -0x800;
          }
          temp_v6 = temp_v2 <= temp_v0 >> 10;
          if (temp_v6) {
            temp_v0 = temp_v0 + temp_v2 * -0x400;
          }
          temp_v7 = temp_v2 <= temp_v0 >> 9;
          if (temp_v7) {
            temp_v0 = temp_v0 + temp_v2 * -0x200;
          }
          temp_v3 = ((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
          temp_v6 = temp_v2 <= temp_v0 >> 8;
          if (temp_v6) {
            temp_v0 = temp_v0 + temp_v2 * -0x100;
          }
          temp_v4 = temp_v3 * 2 + (unsigned int)temp_v6;
          temp_v5 = 1;
        } while (romwright_carry_4(temp_v3,temp_v3) || romwright_carry_4(temp_v3 * 2,(unsigned int)temp_v6));
      }
      temp_v5 = temp_v2 <= temp_v0 >> 7;
      if (temp_v5) {
        temp_v0 = temp_v0 + temp_v2 * -0x80;
      }
      temp_v6 = temp_v2 <= temp_v0 >> 6;
      if (temp_v6) {
        temp_v0 = temp_v0 + temp_v2 * -0x40;
      }
      temp_v7 = temp_v2 <= temp_v0 >> 5;
      if (temp_v7) {
        temp_v0 = temp_v0 + temp_v2 * -0x20;
      }
      temp_v4 = ((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
    }
    temp_v5 = temp_v2 <= temp_v0 >> 4;
    if (temp_v5) {
      temp_v0 = temp_v0 + temp_v2 * -0x10;
    }
    temp_v6 = temp_v2 <= temp_v0 >> 3;
    if (temp_v6) {
      temp_v0 = temp_v0 + temp_v2 * -8;
    }
    temp_v7 = temp_v2 <= temp_v0 >> 2;
    if (temp_v7) {
      temp_v0 = temp_v0 + temp_v2 * -4;
    }
    temp_v4 = ((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
  }
  temp_v5 = temp_v2 <= temp_v0 >> 1;
  if (temp_v5) {
    temp_v0 = temp_v0 + temp_v2 * -2;
  }
  temp_v3 = temp_v0 - temp_v2;
  if (temp_v2 > temp_v0) {
    temp_v3 = temp_v0;
  }
  return romwright_piece_4_4(temp_v3,(temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)(temp_v2 <= temp_v0));
}
