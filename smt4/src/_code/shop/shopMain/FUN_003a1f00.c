/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1f00` (_code @ 0x3a1f00, 0x2b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_0022f1d0. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: FUN_002332e8. */
extern int FUN_0023360c(int);
extern int FUN_00233718(int);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_0029e924. */


void FUN_003a1f00(int param_1,unsigned int param_2)

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
  temp_v8 = *(unsigned int *)(param_1 + 0x37c);
  FUN_00231bcc(param_1 + 0x380,*(int *)(param_1 + 0x864) + 0x61,0,0,temp_v8,1);
  FUN_00231bcc(param_1 + 0x380,0x65,0,0,temp_v8,1);
  FUN_00231bcc(param_1 + 0x380,0x66,0,0,temp_v8,1);
  temp_v0 = *(int *)(param_1 + 0x864) * 8;
  temp_v5 = *(int *)(temp_v0 + 0x44e024);
  temp_v11[0] = 0x6f;
  temp_v11[1] = 0x6e;
  temp_v11[2] = 0x71;
  temp_v11[3] = 0x70;
  temp_v11[7] = 0x7b;
  temp_v11[4] = 0x7a;
  temp_v11[5] = 0x79;
  temp_v11[6] = 0x7c;
  FUN_00231bcc(param_1 + 0x380,temp_v11[*(int *)(temp_v0 + 0x44e020)],0,0,temp_v8,1);
  FUN_00231bcc(param_1 + 0x380,temp_v11[temp_v5 + 4],0,0,temp_v8,1);
  temp_v0 = *(int *)(param_1 + 4);
  if ((((temp_v0 == 5 || temp_v0 == 9) || (temp_v0 == 6 || temp_v0 == 10)) || (temp_v0 == 7 || temp_v0 == 0xb))
     || (temp_v10 = temp_v0 == 0xf || temp_v0 == 0x10, temp_v0 == 0xf || temp_v0 == 0x10)) {
    temp_v10 = 1;
  }
  temp_v5 = param_1 + *(int *)(param_1 + 0x860) * 0x74;
  temp_v9 = temp_v5 + 0x880;
  temp_v7 = param_1 + *(int *)(param_1 + 0x860) * 0x1002 + 0xc94;
  temp_v1 = FUN_0029e924(temp_v9);
  temp_v2 = FUN_00233718(temp_v9);
  temp_v6 = 0;
  temp_v0 = temp_v2;
  if (0 < temp_v2) {
    do {
      if ((!temp_v10) || (temp_v0 = FUN_00240d5c(temp_v9), temp_v0 != temp_v6)) {
        temp_v0 = param_1;
        FUN_0022f1d0(param_1,temp_v6 + 1,0,temp_v7 + (temp_v1 + temp_v6) * 4);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v2);
  }
  if (temp_v10) {
    temp_v0 = *(int *)(temp_v5 + 0x888);
  }
  if (temp_v10 && 0 < temp_v0) {
    temp_v0 = FUN_0023360c(temp_v9);
    temp_v5 = FUN_00240d5c(temp_v9);
    FUN_0022f1d0(param_1,temp_v5 + 1,1,temp_v7 + temp_v0 * 4);
  }
  temp_v3 = FUN_00240d5c(temp_v9);
  temp_v4 = FUN_0029e924(temp_v9);
  FUN_002332e8(*(unsigned int *)(param_1 + 0x85c),temp_v4,temp_v3);
  (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0x10))(*(int **)(param_1 + 0x85c),temp_v8);
  return;
}
