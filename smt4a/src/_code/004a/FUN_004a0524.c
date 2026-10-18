/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0524` (_code @ 0x4a0524, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001801a4(void);
extern int FUN_0018416c(unsigned short);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_003e46f4(unsigned int);


void FUN_004a0524(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned long long temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v7 = 0;
  temp_v1 = FUN_001801a4();
  if ((*(unsigned short *)(temp_v1 + 0x5e) & 2) == 0) {
    temp_v1 = FUN_003e46f4(0x6b);
    if ((temp_v1 != 0) || (temp_v1 = FUN_003e46f4(0x69), temp_v1 != 0)) {
      temp_v7 = 5;
    }
    else {
      temp_v1 = FUN_003e46f4(0x68);
      if (temp_v1 != 0) {
        temp_v7 = 2;
      }
    }
    temp_v2 = FUN_001801a4();
    temp_v1 = temp_v7;
    if (*(short *)(temp_v2 + 0xc) == 0x2a6) {
      temp_v1 = temp_v7 + 2;
    }
    if (temp_v1 != 0) {
      temp_v2 = FUN_001801a4();
      temp_v6 = (int)*(short *)(temp_v2 + 0x1c);
      temp_v2 = FUN_001801a4();
      temp_v1 = (temp_v6 * temp_v1) / 100;
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
      temp_v1 = temp_v1 + *(short *)(temp_v2 + 0x2a);
      if (temp_v6 < temp_v1) {
        temp_v1 = temp_v6;
      }
      temp_v0 = (short)temp_v1;
      temp_v1 = FUN_001801a4();
      temp_v5 = *(short *)(temp_v1 + 0x1c);
      if ((temp_v0 <= *(short *)(temp_v1 + 0x1c)) && (temp_v5 = temp_v0, temp_v0 < 1)) {
        temp_v5 = 1;
      }
      *(short *)(temp_v1 + 0x2a) = temp_v5;
    }
    temp_v10 = 0x3fa00000;
    if ((temp_v7 != 0) && (temp_v1 = FUN_003e46f4(0x6b), temp_v1 != 0)) {
      temp_v1 = FUN_001ab888();
      temp_v2 = 0;
      do {
        if ((-1 < *(char *)(temp_v1 + 0x1ca0 + temp_v2)) &&
           (temp_v6 = FUN_001ab854(),
           (*(unsigned short *)(temp_v6 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v6 + 0x60) & 0x400) == 0)) {
          temp_v8 = 0;
          if (temp_v6 != 0) {
            temp_v0 = *(short *)(temp_v6 + 0xe);
            temp_v3 = FUN_0018416c(*(unsigned short *)(temp_v6 + 0x62));
            temp_v8 = (int)temp_v0;
            if (temp_v3 != 0) {
              temp_v9 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v8 = (int)(short)(int)(temp_v9 * (float)temp_v10);
            }
          }
          temp_v3 = (temp_v8 * temp_v7) / 100;
          if (temp_v3 < 0) {
            temp_v3 = 0;
          }
          temp_v3 = temp_v3 + *(short *)(temp_v6 + 0x2a);
          if (temp_v8 < temp_v3) {
            temp_v3 = temp_v8;
          }
          temp_v8 = (int)(short)temp_v3;
          if (temp_v6 != 0) {
            temp_v3 = (int)*(short *)(temp_v6 + 0xe);
            temp_v4 = FUN_0018416c(*(unsigned short *)(temp_v6 + 0x62));
            if (temp_v4 != 0) {
              temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v3 = (int)(short)(int)(temp_v9 * (float)temp_v10);
            }
            if ((temp_v8 <= temp_v3) && (temp_v3 = temp_v8, temp_v8 < 1)) {
              temp_v3 = 1;
            }
            *(short *)(temp_v6 + 0x2a) = (short)temp_v3;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
    }
    temp_v1 = FUN_001ab888();
    temp_v7 = 0;
    do {
      if ((-1 < *(char *)(temp_v1 + 0x1ca0 + temp_v7)) &&
         (temp_v2 = FUN_001ab854(),
         (*(unsigned short *)(temp_v2 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v2 + 0x60) & 0x400) == 0)) {
        temp_v12 = 0;
        temp_v13 = 0;
        temp_v14 = 0;
        temp_v15 = 0;
        temp_v16 = 0;
        if (temp_v2 != 0) {
          temp_v12 = *(unsigned int *)(temp_v2 + 0x34);
          temp_v13 = *(unsigned int *)(temp_v2 + 0x38);
          temp_v14 = *(unsigned int *)(temp_v2 + 0x3c);
          temp_v15 = *(unsigned int *)(temp_v2 + 0x40);
        }
        temp_v6 = 0;
        do {
          temp_v0 = *(short *)((int)&temp_v12 + temp_v6 * 2);
          if ((temp_v0 != 0) && (temp_v0 == 0x1c6)) {
            temp_v6 = 0;
            if (temp_v2 != 0) {
              temp_v6 = (int)*(short *)(temp_v2 + 0xe);
              temp_v8 = FUN_0018416c(*(unsigned short *)(temp_v2 + 0x62));
              if (temp_v8 != 0) {
                temp_v9 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v6 = (int)(short)(int)(temp_v9 * (float)temp_v10);
              }
            }
            temp_v8 = (temp_v6 * 2) / 100;
            if (temp_v8 < 0) {
              temp_v8 = 0;
            }
            temp_v8 = *(short *)(temp_v2 + 0x2a) + temp_v8;
            if (temp_v6 < temp_v8) {
              temp_v8 = temp_v6;
            }
            temp_v6 = (int)(short)temp_v8;
            if (temp_v2 != 0) {
              temp_v11 = (int)*(short *)(temp_v2 + 0xe);
              temp_v8 = FUN_0018416c(*(unsigned short *)(temp_v2 + 0x62));
              if (temp_v8 != 0) {
                temp_v9 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v11 = (int)(short)(int)(temp_v9 * (float)temp_v10);
              }
              if ((temp_v6 <= temp_v11) && (temp_v11 = temp_v6, temp_v6 < 1)) {
                temp_v11 = 1;
              }
              *(short *)(temp_v2 + 0x2a) = (short)temp_v11;
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
