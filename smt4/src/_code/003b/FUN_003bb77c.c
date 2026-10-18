/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb77c` (_code @ 0x3bb77c, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0022ade4. */
/* Supplied declaration required: FUN_00233218. */
/* Supplied declaration required: FUN_0023360c. */
extern int FUN_00233718(int);
/* Supplied declaration required: FUN_00240d5c. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002bed98. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_003bb77c(int param_1)

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
    FUN_00233218();
    temp_v8 = param_1 + 200;
    temp_v2 = FUN_002beda4(temp_v8);
    temp_v3 = FUN_002bed98(temp_v8);
    FUN_002bf288(2,0x2a,0x1f,temp_v2,temp_v3,0x1f);
    FUN_002bf288(2,0x2a,0x20,temp_v2,temp_v3,0x1f);
    temp_v4 = FUN_002bf4f8(0x2a,0x21);
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v4 = FUN_002beda4(temp_v8);
    temp_v4 = temp_v4 + temp_v0;
    temp_v8 = FUN_002bed98(temp_v8);
    temp_v8 = temp_v8 + temp_v1;
    FUN_002bf538();
    FUN_002bf380(2,0x2a,*(unsigned int *)(param_1 + 0xc60),temp_v4,temp_v8,0x1f);
    if (*(int *)(param_1 + 0xc68) != -1) {
      FUN_002bf538();
      FUN_002bf380(2,0x2a,*(unsigned int *)(param_1 + 0xc68),temp_v4,temp_v8,0x20);
    }
    temp_v4 = FUN_0029e924(param_1);
    temp_v8 = FUN_00233718(param_1);
    temp_v7 = 0;
    if (temp_v7 < temp_v8) {
      do {
        temp_v5 = FUN_00240d5c(param_1);
        if (temp_v5 != temp_v7) {
          FUN_0022ade4(param_1,temp_v7,temp_v4 + temp_v7,0,0x24);
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
      temp_v3 = FUN_0023360c(param_1);
      temp_v6 = FUN_00240d5c(param_1);
      FUN_0022ade4(param_1,temp_v6,temp_v3,temp_v2,0x25);
      temp_v4 = FUN_0023360c(param_1);
      temp_v4 = *(int *)(param_1 + temp_v4 * 4 + 0x530) + 0x80;
    }
    else {
      temp_v2 = FUN_0023360c(param_1);
      temp_v3 = FUN_00240d5c(param_1);
      FUN_0022ade4(param_1,temp_v3,temp_v2,0,0x24);
      temp_v4 = 0;
    }
    FUN_0029ee6c(temp_v4,0x323232ff);
    FUN_002bf538();
    return;
  }
  return;
}
