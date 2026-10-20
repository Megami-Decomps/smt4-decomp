/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a08f0` (_code @ 0x4a08f0, 0x2b8 bytes) from smt4a.cxi.
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

extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_003e46f4(unsigned int);


void FUN_004a08f0(void)

{
  int temp_v0;
  int temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  short temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v7 = 0;
  temp_v0 = FUN_001801a4();
  if ((*(unsigned short *)(temp_v0 + 0x5e) & 2) == 0) {
    temp_v0 = FUN_003e46f4(0x67);
    if ((temp_v0 != 0) || (temp_v0 = FUN_003e46f4(0x65), temp_v0 != 0)) {
      temp_v7 = 5;
    }
    else {
      temp_v0 = FUN_003e46f4(100);
      if (temp_v0 != 0) {
        temp_v7 = 2;
      }
    }
    temp_v1 = FUN_001801a4();
    temp_v0 = temp_v7;
    if (*(short *)(temp_v1 + 0xc) == 0x2ab) {
      temp_v0 = temp_v7 + 2;
    }
    if (temp_v0 != 0) {
      temp_v1 = FUN_001801a4();
      temp_v6 = (int)*(short *)(temp_v1 + 0x1e);
      temp_v1 = FUN_001801a4();
      temp_v0 = (temp_v6 * temp_v0) / 100;
      if (temp_v0 < 0) {
        temp_v0 = 0;
      }
      temp_v0 = temp_v0 + *(short *)(temp_v1 + 0x2c);
      if (temp_v6 < temp_v0) {
        temp_v0 = temp_v6;
      }
      temp_v2 = (short)temp_v0;
      temp_v0 = FUN_001801a4();
      temp_v5 = *(short *)(temp_v0 + 0x1e);
      if ((temp_v2 <= temp_v5) && (temp_v5 = temp_v2, temp_v2 < 1)) {
        temp_v5 = 1;
      }
      *(short *)(temp_v0 + 0x2c) = temp_v5;
    }
    if ((temp_v7 != 0) && (temp_v0 = FUN_003e46f4(0x67), temp_v0 != 0)) {
      temp_v0 = FUN_001ab888();
      temp_v1 = 0;
      do {
        if ((-1 < *(char *)(temp_v0 + 0x1ca0 + temp_v1)) &&
           (temp_v6 = FUN_001ab854(),
           (*(unsigned short *)(temp_v6 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v6 + 0x60) & 0x400) == 0)) {
          temp_v2 = *(short *)(temp_v6 + 0x10);
          temp_v3 = (int)temp_v2;
          temp_v4 = (temp_v3 * temp_v7) / 100;
          if (temp_v4 < 0) {
            temp_v4 = 0;
          }
          temp_v4 = temp_v4 + *(short *)(temp_v6 + 0x2c);
          if (temp_v3 < temp_v4) {
            temp_v4 = temp_v3;
          }
          temp_v5 = (short)temp_v4;
          if (temp_v6 != 0) {
            if ((temp_v5 <= temp_v3) && (temp_v2 = temp_v5, temp_v5 < 1)) {
              temp_v2 = 1;
            }
            *(short *)(temp_v6 + 0x2c) = temp_v2;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
    }
    temp_v0 = FUN_001ab888();
    temp_v7 = 0;
    do {
      if ((-1 < *(char *)(temp_v0 + 0x1ca0 + temp_v7)) &&
         (temp_v1 = FUN_001ab854(),
         (*(unsigned short *)(temp_v1 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v1 + 0x60) & 0x400) == 0)) {
        temp_v8 = 0;
        temp_v9 = 0;
        temp_v10 = 0;
        temp_v11 = 0;
        temp_v12 = 0;
        if (temp_v1 != 0) {
          temp_v8 = *(unsigned int *)(temp_v1 + 0x34);
          temp_v9 = *(unsigned int *)(temp_v1 + 0x38);
          temp_v10 = *(unsigned int *)(temp_v1 + 0x3c);
          temp_v11 = *(unsigned int *)(temp_v1 + 0x40);
        }
        temp_v6 = 0;
        do {
          temp_v2 = *(short *)((int)&temp_v8 + temp_v6 * 2);
          if ((temp_v2 != 0) && (temp_v2 == 0x1c7)) {
            temp_v4 = (int)*(short *)(temp_v1 + 0x10);
            temp_v6 = (temp_v4 * 2) / 100;
            if (temp_v6 < 0) {
              temp_v6 = 0;
            }
            temp_v6 = temp_v6 + *(short *)(temp_v1 + 0x2c);
            if (temp_v4 < temp_v6) {
              temp_v6 = temp_v4;
            }
            temp_v2 = (short)temp_v6;
            if (temp_v1 != 0) {
              temp_v5 = *(short *)(temp_v1 + 0x10);
              if ((temp_v2 <= temp_v4) && (temp_v5 = temp_v2, temp_v2 < 1)) {
                temp_v5 = 1;
              }
              *(short *)(temp_v1 + 0x2c) = temp_v5;
            }
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 9);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 3);
  }
  return;
}

} /* extern "C" */
