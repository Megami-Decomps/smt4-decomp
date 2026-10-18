/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8670` (_code @ 0x3a8670, 0x370 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
/* Supplied declaration required: FUN_002356d4. */
extern int FUN_00256750(void);
/* Supplied declaration required: FUN_0026c7e8. */
extern int FUN_0026c8a8(void);
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029d100. */
extern int FUN_0029e2b0(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_003a80e8. */


void FUN_003a8670(int param_1)

{
/* irregular: 23 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [33];
  
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v1 = FUN_002337a0(param_1 + 0x20);
  temp_v7[0] = 0;
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
  FUN_0029d100(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
  FUN_0029e8c0(-temp_v2,0);
  temp_v1 = FUN_00276550();
  temp_v7[0] = param_1 + 0x55c;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v5 = FUN_0027f10c();
    temp_v6 = FUN_00256750();
    if (temp_v5 == 0) {
      temp_v5 = (int)*(char *)(temp_v7[0] + 0x12);
    }
  }
  temp_v3 = FUN_0026c8a8();
  if (temp_v3 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 9;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v1 = FUN_0029e2b0();
    if (temp_v1 == 1) {
      *(unsigned short *)(param_1 + 0xa5b4) = 1;
    }
    else {
      *(unsigned short *)(param_1 + 0xa5b4) = 5;
    }
    FUN_002333d4(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      FUN_0029cee4(1);
    }
    FUN_002339e8(*(unsigned int *)(param_1 + 0x590));
    FUN_002339ac(temp_v7[0]);
    return;
  }
  if (temp_v5 != 0) {
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
    temp_v7[0] = 0;
    temp_v2 = (unsigned int)temp_v0;
    FUN_0029d100(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029f088(0x18,temp_v2,0xffffffff,0);
    temp_v1 = param_1;
    FUN_003a80e8(param_1,temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)temp_v0;
      FUN_002bd25c(temp_v2);
      FUN_002bf86c(temp_v7,temp_v2);
      FUN_00295904(8,temp_v7);
      temp_v4 = FUN_002bd020(temp_v0,1);
      FUN_002bf86c(temp_v7,temp_v4);
      FUN_00295904(0x10,temp_v7);
      FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),0);
      *(unsigned int *)(param_1 + 0x14) = 3;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      temp_v4 = 0;
      switch(*(unsigned char *)(param_1 + 0xa5b0)) {
      case 1:
        temp_v4 = 2;
        break;
      case 2:
        temp_v4 = 1;
        break;
      case 3:
        temp_v4 = 3;
        break;
      case 4:
        temp_v4 = 4;
        break;
      case 5:
        temp_v4 = 5;
      }
      FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),temp_v4);
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_002b8b78(0x9e);
    }
    FUN_002356d4(1);
    FUN_002a0f68(1);
    FUN_00232a48();
    return;
  }
  if (temp_v1 == 0) {
    if (temp_v6 == 0) {
      return;
    }
    DAT_0043d9cc = 0xffffffff;
    FUN_0029e63c(0xf,0);
    FUN_0029e5c8(1);
    FUN_0029e5c8(2);
    FUN_0029e5c8(7);
    FUN_0029e5c8(3);
    FUN_0029e48c();
    FUN_002a0f68(1);
    *(unsigned int *)(param_1 + 0x14) = 6;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029f10c(0,0x323232ff);
    FUN_00232a48();
    return;
  }
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    FUN_0029cee4(1);
  }
  FUN_0029f10c(0,0x323232ff);
  FUN_0029ccf8();
  FUN_002333d4(param_1 + 0xdc,1);
  FUN_002a0f68(1);
  *(unsigned int *)(param_1 + 0x14) = 0xb;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_002329dc();
  FUN_0026c7e8();
  return;
}
