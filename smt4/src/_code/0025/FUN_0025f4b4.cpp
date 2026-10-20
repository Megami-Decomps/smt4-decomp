/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f4b4` (_code @ 0x25f4b4, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_0025f4b4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v7 = 0;
  temp_v6 = *(int *)(param_1 + 0x3884);
  if (*(char *)(param_1 + 0x3084) != '\0') {
    param_2 = 1;
  }
  temp_v2 = *(int *)(param_1 + 0x3888);
  do {
    temp_v8 = param_1 + temp_v7;
    if (*(char *)(temp_v8 + 0x5925) == '\0') {
      if ((param_2 == 0) && (*(int *)(param_1 + 0x305c) != temp_v7)) {
        FUN_002bf538();
      }
      temp_v3 = FUN_002bf4f8(0x15,temp_v7 + 0x36);
      temp_v9 = param_1 + temp_v7 * 0x8c + 0x73c;
      temp_v4 = FUN_002beda4(temp_v9);
      temp_v0 = *(short *)(temp_v3 + 8);
      temp_v9 = FUN_002bed98(temp_v9);
      temp_v1 = *(short *)(temp_v3 + 10);
      temp_v3 = FUN_002beda4(param_1 + 0x12b8);
      temp_v5 = FUN_002bed98(param_1 + 0x12b8);
      temp_v4 = temp_v3 + temp_v4 + temp_v0 + temp_v6;
      temp_v3 = temp_v5 + temp_v9 + temp_v1 + temp_v2;
      if (*(char *)(temp_v8 + 0x38d1) == '\0') {
        if (*(char *)(temp_v8 + 0x38cc) != '\0') {
          FUN_002bf538();
        }
        temp_v8 = param_1 + temp_v7 * 2;
        if (*(short *)(temp_v8 + 0x3074) <
            *(short *)(param_1 + *(int *)(param_1 + 0x305c) * 2 + 0x3074)) {
          FUN_002bf288(2,0x15,0x12,temp_v4,temp_v3,0x1f);
          FUN_002bf288(2,0x15,*(short *)(temp_v8 + 0x3074) + 0x17,temp_v4,temp_v3,0x24);
        }
        else {
          FUN_002bf288(2,0x15,0x11,temp_v4,temp_v3,0x1f);
          FUN_002bf288(2,0x15,*(short *)(temp_v8 + 0x3074) + 0x13,temp_v4,temp_v3,0x24);
        }
      }
      FUN_002bf538();
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  return;
}

} /* extern "C" */
