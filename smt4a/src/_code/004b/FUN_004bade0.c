/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bade0` (_code @ 0x4bade0, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_002a482c(int);
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_004ba354. */
/* Supplied declaration required: FUN_004cfe4c. */
extern int FUN_004d0040(int);


void FUN_004bade0(int param_1)

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
  
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x9ec) == '\0')) {
    FUN_0019d880();
    temp_v8 = param_1 + 200;
    temp_v2 = FUN_001654d8(temp_v8);
    temp_v3 = FUN_001654e4(temp_v8);
    FUN_001835b4(2,0x1f,0x1f,temp_v2,temp_v3,0x1f);
    FUN_001835b4(2,0x1f,0x20,temp_v2,temp_v3,0x1f);
    temp_v4 = FUN_001834a4(0x1f,0x21);
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v4 = FUN_001654d8(temp_v8);
    temp_v4 = temp_v4 + temp_v0;
    temp_v8 = FUN_001654e4(temp_v8);
    temp_v8 = temp_v1 + temp_v8;
    FUN_001677c0();
    FUN_00164b5c(2,0x1f,*(unsigned int *)(param_1 + 0x101c),temp_v4,temp_v8,0x1f);
    if (*(int *)(param_1 + 0x1024) != -1) {
      FUN_001677c0();
      FUN_00164b5c(2,0x1f,*(unsigned int *)(param_1 + 0x1024),temp_v4,temp_v8,0x20);
    }
    temp_v4 = FUN_002a482c(param_1);
    temp_v8 = FUN_004d0040(param_1);
    temp_v7 = 0;
    if (temp_v7 < temp_v8) {
      do {
        temp_v5 = FUN_0031d174(param_1);
        if (temp_v5 != temp_v7) {
          FUN_004ba354(param_1,temp_v7,temp_v4 + temp_v7,0,0x24);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v8);
    }
    if (*(char *)(param_1 + 0x9ed) != '\0') {
      if (*(char *)(param_1 + 0x9ee) == '\0') {
        temp_v2 = 1;
      }
      else {
        temp_v2 = 2;
      }
      temp_v3 = FUN_004cfe4c(param_1);
      temp_v6 = FUN_0031d174(param_1);
      FUN_004ba354(param_1,temp_v6,temp_v3,temp_v2,0x25);
      temp_v4 = FUN_004cfe4c(param_1);
      temp_v4 = *(int *)(param_1 + temp_v4 * 4 + 0x7ec) + 0x80;
    }
    else {
      temp_v2 = FUN_004cfe4c(param_1);
      temp_v3 = FUN_0031d174(param_1);
      FUN_004ba354(param_1,temp_v3,temp_v2,0,0x24);
      temp_v4 = 0;
    }
    FUN_0019de98(temp_v4,0xf4f4f4ff);
    FUN_001677c0();
    return;
  }
  return;
}
