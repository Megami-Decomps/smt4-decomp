/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2960` (_code @ 0x3a2960, 0x2e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022ea70(...);
int FUN_00230cc0(int, unsigned int, int, int, unsigned int);
int FUN_00231bcc(int, int, int, int, unsigned int, int);
int FUN_002332e8(...);
int FUN_00240d5c(int);
int FUN_0029e924(int);
int FUN_002b63ac(void);
int FUN_003a07a0(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0022ea70. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: FUN_002332e8. */
extern int FUN_0023360c(int);
extern int FUN_00233718(int);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_0029e924. */
/* Supplied declaration required: FUN_002b63ac. */
/* Supplied declaration required: FUN_003a07a0. */


void FUN_003a2960(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  
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
  temp_v11 = *(unsigned int *)(param_1 + 0x37c);
  FUN_00231bcc(param_1 + 0x380,*(int *)(param_1 + 0x860) + 0x5a,0,0,temp_v11,1);
  FUN_003a07a0(param_1,*(unsigned int *)(param_1 + 0x860));
  temp_v12 = 0;
  temp_v13 = temp_v13 & 0xfc00;
  temp_v0 = 0;
  switch(*(unsigned int *)(param_1 + 0x860)) {
  case 0:
    puVar2 = (unsigned short *)FUN_002b63ac();
    temp_v0 = *puVar2;
    break;
  case 1:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 2);
    break;
  case 2:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 4);
    break;
  case 3:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 6);
    break;
  case 4:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 8);
    break;
  case 5:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 10);
    break;
  case 6:
    temp_v1 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v1 + 0xc);
  }
  temp_v12 = temp_v0;
  FUN_0022ea70(param_1,0,0,&temp_v12);
  temp_v1 = *(int *)(param_1 + 4);
  if ((((temp_v1 == 5 || temp_v1 == 9) || (temp_v1 == 6 || temp_v1 == 10)) || (temp_v1 == 7 || temp_v1 == 0xb))
     || (temp_v1 == 0xf || temp_v1 == 0x10)) {
    temp_v8 = 1;
  }
  else {
    temp_v8 = 0;
  }
  temp_v2 = param_1 + *(int *)(param_1 + 0x860) * 0x74;
  temp_v10 = temp_v2 + 0x880;
  temp_v9 = param_1 + *(int *)(param_1 + 0x860) * 0x1002 + 0xc94;
  temp_v3 = FUN_0029e924(temp_v10);
  temp_v4 = FUN_00233718(temp_v10);
  temp_v7 = 0;
  temp_v1 = temp_v4;
  if (0 < temp_v4) {
    do {
      if ((!temp_v8) || (temp_v1 = FUN_00240d5c(temp_v10), temp_v1 != temp_v7)) {
        temp_v1 = param_1;
        FUN_0022ea70(param_1,temp_v7 + 2,0,temp_v9 + (temp_v3 + temp_v7) * 4);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  temp_v3 = 0;
  if (temp_v8) {
    temp_v3 = *(int *)(temp_v2 + 0x888);
    temp_v1 = temp_v3;
  }
  if ((temp_v8 && temp_v1 != 0) && -1 < temp_v3) {
    temp_v1 = FUN_0023360c(temp_v10);
    temp_v2 = FUN_00240d5c(temp_v10);
    FUN_0022ea70(param_1,temp_v2 + 2,1,temp_v9 + temp_v1 * 4);
  }
  temp_v5 = FUN_00240d5c(temp_v10);
  temp_v6 = FUN_0029e924(temp_v10);
  FUN_002332e8(*(unsigned int *)(param_1 + 0x85c),temp_v6,temp_v5);
  (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0x10))(*(int **)(param_1 + 0x85c),temp_v11);
  return;
}

} /* extern "C" */
