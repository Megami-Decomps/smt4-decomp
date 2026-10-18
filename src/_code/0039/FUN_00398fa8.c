/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398fa8` (_code @ 0x398fa8, 0x3c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern short FUN_001c36a0(void);
/* Supplied declaration required: FUN_00240d74. */
/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */
/* Supplied declaration required: FUN_0029e11c. */
/* Supplied declaration required: FUN_0029eb5c. */
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern int FUN_002af600(int);
extern int FUN_002b8d54(void);
extern int FUN_002b8d68(void);
/* Supplied declaration required: FUN_002bc01c. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
extern short FUN_002c5f60(int);


void FUN_00398fa8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = FUN_002b8d54();
  if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6) {
    temp_v2 = FUN_002b8d68();
    temp_v5 = param_1 + 0x51c;
    temp_v3 = 3;
    do {
      if ((*(short *)(param_1 + temp_v3 * 2 + 0x820) == temp_v2) && (0 < temp_v2)) {
        temp_v6 = temp_v3 - 3;
        if (*(char *)(param_1 + 0x29) != '\0') {
          temp_v3 = FUN_002af600(temp_v2);
          if (temp_v3 != 0) {
            *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_1 + 0x10);
            *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x14);
          }
          temp_v3 = (int)(((long long)(int)temp_v6 * -0x6db6db6d + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
          temp_v7 = *(int *)(param_1 + 0x10);
          temp_v8 = *(int *)(param_1 + 0x14);
          FUN_002992bc(temp_v5,temp_v6 + ((temp_v3 >> 3) - (temp_v3 >> 0x1f)) * -0xe);
          temp_v3 = (int)(((long long)(int)temp_v6 * -0x6db6db6d + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
          FUN_0029d620(temp_v5,(temp_v3 >> 3) - (temp_v3 >> 0x1f));
          temp_v4 = FUN_00240d74(temp_v5);
          *(unsigned int *)(param_1 + 0x10) = temp_v4;
          temp_v3 = FUN_0029e11c(temp_v5);
          *(int *)(param_1 + 0x14) = temp_v3;
          if (*(int *)(param_1 + 0x10) == temp_v7 && temp_v3 == temp_v8) break;
        }
        else {
          temp_v3 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
          temp_v7 = *(int *)(param_1 + 0x10);
          temp_v8 = *(int *)(param_1 + 0x14);
          *(unsigned char *)(param_1 + 0x648) = 0;
          FUN_002992bc(param_1 + 0x580,((temp_v3 >> 3) - (temp_v3 >> 0x1f)) * -0xf + temp_v6);
          temp_v3 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
          FUN_0029d620(param_1 + 0x580,(temp_v3 >> 3) - (temp_v3 >> 0x1f));
          temp_v4 = FUN_00240d74(param_1 + 0x580);
          *(unsigned int *)(param_1 + 0x10) = temp_v4;
          temp_v3 = FUN_0029e11c(param_1 + 0x580);
          *(int *)(param_1 + 0x14) = temp_v3;
          if (*(int *)(param_1 + 0x10) == temp_v7 && temp_v3 == temp_v8) break;
        }
        FUN_002bc01c(0x100016c);
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x8a);
    temp_v3 = 0x8b;
    do {
      if (*(short *)(param_1 + temp_v3 * 2 + 0x820) == temp_v2) {
        temp_v7 = param_1 + 0x5e4;
        temp_v8 = FUN_00240d74();
        FUN_0029e11c(temp_v7);
        temp_v0 = FUN_0029e11c(param_1 + 0x580);
        if (*(char *)(param_1 + 0x29) == '\0') {
          *(unsigned char *)(param_1 + 0x648) = 1;
          FUN_0029d620(param_1 + 0x580,6);
          FUN_002992bc(temp_v7,temp_v3 - 0x8b);
          temp_v4 = FUN_00240d74(param_1 + 0x580);
          *(unsigned int *)(param_1 + 0x10) = temp_v4;
          temp_v4 = FUN_0029e11c(param_1 + 0x580);
          *(unsigned int *)(param_1 + 0x14) = temp_v4;
        }
        if (temp_v1 != 2) {
          if ((temp_v1 == 6) || (temp_v1 = FUN_002af600(temp_v2), temp_v1 == 0)) break;
        }
        else {
          temp_v1 = FUN_00240d74(temp_v7);
          if ((temp_v1 == temp_v8) && (temp_v1 = FUN_0029e11c(param_1 + 0x580), temp_v1 == temp_v0)) break;
        }
        FUN_002bc01c(0x100016c);
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x8e);
    temp_v9 = *(char *)(param_1 + 0x29) != '\0';
    temp_v0 = 0;
    if (temp_v9) {
      temp_v0 = *(short *)(param_1 + 0x2c);
    }
    if (temp_v9 && temp_v0 >= 0x7f) {
      if (*(short *)(param_1 + 0x820) == temp_v2) {
        temp_v1 = FUN_0029efc0(temp_v5);
        temp_v2 = FUN_0029efa8(temp_v5);
        if (-1 < (temp_v2 + temp_v1) - 1) {
          FUN_0029eb5c(temp_v5);
        }
      }
      else if (*(short *)(param_1 + 0x822) == temp_v2) {
        temp_v1 = FUN_0029efc0(temp_v5);
        temp_v2 = FUN_0029efa8(temp_v5);
        temp_v2 = temp_v2 + temp_v1 + 1;
        temp_v1 = FUN_0029ee54(temp_v5);
        if (temp_v2 < temp_v1) {
          FUN_0029eb5c(temp_v5,temp_v2);
        }
      }
      else if (*(short *)(param_1 + 0x824) == temp_v2) {
        temp_v1 = FUN_0029ee54(temp_v5);
        temp_v2 = FUN_002bf4f8(0x2e,0x14e);
        temp_v0 = FUN_001c36a0();
        temp_v3 = (int)(short)(temp_v0 - *(short *)(temp_v2 + 10));
        if ((-1 < temp_v3) && (temp_v3 < *(short *)(*(int *)(temp_v2 + 0xc) + 2))) {
          temp_v0 = FUN_002c5f60(temp_v3 * temp_v1);
          FUN_0029eb5c(temp_v5,(int)temp_v0);
        }
      }
    }
  }
  return;
}
