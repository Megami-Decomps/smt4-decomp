/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0e34` (_code @ 0x2c0e34, 0x18 bytes) from smt4.cxi.
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
extern unsigned long long FUN_002c0ec4(unsigned int, unsigned int);
extern unsigned int func_0x0014e604(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c61b4) */

long long FUN_002c0e34(void)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
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
  unsigned long long temp_v8;
  
  temp_v8 = FUN_002c0ec4(0x18,0);
  temp_v1 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
  puVar1 = (unsigned int *)temp_v8;
  if ((puVar1 != (unsigned int *)0x0) && (temp_v1 = *puVar1, temp_v1 == 0x314c4254)) {
    temp_v2 = puVar1[2];
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = puVar1[1];
      temp_v4 = 0;
      if (temp_v2 <= temp_v1 >> 2) {
        if (temp_v2 <= temp_v1 >> 5) {
          if (temp_v2 <= temp_v1 >> 8) {
            if (temp_v1 >> 0xc < temp_v2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (temp_v2 <= temp_v1 >> 0x10) {
              temp_v4 = -0x1000000;
              temp_v3 = temp_v2 << 8;
              if (temp_v2 << 8 <= temp_v1 >> 0x10) {
                temp_v4 = -0x10000;
                temp_v3 = temp_v2 << 0x10;
              }
              temp_v2 = temp_v3;
              if (temp_v1 >> 0xc < temp_v2) {
                halt_baddata();
              }
              if (temp_v2 == 0) {
                temp_v0 = func_0x0014e604(0,0,temp_v4,0,temp_v1,in_lr);
                return romwright_piece_4_4(temp_v1,temp_v0);
              }
            }
            temp_v5 = temp_v2 <= temp_v1 >> 0xf;
            if (temp_v5) {
              temp_v1 = temp_v1 + temp_v2 * -0x8000;
            }
            if (temp_v1 >> 0xe < temp_v2) {
              *(short *)(2 - (temp_v4 * 2 + (unsigned int)temp_v5)) = (short)in_lr;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          temp_v5 = temp_v2 <= temp_v1 >> 7;
          if (temp_v5) {
            temp_v1 = temp_v1 + temp_v2 * -0x80;
          }
          temp_v6 = temp_v2 <= temp_v1 >> 6;
          if (temp_v6) {
            temp_v1 = temp_v1 + temp_v2 * -0x40;
          }
          temp_v7 = temp_v2 <= temp_v1 >> 5;
          if (temp_v7) {
            temp_v1 = temp_v1 + temp_v2 * -0x20;
          }
          temp_v4 = ((unsigned int)temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
        }
        temp_v5 = temp_v2 <= temp_v1 >> 4;
        if (temp_v5) {
          temp_v1 = temp_v1 + temp_v2 * -0x10;
        }
        temp_v6 = temp_v2 <= temp_v1 >> 3;
        if (temp_v6) {
          temp_v1 = temp_v1 + temp_v2 * -8;
        }
        temp_v7 = temp_v2 <= temp_v1 >> 2;
        if (temp_v7) {
          temp_v1 = temp_v1 + temp_v2 * -4;
        }
        temp_v4 = ((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
      }
      temp_v5 = temp_v2 <= temp_v1 >> 1;
      if (temp_v5) {
        temp_v1 = temp_v1 + temp_v2 * -2;
      }
      temp_v3 = temp_v1 - temp_v2;
      if (temp_v2 > temp_v1) {
        temp_v3 = temp_v1;
      }
      return romwright_piece_4_4(temp_v3,(temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)(temp_v2 <= temp_v1));
    }
  }
  return (unsigned long long)temp_v1 << 0x20;
}
