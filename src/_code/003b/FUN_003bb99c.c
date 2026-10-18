/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb99c` (_code @ 0x3bb99c, 0x234 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0022af78. */
/* Supplied declaration required: FUN_002333ac. */
/* Supplied declaration required: FUN_002337a0. */
extern int FUN_002338ac(int);
/* Supplied declaration required: FUN_00240e8c. */
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_003bb99c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x630) == '\0')) {
    FUN_002333ac();
    temp_v8 = param_1 + 200;
    temp_v2 = FUN_002bef7c(temp_v8);
    temp_v3 = FUN_002bef70(temp_v8);
    FUN_002bf460(2,0x2a,0x1f,temp_v2,temp_v3,0x1f);
    FUN_002bf460(2,0x2a,0x20,temp_v2,temp_v3,0x1f);
    temp_v4 = FUN_002bf6d0(0x2a,0x21);
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v4 = FUN_002bef7c(temp_v8);
    temp_v4 = temp_v4 + temp_v0;
    temp_v8 = FUN_002bef70(temp_v8);
    temp_v8 = temp_v8 + temp_v1;
    FUN_002bf710();
    FUN_002bf558(2,0x2a,*(unsigned int *)(param_1 + 0xc60),temp_v4,temp_v8,0x1f);
    if (*(int *)(param_1 + 0xc68) != -1) {
      FUN_002bf710();
      FUN_002bf558(2,0x2a,*(unsigned int *)(param_1 + 0xc68),temp_v4,temp_v8,0x20);
    }
    temp_v4 = FUN_0029ebc4(param_1);
    temp_v8 = FUN_002338ac(param_1);
    temp_v7 = 0;
    if (temp_v7 < temp_v8) {
      do {
        temp_v5 = FUN_00240e8c(param_1);
        if (temp_v5 != temp_v7) {
          FUN_0022af78(param_1,temp_v7,temp_v4 + temp_v7,0,0x24);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v8);
    }
    if (*(char *)(param_1 + 0x631) != '\0') {
      if (*(char *)(param_1 + 0x632) == '\0') {
        temp_v2 = 1;
      }
      else {
        temp_v2 = 2;
      }
      temp_v3 = FUN_002337a0(param_1);
      temp_v6 = FUN_00240e8c(param_1);
      FUN_0022af78(param_1,temp_v6,temp_v3,temp_v2,0x25);
      temp_v4 = FUN_002337a0(param_1);
      temp_v4 = *(int *)(param_1 + temp_v4 * 4 + 0x530) + 0x80;
    }
    else {
      temp_v2 = FUN_002337a0(param_1);
      temp_v3 = FUN_00240e8c(param_1);
      FUN_0022af78(param_1,temp_v3,temp_v2,0,0x24);
      temp_v4 = 0;
    }
    FUN_0029f10c(temp_v4,0x323232ff);
    FUN_002bf710();
    return;
  }
  return;
}
