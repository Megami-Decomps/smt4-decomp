/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a66c4` (_code @ 0x3a66c4, 0x2c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int padIsButtonDown(unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
extern int FUN_002b63ac(void);


void FUN_003a66c4(void)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short temp_v5;
  short temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v8 = 0;
  temp_v1 = FUN_002b63ac();
  if ((*(unsigned short *)(temp_v1 + 0x72) & 2) == 0) {
    temp_v1 = padIsButtonDown(0x6b);
    if ((temp_v1 != 0) || (temp_v1 = padIsButtonDown(0x69), temp_v1 != 0)) {
      temp_v8 = 5;
    }
    else {
      temp_v1 = padIsButtonDown(0x68);
      if (temp_v1 != 0) {
        temp_v8 = 2;
      }
    }
    temp_v2 = FUN_002b63ac();
    temp_v1 = temp_v8;
    if (*(short *)(temp_v2 + 0xc) == 0x2a6) {
      temp_v1 = temp_v8 + 2;
    }
    if (temp_v1 != 0) {
      temp_v2 = FUN_002b63ac();
      temp_v7 = (int)*(short *)(temp_v2 + 0x1c);
      temp_v2 = FUN_002b63ac();
      temp_v1 = (temp_v7 * temp_v1) / 100;
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
      temp_v1 = *(short *)(temp_v2 + 0x2a) + temp_v1;
      if (temp_v7 < temp_v1) {
        temp_v1 = temp_v7;
      }
      temp_v5 = (short)temp_v1;
      temp_v1 = FUN_002b63ac();
      temp_v6 = *(short *)(temp_v1 + 0x1c);
      if ((temp_v5 <= temp_v6) && (temp_v6 = temp_v5, temp_v5 < 1)) {
        temp_v6 = 1;
      }
      *(short *)(temp_v1 + 0x2a) = temp_v6;
    }
    if ((temp_v8 != 0) && (temp_v1 = padIsButtonDown(0x6b), temp_v1 != 0)) {
      temp_v1 = FUN_002a8764();
      temp_v2 = 0;
      do {
        if (-1 < *(char *)(temp_v1 + 0x9108 + temp_v2)) {
          temp_v7 = FUN_002a8740();
          temp_v0 = *(unsigned short *)(temp_v7 + 0x44);
          if (((temp_v0 & 2) == 0 && (temp_v0 & 0x400) == 0) && (temp_v0 & 4) == 0) {
            temp_v3 = (int)*(short *)(temp_v7 + 0xe);
            temp_v4 = (temp_v3 * temp_v8) / 100;
            if (temp_v4 < 0) {
              temp_v4 = 0;
            }
            temp_v4 = temp_v4 + *(short *)(temp_v7 + 0x2a);
            if (temp_v3 < temp_v4) {
              temp_v4 = temp_v3;
            }
            temp_v5 = (short)temp_v4;
            if (temp_v7 != 0) {
              temp_v6 = *(short *)(temp_v7 + 0xe);
              if ((temp_v5 <= temp_v3) && (temp_v6 = temp_v5, temp_v5 < 1)) {
                temp_v6 = 1;
              }
              *(short *)(temp_v7 + 0x2a) = temp_v6;
            }
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
    }
    temp_v1 = FUN_002a8764();
    temp_v8 = 0;
    do {
      if (-1 < *(char *)(temp_v1 + 0x9108 + temp_v8)) {
        temp_v2 = FUN_002a8740();
        temp_v0 = *(unsigned short *)(temp_v2 + 0x44);
        if (((temp_v0 & 2) == 0 && (temp_v0 & 0x400) == 0) && (temp_v0 & 4) == 0) {
          temp_v9 = 0;
          temp_v10 = 0;
          temp_v11 = 0;
          temp_v12 = 0;
          temp_v13 = 0;
          if (temp_v2 != 0) {
            temp_v9 = *(unsigned int *)(temp_v2 + 0x34);
            temp_v10 = *(unsigned int *)(temp_v2 + 0x38);
            temp_v11 = *(unsigned int *)(temp_v2 + 0x3c);
            temp_v12 = *(unsigned int *)(temp_v2 + 0x40);
          }
          temp_v7 = 0;
          do {
            temp_v5 = *(short *)((int)&temp_v9 + temp_v7 * 2);
            if ((temp_v5 != 0) && (temp_v5 == 0x1c6)) {
              temp_v5 = *(short *)(temp_v2 + 0xe);
              temp_v4 = (int)temp_v5;
              temp_v7 = (temp_v4 * 2) / 100;
              if (temp_v7 < 0) {
                temp_v7 = 0;
              }
              temp_v7 = *(short *)(temp_v2 + 0x2a) + temp_v7;
              if (temp_v4 < temp_v7) {
                temp_v7 = temp_v4;
              }
              temp_v6 = (short)temp_v7;
              if (temp_v2 != 0) {
                if ((temp_v6 <= temp_v4) && (temp_v5 = temp_v6, temp_v6 < 1)) {
                  temp_v5 = 1;
                }
                *(short *)(temp_v2 + 0x2a) = temp_v5;
              }
              break;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 9);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 3);
  }
  return;
}

} /* extern "C" */
