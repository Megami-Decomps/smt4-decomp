/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497874` (_code @ 0x497874, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a482c(int);
int FUN_0031d174(int);
int FUN_0049339c(int, unsigned int, int, int, unsigned int);
int FUN_0049368c(int, int, int, int, unsigned int, int);
int FUN_00494574(int, unsigned int);
int FUN_00494d68(int, int, int, int);
int size40Set(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002a482c. */
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_0049368c. */
/* Supplied declaration required: FUN_00494574. */
/* Supplied declaration required: FUN_00494d68. */
extern int FUN_004cfe4c(int);
extern int rangeGetMinimumLimit(int);
/* Supplied declaration required: size40Set. */


void FUN_00497874(int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v9 = *(unsigned int *)(param_1 + 0x3a0);
  switch(*(unsigned int *)(param_1 + 0xb40)) {
  case 0:
    param_2 = 0;
    break;
  case 1:
  case 2:
    param_2 = 1;
    break;
  case 3:
  case 4:
  case 5:
    param_2 = 2;
    break;
  case 6:
    param_2 = 0xb;
    break;
  case 7:
    param_2 = 3;
    break;
  case 8:
    param_2 = 4;
  }
  FUN_0049339c(param_1 + 0x3a4,param_2,0,0,temp_v9);
  FUN_0049368c(param_1 + 0x3a4,100,0,0,temp_v9,1);
  FUN_00494574(param_1,*(unsigned int *)(param_1 + 0xb40));
  temp_v0 = *(int *)(param_1 + 4);
  if ((((temp_v0 == 7 || temp_v0 == 0xb) || (temp_v0 == 8 || temp_v0 == 0xc)) ||
      (temp_v0 == 9 || temp_v0 == 0xd)) || (temp_v0 == 0x11 || temp_v0 == 0x12)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  temp_v1 = param_1 + *(int *)(param_1 + 0xb40) * 0x74;
  temp_v10 = temp_v1 + 0xb60;
  temp_v8 = param_1 + *(int *)(param_1 + 0xb40) * 0x1002 + 0xf74;
  temp_v2 = FUN_002a482c(temp_v10);
  temp_v3 = rangeGetMinimumLimit(temp_v10);
  temp_v6 = 0;
  temp_v0 = temp_v3;
  if (0 < temp_v3) {
    do {
      if ((!temp_v7) || (temp_v0 = FUN_0031d174(temp_v10), temp_v0 != temp_v6)) {
        temp_v0 = param_1;
        FUN_00494d68(param_1,temp_v6 + 1,0,temp_v8 + (temp_v2 + temp_v6) * 4);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v3);
  }
  temp_v2 = 0;
  if (temp_v7) {
    temp_v2 = *(int *)(temp_v1 + 0xb68);
    temp_v0 = temp_v2;
  }
  if ((temp_v7 && temp_v0 != 0) && -1 < temp_v2) {
    temp_v0 = FUN_004cfe4c(temp_v10);
    temp_v1 = FUN_0031d174(temp_v10);
    FUN_00494d68(param_1,temp_v1 + 1,1,temp_v8 + temp_v0 * 4);
  }
  temp_v4 = FUN_0031d174(temp_v10);
  temp_v5 = FUN_002a482c(temp_v10);
  size40Set(*(unsigned int *)(param_1 + 0xb3c),temp_v5,temp_v4);
                    /* WARNING: Could not recover jumptable at 0x00497a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0xb3c) + 0x10))(*(int **)(param_1 + 0xb3c),temp_v9);
  return;
}

} /* extern "C" */
