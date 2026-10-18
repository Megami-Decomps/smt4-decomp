/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a719c` (_code @ 0x3a719c, 0x2cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp638; /* 0x638: local_638 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
extern int FUN_0024c48c(void);
extern int FUN_00256750(void);
/* Supplied declaration required: FUN_0026c7e8. */
extern int FUN_0026c8a8(void);
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029da10. */
/* Supplied declaration required: FUN_0029dcd4. */
extern int FUN_0029e2b0(void);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
extern unsigned int FUN_002b0824(unsigned short);
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned int FUN_002bd020(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bf86c. */


void FUN_003a719c(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10 [388];
  
  temp_v7 = 0;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v2 = FUN_00276550();
  temp_v10[0] = param_1 + 0x55c;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v7 = FUN_0027f10c();
    temp_v9 = FUN_0024c48c();
    temp_v8 = FUN_00256750();
    if (temp_v7 == 0) {
      temp_v7 = (int)*(char *)(temp_v10[0] + 0x12);
    }
  }
  temp_v3 = FUN_0026c8a8();
  if (temp_v3 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 9;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v2 = FUN_0029e2b0();
    if (temp_v2 == 1) {
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
    FUN_002339ac(temp_v10[0]);
    return;
  }
  if (temp_v7 != 0) {
    temp_v2 = FUN_002337a0(param_1 + 0x20);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
    temp_v4 = temp_v6;
    FUN_002bd25c(temp_v6);
    FUN_002bf86c(temp_v10,temp_v4);
    FUN_00295904(8,temp_v10);
    temp_v5 = FUN_002bd020(temp_v6,1);
    FUN_002bf86c(temp_v10,temp_v5);
    FUN_00295904(0x10,temp_v10);
    FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),6);
    FUN_002a0f68(1);
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_00232a48();
  }
  else {
    if (temp_v2 != 0) {
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
    if (temp_v9 != 0) {
      DAT_0043d9cc = 0xffffffff;
      temp_v1 = *(char *)(param_1 + 0x5a5) + '\x01';
      *(char *)(param_1 + 0x5a5) = temp_v1;
      if ('\x01' < temp_v1) {
        *(unsigned char *)(param_1 + 0x5a5) = 0;
      }
      FUN_00232a48();
      *(unsigned char *)(param_1 + 0x5a7) = 1;
      if (*(char *)(param_1 + 0x5a5) == '\x01') {
        temp_v5 = 0x4c;
      }
      else {
        temp_v5 = 0x4d;
      }
      FUN_002b8b78(temp_v5);
      temp_v2 = FUN_002337a0(param_1 + 0x20);
      temp_v0 = *(unsigned short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
      if (*(char *)(param_1 + 0x5a5) == '\x01') {
        temp_v5 = FUN_002b0824(temp_v0);
        FUN_0029dcd4(0,1,temp_v0,temp_v5);
        return;
      }
      FUN_0029da10(temp_v0,temp_v10);
      FUN_0029dcd4(0,1,temp_v0,temp_v10);
      return;
    }
    if (temp_v8 != 0) {
      DAT_0043d9cc = 0xffffffff;
      FUN_002a0f68(1);
      *(unsigned int *)(param_1 + 0x14) = 8;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_002971e4(*(unsigned int *)(param_1 + 0x5a0),7);
      FUN_00232a48();
      return;
    }
  }
  return;
}
