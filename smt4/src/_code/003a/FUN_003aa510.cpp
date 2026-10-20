/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa510` (_code @ 0x3aa510, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022dde8(int, int);
int FUN_00231240(int, unsigned int, unsigned int);
int FUN_00233240(int, int);
int FUN_00233344(int, int);
int FUN_00233404(void);
int FUN_0029d684(int);
int FUN_0029defc(int, int);
int FUN_0029dfc0(int);
int FUN_003a98b8(int);
int FUN_003aab78(int);
int FUN_003c2b74(int);
int FUN_003c2c6c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0022dde8. */
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_00233344. */
/* Supplied declaration required: FUN_00233404. */
extern int FUN_0023360c(int);
extern int FUN_00233718(int);
extern int FUN_00240d5c(int);
extern int FUN_0026c63c(void);
extern int FUN_00293aac(void);
extern int FUN_00293b8c(void);
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029defc. */
/* Supplied declaration required: FUN_0029dfc0. */
extern int gameGetFlagByte12e8(void);
extern int FUN_0029e0f8(void);
extern int FUN_0029e924(int);
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_003a98b8. */
/* Supplied declaration required: FUN_003aab78. */
/* Supplied declaration required: FUN_003c2b74. */
/* Supplied declaration required: FUN_003c2c6c. */


void FUN_003aa510(int param_1)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short *psVar6;
  short temp_v5;
  int temp_v6;
  int temp_v7;
  
  *(unsigned char *)(param_1 + 0xa6be) = 0xff;
  if (*(int *)(param_1 + 0x14) != 4) {
    FUN_003a98b8(param_1);
  }
  else {
    FUN_00233344(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
    temp_v7 = param_1 + *(short *)(param_1 + 0xa5b2) * 0x8c + 0xfc;
    temp_v3 = FUN_002bed98(temp_v7);
    temp_v4 = FUN_002beda4(temp_v7);
    FUN_00231240(param_1 + 200,temp_v4,temp_v3);
    temp_v7 = FUN_0026c63c();
    if ((temp_v7 == 0) || (temp_v7 = FUN_00293aac(), temp_v7 != 0)) {
      temp_v7 = FUN_0026c63c();
      if ((temp_v7 == 0) && (0 < *(int *)(param_1 + 0x28))) {
        temp_v7 = FUN_0029e924(param_1 + 0x20);
        temp_v1 = FUN_00240d5c(param_1 + 0x20);
        temp_v6 = FUN_00293b8c();
        if (temp_v6 != 1) {
          temp_v6 = FUN_00293b8c();
          if (temp_v6 == -1) {
            FUN_003c2c6c(param_1 + 0x20);
          }
        }
        else {
          FUN_003c2b74(param_1 + 0x20);
        }
        temp_v6 = FUN_0029e924(param_1 + 0x20);
        if ((temp_v6 != temp_v7) || (temp_v7 = FUN_00240d5c(param_1 + 0x20), temp_v7 != temp_v1)) {
          FUN_00233404();
        }
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
      temp_v7 = gameGetFlagByte12e8();
      if (temp_v7 == 1) {
        *(unsigned short *)(param_1 + 0xa5b2) = 0;
      }
      else {
        *(unsigned short *)(param_1 + 0xa5b2) = 4;
      }
      FUN_00233240(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
    }
  }
  temp_v7 = param_1 + 0x5a8;
  if (*(short *)(param_1 + 0x5a8) != 0) {
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    temp_v5 = *(short *)(temp_v7 + temp_v1 * 0x20 + 4);
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    if (*(char *)(temp_v7 + temp_v1 * 0x20 + 0x1c) == '\0') {
      temp_v5 = 0;
    }
    temp_v1 = FUN_0029e0f8();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(param_1 + 0xa5b0);
    }
    if (!(temp_v1 == 0 || temp_v0 == temp_v5)) {
      *(short *)(param_1 + 0xa5b0) = temp_v5;
      if (temp_v5 != 0) {
        FUN_0029defc((int)temp_v5,1);
        FUN_0029d684(1);
      }
      else {
        FUN_0029dfc0(0);
      }
    }
  }
  else {
    FUN_0029dfc0(0);
  }
  FUN_003aab78(param_1 + 0x96);
  temp_v1 = FUN_00233718(param_1 + 0x20);
  temp_v6 = 0;
  if (temp_v6 < temp_v1) {
    do {
      temp_v2 = FUN_0029e924(param_1 + 0x20);
      FUN_0022dde8(param_1 + 0x96,*(unsigned short *)(temp_v7 + (temp_v2 + temp_v6) * 0x20 + 4));
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v1);
  }
  temp_v7 = 0;
  temp_v1 = 0x10;
  do {
    psVar6 = (short *)(param_1 + 0x96 + temp_v7 * 2);
    temp_v5 = *psVar6;
    if ((temp_v5 != -1 && temp_v5 != 0) && (*(char *)(param_1 + 0x96 + temp_v7 + 0x20) == '\0')) {
      *psVar6 = -1;
    }
    temp_v1 = temp_v1 - 1;
    temp_v7 = temp_v7 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
