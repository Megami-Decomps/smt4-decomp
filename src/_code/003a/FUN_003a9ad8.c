/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9ad8` (_code @ 0x3a9ad8, 0x2f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_00233488. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
extern int FUN_00256750(void);
extern int FUN_0026c8a8(void);
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029dcd4. */
extern int FUN_0029e2b0(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
extern int FUN_002bf6c8(int, int);
/* Supplied declaration required: FUN_003a8cc0. */
/* Supplied declaration required: FUN_003c3044. */
/* Supplied declaration required: FUN_003c3058. */


void FUN_003a9ad8(int param_1)

{
/* irregular: 16 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = FUN_002337a0(param_1 + 0x20);
  temp_v1 = *(short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
  FUN_00233488(param_1);
  temp_v2 = FUN_002337a0(param_1 + 0x20);
  temp_v0 = *(short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
  if (temp_v0 != temp_v1) {
    FUN_0029dcd4(0,1,temp_v0);
  }
  temp_v2 = FUN_00276550();
  temp_v9 = 0;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v9 = FUN_00256750();
  }
  if ((0 < *(short *)(param_1 + 0xa6ba)) && (*(char *)(param_1 + 0x5a4) == '\x01')) {
    temp_v5 = 0;
    do {
      temp_v3 = FUN_002bf6c8(param_1 + 200,temp_v5 + 0x1023);
      temp_v6 = (int)*(short *)(temp_v3 + 8);
      temp_v1 = *(short *)(temp_v3 + 10);
      temp_v7 = (int)**(short **)(temp_v3 + 0xc);
      temp_v8 = (int)(*(short **)(temp_v3 + 0xc))[1];
      temp_v3 = temp_v6;
      FUN_003c3044(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v3 != 0) {
        *(char *)(param_1 + 0xa6be) = (char)temp_v5;
      }
      FUN_003c3058(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v6 != 0) {
        *(char *)(param_1 + 0xa6be) = (char)temp_v5;
        if (temp_v5 != 0) {
          temp_v1 = *(short *)(param_1 + 0xa6bc) + 1;
          *(short *)(param_1 + 0xa6bc) = temp_v1;
          if (*(short *)(param_1 + 0xa6ba) <= temp_v1) {
            temp_v1 = 0;
            *(short *)(param_1 + 0xa6bc) = temp_v1;
          }
        }
        else {
          temp_v1 = *(short *)(param_1 + 0xa6bc) - 1;
          *(short *)(param_1 + 0xa6bc) = temp_v1;
          if (temp_v1 < 0) {
            temp_v1 = *(short *)(param_1 + 0xa6ba) - 1;
            *(short *)(param_1 + 0xa6bc) = temp_v1;
          }
        }
        temp_v5 = (int)*(short *)(param_1 + *(short *)(param_1 + 0xa6bc) * 2 + 0xa5ba);
        if (*(int *)(param_1 + 0xa5b4) != temp_v5) {
          *(int *)(param_1 + 0xa5b4) = temp_v5;
          FUN_003a8cc0(param_1);
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
  }
  temp_v5 = FUN_0026c8a8();
  if (temp_v5 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v2 = FUN_0029e2b0();
    if (temp_v2 == 1) {
      temp_v4 = 1;
    }
    else {
      temp_v4 = 5;
    }
    *(unsigned short *)(param_1 + 0xa5b2) = temp_v4;
    FUN_002333d4(param_1 + 0xdc,temp_v4);
    FUN_002339e8(*(unsigned int *)(param_1 + 0x590));
    FUN_002339ac(param_1 + 0x55c);
    return;
  }
  if (temp_v2 == 0) {
    if (temp_v9 == 0) {
      return;
    }
    FUN_0029e63c(0xc,0);
    FUN_0029e5c8(1);
    FUN_0029e5c8(2);
    FUN_0029e5c8(4);
    FUN_0029e5c8(5);
    FUN_0029e5c8(3);
    FUN_0029e48c();
    FUN_002a0f68(1);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029f10c(0,0x323232ff);
    FUN_00232a48();
    return;
  }
  FUN_0029ccf8();
  FUN_0029f10c(0,0x323232ff);
  FUN_002333d4(param_1 + 0xdc,1);
  FUN_002a0f68(1);
  *(unsigned int *)(param_1 + 0x14) = 6;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_002329dc();
  return;
}
