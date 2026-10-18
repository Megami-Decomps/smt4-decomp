/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa730` (_code @ 0x3aa730, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0022df7c. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_002334d8. */
/* Supplied declaration required: FUN_00233598. */
extern int FUN_002337a0(int);
extern int FUN_002338ac(int);
extern int FUN_00240e8c(int);
extern int FUN_0026c8a8(void);
extern int FUN_00293d50(void);
extern int FUN_00293e30(void);
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029e19c. */
/* Supplied declaration required: FUN_0029e260. */
extern int FUN_0029e2b0(void);
extern int FUN_0029e398(void);
extern int FUN_0029ebc4(int);
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_003a9ad8. */
/* Supplied declaration required: FUN_003aad98. */
/* Supplied declaration required: FUN_003c2d9c. */
/* Supplied declaration required: FUN_003c2e94. */


void FUN_003aa730(int param_1)

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
    FUN_003a9ad8(param_1);
  }
  else {
    FUN_002334d8(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
    temp_v7 = param_1 + *(short *)(param_1 + 0xa5b2) * 0x8c + 0xfc;
    temp_v3 = FUN_002bef70(temp_v7);
    temp_v4 = FUN_002bef7c(temp_v7);
    FUN_002313d4(param_1 + 200,temp_v4,temp_v3);
    temp_v7 = FUN_0026c8a8();
    if ((temp_v7 == 0) || (temp_v7 = FUN_00293d50(), temp_v7 != 0)) {
      temp_v7 = FUN_0026c8a8();
      if ((temp_v7 == 0) && (0 < *(int *)(param_1 + 0x28))) {
        temp_v7 = FUN_0029ebc4(param_1 + 0x20);
        temp_v1 = FUN_00240e8c(param_1 + 0x20);
        temp_v6 = FUN_00293e30();
        if (temp_v6 != 1) {
          temp_v6 = FUN_00293e30();
          if (temp_v6 == -1) {
            FUN_003c2e94(param_1 + 0x20);
          }
        }
        else {
          FUN_003c2d9c(param_1 + 0x20);
        }
        temp_v6 = FUN_0029ebc4(param_1 + 0x20);
        if ((temp_v6 != temp_v7) || (temp_v7 = FUN_00240e8c(param_1 + 0x20), temp_v7 != temp_v1)) {
          FUN_00233598();
        }
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
      temp_v7 = FUN_0029e2b0();
      if (temp_v7 == 1) {
        *(unsigned short *)(param_1 + 0xa5b2) = 0;
      }
      else {
        *(unsigned short *)(param_1 + 0xa5b2) = 4;
      }
      FUN_002333d4(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
    }
  }
  temp_v7 = param_1 + 0x5a8;
  if (*(short *)(param_1 + 0x5a8) != 0) {
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    temp_v5 = *(short *)(temp_v7 + temp_v1 * 0x20 + 4);
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    if (*(char *)(temp_v7 + temp_v1 * 0x20 + 0x1c) == '\0') {
      temp_v5 = 0;
    }
    temp_v1 = FUN_0029e398();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(param_1 + 0xa5b0);
    }
    if (!(temp_v1 == 0 || temp_v0 == temp_v5)) {
      *(short *)(param_1 + 0xa5b0) = temp_v5;
      if (temp_v5 != 0) {
        FUN_0029e19c((int)temp_v5,1);
        FUN_0029d924(1);
      }
      else {
        FUN_0029e260(0);
      }
    }
  }
  else {
    FUN_0029e260(0);
  }
  FUN_003aad98(param_1 + 0x96);
  temp_v1 = FUN_002338ac(param_1 + 0x20);
  temp_v6 = 0;
  if (temp_v6 < temp_v1) {
    do {
      temp_v2 = FUN_0029ebc4(param_1 + 0x20);
      FUN_0022df7c(param_1 + 0x96,*(unsigned short *)(temp_v7 + (temp_v2 + temp_v6) * 0x20 + 4));
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
