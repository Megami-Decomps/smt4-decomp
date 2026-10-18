/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1d04` (_code @ 0x3a1d04, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0022f1d0. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: FUN_002332e8. */
extern int FUN_0023360c(int);
extern int FUN_00233718(int);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_0029e924. */
/* Supplied declaration required: FUN_003a07a0. */


void FUN_003a1d04(int param_1,unsigned int param_2)

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
  int temp_v9;
  unsigned int temp_v10;
  
  switch(*(unsigned int *)(param_1 + 0x860)) {
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
  FUN_00230cc0(param_1 + 0x380,param_2,0,0,*(unsigned int *)(param_1 + 0x37c));
  temp_v10 = *(unsigned int *)(param_1 + 0x37c);
  FUN_00231bcc(param_1 + 0x380,100,0,0,temp_v10,1);
  FUN_003a07a0(param_1,*(unsigned int *)(param_1 + 0x860));
  temp_v0 = *(int *)(param_1 + 4);
  if ((((temp_v0 == 5 || temp_v0 == 9) || (temp_v0 == 6 || temp_v0 == 10)) || (temp_v0 == 7 || temp_v0 == 0xb))
     || (temp_v0 == 0xf || temp_v0 == 0x10)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  temp_v1 = param_1 + *(int *)(param_1 + 0x860) * 0x74;
  temp_v9 = temp_v1 + 0x880;
  temp_v8 = param_1 + *(int *)(param_1 + 0x860) * 0x1002 + 0xc94;
  temp_v2 = FUN_0029e924(temp_v9);
  temp_v3 = FUN_00233718(temp_v9);
  temp_v6 = 0;
  temp_v0 = temp_v3;
  if (0 < temp_v3) {
    do {
      if ((!temp_v7) || (temp_v0 = FUN_00240d5c(temp_v9), temp_v0 != temp_v6)) {
        temp_v0 = param_1;
        FUN_0022f1d0(param_1,temp_v6 + 1,0,temp_v8 + (temp_v2 + temp_v6) * 4);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v3);
  }
  temp_v2 = 0;
  if (temp_v7) {
    temp_v2 = *(int *)(temp_v1 + 0x888);
    temp_v0 = temp_v2;
  }
  if ((temp_v7 && temp_v0 != 0) && -1 < temp_v2) {
    temp_v0 = FUN_0023360c(temp_v9);
    temp_v1 = FUN_00240d5c(temp_v9);
    FUN_0022f1d0(param_1,temp_v1 + 1,1,temp_v8 + temp_v0 * 4);
  }
  temp_v4 = FUN_00240d5c(temp_v9);
  temp_v5 = FUN_0029e924(temp_v9);
  FUN_002332e8(*(unsigned int *)(param_1 + 0x85c),temp_v5,temp_v4);
                    /* WARNING: Could not recover jumptable at 0x003a1ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0x10))(*(int **)(param_1 + 0x85c),temp_v10);
  return;
}
