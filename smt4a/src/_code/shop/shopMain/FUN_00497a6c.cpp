/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497a6c` (_code @ 0x497a6c, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a482c(...);
int FUN_0031d174(...);
int FUN_0049339c(int, unsigned int, int, int, unsigned int);
int FUN_0049368c(...);
int FUN_00494d68(...);
int FUN_004d0a8c(...);

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_002a482c. */
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_0049368c. */
/* Supplied declaration required: FUN_00494d68. */
extern int FUN_004cfe4c(int);
extern int FUN_004d0040(int);
/* Supplied declaration required: FUN_004d0a8c. */


void FUN_00497a6c(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11 [9];
  
  temp_v8 = *(unsigned int *)(param_1 + 0x3a0);
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
  FUN_0049339c(param_1 + 0x3a4,param_2,0,0,temp_v8);
  FUN_0049368c(param_1 + 0x3a4,*(int *)(param_1 + 0xb44) + 0x61,0,0,temp_v8,1);
  FUN_0049368c(param_1 + 0x3a4,0x65,0,0,temp_v8,1);
  FUN_0049368c(param_1 + 0x3a4,0x66,0,0,temp_v8,1);
  temp_v0 = *(int *)(param_1 + 0xb44) * 8;
  temp_v5 = *(int *)(temp_v0 + 0x588f7c);
  temp_v11[0] = 0x6f;
  temp_v11[1] = 0x6e;
  temp_v11[2] = 0x71;
  temp_v11[3] = 0x70;
  temp_v11[7] = 0x7b;
  temp_v11[4] = 0x7a;
  temp_v11[5] = 0x79;
  temp_v11[6] = 0x7c;
  FUN_0049368c(param_1 + 0x3a4,temp_v11[*(int *)(temp_v0 + 0x588f78)],0,0,temp_v8,1);
  FUN_0049368c(param_1 + 0x3a4,temp_v11[temp_v5 + 4],0,0,temp_v8,1);
  temp_v0 = *(int *)(param_1 + 4);
  if ((((temp_v0 == 7 || temp_v0 == 0xb) || (temp_v0 == 8 || temp_v0 == 0xc)) ||
      (temp_v0 == 9 || temp_v0 == 0xd)) ||
     (temp_v10 = temp_v0 == 0x11 || temp_v0 == 0x12, temp_v0 == 0x11 || temp_v0 == 0x12)) {
    temp_v10 = 1;
  }
  temp_v5 = param_1 + *(int *)(param_1 + 0xb40) * 0x74;
  temp_v9 = temp_v5 + 0xb60;
  temp_v7 = param_1 + *(int *)(param_1 + 0xb40) * 0x1002 + 0xf74;
  temp_v1 = FUN_002a482c(temp_v9);
  temp_v2 = FUN_004d0040(temp_v9);
  temp_v6 = 0;
  temp_v0 = temp_v2;
  if (0 < temp_v2) {
    do {
      if ((!temp_v10) || (temp_v0 = FUN_0031d174(temp_v9), temp_v0 != temp_v6)) {
        temp_v0 = param_1;
        FUN_00494d68(param_1,temp_v6 + 1,0,temp_v7 + (temp_v1 + temp_v6) * 4);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v2);
  }
  if (temp_v10) {
    temp_v0 = *(int *)(temp_v5 + 0xb68);
  }
  if (temp_v10 && 0 < temp_v0) {
    temp_v0 = FUN_004cfe4c(temp_v9);
    temp_v5 = FUN_0031d174(temp_v9);
    FUN_00494d68(param_1,temp_v5 + 1,1,temp_v7 + temp_v0 * 4);
  }
  temp_v3 = FUN_0031d174(temp_v9);
  temp_v4 = FUN_002a482c(temp_v9);
  FUN_004d0a8c(*(unsigned int *)(param_1 + 0xb3c),temp_v4,temp_v3);
  (**(romwright_code **)(**(int **)(param_1 + 0xb3c) + 0x10))(*(int **)(param_1 + 0xb3c),temp_v8);
  return;
}

} /* extern "C" */
