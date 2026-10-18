/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac0f8` (_code @ 0x3ac0f8, 0x330 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

/* Supplied declaration required: FUN_00203338. */
extern unsigned int FUN_0022ebbc(void);
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_00233488. */
extern int FUN_00233538(int, unsigned int);
extern unsigned int FUN_00233584(int);
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002356d4. */
extern int FUN_00256750(void);
extern int FUN_00262edc(unsigned short);
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029e19c. */
extern int FUN_0029e248(void);
/* Supplied declaration required: FUN_0029e260. */
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_003ac688. */


void FUN_003ac0f8(int param_1)

{
/* irregular: 23 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [36];
  
  FUN_00233488();
  temp_v1 = FUN_002337a0(param_1 + 0x20);
  temp_v6 = *(unsigned int *)(param_1 + temp_v1 * 0x20 + 0x5b4);
  FUN_0029e8c0(-temp_v6,0);
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = FUN_00276550();
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v8 = FUN_00256750();
    temp_v7 = FUN_0027f10c();
  }
  if (*(char *)(param_1 + 0x56e) != '\0') {
    temp_v2 = FUN_00233584(param_1 + 0x55c);
    temp_v3 = FUN_00233538(param_1 + 0x20,temp_v2);
    if (temp_v3 != 0) {
      temp_v7 = 1;
    }
  }
  temp_v5 = param_1 + 0x5a8;
  temp_v3 = FUN_002337a0(param_1 + 0x20);
  temp_v3 = FUN_00262edc(*(unsigned short *)(temp_v5 + temp_v3 * 0x20 + 4));
  if ((temp_v3 == 0) && (temp_v7 != 0)) {
    temp_v4 = FUN_0022ebbc();
    if (temp_v4 < temp_v6) {
      FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),9);
      *(unsigned int *)(param_1 + 0x14) = 8;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      temp_v1 = FUN_002337a0(param_1 + 0x20);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v1 * 0x20 + 4);
      FUN_002890d0(temp_v4);
      FUN_002bcff0();
      FUN_002bf86c(temp_v9,temp_v4);
      FUN_00295904(0x14,temp_v9);
      FUN_0029f088(0x18,temp_v6,0xffffffff,0);
      FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),8);
      FUN_002356d4(1);
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    FUN_00232a48();
  }
  else if (temp_v1 != 0) {
    FUN_0029cee4(1);
    FUN_003ac688();
    FUN_0029ccf8();
    FUN_0029f10c(0,0x323232ff);
    *(unsigned int *)(param_1 + 0x14) = 10;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002329dc();
  }
  else if (temp_v8 != 0) {
    FUN_0029e63c(0x10,0);
    FUN_0029e5c8(0xb);
    FUN_0029e5c8(7);
    FUN_0029e5c8(0xf);
    FUN_0029e5c8(0x11);
    FUN_0029e5c8(3);
    FUN_0029e48c();
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029f10c(0,0x323232ff);
    FUN_00232a48();
  }
  if (*(short *)(param_1 + 0x5a8) == 0) {
    FUN_0029e260(0);
    return;
  }
  temp_v1 = FUN_0029e398();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    temp_v0 = *(short *)(temp_v5 + temp_v1 * 0x20 + 4);
    if (*(short *)(param_1 + 0x5a4) != temp_v0) {
      if (*(char *)(param_1 + 0x90) != '\0') {
        FUN_0029e260(0);
        return;
      }
      temp_v1 = FUN_0029e248();
      if (temp_v1 == 0) {
        psVar6 = (short *)0x0;
        *(short *)(param_1 + 0x5a4) = temp_v0;
        FUN_002b087c();
        temp_v1 = 0;
        do {
          if (psVar6[0x50] == *(short *)(param_1 + 0x5a4)) {
            if (*psVar6 == 0) {
              return;
            }
            FUN_0029e19c((int)*psVar6,0);
            FUN_00203338(*(unsigned short *)(param_1 + 0x5a4));
            FUN_0029d924(1);
            return;
          }
          temp_v1 = temp_v1 + 1;
          psVar6 = psVar6 + 0x54;
        } while (temp_v1 < 0x4b1);
      }
    }
  }
  return;
}
